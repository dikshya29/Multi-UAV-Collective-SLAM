#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_MAX_SPEED_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_MAX_SPEED_H

#include "ros/service_traits.h"


#include "differential_wheels_get_max_speedRequest.h"
#include "differential_wheels_get_max_speedResponse.h"


namespace webots_ros
{

struct differential_wheels_get_max_speed
{

typedef differential_wheels_get_max_speedRequest Request;
typedef differential_wheels_get_max_speedResponse Response;
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
struct MD5Sum< ::webots_ros::differential_wheels_get_max_speed > {
  static const char* value()
  {
    return "19d488707a38537e9bda674c88ad4565";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_max_speed&) { return value(); }
};

template<>
struct DataType< ::webots_ros::differential_wheels_get_max_speed > {
  static const char* value()
  {
    return "webots_ros/differential_wheels_get_max_speed";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_max_speed&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::differential_wheels_get_max_speedRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_get_max_speed >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_max_speedRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::differential_wheels_get_max_speedRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_get_max_speed >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_max_speedRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::differential_wheels_get_max_speedResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_get_max_speed >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_max_speedResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::differential_wheels_get_max_speedResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_get_max_speed >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_get_max_speedResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_MAX_SPEED_H
