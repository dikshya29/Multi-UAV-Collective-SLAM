#ifndef ROS_DEVICE_HPP
#define ROS_DEVICE_HPP

#include <webots/Device.hpp>
#include <webots_ros/device_get_model.h>
#include <webots_ros/device_get_name.h>
#include <webots_ros/device_get_type.h>
#include "Ros.hpp"

using namespace webots;

class RosDevice 
{
  public :
    virtual ~RosDevice();
    
    bool getModelCallback(webots_ros::device_get_model::Request &req, webots_ros::device_get_model::Response &res);
    bool getNameCallback(webots_ros::device_get_name::Request &req, webots_ros::device_get_name::Response &res);
    bool getNodeTypeCallback(webots_ros::device_get_type::Request &req, webots_ros::device_get_type::Response &res);

  protected :
    RosDevice(Device *device, Ros *ros, bool enableDefaultServices = true);
    
    virtual std::string    deviceName();
    virtual std::string    fixedDeviceName();

    template<class T,class MReq,class MRes>
    ros::ServiceServer rosAdvertiseService(std::string ServiceName, bool (T::*callback)(MReq,MRes));

    template<class M>
    ros::Publisher     rosAdvertiseTopic(std::string topicName, M mType);

    template<class T,class M>
    ros::Subscriber    rosSubscribeTopic(std::string topicName, void(T::*callback)(M));

    Ros    *mRos;
    
  private:
    ros::ServiceServer  mGetModel;
    ros::ServiceServer  mGetName;
    ros::ServiceServer  mGetNodeType;
    
    Device *mDevice;
};

// template definition depending on the callback method's class
template<class T, class MReq, class MRes>
ros::ServiceServer RosDevice::rosAdvertiseService(std::string ServiceName, bool (T::*callback)(MReq,MRes))
{
  return (mRos->nodeHandle())->advertiseService(ServiceName, callback, static_cast<T *>(this));
}

// template definition depending on the message type
template<class M>
ros::Publisher RosDevice::rosAdvertiseTopic(std::string topicName, M mType)
{
  return (mRos->nodeHandle())->advertise<M>(topicName, 8);
}

// template definition depending on the callback method's class
template<class T,class M>
ros::Subscriber RosDevice::rosSubscribeTopic(std::string topicName, void(T::*callback)(M))
{
  return (mRos->nodeHandle())->subscribe(topicName, 10, callback, static_cast<T *>(this));
}

#endif //ROS_DEVICE_HPP
