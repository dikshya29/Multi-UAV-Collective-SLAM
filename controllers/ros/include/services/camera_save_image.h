#ifndef WEBOTS_ROS_MESSAGE_CAMERA_SAVE_IMAGE_H
#define WEBOTS_ROS_MESSAGE_CAMERA_SAVE_IMAGE_H

#include "ros/service_traits.h"


#include "camera_save_imageRequest.h"
#include "camera_save_imageResponse.h"


namespace webots_ros
{

struct camera_save_image
{

typedef camera_save_imageRequest Request;
typedef camera_save_imageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::camera_save_image > {
  static const char* value()
  {
    return "9f4c973c7b1d0924ab26586269d7499e";
  }

  static const char* value(const ::webots_ros::camera_save_image&) { return value(); }
};

template<>
struct DataType< ::webots_ros::camera_save_image > {
  static const char* value()
  {
    return "webots_ros/camera_save_image";
  }

  static const char* value(const ::webots_ros::camera_save_image&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::camera_save_imageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_save_image >::value();
  }
  static const char* value(const ::webots_ros::camera_save_imageRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::camera_save_imageRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_save_image >::value();
  }
  static const char* value(const ::webots_ros::camera_save_imageRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::camera_save_imageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_save_image >::value();
  }
  static const char* value(const ::webots_ros::camera_save_imageResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::camera_save_imageResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_save_image >::value();
  }
  static const char* value(const ::webots_ros::camera_save_imageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CAMERA_SAVE_IMAGE_H
