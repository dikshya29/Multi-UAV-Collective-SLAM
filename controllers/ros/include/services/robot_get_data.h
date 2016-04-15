#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_DATA_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_DATA_H

#include "ros/service_traits.h"


#include "robot_get_dataRequest.h"
#include "robot_get_dataResponse.h"


namespace webots_ros
{

struct robot_get_data
{

typedef robot_get_dataRequest Request;
typedef robot_get_dataResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_data > {
  static const char* value()
  {
    return "8f88cf643f79323f84fb452c78009be0";
  }

  static const char* value(const ::webots_ros::robot_get_data&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_data > {
  static const char* value()
  {
    return "webots_ros/robot_get_data";
  }

  static const char* value(const ::webots_ros::robot_get_data&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_dataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_data >::value();
  }
  static const char* value(const ::webots_ros::robot_get_dataRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_dataRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_data >::value();
  }
  static const char* value(const ::webots_ros::robot_get_dataRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_dataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_data >::value();
  }
  static const char* value(const ::webots_ros::robot_get_dataResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_dataResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_data >::value();
  }
  static const char* value(const ::webots_ros::robot_get_dataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_DATA_H
