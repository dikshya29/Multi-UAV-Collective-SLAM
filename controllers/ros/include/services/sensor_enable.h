#ifndef WEBOTS_ROS_MESSAGE_SENSOR_ENABLE_H
#define WEBOTS_ROS_MESSAGE_SENSOR_ENABLE_H

#include "ros/service_traits.h"


#include "sensor_enableRequest.h"
#include "sensor_enableResponse.h"


namespace webots_ros
{

struct sensor_enable
{

typedef sensor_enableRequest Request;
typedef sensor_enableResponse Response;
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
struct MD5Sum< ::webots_ros::sensor_enable > {
  static const char* value()
  {
    return "a110dabfebb6564a90e4b1104e445e2a";
  }

  static const char* value(const ::webots_ros::sensor_enable&) { return value(); }
};

template<>
struct DataType< ::webots_ros::sensor_enable > {
  static const char* value()
  {
    return "webots_ros/sensor_enable";
  }

  static const char* value(const ::webots_ros::sensor_enable&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::sensor_enableRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::sensor_enable >::value();
  }
  static const char* value(const ::webots_ros::sensor_enableRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::sensor_enableRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::sensor_enable >::value();
  }
  static const char* value(const ::webots_ros::sensor_enableRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::sensor_enableResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::sensor_enable >::value();
  }
  static const char* value(const ::webots_ros::sensor_enableResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::sensor_enableResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::sensor_enable >::value();
  }
  static const char* value(const ::webots_ros::sensor_enableResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SENSOR_ENABLE_H
