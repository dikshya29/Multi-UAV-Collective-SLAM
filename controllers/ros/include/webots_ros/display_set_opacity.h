#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_SET_OPACITY_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_SET_OPACITY_H

#include "ros/service_traits.h"


#include "display_set_opacityRequest.h"
#include "display_set_opacityResponse.h"


namespace webots_ros
{

struct display_set_opacity
{

typedef display_set_opacityRequest Request;
typedef display_set_opacityResponse Response;
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
struct MD5Sum< ::webots_ros::display_set_opacity > {
  static const char* value()
  {
    return "4cd98a3152470bde07621c10fe0fea7d";
  }

  static const char* value(const ::webots_ros::display_set_opacity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_set_opacity > {
  static const char* value()
  {
    return "webots_ros/display_set_opacity";
  }

  static const char* value(const ::webots_ros::display_set_opacity&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_set_opacityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_opacity >::value();
  }
  static const char* value(const ::webots_ros::display_set_opacityRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_set_opacityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_opacity >::value();
  }
  static const char* value(const ::webots_ros::display_set_opacityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_set_opacityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_opacity >::value();
  }
  static const char* value(const ::webots_ros::display_set_opacityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_set_opacityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_opacity >::value();
  }
  static const char* value(const ::webots_ros::display_set_opacityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_SET_OPACITY_H
