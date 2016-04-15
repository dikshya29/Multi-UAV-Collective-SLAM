#ifndef WEBOTS_ROS_MESSAGE_PEN_SET_INK_COLOR_H
#define WEBOTS_ROS_MESSAGE_PEN_SET_INK_COLOR_H

#include "ros/service_traits.h"


#include "pen_set_ink_colorRequest.h"
#include "pen_set_ink_colorResponse.h"


namespace webots_ros
{

struct pen_set_ink_color
{

typedef pen_set_ink_colorRequest Request;
typedef pen_set_ink_colorResponse Response;
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
struct MD5Sum< ::webots_ros::pen_set_ink_color > {
  static const char* value()
  {
    return "7fde2080d14960fbc22200121684eabf";
  }

  static const char* value(const ::webots_ros::pen_set_ink_color&) { return value(); }
};

template<>
struct DataType< ::webots_ros::pen_set_ink_color > {
  static const char* value()
  {
    return "webots_ros/pen_set_ink_color";
  }

  static const char* value(const ::webots_ros::pen_set_ink_color&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::pen_set_ink_colorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::pen_set_ink_color >::value();
  }
  static const char* value(const ::webots_ros::pen_set_ink_colorRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::pen_set_ink_colorRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::pen_set_ink_color >::value();
  }
  static const char* value(const ::webots_ros::pen_set_ink_colorRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::pen_set_ink_colorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::pen_set_ink_color >::value();
  }
  static const char* value(const ::webots_ros::pen_set_ink_colorResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::pen_set_ink_colorResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::pen_set_ink_color >::value();
  }
  static const char* value(const ::webots_ros::pen_set_ink_colorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_PEN_SET_INK_COLOR_H
