#ifndef WEBOTS_ROS_MESSAGE_MOTOR_SET_FORCE_H
#define WEBOTS_ROS_MESSAGE_MOTOR_SET_FORCE_H

#include "ros/service_traits.h"


#include "motor_set_forceRequest.h"
#include "motor_set_forceResponse.h"


namespace webots_ros
{

struct motor_set_force
{

typedef motor_set_forceRequest Request;
typedef motor_set_forceResponse Response;
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
struct MD5Sum< ::webots_ros::motor_set_force > {
  static const char* value()
  {
    return "9bdb99d1c404938fb4a979d48a5957a6";
  }

  static const char* value(const ::webots_ros::motor_set_force&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_set_force > {
  static const char* value()
  {
    return "webots_ros/motor_set_force";
  }

  static const char* value(const ::webots_ros::motor_set_force&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_set_forceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_force >::value();
  }
  static const char* value(const ::webots_ros::motor_set_forceRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_set_forceRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_force >::value();
  }
  static const char* value(const ::webots_ros::motor_set_forceRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_set_forceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_force >::value();
  }
  static const char* value(const ::webots_ros::motor_set_forceResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_set_forceResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_force >::value();
  }
  static const char* value(const ::webots_ros::motor_set_forceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_SET_FORCE_H
