#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_CONTACT_POINT_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_CONTACT_POINT_H

#include "ros/service_traits.h"


#include "node_get_contact_pointRequest.h"
#include "node_get_contact_pointResponse.h"


namespace webots_ros
{

struct node_get_contact_point
{

typedef node_get_contact_pointRequest Request;
typedef node_get_contact_pointResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_contact_point > {
  static const char* value()
  {
    return "9c5f01d2740429b564f116bec885358a";
  }

  static const char* value(const ::webots_ros::node_get_contact_point&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_contact_point > {
  static const char* value()
  {
    return "webots_ros/node_get_contact_point";
  }

  static const char* value(const ::webots_ros::node_get_contact_point&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_contact_pointRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_contact_point >::value();
  }
  static const char* value(const ::webots_ros::node_get_contact_pointRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_contact_pointRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_contact_point >::value();
  }
  static const char* value(const ::webots_ros::node_get_contact_pointRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_contact_pointResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_contact_point >::value();
  }
  static const char* value(const ::webots_ros::node_get_contact_pointResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_contact_pointResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_contact_point >::value();
  }
  static const char* value(const ::webots_ros::node_get_contact_pointResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_CONTACT_POINT_H
