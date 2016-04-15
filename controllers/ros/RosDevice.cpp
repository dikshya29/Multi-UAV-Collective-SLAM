#include "RosDevice.hpp"

RosDevice::RosDevice(Device *device, Ros *ros, bool enableDefaultServices) {
  mDevice = device;
  mRos    = ros;
  if (device && enableDefaultServices) {
    mGetModel    = mRos->nodeHandle()->advertiseService(ros->name()+'/'+fixedDeviceName()+"/get_model", &RosDevice::getModelCallback, this);
    mGetName     = mRos->nodeHandle()->advertiseService(ros->name()+'/'+fixedDeviceName()+"/get_name", &RosDevice::getNameCallback, this);
    mGetNodeType = mRos->nodeHandle()->advertiseService(ros->name()+'/'+fixedDeviceName()+"/get_node_type", &RosDevice::getNodeTypeCallback, this);
  }
}

RosDevice::~RosDevice() {
  mGetModel.shutdown();
  mGetName.shutdown();
  mGetNodeType.shutdown();
}

bool RosDevice::getModelCallback(webots_ros::device_get_model::Request &req, webots_ros::device_get_model::Response &res){
  if (mDevice)
    res.model = mDevice->getModel();
  else
    res.model = "";
  return true;
}

bool RosDevice::getNameCallback(webots_ros::device_get_name::Request &req, webots_ros::device_get_name::Response &res) {
  if (mDevice)
    res.name = mDevice->getName();
  else
    res.name = "";
  return true;
}

bool RosDevice::getNodeTypeCallback(webots_ros::device_get_type::Request &req, webots_ros::device_get_type::Response &res) {
  if (mDevice)
    res.type = mDevice->getNodeType();
  else
    res.type = 0;
  return true;
}

std::string RosDevice::deviceName() {
  if (mDevice)
    return mDevice->getName();
  else
    return "";
}

std::string RosDevice::fixedDeviceName() {
  return Ros::fixedNameString(deviceName());
}
