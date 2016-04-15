#ifndef WEBOTS_ROS_MESSAGE_CONNECTOR_LOCK_H
#define WEBOTS_ROS_MESSAGE_CONNECTOR_LOCK_H

#include "ros/service_traits.h"


#include "connector_lockRequest.h"
#include "connector_lockResponse.h"


namespace webots_ros
{

struct connector_lock
{

typedef connector_lockRequest Request;
typedef connector_lockResponse Response;
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
struct MD5Sum< ::webots_ros::connector_lock > {
  static const char* value()
  {
    return "e8ef0421913a1a27fc485b008f1602fa";
  }

  static const char* value(const ::webots_ros::connector_lock&) { return value(); }
};

template<>
struct DataType< ::webots_ros::connector_lock > {
  static const char* value()
  {
    return "webots_ros/connector_lock";
  }

  static const char* value(const ::webots_ros::connector_lock&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::connector_lockRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::connector_lock >::value();
  }
  static const char* value(const ::webots_ros::connector_lockRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::connector_lockRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::connector_lock >::value();
  }
  static const char* value(const ::webots_ros::connector_lockRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::connector_lockResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::connector_lock >::value();
  }
  static const char* value(const ::webots_ros::connector_lockResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::connector_lockResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::connector_lock >::value();
  }
  static const char* value(const ::webots_ros::connector_lockResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_CONNECTOR_LOCK_H
