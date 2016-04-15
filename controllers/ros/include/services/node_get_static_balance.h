#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_STATIC_BALANCE_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_STATIC_BALANCE_H

#include "ros/service_traits.h"


#include "node_get_static_balanceRequest.h"
#include "node_get_static_balanceResponse.h"


namespace webots_ros
{

struct node_get_static_balance
{

typedef node_get_static_balanceRequest Request;
typedef node_get_static_balanceResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_static_balance > {
  static const char* value()
  {
    return "1bb59681994e8cd9a01f91ec4bc81585";
  }

  static const char* value(const ::webots_ros::node_get_static_balance&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_static_balance > {
  static const char* value()
  {
    return "webots_ros/node_get_static_balance";
  }

  static const char* value(const ::webots_ros::node_get_static_balance&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_static_balanceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_ros::node_get_static_balanceRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_static_balanceRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_ros::node_get_static_balanceRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_static_balanceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_ros::node_get_static_balanceResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_static_balanceResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_static_balance >::value();
  }
  static const char* value(const ::webots_ros::node_get_static_balanceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_STATIC_BALANCE_H
