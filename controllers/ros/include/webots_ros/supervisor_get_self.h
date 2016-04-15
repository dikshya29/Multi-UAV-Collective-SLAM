#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_SELF_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_SELF_H

#include "ros/service_traits.h"


#include "supervisor_get_selfRequest.h"
#include "supervisor_get_selfResponse.h"


namespace webots_ros
{

struct supervisor_get_self
{

typedef supervisor_get_selfRequest Request;
typedef supervisor_get_selfResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_get_self > {
  static const char* value()
  {
    return "90bf8e1ca9472b58958a0f2c8e44e015";
  }

  static const char* value(const ::webots_ros::supervisor_get_self&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_get_self > {
  static const char* value()
  {
    return "webots_ros/supervisor_get_self";
  }

  static const char* value(const ::webots_ros::supervisor_get_self&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_get_selfRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_self >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_selfRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_get_selfRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_self >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_selfRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_get_selfResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_self >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_selfResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_get_selfResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_self >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_selfResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_SELF_H
