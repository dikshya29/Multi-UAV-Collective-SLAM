#ifndef WEBOTS_ROS_MESSAGE_EMITTER_SEND_H
#define WEBOTS_ROS_MESSAGE_EMITTER_SEND_H

#include "ros/service_traits.h"


#include "emitter_sendRequest.h"
#include "emitter_sendResponse.h"


namespace webots_ros
{

struct emitter_send
{

typedef emitter_sendRequest Request;
typedef emitter_sendResponse Response;
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
struct MD5Sum< ::webots_ros::emitter_send > {
  static const char* value()
  {
    return "c76e52920e9b93bcbf4a82907a757153";
  }

  static const char* value(const ::webots_ros::emitter_send&) { return value(); }
};

template<>
struct DataType< ::webots_ros::emitter_send > {
  static const char* value()
  {
    return "webots_ros/emitter_send";
  }

  static const char* value(const ::webots_ros::emitter_send&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::emitter_sendRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_send >::value();
  }
  static const char* value(const ::webots_ros::emitter_sendRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::emitter_sendRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_send >::value();
  }
  static const char* value(const ::webots_ros::emitter_sendRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::emitter_sendResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_send >::value();
  }
  static const char* value(const ::webots_ros::emitter_sendResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::emitter_sendResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_send >::value();
  }
  static const char* value(const ::webots_ros::emitter_sendResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_SEND_H
