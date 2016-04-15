#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_NUMBER_OF_DEVICES_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_NUMBER_OF_DEVICES_H

#include "ros/service_traits.h"


#include "robot_get_number_of_devicesRequest.h"
#include "robot_get_number_of_devicesResponse.h"


namespace webots_ros
{

struct robot_get_number_of_devices
{

typedef robot_get_number_of_devicesRequest Request;
typedef robot_get_number_of_devicesResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_number_of_devices > {
  static const char* value()
  {
    return "2bac52383fa2a1c2fe9525f5313b4172";
  }

  static const char* value(const ::webots_ros::robot_get_number_of_devices&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_number_of_devices > {
  static const char* value()
  {
    return "webots_ros/robot_get_number_of_devices";
  }

  static const char* value(const ::webots_ros::robot_get_number_of_devices&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_number_of_devicesRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_number_of_devices >::value();
  }
  static const char* value(const ::webots_ros::robot_get_number_of_devicesRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_number_of_devicesRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_number_of_devices >::value();
  }
  static const char* value(const ::webots_ros::robot_get_number_of_devicesRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_number_of_devicesResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_number_of_devices >::value();
  }
  static const char* value(const ::webots_ros::robot_get_number_of_devicesResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_number_of_devicesResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_number_of_devices >::value();
  }
  static const char* value(const ::webots_ros::robot_get_number_of_devicesResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_NUMBER_OF_DEVICES_H
