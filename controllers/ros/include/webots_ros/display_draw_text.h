#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXT_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXT_H

#include "ros/service_traits.h"


#include "display_draw_textRequest.h"
#include "display_draw_textResponse.h"


namespace webots_ros
{

struct display_draw_text
{

typedef display_draw_textRequest Request;
typedef display_draw_textResponse Response;
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
struct MD5Sum< ::webots_ros::display_draw_text > {
  static const char* value()
  {
    return "b82c6acdec67a202bbbbd0b3aba5aa0c";
  }

  static const char* value(const ::webots_ros::display_draw_text&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_draw_text > {
  static const char* value()
  {
    return "webots_ros/display_draw_text";
  }

  static const char* value(const ::webots_ros::display_draw_text&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_draw_textRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_text >::value();
  }
  static const char* value(const ::webots_ros::display_draw_textRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_draw_textRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_text >::value();
  }
  static const char* value(const ::webots_ros::display_draw_textRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_draw_textResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_text >::value();
  }
  static const char* value(const ::webots_ros::display_draw_textResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_draw_textResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_text >::value();
  }
  static const char* value(const ::webots_ros::display_draw_textResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXT_H
