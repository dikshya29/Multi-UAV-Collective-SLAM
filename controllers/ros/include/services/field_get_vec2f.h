#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_VEC2F_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_VEC2F_H

#include "ros/service_traits.h"


#include "field_get_vec2fRequest.h"
#include "field_get_vec2fResponse.h"


namespace webots_ros
{

struct field_get_vec2f
{

typedef field_get_vec2fRequest Request;
typedef field_get_vec2fResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_vec2f > {
  static const char* value()
  {
    return "5ba75d9d095ca14bcb57c58ac3b63422";
  }

  static const char* value(const ::webots_ros::field_get_vec2f&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_vec2f > {
  static const char* value()
  {
    return "webots_ros/field_get_vec2f";
  }

  static const char* value(const ::webots_ros::field_get_vec2f&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_vec2fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_ros::field_get_vec2fRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_vec2fRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_ros::field_get_vec2fRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_vec2fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_ros::field_get_vec2fResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_vec2fResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_vec2f >::value();
  }
  static const char* value(const ::webots_ros::field_get_vec2fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_VEC2F_H
