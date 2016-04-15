#ifndef WEBOTS_ROS_MESSAGE_EMITTER_GET_BUFFER_SIZE_H
#define WEBOTS_ROS_MESSAGE_EMITTER_GET_BUFFER_SIZE_H

#include "ros/service_traits.h"


#include "emitter_get_buffer_sizeRequest.h"
#include "emitter_get_buffer_sizeResponse.h"


namespace webots_ros
{

struct emitter_get_buffer_size
{

typedef emitter_get_buffer_sizeRequest Request;
typedef emitter_get_buffer_sizeResponse Response;
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
struct MD5Sum< ::webots_ros::emitter_get_buffer_size > {
  static const char* value()
  {
    return "1e9e5421ccd070e8d7d0b6ba843f3f1a";
  }

  static const char* value(const ::webots_ros::emitter_get_buffer_size&) { return value(); }
};

template<>
struct DataType< ::webots_ros::emitter_get_buffer_size > {
  static const char* value()
  {
    return "webots_ros/emitter_get_buffer_size";
  }

  static const char* value(const ::webots_ros::emitter_get_buffer_size&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::emitter_get_buffer_sizeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_get_buffer_size >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_buffer_sizeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::emitter_get_buffer_sizeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_get_buffer_size >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_buffer_sizeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::emitter_get_buffer_sizeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_get_buffer_size >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_buffer_sizeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::emitter_get_buffer_sizeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_get_buffer_size >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_buffer_sizeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_GET_BUFFER_SIZE_H
