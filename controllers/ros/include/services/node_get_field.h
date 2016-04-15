#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_FIELD_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_FIELD_H

#include "ros/service_traits.h"


#include "node_get_fieldRequest.h"
#include "node_get_fieldResponse.h"


namespace webots_ros
{

struct node_get_field
{

typedef node_get_fieldRequest Request;
typedef node_get_fieldResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_field > {
  static const char* value()
  {
    return "ebc69c91abb4723f5b25baca5ecfe051";
  }

  static const char* value(const ::webots_ros::node_get_field&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_field > {
  static const char* value()
  {
    return "webots_ros/node_get_field";
  }

  static const char* value(const ::webots_ros::node_get_field&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_fieldRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_field >::value();
  }
  static const char* value(const ::webots_ros::node_get_fieldRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_fieldRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_field >::value();
  }
  static const char* value(const ::webots_ros::node_get_fieldRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_fieldResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_field >::value();
  }
  static const char* value(const ::webots_ros::node_get_fieldResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_fieldResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_field >::value();
  }
  static const char* value(const ::webots_ros::node_get_fieldResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_FIELD_H
