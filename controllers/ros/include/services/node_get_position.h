#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H

#include "ros/service_traits.h"


#include "node_get_positionRequest.h"
#include "node_get_positionResponse.h"


namespace webots_ros
{

struct node_get_position
{

typedef node_get_positionRequest Request;
typedef node_get_positionResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_position > {
  static const char* value()
  {
    return "86b3ff5bd87e171360a1d26f3e2a6e42";
  }

  static const char* value(const ::webots_ros::node_get_position&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_position > {
  static const char* value()
  {
    return "webots_ros/node_get_position";
  }

  static const char* value(const ::webots_ros::node_get_position&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_positionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_positionRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_positionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_positionResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_position >::value();
  }
  static const char* value(const ::webots_ros::node_get_positionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_POSITION_H
