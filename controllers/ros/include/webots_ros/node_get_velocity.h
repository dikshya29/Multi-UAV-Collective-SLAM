#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_VELOCITY_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_VELOCITY_H

#include "ros/service_traits.h"


#include "node_get_velocityRequest.h"
#include "node_get_velocityResponse.h"


namespace webots_ros
{

struct node_get_velocity
{

typedef node_get_velocityRequest Request;
typedef node_get_velocityResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_velocity > {
  static const char* value()
  {
    return "2f79797c97e03530ec3eaac316419259";
  }

  static const char* value(const ::webots_ros::node_get_velocity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_velocity > {
  static const char* value()
  {
    return "webots_ros/node_get_velocity";
  }

  static const char* value(const ::webots_ros::node_get_velocity&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_get_velocityRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_get_velocityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_get_velocityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_get_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_VELOCITY_H
