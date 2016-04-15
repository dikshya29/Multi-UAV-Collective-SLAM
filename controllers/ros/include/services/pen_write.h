#ifndef WEBOTS_ROS_MESSAGE_PEN_WRITE_H
#define WEBOTS_ROS_MESSAGE_PEN_WRITE_H

#include "ros/service_traits.h"


#include "pen_writeRequest.h"
#include "pen_writeResponse.h"


namespace webots_ros
{

struct pen_write
{

typedef pen_writeRequest Request;
typedef pen_writeResponse Response;
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
struct MD5Sum< ::webots_ros::pen_write > {
  static const char* value()
  {
    return "1b4100292a1338db339a5288c7167636";
  }

  static const char* value(const ::webots_ros::pen_write&) { return value(); }
};

template<>
struct DataType< ::webots_ros::pen_write > {
  static const char* value()
  {
    return "webots_ros/pen_write";
  }

  static const char* value(const ::webots_ros::pen_write&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::pen_writeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::pen_write >::value();
  }
  static const char* value(const ::webots_ros::pen_writeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::pen_writeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::pen_write >::value();
  }
  static const char* value(const ::webots_ros::pen_writeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::pen_writeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::pen_write >::value();
  }
  static const char* value(const ::webots_ros::pen_writeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::pen_writeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::pen_write >::value();
  }
  static const char* value(const ::webots_ros::pen_writeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_PEN_WRITE_H
