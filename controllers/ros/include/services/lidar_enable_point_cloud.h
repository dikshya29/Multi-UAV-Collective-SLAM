#ifndef WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUD_H
#define WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUD_H

#include "ros/service_traits.h"


#include "lidar_enable_point_cloudRequest.h"
#include "lidar_enable_point_cloudResponse.h"


namespace webots_ros
{

struct lidar_enable_point_cloud
{

typedef lidar_enable_point_cloudRequest Request;
typedef lidar_enable_point_cloudResponse Response;
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
struct MD5Sum< ::webots_ros::lidar_enable_point_cloud > {
  static const char* value()
  {
    return "afc85352ca2bea8ffa30f931a12de254";
  }

  static const char* value(const ::webots_ros::lidar_enable_point_cloud&) { return value(); }
};

template<>
struct DataType< ::webots_ros::lidar_enable_point_cloud > {
  static const char* value()
  {
    return "webots_ros/lidar_enable_point_cloud";
  }

  static const char* value(const ::webots_ros::lidar_enable_point_cloud&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::lidar_enable_point_cloudRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_enable_point_cloud >::value();
  }
  static const char* value(const ::webots_ros::lidar_enable_point_cloudRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::lidar_enable_point_cloudRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_enable_point_cloud >::value();
  }
  static const char* value(const ::webots_ros::lidar_enable_point_cloudRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::lidar_enable_point_cloudResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::lidar_enable_point_cloud >::value();
  }
  static const char* value(const ::webots_ros::lidar_enable_point_cloudResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::lidar_enable_point_cloudResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::lidar_enable_point_cloud >::value();
  }
  static const char* value(const ::webots_ros::lidar_enable_point_cloudResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUD_H
