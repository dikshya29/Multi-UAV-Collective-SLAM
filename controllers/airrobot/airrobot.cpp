#include <webots/robot.h>
#include <webots/motor.h>
#include <webots/camera.h>
#include <webots/emitter.h>
#include <webots/supervisor.h>
#include "WbVector3.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

#define NUM_PROPS 6

static double time_step = -1;
static WbDeviceTag props[NUM_PROPS];
static double VELOCITY = 1.0;
static double ANG_VEL = 0.1;

static const std::string EXT(".jpg");
static string robotName;



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
  
  WbNodeRef drone = wb_supervisor_node_get_from_def("DRONE1");
  WbFieldRef translationField = wb_supervisor_node_get_field(drone, "translation");
  WbFieldRef rotationField = wb_supervisor_node_get_field(drone, "rotation");
  cout << rotation
  
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
    
    vec_show(0, "position", pos);
    
    
    WbVector3 dir = path[step] - pos;
    WbVector3 move = dir.normalized() * VELOCITY * time_step * 0.001;
    WbVector3 newPos = pos + move;
    wb_supervisor_field_set_sf_vec3f(translationField, newPos.ptr());
    
    if (newPos.distance(path[step]) < 0.1) {
      char fileName[64];
      sprintf(fileName, "pics/%s%d.jpg", wb_robot_get_name(), step);
      wb_camera_save_image(camera, fileName, 80);
      cout << "saved picture: " << fileName << "\n";
      wb_emitter_send(emitter, "p", 1);
      step++;
    }
  }
  while (wb_robot_step(time_step) != -1);
    
  // Necessary to cleanup webots stuff
  wb_robot_cleanup();
  
  return 0;
}
