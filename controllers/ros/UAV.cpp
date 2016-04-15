#include "WbVector3.hpp"
#include <webots/Robot.hpp>
#include <webots/Motor.hpp>
#include <webots/Camera.hpp>
#include <webots/Emitter.hpp>
#include <webots/Supervisor.hpp>
#include <webots/DistanceSensor.hpp>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <cmath>


#define NUM_PROPS 4
#define NUM_DS 3
#define EPS 0.01
#define D_LIMIT 900


using namespace std;
using namespace webots;
class UAV{
  public:
  Supervisor *_wbRobot;
  Node *_drone;
  Field *_translationField;
  Field *_rotfield;
  Camera *_camera;  
  Emitter *_emitter;
  DistanceSensor *_ds[NUM_DS];
  WbVector3 _heading;
  int _imgcount = 0;
  WbVector3 _currentPos;
  double _orientation;
  double time_step;
  Motor *_props[NUM_PROPS];

  static const double VELOCITY = 7.50;
  static const double ANG_VEL = M_PI_2/16;
  string _robotName;
  
  bool isPointingAt(double direction){
    return abs(_orientation - (direction)) < EPS;
  }
  
  double updateOrientation(){
    const double *orientation = _drone->getOrientation();
    _orientation = atan2(orientation[2],orientation[8]);
    return _orientation;
  }
  void updatePos(){
    _currentPos = _drone->getPosition();
  } 
  UAV(){}
  UAV(Supervisor *wbRobot){
    _wbRobot = wbRobot;
    _drone = _wbRobot->getSelf();
    _translationField = _drone->getField("translation");
    _rotfield = _drone->getField("rotation");
    _heading = getRandomWalk();
    time_step=32;
    cout << _wbRobot->getName() << endl;
    int i;
    //Start Propellers
    for (i = 0; i < NUM_PROPS; i++) {
      char name[32];
      sprintf(name, "prop%d", i);
      _props[i] = _wbRobot->getMotor(name);
      _props[i]->setPosition(INFINITY);
      _props[i]->setVelocity(30);
    }
    //setup camera
    _camera = _wbRobot->getCamera("camera");
    _camera->enable(time_step);
    //Data emitter
    _emitter = _wbRobot->getEmitter("emitter");
    //DistanceSensor
    for(int i =0; i< NUM_DS; i++){
      char dsname[4];
      sprintf(dsname,"ds%d",i);
      _ds[i] = _wbRobot->getDistanceSensor(dsname);
      _ds[i]->enable(time_step);
    }
  }
  
  int isObstacle(){
    double value1 = _ds[0]->getValue();
    double value2 = _ds[1]->getValue();
    double value3 = _ds[2]->getValue();
    if(value1<D_LIMIT) //forward sensor
    {
      if(value2<D_LIMIT) //right sensor
      {
        if(value3<value2)
          return 1; //turn 180
        else
          return 2; //turn left
      }
      else
         return 2; //turn 90 right
    }
    return 0; //moveforward
    }
    
  
  //Perform a step movement to the given position on a straight line
  bool moveStep(){
    updatePos();
    updateOrientation();
    
    const double *orientation = _drone->getOrientation();
    double direction = 0;
    WbVector3 dir(orientation[2],0,orientation[8]);
    
    direction = _orientation;
    double rotH_values[4]={ 0, 1, 0, ANG_VEL};
    
    WbVector3 move = dir.normalized() * UAV::VELOCITY * time_step * 0.001;
    WbVector3 newPos = _currentPos + move;
    _translationField->setSFVec3f(newPos.ptr());
                  
        switch(isObstacle()) {
          case 1:       
            rotH_values[3] = direction+rotH_values[3];     
            _rotfield->setSFRotation(rotH_values);            
            break;
          case 2:            
            rotH_values[3] = direction-rotH_values[3];
            _rotfield->setSFRotation(rotH_values);  
            break;
          
          }
     return true;
  }
  
  WbVector3 getRandomWalk(){
   //WbVector3 path(rand(), rand(), rand());
   srand(time(NULL));
   WbVector3 path(-10 + rand() / (RAND_MAX / (10 - (-10) + 1) + 1), 1, -10 + rand() / (RAND_MAX / (10 - (-10) + 1) + 1));
   return path;
    }
  
   void processImage(){
    //char fileName[64];
    //wb_camera_get_image(_camera);
    //sprintf(fileName, "imgs/%s%d.jpg", wb_robot_get_name(), _imgcount++);
    //wb_camera_save_image(_camera, fileName, 80);
    //cout << "saved picture: " << fileName << "\n";
    //Mat image,gray;
    //image = imread(fileName, CV_LOAD_IMAGE_COLOR);   // Read the file
    //cv::cvtColor(image,gray,CV_BGR2GRAY);
    //namedWindow( "Captured", CV_WINDOW_AUTOSIZE );
    //imshow("Captured",gray);
    //imwrite("gray.png",gray);
    } 
};
