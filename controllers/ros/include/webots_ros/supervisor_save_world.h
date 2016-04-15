#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SAVE_WORLD_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SAVE_WORLD_H

#include "ros/service_traits.h"


#include "supervisor_save_worldRequest.h"
#include "supervisor_save_worldResponse.h"


namespace webots_ros
{

struct supervisor_save_world
{

typedef supervisor_save_worldRequest Request;
typedef supervisor_save_worldResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_save_world > {
  static const char* value()
  {
    return "15256984b355001038953e91075ee9e2";
  }

  static const char* value(const ::webots_ros::supervisor_save_world&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_save_world > {
  static const char* value()
  {
    return "webots_ros/supervisor_save_world";
  }

  static const char* value(const ::webots_ros::supervisor_save_world&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_save_worldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_save_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_save_worldRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_save_worldRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_save_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_save_worldRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_save_worldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_save_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_save_worldResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_save_worldResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_save_world >::value();
  }
  static const char* value(const ::webots_ros::supervisor_save_worldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SAVE_WORLD_H
