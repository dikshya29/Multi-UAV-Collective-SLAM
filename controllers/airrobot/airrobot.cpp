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
using namespace std;

#define NUM_PROPS 6
#define EPS 0.02

static double time_step = -1;
static WbDeviceTag props[NUM_PROPS];
static double VELOCITY = 1.0;
static double ANG_VEL = 0.02;
WbNodeRef drone;

static const std::string EXT(".jpg");
static string robotName;

double _orientation;

bool isPointingAt(double direction){
  return abs(_orientation - (direction)) < EPS;
}

double getCurrentOrientation(){
  const double *orientation = wb_supervisor_node_get_orientation(drone);
  _orientation = atan2(orientation[2],orientation[8]);
  std::cout << "orientation: "<< _orientation << std::endl;
  return _orientation;
}

static void vec_show(int label, const char *msg, const WbVector3 v) {
  char str[128];
  sprintf(str, "%s %7.3f %7.3f %7.3f", msg, v[0], v[1], v[2]);
  wb_supervisor_set_label(label, str, 0.01, 0.01 + 0.05 * label, 0.1, 0x0000ff, 0.0); 
}

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

int main(int argc, char **argv)
{
  // necessary to initialize webots
  wb_robot_init();
  
  drone = wb_supervisor_node_get_from_def("DRONE1");
  WbFieldRef translationField = wb_supervisor_node_get_field(drone, "translation");
  WbFieldRef rotfield = wb_supervisor_node_get_field(drone, "rotation");
  //std::cout << rotation;
  
  time_step = wb_robot_get_basic_time_step();
  robotName = wb_robot_get_name();
  
  int i;
  for (i = 0; i < NUM_PROPS; i++) {
    char name[32];
    sprintf(name, "prop%d", i);
    props[i] = wb_robot_get_device(name);
    wb_motor_set_position(props[i], INFINITY);
    wb_motor_set_velocity(props[i], 50);
  }

  WbDeviceTag camera = wb_robot_get_device("camera");
  wb_camera_enable(camera, time_step);
  
  WbDeviceTag emitter = wb_robot_get_device("emitter");

  int length;
  WbVector3 *path = readPath("path.txt", length);
  if (length == 0)
    return 0;

  int step = 0;

  // main loop
  do {
    //path[step];
    WbVector3 pos(wb_supervisor_field_get_sf_vec3f(translationField));
    double direction = 0;
    vec_show(0, "position", pos);
    
    WbVector3 dir = path[step] - pos;
    for(int i = 0; i< 3; i++) cout << dir[i] <<"#";
    cout<<endl;
    direction = atan2(dir[0],dir[2]);
    getCurrentOrientation();
    cout << "direction: "<< direction<< endl;
    if(!isPointingAt(direction)){
      double newOri;
      cout << abs(direction - _orientation) << endl;
      cout <<abs(direction-2*M_PI - _orientation) << endl;
      if(abs(direction - _orientation) <= abs(direction-2*M_PI - _orientation)){
      newOri = _orientation + abs(direction - _orientation )/(direction - _orientation)*ANG_VEL;
      }
      else{
      newOri = _orientation - abs(direction - _orientation )/(direction - _orientation)*ANG_VEL;
      }
      const double rotH_values[4]={ 0, 1, 0, newOri};
   
      wb_supervisor_field_set_sf_rotation(rotfield, rotH_values);
      wb_robot_step(1);
      //getCurrentOrientation();
      
      //cout << "direction: "<< direction<< endl;
      //cout << isPointingAt(direction) <<endl;
    
    }
    else{
    //drone->getField("rotation")->setSFRRotation({0,1,0,M_PI_2});
      std::cout << std::endl;
      WbVector3 move = dir.normalized() * VELOCITY * time_step * 0.001;
      WbVector3 newPos = pos + move;
      wb_supervisor_field_set_sf_vec3f(translationField, newPos.ptr());
      
      if (newPos.distance(path[step]) < 0.1) {
        wb_supervisor_field_set_sf_vec3f(translationField, path[step].ptr());
        char fileName[64];
        sprintf(fileName, "pics/%s%d.jpg", wb_robot_get_name(), step);
        wb_camera_save_image(camera, fileName, 80);
        cout << "saved picture: " << fileName << "\n";
        wb_emitter_send(emitter, "p", 1);
        step++;
      }
    }
  }
  while (wb_robot_step(time_step) != -1);
    
  // Necessary to cleanup webots stuff
  wb_robot_cleanup();
  
  return 0;
}
