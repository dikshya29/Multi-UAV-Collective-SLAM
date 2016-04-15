#ifndef WEBOTS_ROS_MESSAGE_FIELD_SET_COLOR_H
#define WEBOTS_ROS_MESSAGE_FIELD_SET_COLOR_H

#include "ros/service_traits.h"


#include "field_set_colorRequest.h"
#include "field_set_colorResponse.h"


namespace webots_ros
{

struct field_set_color
{

typedef field_set_colorRequest Request;
typedef field_set_colorResponse Response;
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
struct MD5Sum< ::webots_ros::field_set_color > {
  static const char* value()
  {
    return "a58a56eaaf940e418b6c8321888e9929";
  }

  static const char* value(const ::webots_ros::field_set_color&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_set_color > {
  static const char* value()
  {
    return "webots_ros/field_set_color";
  }

  static const char* value(const ::webots_ros::field_set_color&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_set_colorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_color >::value();
  }
  static const char* value(const ::webots_ros::field_set_colorRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_set_colorRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_color >::value();
  }
  static const char* value(const ::webots_ros::field_set_colorRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_set_colorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_set_color >::value();
  }
  static const char* value(const ::webots_ros::field_set_colorResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_set_colorResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_set_color >::value();
  }
  static const char* value(const ::webots_ros::field_set_colorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_SET_COLOR_H
