#ifndef WEBOTS_ROS_MESSAGE_CAMERA_SET_FOV_H
#define WEBOTS_ROS_MESSAGE_CAMERA_SET_FOV_H

#include "ros/service_traits.h"


#include "camera_set_fovRequest.h"
#include "camera_set_fovResponse.h"


namespace webots_ros
{

struct camera_set_fov
{

typedef camera_set_fovRequest Request;
typedef camera_set_fovResponse Response;
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
struct MD5Sum< ::webots_ros::camera_set_fov > {
  static const char* value()
  {
    return "0b64273a7867a9308c925b84bc095dda";
  }

  static const char* value(const ::webots_ros::camera_set_fov&) { return value(); }
};

template<>
struct DataType< ::webots_ros::camera_set_fov > {
  static const char* value()
  {
    return "webots_ros/camera_set_fov";
  }

  static const char* value(const ::webots_ros::camera_set_fov&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::camera_set_fovRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_set_fov >::value();
  }
  static const char* value(const ::webots_ros::camera_set_fovRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::camera_set_fovRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_set_fov >::value();
  }
  static const char* value(const ::webots_ros::camera_set_fovRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::camera_set_fovResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_set_fov >::value();
  }
  static const char* value(const ::webots_ros::camera_set_fovResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::camera_set_fovResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_set_fov >::value();
  }
  static const char* value(const ::webots_ros::camera_set_fovResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CAMERA_SET_FOV_H
