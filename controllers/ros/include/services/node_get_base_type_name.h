#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_BASE_TYPE_NAME_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_BASE_TYPE_NAME_H

#include "ros/service_traits.h"


#include "node_get_base_type_nameRequest.h"
#include "node_get_base_type_nameResponse.h"


namespace webots_ros
{

struct node_get_base_type_name
{

typedef node_get_base_type_nameRequest Request;
typedef node_get_base_type_nameResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_base_type_name > {
  static const char* value()
  {
    return "51d3f5e9907c2b98d816acf3aad2e00e";
  }

  static const char* value(const ::webots_ros::node_get_base_type_name&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_base_type_name > {
  static const char* value()
  {
    return "webots_ros/node_get_base_type_name";
  }

  static const char* value(const ::webots_ros::node_get_base_type_name&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_base_type_nameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_base_type_name >::value();
  }
  static const char* value(const ::webots_ros::node_get_base_type_nameRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_base_type_nameRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_base_type_name >::value();
  }
  static const char* value(const ::webots_ros::node_get_base_type_nameRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_base_type_nameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_base_type_name >::value();
  }
  static const char* value(const ::webots_ros::node_get_base_type_nameResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_base_type_nameResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_base_type_name >::value();
  }
  static const char* value(const ::webots_ros::node_get_base_type_nameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_BASE_TYPE_NAME_H
