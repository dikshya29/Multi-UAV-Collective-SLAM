#ifndef WEBOTS_ROS_MESSAGE_MOTOR_SET_ACCELERATION_H
#define WEBOTS_ROS_MESSAGE_MOTOR_SET_ACCELERATION_H

#include "ros/service_traits.h"


#include "motor_set_accelerationRequest.h"
#include "motor_set_accelerationResponse.h"


namespace webots_ros
{

struct motor_set_acceleration
{

typedef motor_set_accelerationRequest Request;
typedef motor_set_accelerationResponse Response;
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
struct MD5Sum< ::webots_ros::motor_set_acceleration > {
  static const char* value()
  {
    return "d598ff1f97ac3547f6dba455366c6a0a";
  }

  static const char* value(const ::webots_ros::motor_set_acceleration&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_set_acceleration > {
  static const char* value()
  {
    return "webots_ros/motor_set_acceleration";
  }

  static const char* value(const ::webots_ros::motor_set_acceleration&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_set_accelerationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_set_accelerationRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_set_accelerationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_set_accelerationRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_set_accelerationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_set_accelerationResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_set_accelerationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_set_accelerationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_SET_ACCELERATION_H
