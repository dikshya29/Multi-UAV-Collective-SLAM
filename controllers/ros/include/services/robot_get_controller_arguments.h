#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTS_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTS_H

#include "ros/service_traits.h"


#include "robot_get_controller_argumentsRequest.h"
#include "robot_get_controller_argumentsResponse.h"


namespace webots_ros
{

struct robot_get_controller_arguments
{

typedef robot_get_controller_argumentsRequest Request;
typedef robot_get_controller_argumentsResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_controller_arguments > {
  static const char* value()
  {
    return "d1c8ecfda29858dc9a342c263b02dffc";
  }

  static const char* value(const ::webots_ros::robot_get_controller_arguments&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_controller_arguments > {
  static const char* value()
  {
    return "webots_ros/robot_get_controller_arguments";
  }

  static const char* value(const ::webots_ros::robot_get_controller_arguments&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_controller_argumentsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_controller_arguments >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_argumentsRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_controller_argumentsRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_controller_arguments >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_argumentsRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_controller_argumentsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_controller_arguments >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_argumentsResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_controller_argumentsResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_controller_arguments >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_argumentsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTS_H
