#ifndef WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H
#define WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H

#include "ros/service_traits.h"


#include "node_set_velocityRequest.h"
#include "node_set_velocityResponse.h"


namespace webots_ros
{

struct node_set_velocity
{

typedef node_set_velocityRequest Request;
typedef node_set_velocityResponse Response;
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
struct MD5Sum< ::webots_ros::node_set_velocity > {
  static const char* value()
  {
    return "bbe5d1dd420b6f268ed5aee8db339832";
  }

  static const char* value(const ::webots_ros::node_set_velocity&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_set_velocity > {
  static const char* value()
  {
    return "webots_ros/node_set_velocity";
  }

  static const char* value(const ::webots_ros::node_set_velocity&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_set_velocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_set_velocityRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_set_velocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_set_velocityResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_set_velocity >::value();
  }
  static const char* value(const ::webots_ros::node_set_velocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_SET_VELOCITY_H
