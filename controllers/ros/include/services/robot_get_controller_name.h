#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_NAME_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_NAME_H

#include "ros/service_traits.h"


#include "robot_get_controller_nameRequest.h"
#include "robot_get_controller_nameResponse.h"


namespace webots_ros
{

struct robot_get_controller_name
{

typedef robot_get_controller_nameRequest Request;
typedef robot_get_controller_nameResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_controller_name > {
  static const char* value()
  {
    return "b347428ecbfa5ef4283c9b5921eb473a";
  }

  static const char* value(const ::webots_ros::robot_get_controller_name&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_controller_name > {
  static const char* value()
  {
    return "webots_ros/robot_get_controller_name";
  }

  static const char* value(const ::webots_ros::robot_get_controller_name&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_controller_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_controller_name >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_nameRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_controller_nameRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_controller_name >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_nameRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_controller_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_controller_name >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_nameResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_controller_nameResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_controller_name >::value();
  }
  static const char* value(const ::webots_ros::robot_get_controller_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_NAME_H
