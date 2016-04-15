#ifndef WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_MAX_RANGE_H
#define WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_MAX_RANGE_H

#include "ros/service_traits.h"


#include "distance_sensor_get_max_rangeRequest.h"
#include "distance_sensor_get_max_rangeResponse.h"


namespace webots_ros
{

struct distance_sensor_get_max_range
{

typedef distance_sensor_get_max_rangeRequest Request;
typedef distance_sensor_get_max_rangeResponse Response;
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
struct MD5Sum< ::webots_ros::distance_sensor_get_max_range > {
  static const char* value()
  {
    return "2ed8667ae0bbe542d742f56d8435c295";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_max_range&) { return value(); }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_max_range > {
  static const char* value()
  {
    return "webots_ros/distance_sensor_get_max_range";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_max_range&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_max_rangeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_max_range >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_max_rangeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::distance_sensor_get_max_rangeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_max_range >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_max_rangeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_max_rangeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_max_range >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_max_rangeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_max_rangeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_max_range >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_max_rangeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_MAX_RANGE_H
