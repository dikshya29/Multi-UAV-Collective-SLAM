#ifndef WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARD_H
#define WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARD_H

#include "ros/service_traits.h"


#include "robot_enable_keyboardRequest.h"
#include "robot_enable_keyboardResponse.h"


namespace webots_ros
{

struct robot_enable_keyboard
{

typedef robot_enable_keyboardRequest Request;
typedef robot_enable_keyboardResponse Response;
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
struct MD5Sum< ::webots_ros::robot_enable_keyboard > {
  static const char* value()
  {
    return "a110dabfebb6564a90e4b1104e445e2a";
  }

  static const char* value(const ::webots_ros::robot_enable_keyboard&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_enable_keyboard > {
  static const char* value()
  {
    return "webots_ros/robot_enable_keyboard";
  }

  static const char* value(const ::webots_ros::robot_enable_keyboard&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_enable_keyboardRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_enable_keyboard >::value();
  }
  static const char* value(const ::webots_ros::robot_enable_keyboardRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_enable_keyboardRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_enable_keyboard >::value();
  }
  static const char* value(const ::webots_ros::robot_enable_keyboardRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_enable_keyboardResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_enable_keyboard >::value();
  }
  static const char* value(const ::webots_ros::robot_enable_keyboardResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_enable_keyboardResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_enable_keyboard >::value();
  }
  static const char* value(const ::webots_ros::robot_enable_keyboardResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARD_H
