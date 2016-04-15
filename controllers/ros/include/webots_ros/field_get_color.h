#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_COLOR_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_COLOR_H

#include "ros/service_traits.h"


#include "field_get_colorRequest.h"
#include "field_get_colorResponse.h"


namespace webots_ros
{

struct field_get_color
{

typedef field_get_colorRequest Request;
typedef field_get_colorResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_color > {
  static const char* value()
  {
    return "4920aae633f7f96feac03b4ce89984d5";
  }

  static const char* value(const ::webots_ros::field_get_color&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_color > {
  static const char* value()
  {
    return "webots_ros/field_get_color";
  }

  static const char* value(const ::webots_ros::field_get_color&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_colorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_color >::value();
  }
  static const char* value(const ::webots_ros::field_get_colorRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_colorRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_color >::value();
  }
  static const char* value(const ::webots_ros::field_get_colorRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_colorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_color >::value();
  }
  static const char* value(const ::webots_ros::field_get_colorResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_colorResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_color >::value();
  }
  static const char* value(const ::webots_ros::field_get_colorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_COLOR_H
