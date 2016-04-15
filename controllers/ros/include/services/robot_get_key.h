#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_KEY_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_KEY_H

#include "ros/service_traits.h"


#include "robot_get_keyRequest.h"
#include "robot_get_keyResponse.h"


namespace webots_ros
{

struct robot_get_key
{

typedef robot_get_keyRequest Request;
typedef robot_get_keyResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_key > {
  static const char* value()
  {
    return "5f6a09fd82c71fcebd5250600140c204";
  }

  static const char* value(const ::webots_ros::robot_get_key&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_key > {
  static const char* value()
  {
    return "webots_ros/robot_get_key";
  }

  static const char* value(const ::webots_ros::robot_get_key&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_keyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_key >::value();
  }
  static const char* value(const ::webots_ros::robot_get_keyRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_keyRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_key >::value();
  }
  static const char* value(const ::webots_ros::robot_get_keyRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_keyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_key >::value();
  }
  static const char* value(const ::webots_ros::robot_get_keyResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_keyResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_key >::value();
  }
  static const char* value(const ::webots_ros::robot_get_keyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_KEY_H
