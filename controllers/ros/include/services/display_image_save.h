#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_SAVE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_SAVE_H

#include "ros/service_traits.h"


#include "display_image_saveRequest.h"
#include "display_image_saveResponse.h"


namespace webots_ros
{

struct display_image_save
{

typedef display_image_saveRequest Request;
typedef display_image_saveResponse Response;
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
struct MD5Sum< ::webots_ros::display_image_save > {
  static const char* value()
  {
    return "e0d9a6b0c2c4d70d173cf3baf8d7df7c";
  }

  static const char* value(const ::webots_ros::display_image_save&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_image_save > {
  static const char* value()
  {
    return "webots_ros/display_image_save";
  }

  static const char* value(const ::webots_ros::display_image_save&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_image_saveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_save >::value();
  }
  static const char* value(const ::webots_ros::display_image_saveRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_image_saveRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_save >::value();
  }
  static const char* value(const ::webots_ros::display_image_saveRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_image_saveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_image_save >::value();
  }
  static const char* value(const ::webots_ros::display_image_saveResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_image_saveResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_image_save >::value();
  }
  static const char* value(const ::webots_ros::display_image_saveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_IMAGE_SAVE_H
