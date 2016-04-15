#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_FILL_RECTANGLE_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_FILL_RECTANGLE_H

#include "ros/service_traits.h"


#include "display_fill_rectangleRequest.h"
#include "display_fill_rectangleResponse.h"


namespace webots_ros
{

struct display_fill_rectangle
{

typedef display_fill_rectangleRequest Request;
typedef display_fill_rectangleResponse Response;
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
struct MD5Sum< ::webots_ros::display_fill_rectangle > {
  static const char* value()
  {
    return "f7d77dd6f16a5d7e8ba643de53791446";
  }

  static const char* value(const ::webots_ros::display_fill_rectangle&) { return value(); }
};

template<>
struct DataType< ::webots_ros::display_fill_rectangle > {
  static const char* value()
  {
    return "webots_ros/display_fill_rectangle";
  }

  static const char* value(const ::webots_ros::display_fill_rectangle&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::display_fill_rectangleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_fill_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_fill_rectangleRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::display_fill_rectangleRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_fill_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_fill_rectangleRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::display_fill_rectangleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::display_fill_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_fill_rectangleResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::display_fill_rectangleResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::display_fill_rectangle >::value();
  }
  static const char* value(const ::webots_ros::display_fill_rectangleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_FILL_RECTANGLE_H
