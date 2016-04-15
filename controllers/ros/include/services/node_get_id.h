#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_ID_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_ID_H

#include "ros/service_traits.h"


#include "node_get_idRequest.h"
#include "node_get_idResponse.h"


namespace webots_ros
{

struct node_get_id
{

typedef node_get_idRequest Request;
typedef node_get_idResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_id > {
  static const char* value()
  {
    return "16a06b427b76c7c64b73962f4f092416";
  }

  static const char* value(const ::webots_ros::node_get_id&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_id > {
  static const char* value()
  {
    return "webots_ros/node_get_id";
  }

  static const char* value(const ::webots_ros::node_get_id&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_idRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_id >::value();
  }
  static const char* value(const ::webots_ros::node_get_idRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_idRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_id >::value();
  }
  static const char* value(const ::webots_ros::node_get_idRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_idResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_id >::value();
  }
  static const char* value(const ::webots_ros::node_get_idResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_idResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_id >::value();
  }
  static const char* value(const ::webots_ros::node_get_idResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_ID_H
