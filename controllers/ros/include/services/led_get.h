#ifndef WEBOTS_ROS_MESSAGE_LED_GET_H
#define WEBOTS_ROS_MESSAGE_LED_GET_H

#include "ros/service_traits.h"


#include "led_getRequest.h"
#include "led_getResponse.h"


namespace webots_ros
{

struct led_get
{

typedef led_getRequest Request;
typedef led_getResponse Response;
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
struct MD5Sum< ::webots_ros::led_get > {
  static const char* value()
  {
    return "709a80151e44785f1eda351c08f2f190";
  }

  static const char* value(const ::webots_ros::led_get&) { return value(); }
};

template<>
struct DataType< ::webots_ros::led_get > {
  static const char* value()
  {
    return "webots_ros/led_get";
  }

  static const char* value(const ::webots_ros::led_get&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::led_getRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::led_get >::value();
  }
  static const char* value(const ::webots_ros::led_getRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::led_getRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::led_get >::value();
  }
  static const char* value(const ::webots_ros::led_getRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::led_getResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::led_get >::value();
  }
  static const char* value(const ::webots_ros::led_getResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::led_getResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::led_get >::value();
  }
  static const char* value(const ::webots_ros::led_getResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LED_GET_H
