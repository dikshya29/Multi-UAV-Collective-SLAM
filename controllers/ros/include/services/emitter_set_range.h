#ifndef WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGE_H
#define WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGE_H

#include "ros/service_traits.h"


#include "emitter_set_rangeRequest.h"
#include "emitter_set_rangeResponse.h"


namespace webots_ros
{

struct emitter_set_range
{

typedef emitter_set_rangeRequest Request;
typedef emitter_set_rangeResponse Response;
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
struct MD5Sum< ::webots_ros::emitter_set_range > {
  static const char* value()
  {
    return "8112cdf5ba21a60e770ffbd686190b96";
  }

  static const char* value(const ::webots_ros::emitter_set_range&) { return value(); }
};

template<>
struct DataType< ::webots_ros::emitter_set_range > {
  static const char* value()
  {
    return "webots_ros/emitter_set_range";
  }

  static const char* value(const ::webots_ros::emitter_set_range&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::emitter_set_rangeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_set_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_set_rangeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::emitter_set_rangeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_set_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_set_rangeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::emitter_set_rangeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::emitter_set_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_set_rangeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::emitter_set_rangeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::emitter_set_range >::value();
  }
  static const char* value(const ::webots_ros::emitter_set_rangeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGE_H
