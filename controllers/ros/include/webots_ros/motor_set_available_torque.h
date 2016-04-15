#ifndef WEBOTS_ROS_MESSAGE_MOTOR_SET_AVAILABLE_TORQUE_H
#define WEBOTS_ROS_MESSAGE_MOTOR_SET_AVAILABLE_TORQUE_H

#include "ros/service_traits.h"


#include "motor_set_available_torqueRequest.h"
#include "motor_set_available_torqueResponse.h"


namespace webots_ros
{

struct motor_set_available_torque
{

typedef motor_set_available_torqueRequest Request;
typedef motor_set_available_torqueResponse Response;
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
struct MD5Sum< ::webots_ros::motor_set_available_torque > {
  static const char* value()
  {
    return "a1e46e2b8c6d05aefe4c7fa13a4228ed";
  }

  static const char* value(const ::webots_ros::motor_set_available_torque&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_set_available_torque > {
  static const char* value()
  {
    return "webots_ros/motor_set_available_torque";
  }

  static const char* value(const ::webots_ros::motor_set_available_torque&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_set_available_torqueRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_available_torque >::value();
  }
  static const char* value(const ::webots_ros::motor_set_available_torqueRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_set_available_torqueRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_available_torque >::value();
  }
  static const char* value(const ::webots_ros::motor_set_available_torqueRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_set_available_torqueResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_available_torque >::value();
  }
  static const char* value(const ::webots_ros::motor_set_available_torqueResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_set_available_torqueResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_available_torque >::value();
  }
  static const char* value(const ::webots_ros::motor_set_available_torqueResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_SET_AVAILABLE_TORQUE_H
