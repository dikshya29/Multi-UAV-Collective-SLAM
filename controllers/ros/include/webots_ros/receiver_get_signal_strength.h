#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_GET_SIGNAL_STRENGTH_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_GET_SIGNAL_STRENGTH_H

#include "ros/service_traits.h"


#include "receiver_get_signal_strengthRequest.h"
#include "receiver_get_signal_strengthResponse.h"


namespace webots_ros
{

struct receiver_get_signal_strength
{

typedef receiver_get_signal_strengthRequest Request;
typedef receiver_get_signal_strengthResponse Response;
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
struct MD5Sum< ::webots_ros::receiver_get_signal_strength > {
  static const char* value()
  {
    return "6a88471aa2af0da02ada5237316087f4";
  }

  static const char* value(const ::webots_ros::receiver_get_signal_strength&) { return value(); }
};

template<>
struct DataType< ::webots_ros::receiver_get_signal_strength > {
  static const char* value()
  {
    return "webots_ros/receiver_get_signal_strength";
  }

  static const char* value(const ::webots_ros::receiver_get_signal_strength&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::receiver_get_signal_strengthRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_signal_strength >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_signal_strengthRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::receiver_get_signal_strengthRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_signal_strength >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_signal_strengthRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::receiver_get_signal_strengthResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_signal_strength >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_signal_strengthResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::receiver_get_signal_strengthResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_signal_strength >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_signal_strengthResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_GET_SIGNAL_STRENGTH_H
