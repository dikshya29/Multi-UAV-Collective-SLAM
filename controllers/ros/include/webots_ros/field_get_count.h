#ifndef WEBOTS_ROS_MESSAGE_FIELD_GET_COUNT_H
#define WEBOTS_ROS_MESSAGE_FIELD_GET_COUNT_H

#include "ros/service_traits.h"


#include "field_get_countRequest.h"
#include "field_get_countResponse.h"


namespace webots_ros
{

struct field_get_count
{

typedef field_get_countRequest Request;
typedef field_get_countResponse Response;
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
struct MD5Sum< ::webots_ros::field_get_count > {
  static const char* value()
  {
    return "3e2de6f1a76fa011e87122941131671e";
  }

  static const char* value(const ::webots_ros::field_get_count&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_get_count > {
  static const char* value()
  {
    return "webots_ros/field_get_count";
  }

  static const char* value(const ::webots_ros::field_get_count&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_get_countRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_count >::value();
  }
  static const char* value(const ::webots_ros::field_get_countRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_get_countRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_count >::value();
  }
  static const char* value(const ::webots_ros::field_get_countRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_get_countResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_get_count >::value();
  }
  static const char* value(const ::webots_ros::field_get_countResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_get_countResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_get_count >::value();
  }
  static const char* value(const ::webots_ros::field_get_countResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_GET_COUNT_H
