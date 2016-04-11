#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/camera.h>
#include <webots/emitter.h>
#include <webots/supervisor.h>
#include <webots/distance_sensor.h>
#include "WbVector3.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

#define NUM_PROPS 4
#define EPS 0.01




WbVector3 *readPath(const char *filename, int &size) {
  size = 0;
  FILE *file = fopen(filename, "r");
  if (! file)
    return NULL;
    printf("readPath\n");
  
  double x, y, z;
  while (fscanf(file, "%lf %lf %lf", &x, &z, &y) == 3) {
    printf("size %d\n", size);
    size++;
  }
    
  WbVector3 *path = new WbVector3[size];
  rewind(file);
  int i;
  for (i = 0; i < size; i++) {
    int result = fscanf(file, "%lf %lf %lf", &x, &z, &y);
    if (result != 3)
      continue;
    path[i] = WbVector3(x, y, z);
  }
  
  return path;
}
  static double time_step = -1;

class UAV{
  public:
  WbNodeRef _drone;
  WbFieldRef _translationField;
  WbFieldRef _rotfield;
  WbDeviceTag _camera;  
  WbDeviceTag _emitter;
  WbDeviceTag _ds[3];
  WbVector3 _heading;
  int _imgcount = 0;
  WbVector3 _currentPos;
  double _orientation;
  
  WbDeviceTag _props[NUM_PROPS];

  static const double VELOCITY = 1.0;
  static const double ANG_VEL = 0.02/64;
  string _robotName;
  
  bool isPointingAt(double direction){
    return abs(_orientation - (direction)) < EPS;
  }
  
  double updateOrientation(){
    const double *orientation = wb_supervisor_node_get_orientation(_drone);
    _orientation = atan2(orientation[2],orientation[8]);
    return _orientation;
  }
  void updatePos(){
    _currentPos = wb_supervisor_field_get_sf_vec3f(_translationField);
  } 
  
  UAV(const char *UAVDef){
    _drone = wb_supervisor_node_get_from_def(UAVDef);
    _translationField = wb_supervisor_node_get_field(_drone, "translation");
    _rotfield = wb_supervisor_node_get_field(_drone, "rotation");
    _heading = getRandomWalk();
    
    _robotName = wb_robot_get_name();
    cout << _robotName << endl;
    int i;
    //Start Propellers
    for (i = 0; i < NUM_PROPS; i++) {
      char name[32];
      sprintf(name, "prop%d", i);
      _props[i] = wb_robot_get_device(name);
      wb_motor_set_position(_props[i], INFINITY);
      wb_motor_set_velocity(_props[i], 10);
    }
    //setup camera
    _camera = wb_robot_get_device("camera");
    wb_camera_enable(_camera, time_step);
    //Data emitter
    _emitter = wb_robot_get_device("emitter");
    //DistanceSensor
    _ds[0] = wb_robot_get_device("ds0");
    wb_distance_sensor_enable(_ds[0], time_step);
    _ds[1] = wb_robot_get_device("ds1");
    wb_distance_sensor_enable(_ds[1], time_step);
    _ds[2] = wb_robot_get_device("ds2");
    wb_distance_sensor_enable(_ds[2], time_step);
  }
  
  int isObstacle(){
    double value1 = wb_distance_sensor_get_value(_ds[0]);
    double value2 = wb_distance_sensor_get_value(_ds[1]);
    double value3 = wb_distance_sensor_get_value(_ds[2]);
    if(value1<900) //forward sensor 
    {    
      if(value2<900) //right sensor
      {
        if(value3<900)
          return 1; //turn 180
        else
          return 3; //turn 90 acw
      }
      else
         return 2; //turn 90 cw
    } 
    return 0; //moveforward
    }
    
  
  //Perform a step movement to the given position on a straight line
  bool moveStep(WbVector3 &next){
    updatePos();
    updateOrientation();
    
    double direction = 0;
    WbVector3 dir = next - _currentPos;
    direction = atan2(dir[0],dir[2]);
    if(!isPointingAt(direction)){
      double newOri;
      if(abs(direction - _orientation) <= abs(direction-2*M_PI - _orientation)){
        newOri = _orientation + abs(direction - _orientation )/(direction - _orientation)*ANG_VEL*time_step;
      }
      else{
        newOri = _orientation - abs(direction - _orientation )/(direction - _orientation)*ANG_VEL*time_step;
      }
      const double rotH_values[4]={ 0, 1, 0, newOri};
      processImage();
      wb_supervisor_field_set_sf_rotation(_rotfield, rotH_values);
    }
    else{
      //drone->getField("rotation")->setSFRRotation({0,1,0,M_PI_2});
        WbVector3 move = dir.normalized() * VELOCITY * time_step * 0.1;
        WbVector3 newPos = _currentPos + move;
        
        //TODO: Check Collision before moving
        wb_supervisor_field_set_sf_vec3f(_translationField, newPos.ptr());
        //Reached goal
        processImage();
        if (newPos.distance(next) < 0.1) {          
          //wb_emitter_send(emitter, "p", 1);
          return true;
        }
      }
      return false;
  }
  
  WbVector3 getRandomWalk(){
   //WbVector3 path(rand(), rand(), rand());
   srand(time(NULL));
   WbVector3 path(-10 + rand() / (RAND_MAX / (10 - (-10) + 1) + 1), 1, -10 + rand() / (RAND_MAX / (10 - (-10) + 1) + 1));
   return path;
    }
  
   void processImage(){
    char fileName[64];
    wb_camera_get_image(_camera);
    sprintf(fileName, "imgs/%s%d.jpg", wb_robot_get_name(), _imgcount++);
    wb_camera_save_image(_camera, fileName, 80);
    cout << "saved picture: " << fileName << "\n";
    
  } 
};



int main(int argc, char **argv)
{
  // necessary to initialize webots
  wb_robot_init();
  
  //std::cout << rotation;
  
  time_step = wb_robot_get_basic_time_step();
  cout << time_step << endl;
  UAV myUAV("DRONE1");
  
  wb_robot_keyboard_enable(time_step);
    
  // main loop
  do {
    myUAV.updatePos();
    myUAV.updateOrientation();
    const double *orientation = wb_supervisor_node_get_orientation(myUAV._drone);
    double direction = 0;
    WbVector3 dir(orientation[2],0,orientation[8]);
    
    direction = myUAV._orientation;
    double rotH_values[4]={ 0, 1, 0, direction+ M_PI_2/32};
    
    WbVector3 move = dir.normalized() * UAV::VELOCITY * time_step * 0.001;
    WbVector3 newPos = myUAV._currentPos + move;
    
        if(1)    
        {
            switch(myUAV.isObstacle())
            {
            case 0:
              cout<<"Moving Forward"<<endl;
               wb_supervisor_field_set_sf_vec3f(myUAV._translationField, newPos.ptr());
              break;
              
             case 1:
              cout<<"Turn around"<<endl;
              rotH_values[3]= direction+ M_PI;
              wb_supervisor_field_set_sf_rotation(myUAV._rotfield, rotH_values); 
              break;
            case 2:           
            cout<<"Turning left"<<endl;
            rotH_values[3]= direction + M_PI_2/64;
            wb_supervisor_field_set_sf_rotation(myUAV._rotfield, rotH_values); 
            break;
          
          case 3:  
            cout<<"Turning right"<<endl;          
            rotH_values[3] = direction - M_PI_2/64;
            wb_supervisor_field_set_sf_rotation(myUAV._rotfield, rotH_values);
            break;
          }
          }
  }
  while (wb_robot_step(time_step) != -1);
    
  // Necessary to cleanup webots stuff
  wb_robot_cleanup();
  
  return 0;
}
