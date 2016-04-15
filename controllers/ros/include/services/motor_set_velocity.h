#ifndef WEBOTS_ROS_MESSAGE_MOTOR_SET_VELOCITY_H
#define WEBOTS_ROS_MESSAGE_MOTOR_SET_VELOCITY_H

#include "ros/service_traits.h"


#include "motor_set_velocityRequest.h"
#include "motor_set_velocityResponse.h"


namespace webots_ros
{

struct motor_set_velocity
{

typedef motor_set_velocityRequest Request;
typedef motor_set_velocityResponse Response;
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
struct MD5Sum< ::webots_ros::motor_set_velocity > {
  static const char* value()
  {
    return "2787affaab7a7ae29154b89f08c52fb8";
  }

  static const char* value(const ::webots_ros::motor_set_velocity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_set_velocity > {
  static const char* value()
  {
    return "webots_ros/motor_set_velocity";
  }

  static const char* value(const ::webots_ros::motor_set_velocity&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_set_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_set_velocityRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_set_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_set_velocityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_set_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_set_velocityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_set_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::motor_set_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_SET_VELOCITY_H
