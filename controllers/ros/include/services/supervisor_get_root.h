#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_ROOT_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_ROOT_H

#include "ros/service_traits.h"


#include "supervisor_get_rootRequest.h"
#include "supervisor_get_rootResponse.h"


namespace webots_ros
{

struct supervisor_get_root
{

typedef supervisor_get_rootRequest Request;
typedef supervisor_get_rootResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_get_root > {
  static const char* value()
  {
    return "90bf8e1ca9472b58958a0f2c8e44e015";
  }

  static const char* value(const ::webots_ros::supervisor_get_root&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_get_root > {
  static const char* value()
  {
    return "webots_ros/supervisor_get_root";
  }

  static const char* value(const ::webots_ros::supervisor_get_root&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_get_rootRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_root >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_rootRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_get_rootRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_root >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_rootRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_get_rootResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_get_root >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_rootResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_get_rootResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_get_root >::value();
  }
  static const char* value(const ::webots_ros::supervisor_get_rootResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_GET_ROOT_H
