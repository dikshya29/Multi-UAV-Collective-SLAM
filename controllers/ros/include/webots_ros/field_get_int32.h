#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_INT32_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_INT32_H

#include "ros/service_traits.h"


#include "field_get_int32Request.h"
#include "field_get_int32Response.h"


namespace webots_ros
{

struct field_get_int32
{

typedef field_get_int32Request Request;
typedef field_get_int32Response Response;
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
struct MD5Sum< ::webots_ros::field_get_int32 > {
  static const char* value()
  {
    return "f5c94e53fe49e81de1151baa92dffdc5";
  }

  static const char* value(const ::webots_ros::field_get_int32&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_int32 > {
  static const char* value()
  {
    return "webots_ros/field_get_int32";
  }

  static const char* value(const ::webots_ros::field_get_int32&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_int32Request>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_int32 >::value();
  }
  static const char* value(const ::webots_ros::field_get_int32Request&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_int32Request>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_int32 >::value();
  }
  static const char* value(const ::webots_ros::field_get_int32Request&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_int32Response>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_int32 >::value();
  }
  static const char* value(const ::webots_ros::field_get_int32Response&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_int32Response>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_int32 >::value();
  }
  static const char* value(const ::webots_ros::field_get_int32Response&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_INT32_H
