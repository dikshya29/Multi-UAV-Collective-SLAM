#ifndef WEBOTS_ROS_MESSAGE_LIDAR_SET_FREQUENCY_H
#define WEBOTS_ROS_MESSAGE_LIDAR_SET_FREQUENCY_H

#include "ros/service_traits.h"


#include "lidar_set_frequencyRequest.h"
#include "lidar_set_frequencyResponse.h"


namespace webots_ros
{

struct lidar_set_frequency
{

typedef lidar_set_frequencyRequest Request;
typedef lidar_set_frequencyResponse Response;
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
struct MD5Sum< ::webots_ros::lidar_set_frequency > {
  static const char* value()
  {
    return "5585ac2301e1a0bbb2213563d76ddad4";
  }

  static const char* value(const ::webots_ros::lidar_set_frequency&) { return value(); }
};

template<>
struct DataType< ::webots_ros::lidar_set_frequency > {
  static const char* value()
  {
    return "webots_ros/lidar_set_frequency";
  }

  static const char* value(const ::webots_ros::lidar_set_frequency&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::lidar_set_frequencyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_set_frequency >::value();
  }
  static const char* value(const ::webots_ros::lidar_set_frequencyRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::lidar_set_frequencyRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_set_frequency >::value();
  }
  static const char* value(const ::webots_ros::lidar_set_frequencyRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::lidar_set_frequencyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_set_frequency >::value();
  }
  static const char* value(const ::webots_ros::lidar_set_frequencyResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::lidar_set_frequencyResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_set_frequency >::value();
  }
  static const char* value(const ::webots_ros::lidar_set_frequencyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LIDAR_SET_FREQUENCY_H
