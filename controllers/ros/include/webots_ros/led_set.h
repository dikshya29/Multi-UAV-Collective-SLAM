#ifndef WEBOTS_ROS_MESSAGE_LED_SET_H
#define WEBOTS_ROS_MESSAGE_LED_SET_H

#include "ros/service_traits.h"


#include "led_setRequest.h"
#include "led_setResponse.h"


namespace webots_ros
{

struct led_set
{

typedef led_setRequest Request;
typedef led_setResponse Response;
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
struct MD5Sum< ::webots_ros::led_set > {
  static const char* value()
  {
    return "7dc614850ba591f56d6ff01a12718edd";
  }

  static const char* value(const ::webots_ros::led_set&) { return value(); }
};

template<>
struct DataType< ::webots_ros::led_set > {
  static const char* value()
  {
    return "webots_ros/led_set";
  }

  static const char* value(const ::webots_ros::led_set&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::led_setRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::led_set >::value();
  }
  static const char* value(const ::webots_ros::led_setRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::led_setRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::led_set >::value();
  }
  static const char* value(const ::webots_ros::led_setRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::led_setResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::led_set >::value();
  }
  static const char* value(const ::webots_ros::led_setResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::led_setResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::led_set >::value();
  }
  static const char* value(const ::webots_ros::led_setResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LED_SET_H
