#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_EXPORT_IMAGE_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_EXPORT_IMAGE_H

#include "ros/service_traits.h"


#include "supervisor_export_imageRequest.h"
#include "supervisor_export_imageResponse.h"


namespace webots_ros
{

struct supervisor_export_image
{

typedef supervisor_export_imageRequest Request;
typedef supervisor_export_imageResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_export_image > {
  static const char* value()
  {
    return "9f4c973c7b1d0924ab26586269d7499e";
  }

  static const char* value(const ::webots_ros::supervisor_export_image&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_export_image > {
  static const char* value()
  {
    return "webots_ros/supervisor_export_image";
  }

  static const char* value(const ::webots_ros::supervisor_export_image&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_export_imageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_export_image >::value();
  }
  static const char* value(const ::webots_ros::supervisor_export_imageRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_export_imageRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_export_image >::value();
  }
  static const char* value(const ::webots_ros::supervisor_export_imageRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_export_imageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_export_image >::value();
  }
  static const char* value(const ::webots_ros::supervisor_export_imageResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_export_imageResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_export_image >::value();
  }
  static const char* value(const ::webots_ros::supervisor_export_imageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_EXPORT_IMAGE_H
