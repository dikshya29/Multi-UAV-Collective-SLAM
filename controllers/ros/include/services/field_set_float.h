#ifndef WEBOTS_ROS_MESSAGE_FIELD_SET_FLOAT_H
#define WEBOTS_ROS_MESSAGE_FIELD_SET_FLOAT_H

#include "ros/service_traits.h"


#include "field_set_floatRequest.h"
#include "field_set_floatResponse.h"


namespace webots_ros
{

struct field_set_float
{

typedef field_set_floatRequest Request;
typedef field_set_floatResponse Response;
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
struct MD5Sum< ::webots_ros::field_set_float > {
  static const char* value()
  {
    return "4e40976b84f091a5cb0ce60a329c40a3";
  }

  static const char* value(const ::webots_ros::field_set_float&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_set_float > {
  static const char* value()
  {
    return "webots_ros/field_set_float";
  }

  static const char* value(const ::webots_ros::field_set_float&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_set_floatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_float >::value();
  }
  static const char* value(const ::webots_ros::field_set_floatRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_set_floatRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_float >::value();
  }
  static const char* value(const ::webots_ros::field_set_floatRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_set_floatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_float >::value();
  }
  static const char* value(const ::webots_ros::field_set_floatResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_set_floatResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_float >::value();
  }
  static const char* value(const ::webots_ros::field_set_floatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_SET_FLOAT_H
