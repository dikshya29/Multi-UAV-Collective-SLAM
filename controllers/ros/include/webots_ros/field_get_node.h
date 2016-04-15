#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_NODE_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_NODE_H

#include "ros/service_traits.h"


#include "field_get_nodeRequest.h"
#include "field_get_nodeResponse.h"


namespace webots_ros
{

struct field_get_node
{

typedef field_get_nodeRequest Request;
typedef field_get_nodeResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_node > {
  static const char* value()
  {
    return "c17cafc0118b2cdcc4a632463f436156";
  }

  static const char* value(const ::webots_ros::field_get_node&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_node > {
  static const char* value()
  {
    return "webots_ros/field_get_node";
  }

  static const char* value(const ::webots_ros::field_get_node&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_node >::value();
  }
  static const char* value(const ::webots_ros::field_get_nodeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_node >::value();
  }
  static const char* value(const ::webots_ros::field_get_nodeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_node >::value();
  }
  static const char* value(const ::webots_ros::field_get_nodeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_node >::value();
  }
  static const char* value(const ::webots_ros::field_get_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_NODE_H
