#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/camera.h>
#include <webots/emitter.h>
#include <webots/supervisor.h>
#include "WbVector3.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>


using namespace std;

#define NUM_PROPS 4
#define EPS 0.01

using namespace cv;


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
  
  WbVector3 _currentPos;
  double _orientation;
  
  WbDeviceTag _props[NUM_PROPS];

  static const double VELOCITY = 1.0;
  static const double ANG_VEL = 0.02/32;
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
        WbVector3 move = dir.normalized() * VELOCITY * time_step * 0.001;
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
   void processImage(){
    char fileName[64];
    wb_camera_get_image(_camera);
    sprintf(fileName, "%s%d.jpg", wb_robot_get_name(), 1);
    wb_camera_save_image(_camera, fileName, 80);
    //cout << "saved picture: " << fileName << "\n";
    Mat image,gray;
    image = imread(fileName, CV_LOAD_IMAGE_COLOR);   // Read the file
    cv::cvtColor(image,gray,CV_BGR2GRAY);
    namedWindow( "Captured", CV_WINDOW_AUTOSIZE );
    imshow("Captured",gray);
    imwrite("gray.png",gray);
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

  //Path for testing
  int length;
  WbVector3 *path = readPath("path.txt", length);
  if (length == 0)
    return 0;
  int step = 0;
  
  
  
  // main loop
  do {
    if (step >= length) step = 0;
    if (myUAV.moveStep(path[step])){
      step++;
     }
   
  }
  while (wb_robot_step(time_step) != -1);
    
  // Necessary to cleanup webots stuff
  wb_robot_cleanup();
  
  return 0;
}
