#ifndef WEBOTS_ROS_MESSAGE_BRAKE_SET_DAMPING_CONSTANT_H
#define WEBOTS_ROS_MESSAGE_BRAKE_SET_DAMPING_CONSTANT_H

#include "ros/service_traits.h"


#include "brake_set_damping_constantRequest.h"
#include "brake_set_damping_constantResponse.h"


namespace webots_ros
{

struct brake_set_damping_constant
{

typedef brake_set_damping_constantRequest Request;
typedef brake_set_damping_constantResponse Response;
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
struct MD5Sum< ::webots_ros::brake_set_damping_constant > {
  static const char* value()
  {
    return "9975f483a2de8459df764bb4f35046e4";
  }

  static const char* value(const ::webots_ros::brake_set_damping_constant&) { return value(); }
};

template<>
struct DataType< ::webots_ros::brake_set_damping_constant > {
  static const char* value()
  {
    return "webots_ros/brake_set_damping_constant";
  }

  static const char* value(const ::webots_ros::brake_set_damping_constant&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::brake_set_damping_constantRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::brake_set_damping_constant >::value();
  }
  static const char* value(const ::webots_ros::brake_set_damping_constantRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::brake_set_damping_constantRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::brake_set_damping_constant >::value();
  }
  static const char* value(const ::webots_ros::brake_set_damping_constantRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::brake_set_damping_constantResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::brake_set_damping_constant >::value();
  }
  static const char* value(const ::webots_ros::brake_set_damping_constantResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::brake_set_damping_constantResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::brake_set_damping_constant >::value();
  }
  static const char* value(const ::webots_ros::brake_set_damping_constantResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_BRAKE_SET_DAMPING_CONSTANT_H
