#ifndef WEBOTS_ROS_MESSAGE_FIELD_SET_ROTATION_H
#define WEBOTS_ROS_MESSAGE_FIELD_SET_ROTATION_H

#include "ros/service_traits.h"


#include "field_set_rotationRequest.h"
#include "field_set_rotationResponse.h"


namespace webots_ros
{

struct field_set_rotation
{

typedef field_set_rotationRequest Request;
typedef field_set_rotationResponse Response;
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
struct MD5Sum< ::webots_ros::field_set_rotation > {
  static const char* value()
  {
    return "f7b9003dace87295f2b9eb1dc57c4294";
  }

  static const char* value(const ::webots_ros::field_set_rotation&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_set_rotation > {
  static const char* value()
  {
    return "webots_ros/field_set_rotation";
  }

  static const char* value(const ::webots_ros::field_set_rotation&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_set_rotationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_rotation >::value();
  }
  static const char* value(const ::webots_ros::field_set_rotationRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_set_rotationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_rotation >::value();
  }
  static const char* value(const ::webots_ros::field_set_rotationRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_set_rotationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_rotation >::value();
  }
  static const char* value(const ::webots_ros::field_set_rotationResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_set_rotationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_rotation >::value();
  }
  static const char* value(const ::webots_ros::field_set_rotationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_SET_ROTATION_H