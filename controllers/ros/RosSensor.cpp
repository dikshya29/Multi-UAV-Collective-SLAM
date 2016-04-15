#include "RosSensor.hpp"

RosSensor::RosSensor(std::string deviceName, Device *device, Ros *ros, bool enableDefaultServices) : RosDevice(device, ros, enableDefaultServices) {
  std::string fixedDeviceName = Ros::fixedNameString(deviceName);
  mSensorEnableServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/enable", &RosSensor::sensorEnableCallback);
  mSamplingPeriodServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/get_sampling_period", &RosSensor::samplingPeriodCallback);
}

RosSensor::~RosSensor() {
  for (unsigned int i = 0; i < mPublishList.size(); ++i)
    mPublishList[i].mPublisher.shutdown();
  mPublishList.clear();
  mSensorEnableServer.shutdown();
  mSamplingPeriodServer.shutdown();
}

// create a topic for the requested sampling period if it doesn't exist yet,
// enable the sensor with the new period if needed and
// store publisher and it's details into the mPublishList vector
bool RosSensor::sensorEnableCallback(webots_ros::sensor_enable::Request &req, webots_ros::sensor_enable::Response &res) {
  if (req.period == 0) {
    res.success = 0;
    for (unsigned int i = 0; i < mPublishList.size(); ++i)
      mPublishList[i].mPublisher.shutdown();
    mPublishList.clear();
    rosDisable();
  } else if (req.period % (mRos->stepSize()) == 0) {
    int copy = 0;
    int minPeriod = req.period;
    for (unsigned int i = 0; i < mPublishList.size(); ++i) {
      if (mPublishList[i].mSamplingPeriod < minPeriod)
        minPeriod = mPublishList[i].mSamplingPeriod;
      if (mPublishList[i].mSamplingPeriod == req.period)
        copy++;
    }
    if (copy == 0) {
      mPublishList.push_back(publisherDetails());
      mPublishList.back().mSamplingPeriod = req.period;
      mPublishList.back().mNewPublisher = true;
      mPublishList.back().mPublisher = createPublisher();
      if (minPeriod == req.period)
        rosEnable(req.period);
      res.success = 1;
    }
    res.success = 1;
  } else {
    ROS_ERROR("Wrong sampling period: %d for device: %s.", req.period,deviceName().c_str());
    res.success = -1;
  }
  return true;
}

bool RosSensor::samplingPeriodCallback(webots_ros::sensor_get_sampling_period::Request &req, webots_ros::sensor_get_sampling_period::Response &res) {
  res.period = rosSamplingPeriod();
  return true;
}

// get values from the sensors and publish it if needed for each active topic
void RosSensor::publishValues(int step) {
  for (unsigned int i = 0; i < mPublishList.size(); ++i) {
    if (step % mPublishList[i].mSamplingPeriod == 0) {
      if (mPublishList[i].mPublisher.getNumSubscribers() > 0) {
        if (mPublishList[i].mNewPublisher)
          mPublishList[i].mNewPublisher = false;
        // publish the values from the corresponding device
        publishValue(mPublishList[i].mPublisher);
      }
      publishAuxiliaryValue();
    }
  }
}
