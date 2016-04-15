#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_GET_QUEUE_LENGTH_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_GET_QUEUE_LENGTH_H

#include "ros/service_traits.h"


#include "receiver_get_queue_lengthRequest.h"
#include "receiver_get_queue_lengthResponse.h"


namespace webots_ros
{

struct receiver_get_queue_length
{

typedef receiver_get_queue_lengthRequest Request;
typedef receiver_get_queue_lengthResponse Response;
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
struct MD5Sum< ::webots_ros::receiver_get_queue_length > {
  static const char* value()
  {
    return "181434e02fd55d36ecd9eae17eddd077";
  }

  static const char* value(const ::webots_ros::receiver_get_queue_length&) { return value(); }
};

template<>
struct DataType< ::webots_ros::receiver_get_queue_length > {
  static const char* value()
  {
    return "webots_ros/receiver_get_queue_length";
  }

  static const char* value(const ::webots_ros::receiver_get_queue_length&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::receiver_get_queue_lengthRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_queue_length >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_queue_lengthRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::receiver_get_queue_lengthRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_queue_length >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_queue_lengthRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::receiver_get_queue_lengthResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_queue_length >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_queue_lengthResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::receiver_get_queue_lengthResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_queue_length >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_queue_lengthResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_GET_QUEUE_LENGTH_H
