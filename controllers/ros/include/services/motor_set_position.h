#ifndef WEBOTS_ROS_MESSAGE_MOTOR_SET_POSITION_H
#define WEBOTS_ROS_MESSAGE_MOTOR_SET_POSITION_H

#include "ros/service_traits.h"


#include "motor_set_positionRequest.h"
#include "motor_set_positionResponse.h"


namespace webots_ros
{

struct motor_set_position
{

typedef motor_set_positionRequest Request;
typedef motor_set_positionResponse Response;
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
struct MD5Sum< ::webots_ros::motor_set_position > {
  static const char* value()
  {
    return "1dcd275300fff471a4e5afbf7ef69246";
  }

  static const char* value(const ::webots_ros::motor_set_position&) { return value(); }
};

template<>
struct DataType< ::webots_ros::motor_set_position > {
  static const char* value()
  {
    return "webots_ros/motor_set_position";
  }

  static const char* value(const ::webots_ros::motor_set_position&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::motor_set_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_position >::value();
  }
  static const char* value(const ::webots_ros::motor_set_positionRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::motor_set_positionRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_position >::value();
  }
  static const char* value(const ::webots_ros::motor_set_positionRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::motor_set_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::motor_set_position >::value();
  }
  static const char* value(const ::webots_ros::motor_set_positionResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::motor_set_positionResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::motor_set_position >::value();
  }
  static const char* value(const ::webots_ros::motor_set_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_MOTOR_SET_POSITION_H
