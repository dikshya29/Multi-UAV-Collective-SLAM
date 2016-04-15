#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H

#include "ros/service_traits.h"


#include "display_image_pasteRequest.h"
#include "display_image_pasteResponse.h"


namespace webots_ros
{

struct display_image_paste
{

typedef display_image_pasteRequest Request;
typedef display_image_pasteResponse Response;
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
struct MD5Sum< ::webots_ros::display_image_paste > {
  static const char* value()
  {
    return "bf3087a2a513b6561b70517baf177cff";
  }

  static const char* value(const ::webots_ros::display_image_paste&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_image_paste > {
  static const char* value()
  {
    return "webots_ros/display_image_paste";
  }

  static const char* value(const ::webots_ros::display_image_paste&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_image_pasteRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_image_pasteRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_image_pasteResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_image_pasteResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_paste >::value();
  }
  static const char* value(const ::webots_ros::display_image_pasteResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_PASTE_H
