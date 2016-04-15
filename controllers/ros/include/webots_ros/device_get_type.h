#ifndef WEBOTS_ROS_MESSAGE_DEVICE_GET_TYPE_H
#define WEBOTS_ROS_MESSAGE_DEVICE_GET_TYPE_H

#include "ros/service_traits.h"


#include "device_get_typeRequest.h"
#include "device_get_typeResponse.h"


namespace webots_ros
{

struct device_get_type
{

typedef device_get_typeRequest Request;
typedef device_get_typeResponse Response;
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
struct MD5Sum< ::webots_ros::device_get_type > {
  static const char* value()
  {
    return "c1d4df5cb8d246e7743383bc87c33e09";
  }

  static const char* value(const ::webots_ros::device_get_type&) { return value(); }
};

template<>
struct DataType< ::webots_ros::device_get_type > {
  static const char* value()
  {
    return "webots_ros/device_get_type";
  }

  static const char* value(const ::webots_ros::device_get_type&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::device_get_typeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::device_get_type >::value();
  }
  static const char* value(const ::webots_ros::device_get_typeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::device_get_typeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::device_get_type >::value();
  }
  static const char* value(const ::webots_ros::device_get_typeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::device_get_typeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::device_get_type >::value();
  }
  static const char* value(const ::webots_ros::device_get_typeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::device_get_typeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::device_get_type >::value();
  }
  static const char* value(const ::webots_ros::device_get_typeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DEVICE_GET_TYPE_H
