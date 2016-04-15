#ifndef WEBOTS_ROS_MESSAGE_DEVICE_GET_NAME_H
#define WEBOTS_ROS_MESSAGE_DEVICE_GET_NAME_H

#include "ros/service_traits.h"


#include "device_get_nameRequest.h"
#include "device_get_nameResponse.h"


namespace webots_ros
{

struct device_get_name
{

typedef device_get_nameRequest Request;
typedef device_get_nameResponse Response;
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
struct MD5Sum< ::webots_ros::device_get_name > {
  static const char* value()
  {
    return "b347428ecbfa5ef4283c9b5921eb473a";
  }

  static const char* value(const ::webots_ros::device_get_name&) { return value(); }
};

template<>
struct DataType< ::webots_ros::device_get_name > {
  static const char* value()
  {
    return "webots_ros/device_get_name";
  }

  static const char* value(const ::webots_ros::device_get_name&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::device_get_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::device_get_name >::value();
  }
  static const char* value(const ::webots_ros::device_get_nameRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::device_get_nameRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::device_get_name >::value();
  }
  static const char* value(const ::webots_ros::device_get_nameRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::device_get_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::device_get_name >::value();
  }
  static const char* value(const ::webots_ros::device_get_nameResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::device_get_nameResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::device_get_name >::value();
  }
  static const char* value(const ::webots_ros::device_get_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DEVICE_GET_NAME_H
