#ifndef WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_TYPE_H
#define WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_TYPE_H

#include "ros/service_traits.h"


#include "distance_sensor_get_typeRequest.h"
#include "distance_sensor_get_typeResponse.h"


namespace webots_ros
{

struct distance_sensor_get_type
{

typedef distance_sensor_get_typeRequest Request;
typedef distance_sensor_get_typeResponse Response;
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
struct MD5Sum< ::webots_ros::distance_sensor_get_type > {
  static const char* value()
  {
    return "546286992f9c329a2256552201ca9753";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_type&) { return value(); }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_type > {
  static const char* value()
  {
    return "webots_ros/distance_sensor_get_type";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_type&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_typeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_type >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_typeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::distance_sensor_get_typeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_type >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_typeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_typeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_type >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_typeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_typeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_type >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_typeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_TYPE_H
