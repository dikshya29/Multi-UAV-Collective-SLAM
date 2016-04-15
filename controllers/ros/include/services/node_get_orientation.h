#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_ORIENTATION_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_ORIENTATION_H

#include "ros/service_traits.h"


#include "node_get_orientationRequest.h"
#include "node_get_orientationResponse.h"


namespace webots_ros
{

struct node_get_orientation
{

typedef node_get_orientationRequest Request;
typedef node_get_orientationResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_orientation > {
  static const char* value()
  {
    return "466b454cbfb10cb0782f9ae8145b35f0";
  }

  static const char* value(const ::webots_ros::node_get_orientation&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_orientation > {
  static const char* value()
  {
    return "webots_ros/node_get_orientation";
  }

  static const char* value(const ::webots_ros::node_get_orientation&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_orientationRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_orientation >::value();
  }
  static const char* value(const ::webots_ros::node_get_orientationRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_orientationRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_orientation >::value();
  }
  static const char* value(const ::webots_ros::node_get_orientationRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_orientationResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_orientation >::value();
  }
  static const char* value(const ::webots_ros::node_get_orientationResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_orientationResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_orientation >::value();
  }
  static const char* value(const ::webots_ros::node_get_orientationResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_ORIENTATION_H
