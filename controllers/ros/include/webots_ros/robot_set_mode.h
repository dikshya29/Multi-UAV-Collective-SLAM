#ifndef WEBOTS_ROS_MESSAGE_ROBOT_SET_MODE_H
#define WEBOTS_ROS_MESSAGE_ROBOT_SET_MODE_H

#include "ros/service_traits.h"


#include "robot_set_modeRequest.h"
#include "robot_set_modeResponse.h"


namespace webots_ros
{

struct robot_set_mode
{

typedef robot_set_modeRequest Request;
typedef robot_set_modeResponse Response;
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
struct MD5Sum< ::webots_ros::robot_set_mode > {
  static const char* value()
  {
    return "ef8b4f277f1a6d92a8c4d6a68a3850de";
  }

  static const char* value(const ::webots_ros::robot_set_mode&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_set_mode > {
  static const char* value()
  {
    return "webots_ros/robot_set_mode";
  }

  static const char* value(const ::webots_ros::robot_set_mode&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_set_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_set_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_set_modeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_set_modeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_set_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_set_modeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_set_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_set_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_set_modeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_set_modeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_set_mode >::value();
  }
  static const char* value(const ::webots_ros::robot_set_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_SET_MODE_H
