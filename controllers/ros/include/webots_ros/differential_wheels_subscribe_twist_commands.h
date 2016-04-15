#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SUBSCRIBE_TWIST_COMMANDS_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SUBSCRIBE_TWIST_COMMANDS_H

#include "ros/service_traits.h"


#include "differential_wheels_subscribe_twist_commandsRequest.h"
#include "differential_wheels_subscribe_twist_commandsResponse.h"


namespace webots_ros
{

struct differential_wheels_subscribe_twist_commands
{

typedef differential_wheels_subscribe_twist_commandsRequest Request;
typedef differential_wheels_subscribe_twist_commandsResponse Response;
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
struct MD5Sum< ::webots_ros::differential_wheels_subscribe_twist_commands > {
  static const char* value()
  {
    return "24b2cd86178230acacfa09c1835c714f";
  }

  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commands&) { return value(); }
};

template<>
struct DataType< ::webots_ros::differential_wheels_subscribe_twist_commands > {
  static const char* value()
  {
    return "webots_ros/differential_wheels_subscribe_twist_commands";
  }

  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commands&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::differential_wheels_subscribe_twist_commandsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_subscribe_twist_commands >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commandsRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::differential_wheels_subscribe_twist_commandsRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_subscribe_twist_commands >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commandsRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::differential_wheels_subscribe_twist_commandsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_subscribe_twist_commands >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commandsResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::differential_wheels_subscribe_twist_commandsResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_subscribe_twist_commands >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_subscribe_twist_commandsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SUBSCRIBE_TWIST_COMMANDS_H
