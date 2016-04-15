// Description:   main file of Ros controller

#include "Ros.hpp"
#include <webots/Node.hpp>
#include <webots/DifferentialWheels.hpp>
#include <webots/Supervisor.hpp>

#include <rosgraph_msgs/Clock.h>


#include "RosCamera.hpp"
#include "RosSupervisor.hpp"
#include "std_msgs/String.h"
#include <ctime>
#include "ros/master.h"


// IP resolution includes
#ifdef _WIN32
#include <TlHelp32.h>
#else
#include <netdb.h>
#include<arpa/inet.h>
#endif

// This controller is really unusual as it can be used on either a Robot, a Supervisor or a DifferentialWheels.
// Unfortunately, the C++ API has no way to know the type of a robot before creating on instance of it.
// Therefore we need to use the wb_robot_get_type function of the C API that can be called just after a wb_robot_init.
// This way, we get the type of the robot and we can call the right constructor for the Robot instance.
#define WB_NODE_ROBOT                    40
#define WB_NODE_SUPERVISOR               41
#define WB_NODE_DIFFERENTIAL_WHEELS      42

typedef int WbNodeType;
extern "C" {
  int        wb_robot_init();
  WbNodeType wb_robot_get_type();
}
// end of fix for robot's type.

using namespace std;


Ros::Ros() {
  mEnd = false;
  mStep = 0;
  mStepSize = 1;
  mShouldPublishClock = true;
  mIsSynchronized = true;
}

Ros::~Ros() {
  ros::shutdown();
  delete mRobot;
  for (unsigned int i = 0; i < mDeviceList.size(); i++)
    delete mDeviceList[i];
}

void Ros::launchRos(int argc,char **argv) {
  std_msgs::String robotName;
  setupRobot();
  fixName();
  bool rosMasterUriSet = false;
  
  for (int i=1; i<argc; ++i) {
    const char masterUri[] = "--ROS_MASTER_URI=";
    const char name[] = "--name=";
    if (strncmp(argv[i], masterUri, sizeof(masterUri) - 1) == 0) {
      char address[64];
      strncpy(address, argv[i] + sizeof(masterUri) - 1, strlen(argv[i]) - strlen(masterUri) + 1);
      #ifdef _WIN32
        _putenv_s("ROS_MASTER_URI", address);
      #else
        setenv("ROS_MASTER_URI", address, 0);
      #endif
      rosMasterUriSet = true;
    } else if (strncmp(argv[i], name, sizeof(name) - 1) == 0) {
      char robot_name[64];
      strncpy(robot_name, argv[i] + sizeof(name) - 1, strlen(argv[i]) - strlen(name) + 1);
      mRobotName = string(robot_name);
    } else if (strcmp(argv[i], "--clock") == 0) {
      mShouldPublishClock = true;
    } else if (strcmp(argv[i], "--synchronize") == 0) {
      mIsSynchronized = true;
    } else
      ROS_ERROR("ERROR: unkown argument %s.", argv[i]);
  }

  if (!rosMasterUriSet) {
    if (getenv("ROS_MASTER_URI") == NULL) {
      #ifdef _WIN32
        _putenv_s("ROS_MASTER_URI", "http://matthew:11311");
      #else
        setenv("ROS_MASTER_URI", "http://matthew:11311", 0);
      #endif
    }
  }
  
  ROS_INFO("Robot's unique name is %s.", mRobotName.c_str());
  ros::init(argc, argv, mRobotName);
  
  if (!ros::master::check()) {
    ROS_FATAL("Failed to contact master at %s. Please start ROS master and restart this controller.",getenv("ROS_MASTER_URI"));
    exit(EXIT_SUCCESS);
  }
  
  mNodeHandle = new ros::NodeHandle;
  ROS_INFO("The controller is now connected to the ROS master.");

  mNamePublisher = mNodeHandle->advertise<std_msgs::String>("model_name", 1, true);
  robotName.data = mRobotName;
  mNamePublisher.publish(robotName);  
    mRosSupervisor = new RosSupervisor(this, static_cast<Supervisor *>(mRobot));
    cameraConverter = new RosCamera(dynamic_cast<Camera *>(myUAV._camera), this);
    cameraPublisher = cameraConverter->createPublisher();
  //setRosDevices(NULL, 0);
}

void Ros::setupRobot() {
  wb_robot_init();
  cout <<"test"<<endl;
  mRobot = new Supervisor(); 
  myUAV = UAV(mRobot);
}

std::string Ros::fixedNameString(std::string name) {
  std::string fixedName = name;
  std::replace(fixedName.begin(), fixedName.end(), '-', '_');
  std::replace(fixedName.begin(), fixedName.end(), '.', '_');
  std::replace(fixedName.begin(), fixedName.end(), ' ', '_');
  return fixedName;
}

// create the unique name identifier of the controller that can be seen on ros network 
// and used by other nodes to communicate with him
void Ros::fixName() {
  string webotsPID;
  string webotsHostname;
  ostringstream s;
  
  // retrieve Webots' PID
  #ifdef _WIN32
  HANDLE h = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
  PROCESSENTRY32 pe = { 0 };
  pe.dwSize = sizeof(PROCESSENTRY32);
  if (Process32First(h, &pe)) {
    while (Process32Next(h, &pe) && s.str() == "") {
      if (!strcmp(pe.szExeFile, "ros.exe"))
        s << pe.th32ParentProcessID;
    }
  }
  CloseHandle(h);
  #else
  s << getppid();
  #endif
  webotsPID = s.str();

  // retrieve local hostname
  char hostname[256];
  gethostname(hostname, 256);
  webotsHostname = hostname;
  
  mRobotName = mRobot->getName();
  //mRobotName += '_' + webotsPID + '_' + webotsHostname;
  // remove unhautorized symbols ('-', ' ' and '.') for ROS
  mRobotName = Ros::fixedNameString(mRobotName);
}

// runs accros the list of devices availables and creates the corresponding RosDevices.
// also stores pointers to sensors to be able to call their publishValues function at each step
void Ros::setRosDevices(const char **hiddenDevices, int numberHiddenDevices) {
//  int nDevices = mRobot->getNumberOfDevices();
//  for (int i = 0; i < nDevices; i++)
//  {
//    bool hidden = false;
//    Device *tempDevice = mRobot->getDeviceByIndex(i);
//    for (int j=0; j<numberHiddenDevices; ++j) {
//      if (strcmp(hiddenDevices[j], tempDevice->getName().c_str()) == 0)
//        hidden = true;
//    }
//    if (hidden)
//      continue;
      
//    switch (tempDevice->getNodeType())
//    {

//      case Node::CAMERA :
//        std::cout <<"camera" <<std::endl;
//        mSensorList.push_back(static_cast<RosSensor *>(new RosCamera(dynamic_cast<Camera *>(tempDevice), this)));
//        mDeviceList.push_back(static_cast<RosDevice *>(mSensorList.back()));
//        break;

//    }
//  }
//  mSensorList.push_back(static_cast<RosSensor *>(new RosBatterySensor(mRobot, this)));
//  mDeviceList.push_back(static_cast<RosDevice *>(mSensorList.back()));
//  if (mRobot->getType() == Node::DIFFERENTIAL_WHEELS) {
//    mSensorList.push_back(static_cast<RosSensor *>(mRosDifferentialWheels));
//    mDeviceList.push_back(static_cast<RosDevice *>(mSensorList.back()));
  //}
  // Once the list has been created, makes it available to other rosnodes
  //mDeviceListService = mNodeHandle->advertiseService(mRobotName+"/robot/get_device_list", &Ros::getDeviceListCallback, this);
}


void Ros::run(int argc, char **argv) {
  launchRos(argc, argv);
  
  while (!mEnd && ros::ok()) {
  std::cout << "step" <<std::endl;
    //if (!ros::master::check()) {
    //  ROS_ERROR("ROS master has stopped or is not responding anymore.");
    //  mEnd = true;
    //}
    ros::spinOnce();
    cameraConverter->publishValue(cameraPublisher);
    // publish clock if needed
//    if (mShouldPublishClock) {
//      rosgraph_msgs::Clock simulationClock;
//      double time = mRobot->getTime();
//      simulationClock.clock.sec = (int)time;
//      simulationClock.clock.nsec = (time - simulationClock.clock.sec) * 1.0e+9;
//      mClockPublisher.publish(simulationClock);
//    }
    //for (unsigned int i = 0; i < mSensorList.size(); i++)
      //mSensorList[i]->publishValues(mStep * mStepSize);
    
//    if (mStep != 0 || mIsSynchronized) {
//      oldStep = mStep;
//      tic = time(0);
//      while (mStep == oldStep && !mEnd) {
//        ros::spinOnce();
//        toc = time(0);
//        if (difftime(toc,tic) >= 3.0) {
          myUAV.moveStep();
          int test = mRobot->step(32);
//          tic = toc;
//          if (test == -1)
//            mEnd = true;
//        }
//      }
//    }
    if (test == -1)
      mEnd = true;
  }
}


int main(int argc, char **argv)
{
  Ros rs;
  rs.run(argc,argv);
  return 0;
}
