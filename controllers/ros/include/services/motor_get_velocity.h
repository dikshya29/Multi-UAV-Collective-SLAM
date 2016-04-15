#ifndef WEBOTS_ROS_MESSAGE_MOTOR_GET_VELOCITY_H
#define WEBOTS_ROS_MESSAGE_MOTOR_GET_VELOCITY_H

#include "ros/service_traits.h"


#include "motor_get_velocityRequest.h"
#include "motor_get_velocityResponse.h"


namespace webots_ros
{

struct motor_get_velocity
{

typedef motor_get_velocityRequest Request;
typedef motor_get_velocityResponse Response;
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
struct MD5Sum< ::webots_ros::motor_get_velocity > {
  static const char* value()
  {
    return "a00cbf66ca0c432c74226a651ee5b730";
  }

  static const char* value(const ::webots_ros::motor_get_velocity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_get_velocity > {
  static const char* value()
  {
    return "webots_ros/motor_get_velocity";
  }

  static const char* value(const ::webots_ros::motor_get_velocity&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_get_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_get_velocityRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_get_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_get_velocityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_get_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_get_velocityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_get_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_get_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_GET_VELOCITY_H
