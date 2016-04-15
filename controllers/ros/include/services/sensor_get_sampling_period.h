#ifndef WEBOTS_ROS_MESSAGE_SENSOR_GET_SAMPLING_PERIOD_H
#define WEBOTS_ROS_MESSAGE_SENSOR_GET_SAMPLING_PERIOD_H

#include "ros/service_traits.h"


#include "sensor_get_sampling_periodRequest.h"
#include "sensor_get_sampling_periodResponse.h"


namespace webots_ros
{

struct sensor_get_sampling_period
{

typedef sensor_get_sampling_periodRequest Request;
typedef sensor_get_sampling_periodResponse Response;
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
struct MD5Sum< ::webots_ros::sensor_get_sampling_period > {
  static const char* value()
  {
    return "b63e210df66cfd7c87450de452ecf773";
  }

  static const char* value(const ::webots_ros::sensor_get_sampling_period&) { return value(); }
};

template<>
struct DataType< ::webots_ros::sensor_get_sampling_period > {
  static const char* value()
  {
    return "webots_ros/sensor_get_sampling_period";
  }

  static const char* value(const ::webots_ros::sensor_get_sampling_period&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::sensor_get_sampling_periodRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::sensor_get_sampling_period >::value();
  }
  static const char* value(const ::webots_ros::sensor_get_sampling_periodRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::sensor_get_sampling_periodRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::sensor_get_sampling_period >::value();
  }
  static const char* value(const ::webots_ros::sensor_get_sampling_periodRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::sensor_get_sampling_periodResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::sensor_get_sampling_period >::value();
  }
  static const char* value(const ::webots_ros::sensor_get_sampling_periodResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::sensor_get_sampling_periodResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::sensor_get_sampling_period >::value();
  }
  static const char* value(const ::webots_ros::sensor_get_sampling_periodResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SENSOR_GET_SAMPLING_PERIOD_H
