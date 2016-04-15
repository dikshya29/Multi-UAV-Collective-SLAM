#ifndef WEBOTS_ROS_MESSAGE_CAMERA_SET_FOCAL_DISTANCE_H
#define WEBOTS_ROS_MESSAGE_CAMERA_SET_FOCAL_DISTANCE_H

#include "ros/service_traits.h"


#include "camera_set_focal_distanceRequest.h"
#include "camera_set_focal_distanceResponse.h"


namespace webots_ros
{

struct camera_set_focal_distance
{

typedef camera_set_focal_distanceRequest Request;
typedef camera_set_focal_distanceResponse Response;
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
struct MD5Sum< ::webots_ros::camera_set_focal_distance > {
  static const char* value()
  {
    return "e7f97660d9ec0e47050fc05e56cd7591";
  }

  static const char* value(const ::webots_ros::camera_set_focal_distance&) { return value(); }
};

template<>
struct DataType< ::webots_ros::camera_set_focal_distance > {
  static const char* value()
  {
    return "webots_ros/camera_set_focal_distance";
  }

  static const char* value(const ::webots_ros::camera_set_focal_distance&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::camera_set_focal_distanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_set_focal_distance >::value();
  }
  static const char* value(const ::webots_ros::camera_set_focal_distanceRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::camera_set_focal_distanceRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_set_focal_distance >::value();
  }
  static const char* value(const ::webots_ros::camera_set_focal_distanceRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::camera_set_focal_distanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::camera_set_focal_distance >::value();
  }
  static const char* value(const ::webots_ros::camera_set_focal_distanceResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::camera_set_focal_distanceResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::camera_set_focal_distance >::value();
  }
  static const char* value(const ::webots_ros::camera_set_focal_distanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CAMERA_SET_FOCAL_DISTANCE_H
