#ifndef WEBOTS_ROS_MESSAGE_NODE_RESET_PHYSICS_H
#define WEBOTS_ROS_MESSAGE_NODE_RESET_PHYSICS_H

#include "ros/service_traits.h"


#include "node_reset_physicsRequest.h"
#include "node_reset_physicsResponse.h"


namespace webots_ros
{

struct node_reset_physics
{

typedef node_reset_physicsRequest Request;
typedef node_reset_physicsResponse Response;
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
struct MD5Sum< ::webots_ros::node_reset_physics > {
  static const char* value()
  {
    return "594d3b785623c78d3382c6628faa0f8c";
  }

  static const char* value(const ::webots_ros::node_reset_physics&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_reset_physics > {
  static const char* value()
  {
    return "webots_ros/node_reset_physics";
  }

  static const char* value(const ::webots_ros::node_reset_physics&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_reset_physicsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::node_reset_physicsRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_reset_physicsRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::node_reset_physicsRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_reset_physicsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::node_reset_physicsResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_reset_physicsResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::node_reset_physicsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_RESET_PHYSICS_H
