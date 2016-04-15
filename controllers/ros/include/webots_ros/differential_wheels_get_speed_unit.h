#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNIT_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNIT_H

#include "ros/service_traits.h"


#include "differential_wheels_get_speed_unitRequest.h"
#include "differential_wheels_get_speed_unitResponse.h"


namespace webots_ros
{

struct differential_wheels_get_speed_unit
{

typedef differential_wheels_get_speed_unitRequest Request;
typedef differential_wheels_get_speed_unitResponse Response;
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
struct MD5Sum< ::webots_ros::differential_wheels_get_speed_unit > {
  static const char* value()
  {
    return "5869bb7c2087d797eea5c6250689e752";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_speed_unit&) { return value(); }
};

template<>
struct DataType< ::webots_ros::differential_wheels_get_speed_unit > {
  static const char* value()
  {
    return "webots_ros/differential_wheels_get_speed_unit";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_speed_unit&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::differential_wheels_get_speed_unitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_get_speed_unit >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::differential_wheels_get_speed_unitRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_get_speed_unit >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::differential_wheels_get_speed_unitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_get_speed_unit >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::differential_wheels_get_speed_unitResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_get_speed_unit >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNIT_H
