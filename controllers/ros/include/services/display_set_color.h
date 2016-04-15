#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_SET_COLOR_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_SET_COLOR_H

#include "ros/service_traits.h"


#include "display_set_colorRequest.h"
#include "display_set_colorResponse.h"


namespace webots_ros
{

struct display_set_color
{

typedef display_set_colorRequest Request;
typedef display_set_colorResponse Response;
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
struct MD5Sum< ::webots_ros::display_set_color > {
  static const char* value()
  {
    return "56cea22e280c0030806ba10faba23442";
  }

  static const char* value(const ::webots_ros::display_set_color&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_set_color > {
  static const char* value()
  {
    return "webots_ros/display_set_color";
  }

  static const char* value(const ::webots_ros::display_set_color&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_set_colorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_color >::value();
  }
  static const char* value(const ::webots_ros::display_set_colorRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_set_colorRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_color >::value();
  }
  static const char* value(const ::webots_ros::display_set_colorRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_set_colorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_color >::value();
  }
  static const char* value(const ::webots_ros::display_set_colorResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_set_colorResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_color >::value();
  }
  static const char* value(const ::webots_ros::display_set_colorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_SET_COLOR_H
