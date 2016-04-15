#include "RosCamera.hpp"
#include "sensor_msgs/Image.h"
#include "sensor_msgs/image_encodings.h"

RosCamera::RosCamera(Camera *camera, Ros *ros) : RosSensor(camera->getName(), camera, ros) {
  mCamera = camera;
  std::string fixedDeviceName = RosDevice::fixedDeviceName();
  mInfoServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/get_info", &RosCamera::getInfoCallback);
  mFocusInfoServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/get_focus_info", &RosCamera::getFocusInfoCallback);
  mZoomInfoServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/get_zoom_info", &RosCamera::getZoomInfoCallback);
  mImageServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/save_image", &RosCamera::saveImageCallback);
  mSetFovServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/set_fov", &RosCamera::setFovCallback);
  mSetFocalDistanceServer = RosDevice::rosAdvertiseService((ros->name())+'/'+fixedDeviceName+"/set_focal_distance", &RosCamera::setFocalDistanceCallback);
}

RosCamera::~RosCamera() {
  mInfoServer.shutdown();
  mFocusInfoServer.shutdown();
  mZoomInfoServer.shutdown();
  mImageServer.shutdown();
  mSetFovServer.shutdown();
  mSetFocalDistanceServer.shutdown();
  rosDisable();
}

// creates a publisher for camera image with 
// a [4 x ImageWidth x ImageHeight] {unsigned char} array
ros::Publisher RosCamera::createPublisher() {
  sensor_msgs::Image type;
  type.height = mCamera->getHeight();
  type.width = mCamera->getWidth();
  type.encoding = sensor_msgs::image_encodings::BGRA8;
  //type.is_bigendian = 0;
  type.step = sizeof(char) * 4 * mCamera->getWidth();
  
  mColorTopic = mRos->name()+'/'+RosDevice::fixedDeviceName()+"/image";
  return RosDevice::rosAdvertiseTopic(mColorTopic, type);
}

// get image from the Camera and publish it
void RosCamera::publishValue(ros::Publisher publisher) {
  const unsigned char *colorImage = mCamera->getImage();
  sensor_msgs::Image image;
  image.header.stamp = ros::Time::now();
  image.header.frame_id = mRos->name() + '/' + RosDevice::fixedDeviceName();
  image.height = mCamera->getHeight();
  image.width = mCamera->getWidth();
  image.encoding = sensor_msgs::image_encodings::BGRA8;
  //image.is_bigendian = 0;
  image.step = sizeof(char) * 4 * mCamera->getWidth();
  
  for (int i = 0; i < (4 * (mCamera->getWidth()) * (mCamera->getHeight())); ++i)
    image.data.push_back(colorImage[i]);
  publisher.publish(image);
}

bool RosCamera::getInfoCallback(webots_ros::camera_get_info::Request &req, webots_ros::camera_get_info::Response &res) {
  res.width = mCamera->getWidth();
  res.height = mCamera->getHeight();
  res.Fov = mCamera->getFov();
  res.nearRange = mCamera->getNear();
  return true;
}

bool RosCamera::getFocusInfoCallback(webots_ros::camera_get_focus_info::Request &req, webots_ros::camera_get_focus_info::Response &res) {
  res.focalLength = mCamera->getFocalLength();
  res.focalDistance = mCamera->getFocalDistance();
  res.maxFocalDistance = mCamera->getMaxFocalDistance();
  res.minFocalDistance = mCamera->getMinFocalDistance();
  return true;
}

bool RosCamera::getZoomInfoCallback(webots_ros::camera_get_zoom_info::Request &req, webots_ros::camera_get_zoom_info::Response &res) {
  res.minFov = mCamera->getMinFov();
  res.maxFov = mCamera->getMaxFov();
  return true;
}

bool RosCamera::saveImageCallback(webots_ros::camera_save_image::Request &req, webots_ros::camera_save_image::Response &res) {
  res.success = 1 + mCamera->saveImage(req.filename,req.quality);
  return true;
}

bool RosCamera::setFovCallback(webots_ros::camera_set_fov::Request &req, webots_ros::camera_set_fov::Response &res) {
  mCamera->setFov(req.fov);
  res.success = 1;
  return true;
}

bool RosCamera::setFocalDistanceCallback(webots_ros::camera_set_focal_distance::Request &req, webots_ros::camera_set_focal_distance::Response &res) {
  mCamera->setFocalDistance(req.focalDistance);
  res.success = 1;
  return true;
}
