#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_PIXEL_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_PIXEL_H

#include "ros/service_traits.h"


#include "display_draw_pixelRequest.h"
#include "display_draw_pixelResponse.h"


namespace webots_ros
{

struct display_draw_pixel
{

typedef display_draw_pixelRequest Request;
typedef display_draw_pixelResponse Response;
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
struct MD5Sum< ::webots_ros::display_draw_pixel > {
  static const char* value()
  {
    return "e8e87fb7b87ab83a24bea771b7fc11df";
  }

  static const char* value(const ::webots_ros::display_draw_pixel&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_draw_pixel > {
  static const char* value()
  {
    return "webots_ros/display_draw_pixel";
  }

  static const char* value(const ::webots_ros::display_draw_pixel&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_draw_pixelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_pixel >::value();
  }
  static const char* value(const ::webots_ros::display_draw_pixelRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_draw_pixelRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_pixel >::value();
  }
  static const char* value(const ::webots_ros::display_draw_pixelRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_draw_pixelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_draw_pixel >::value();
  }
  static const char* value(const ::webots_ros::display_draw_pixelResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_draw_pixelResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_draw_pixel >::value();
  }
  static const char* value(const ::webots_ros::display_draw_pixelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_PIXEL_H
