#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_TIME_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_TIME_H

#include "ros/service_traits.h"


#include "robot_get_timeRequest.h"
#include "robot_get_timeResponse.h"


namespace webots_ros
{

struct robot_get_time
{

typedef robot_get_timeRequest Request;
typedef robot_get_timeResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_time > {
  static const char* value()
  {
    return "5379804ec606f1caa50ecbfae01e3d64";
  }

  static const char* value(const ::webots_ros::robot_get_time&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_time > {
  static const char* value()
  {
    return "webots_ros/robot_get_time";
  }

  static const char* value(const ::webots_ros::robot_get_time&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_timeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_time >::value();
  }
  static const char* value(const ::webots_ros::robot_get_timeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_timeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_time >::value();
  }
  static const char* value(const ::webots_ros::robot_get_timeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_timeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_time >::value();
  }
  static const char* value(const ::webots_ros::robot_get_timeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_timeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_time >::value();
  }
  static const char* value(const ::webots_ros::robot_get_timeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_TIME_H
