#ifndef WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3F_H
#define WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3F_H

#include "ros/service_traits.h"


#include "field_set_vec3fRequest.h"
#include "field_set_vec3fResponse.h"


namespace webots_ros
{

struct field_set_vec3f
{

typedef field_set_vec3fRequest Request;
typedef field_set_vec3fResponse Response;
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
struct MD5Sum< ::webots_ros::field_set_vec3f > {
  static const char* value()
  {
    return "e0edef5860d282e4d35ef264e28feecc";
  }

  static const char* value(const ::webots_ros::field_set_vec3f&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_set_vec3f > {
  static const char* value()
  {
    return "webots_ros/field_set_vec3f";
  }

  static const char* value(const ::webots_ros::field_set_vec3f&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_set_vec3fRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_vec3f >::value();
  }
  static const char* value(const ::webots_ros::field_set_vec3fRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_set_vec3fRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_vec3f >::value();
  }
  static const char* value(const ::webots_ros::field_set_vec3fRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_set_vec3fResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_vec3f >::value();
  }
  static const char* value(const ::webots_ros::field_set_vec3fResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_set_vec3fResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_vec3f >::value();
  }
  static const char* value(const ::webots_ros::field_set_vec3fResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_SET_VEC3F_H
