#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFO_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFO_H

#include "ros/service_traits.h"


#include "display_get_infoRequest.h"
#include "display_get_infoResponse.h"


namespace webots_ros
{

struct display_get_info
{

typedef display_get_infoRequest Request;
typedef display_get_infoResponse Response;
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
struct MD5Sum< ::webots_ros::display_get_info > {
  static const char* value()
  {
    return "736b3f82840360427588839f7591782f";
  }

  static const char* value(const ::webots_ros::display_get_info&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_get_info > {
  static const char* value()
  {
    return "webots_ros/display_get_info";
  }

  static const char* value(const ::webots_ros::display_get_info&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_get_infoRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_get_info >::value();
  }
  static const char* value(const ::webots_ros::display_get_infoRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_get_infoRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_get_info >::value();
  }
  static const char* value(const ::webots_ros::display_get_infoRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_get_infoResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_get_info >::value();
  }
  static const char* value(const ::webots_ros::display_get_infoResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_get_infoResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_get_info >::value();
  }
  static const char* value(const ::webots_ros::display_get_infoResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_GET_INFO_H
