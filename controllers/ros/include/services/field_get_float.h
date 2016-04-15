#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_FLOAT_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_FLOAT_H

#include "ros/service_traits.h"


#include "field_get_floatRequest.h"
#include "field_get_floatResponse.h"


namespace webots_ros
{

struct field_get_float
{

typedef field_get_floatRequest Request;
typedef field_get_floatResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_float > {
  static const char* value()
  {
    return "c2cc517501b50e0a3d3b0ee8172ea3fb";
  }

  static const char* value(const ::webots_ros::field_get_float&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_float > {
  static const char* value()
  {
    return "webots_ros/field_get_float";
  }

  static const char* value(const ::webots_ros::field_get_float&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_floatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_float >::value();
  }
  static const char* value(const ::webots_ros::field_get_floatRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_floatRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_float >::value();
  }
  static const char* value(const ::webots_ros::field_get_floatRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_floatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_float >::value();
  }
  static const char* value(const ::webots_ros::field_get_floatResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_floatResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_float >::value();
  }
  static const char* value(const ::webots_ros::field_get_floatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_FLOAT_H
