#ifndef WEBOTS_ROS_MESSAGE_EMITTER_RECEIVER_SET_CHANNEL_H
#define WEBOTS_ROS_MESSAGE_EMITTER_RECEIVER_SET_CHANNEL_H

#include "ros/service_traits.h"


#include "emitter_receiver_set_channelRequest.h"
#include "emitter_receiver_set_channelResponse.h"


namespace webots_ros
{

struct emitter_receiver_set_channel
{

typedef emitter_receiver_set_channelRequest Request;
typedef emitter_receiver_set_channelResponse Response;
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
struct MD5Sum< ::webots_ros::emitter_receiver_set_channel > {
  static const char* value()
  {
    return "9b55ec36bf5c32a213eed86c1386b3a6";
  }

  static const char* value(const ::webots_ros::emitter_receiver_set_channel&) { return value(); }
};

template<>
struct DataType< ::webots_ros::emitter_receiver_set_channel > {
  static const char* value()
  {
    return "webots_ros/emitter_receiver_set_channel";
  }

  static const char* value(const ::webots_ros::emitter_receiver_set_channel&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::emitter_receiver_set_channelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_receiver_set_channel >::value();
  }
  static const char* value(const ::webots_ros::emitter_receiver_set_channelRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::emitter_receiver_set_channelRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_receiver_set_channel >::value();
  }
  static const char* value(const ::webots_ros::emitter_receiver_set_channelRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::emitter_receiver_set_channelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_receiver_set_channel >::value();
  }
  static const char* value(const ::webots_ros::emitter_receiver_set_channelResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::emitter_receiver_set_channelResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_receiver_set_channel >::value();
  }
  static const char* value(const ::webots_ros::emitter_receiver_set_channelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_RECEIVER_SET_CHANNEL_H
