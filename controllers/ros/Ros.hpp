#ifndef ROS_HPP
#define ROS_HPP

#include <webots/Robot.hpp>
#include <ros/node_handle.h>
#include <webots_ros/robot_set_time_step.h>
#include <webots_ros/robot_get_device_list.h>
#include <webots_ros/robot_enable_keyboard.h>
#include <webots_ros/robot_get_key.h>
#include <webots_ros/robot_get_controller_name.h>
#include <webots_ros/robot_get_controller_arguments.h>
#include <webots_ros/robot_get_time.h>
#include <webots_ros/robot_get_model.h>
#include <webots_ros/robot_get_data.h>
#include <webots_ros/robot_set_data.h>
#include <webots_ros/robot_get_mode.h>
#include <webots_ros/robot_set_mode.h>
#include <webots_ros/robot_get_synchronization.h>
#include <webots_ros/robot_get_project_path.h>
#include <webots_ros/robot_get_basic_time_step.h>
#include <webots_ros/robot_get_number_of_devices.h>
#include <webots_ros/device_get_type.h>
#include <webots_ros/robot_get_world_path.h>

#include "UAV.cpp"



using namespace webots;

class RosSensor;
class RosCamera;
class RosDevice;
class RosDifferentialWheels;
class RosSupervisor;

class Ros
{
  public:
    Ros();
    virtual ~Ros();

    void             run(int argc,char **argv);
    ros::NodeHandle *nodeHandle() {return mNodeHandle;}
    int              stepSize() {return mStepSize;}
    std::string      name() {return mRobotName;}
    UAV myUAV;

    static std::string  fixedNameString(std::string name);

  protected:
    virtual void setupRobot();
    virtual void setRosDevices(const char **hiddenDevices, int numberHiddenDevices);
    virtual void launchRos(int argc,char **argv);
    virtual int step(int ms) { return mRobot->step(ms); }
    Supervisor  *mRobot;

  private:
    void fixName();
     std::string              mRobotName;
    std::vector<RosDevice *> mDeviceList;
    std::vector<RosSensor *> mSensorList;
    RosDifferentialWheels   *mRosDifferentialWheels;
    RosSupervisor           *mRosSupervisor;
    ros::NodeHandle         *mNodeHandle;
    RosCamera                *cameraConverter;
    ros::Publisher           mNamePublisher;
    ros::Publisher           cameraPublisher;
    ros::Publisher           mClockPublisher;
    unsigned int             mStepSize;
    int                      mStep;
    bool                     mEnd;
    bool                     mShouldPublishClock;
    bool                     mIsSynchronized;
};

#endif //ROS_HPP
