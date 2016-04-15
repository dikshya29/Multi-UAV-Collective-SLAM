#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_BASIC_TIME_STEP_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_BASIC_TIME_STEP_H

#include "ros/service_traits.h"


#include "robot_get_basic_time_stepRequest.h"
#include "robot_get_basic_time_stepResponse.h"


namespace webots_ros
{

struct robot_get_basic_time_step
{

typedef robot_get_basic_time_stepRequest Request;
typedef robot_get_basic_time_stepResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_basic_time_step > {
  static const char* value()
  {
    return "1beae1f6b6adbbadf550007aee29f14b";
  }

  static const char* value(const ::webots_ros::robot_get_basic_time_step&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_basic_time_step > {
  static const char* value()
  {
    return "webots_ros/robot_get_basic_time_step";
  }

  static const char* value(const ::webots_ros::robot_get_basic_time_step&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_basic_time_stepRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_basic_time_step >::value();
  }
  static const char* value(const ::webots_ros::robot_get_basic_time_stepRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_basic_time_stepRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_basic_time_step >::value();
  }
  static const char* value(const ::webots_ros::robot_get_basic_time_stepRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_basic_time_stepResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_basic_time_step >::value();
  }
  static const char* value(const ::webots_ros::robot_get_basic_time_stepResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_basic_time_stepResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_basic_time_step >::value();
  }
  static const char* value(const ::webots_ros::robot_get_basic_time_stepResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_BASIC_TIME_STEP_H
