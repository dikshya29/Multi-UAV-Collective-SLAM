#ifndef WEBOTS_ROS_MESSAGE_MOTOR_GET_ACCELERATION_H
#define WEBOTS_ROS_MESSAGE_MOTOR_GET_ACCELERATION_H

#include "ros/service_traits.h"


#include "motor_get_accelerationRequest.h"
#include "motor_get_accelerationResponse.h"


namespace webots_ros
{

struct motor_get_acceleration
{

typedef motor_get_accelerationRequest Request;
typedef motor_get_accelerationResponse Response;
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
struct MD5Sum< ::webots_ros::motor_get_acceleration > {
  static const char* value()
  {
    return "57794db3a45a41ef77957ee422483467";
  }

  static const char* value(const ::webots_ros::motor_get_acceleration&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_get_acceleration > {
  static const char* value()
  {
    return "webots_ros/motor_get_acceleration";
  }

  static const char* value(const ::webots_ros::motor_get_acceleration&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_get_accelerationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_get_accelerationRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_get_accelerationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_get_accelerationRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_get_accelerationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_get_accelerationResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_get_accelerationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_acceleration >::value();
  }
  static const char* value(const ::webots_ros::motor_get_accelerationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_GET_ACCELERATION_H
