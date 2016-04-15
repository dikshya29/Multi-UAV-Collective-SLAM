#ifndef ROS_SENSOR_HPP
#define ROS_SENSOR_HPP

#include "RosDevice.hpp"
#include <webots_ros/sensor_enable.h>
#include <webots_ros/sensor_get_sampling_period.h>
#include <webots/Device.hpp>

using namespace webots;

class RosSensor : public RosDevice 
{
  public :
    virtual ~RosSensor();

    bool sensorEnableCallback(webots_ros::sensor_enable::Request &req, webots_ros::sensor_enable::Response &res);
    bool samplingPeriodCallback(webots_ros::sensor_get_sampling_period::Request &req, webots_ros::sensor_get_sampling_period::Response &res);
    void publishValues(int step);

  protected :
    RosSensor(std::string deviceName, Device *device, Ros *ros, bool enableDefaultServices = true);

    virtual ros::Publisher createPublisher() = 0;
    virtual void           publishValue(ros::Publisher publisher) = 0;
    virtual void           publishAuxiliaryValue() {};
    virtual void           rosEnable(int ms) = 0;
    virtual void           rosDisable() = 0;
    virtual int            rosSamplingPeriod() = 0;

    struct publisherDetails {
      ros::Publisher mPublisher;
      int            mSamplingPeriod;
      bool           mNewPublisher;
    };

    std::vector<publisherDetails> mPublishList;

  private :
    ros::ServiceServer mSensorEnableServer;
    ros::ServiceServer mSamplingPeriodServer;
};

#endif //ROS_SENSOR_HPP
