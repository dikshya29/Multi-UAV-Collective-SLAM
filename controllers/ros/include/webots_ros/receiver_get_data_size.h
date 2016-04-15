#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_GET_DATA_SIZE_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_GET_DATA_SIZE_H

#include "ros/service_traits.h"


#include "receiver_get_data_sizeRequest.h"
#include "receiver_get_data_sizeResponse.h"


namespace webots_ros
{

struct receiver_get_data_size
{

typedef receiver_get_data_sizeRequest Request;
typedef receiver_get_data_sizeResponse Response;
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
struct MD5Sum< ::webots_ros::receiver_get_data_size > {
  static const char* value()
  {
    return "27a11ce8d1e9e8846f091b6b5f11f310";
  }

  static const char* value(const ::webots_ros::receiver_get_data_size&) { return value(); }
};

template<>
struct DataType< ::webots_ros::receiver_get_data_size > {
  static const char* value()
  {
    return "webots_ros/receiver_get_data_size";
  }

  static const char* value(const ::webots_ros::receiver_get_data_size&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::receiver_get_data_sizeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_data_size >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_data_sizeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::receiver_get_data_sizeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_data_size >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_data_sizeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::receiver_get_data_sizeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::receiver_get_data_size >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_data_sizeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::receiver_get_data_sizeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::receiver_get_data_size >::value();
  }
  static const char* value(const ::webots_ros::receiver_get_data_sizeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_GET_DATA_SIZE_H
