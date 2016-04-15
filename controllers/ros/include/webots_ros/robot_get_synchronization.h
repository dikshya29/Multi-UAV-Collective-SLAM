#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_SYNCHRONIZATION_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_SYNCHRONIZATION_H

#include "ros/service_traits.h"


#include "robot_get_synchronizationRequest.h"
#include "robot_get_synchronizationResponse.h"


namespace webots_ros
{

struct robot_get_synchronization
{

typedef robot_get_synchronizationRequest Request;
typedef robot_get_synchronizationResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_synchronization > {
  static const char* value()
  {
    return "ddca1c536cb0ef019573d56cac823a41";
  }

  static const char* value(const ::webots_ros::robot_get_synchronization&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_synchronization > {
  static const char* value()
  {
    return "webots_ros/robot_get_synchronization";
  }

  static const char* value(const ::webots_ros::robot_get_synchronization&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_synchronizationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_synchronization >::value();
  }
  static const char* value(const ::webots_ros::robot_get_synchronizationRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_synchronizationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_synchronization >::value();
  }
  static const char* value(const ::webots_ros::robot_get_synchronizationRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_synchronizationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_synchronization >::value();
  }
  static const char* value(const ::webots_ros::robot_get_synchronizationResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_synchronizationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_synchronization >::value();
  }
  static const char* value(const ::webots_ros::robot_get_synchronizationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_SYNCHRONIZATION_H
