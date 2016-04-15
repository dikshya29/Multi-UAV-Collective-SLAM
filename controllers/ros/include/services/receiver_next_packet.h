#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKET_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKET_H

#include "ros/service_traits.h"


#include "receiver_next_packetRequest.h"
#include "receiver_next_packetResponse.h"


namespace webots_ros
{

struct receiver_next_packet
{

typedef receiver_next_packetRequest Request;
typedef receiver_next_packetResponse Response;
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
struct MD5Sum< ::webots_ros::receiver_next_packet > {
  static const char* value()
  {
    return "2a42f8e83a0d1e81ff806bb0cbf4e594";
  }

  static const char* value(const ::webots_ros::receiver_next_packet&) { return value(); }
};

template<>
struct DataType< ::webots_ros::receiver_next_packet > {
  static const char* value()
  {
    return "webots_ros/receiver_next_packet";
  }

  static const char* value(const ::webots_ros::receiver_next_packet&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::receiver_next_packetRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_next_packet >::value();
  }
  static const char* value(const ::webots_ros::receiver_next_packetRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::receiver_next_packetRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_next_packet >::value();
  }
  static const char* value(const ::webots_ros::receiver_next_packetRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::receiver_next_packetResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_next_packet >::value();
  }
  static const char* value(const ::webots_ros::receiver_next_packetResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::receiver_next_packetResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_next_packet >::value();
  }
  static const char* value(const ::webots_ros::receiver_next_packetResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKET_H
