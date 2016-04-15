#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_LOAD_WORLD_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_LOAD_WORLD_H

#include "ros/service_traits.h"


#include "supervisor_load_worldRequest.h"
#include "supervisor_load_worldResponse.h"


namespace webots_ros
{

struct supervisor_load_world
{

typedef supervisor_load_worldRequest Request;
typedef supervisor_load_worldResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_load_world > {
  static const char* value()
  {
    return "b6de0f8a85f11aeb56b1f3e2c833f7d3";
  }

  static const char* value(const ::webots_ros::supervisor_load_world&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_load_world > {
  static const char* value()
  {
    return "webots_ros/supervisor_load_world";
  }

  static const char* value(const ::webots_ros::supervisor_load_world&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_load_worldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_load_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_load_worldRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_load_worldRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_load_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_load_worldRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_load_worldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_load_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_load_worldResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_load_worldResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_load_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_load_worldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_LOAD_WORLD_H
