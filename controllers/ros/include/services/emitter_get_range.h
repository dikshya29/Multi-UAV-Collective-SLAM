#ifndef WEBOTS_ROS_MESSAGE_EMITTER_GET_RANGE_H
#define WEBOTS_ROS_MESSAGE_EMITTER_GET_RANGE_H

#include "ros/service_traits.h"


#include "emitter_get_rangeRequest.h"
#include "emitter_get_rangeResponse.h"


namespace webots_ros
{

struct emitter_get_range
{

typedef emitter_get_rangeRequest Request;
typedef emitter_get_rangeResponse Response;
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
struct MD5Sum< ::webots_ros::emitter_get_range > {
  static const char* value()
  {
    return "3f75b124bfb0695a677231bb4c62d5d2";
  }

  static const char* value(const ::webots_ros::emitter_get_range&) { return value(); }
};

template<>
struct DataType< ::webots_ros::emitter_get_range > {
  static const char* value()
  {
    return "webots_ros/emitter_get_range";
  }

  static const char* value(const ::webots_ros::emitter_get_range&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::emitter_get_rangeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_get_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_rangeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::emitter_get_rangeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_get_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_rangeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::emitter_get_rangeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_get_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_rangeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::emitter_get_rangeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_get_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_get_rangeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_GET_RANGE_H
