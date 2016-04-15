#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_SET_ALPHA_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_SET_ALPHA_H

#include "ros/service_traits.h"


#include "display_set_alphaRequest.h"
#include "display_set_alphaResponse.h"


namespace webots_ros
{

struct display_set_alpha
{

typedef display_set_alphaRequest Request;
typedef display_set_alphaResponse Response;
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
struct MD5Sum< ::webots_ros::display_set_alpha > {
  static const char* value()
  {
    return "056ae584611f84e9939478d7bba711d1";
  }

  static const char* value(const ::webots_ros::display_set_alpha&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_set_alpha > {
  static const char* value()
  {
    return "webots_ros/display_set_alpha";
  }

  static const char* value(const ::webots_ros::display_set_alpha&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_set_alphaRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_alpha >::value();
  }
  static const char* value(const ::webots_ros::display_set_alphaRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_set_alphaRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_alpha >::value();
  }
  static const char* value(const ::webots_ros::display_set_alphaRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_set_alphaResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_set_alpha >::value();
  }
  static const char* value(const ::webots_ros::display_set_alphaResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_set_alphaResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_set_alpha >::value();
  }
  static const char* value(const ::webots_ros::display_set_alphaResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_SET_ALPHA_H
