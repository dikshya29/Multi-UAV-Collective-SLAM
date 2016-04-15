#ifndef WEBOTS_ROS_MESSAGE_ROBOT_SET_DATA_H
#define WEBOTS_ROS_MESSAGE_ROBOT_SET_DATA_H

#include "ros/service_traits.h"


#include "robot_set_dataRequest.h"
#include "robot_set_dataResponse.h"


namespace webots_ros
{

struct robot_set_data
{

typedef robot_set_dataRequest Request;
typedef robot_set_dataResponse Response;
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
struct MD5Sum< ::webots_ros::robot_set_data > {
  static const char* value()
  {
    return "307c687f9258695a900cc1ee81226e7a";
  }

  static const char* value(const ::webots_ros::robot_set_data&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_set_data > {
  static const char* value()
  {
    return "webots_ros/robot_set_data";
  }

  static const char* value(const ::webots_ros::robot_set_data&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_set_dataRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_set_data >::value();
  }
  static const char* value(const ::webots_ros::robot_set_dataRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_set_dataRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_set_data >::value();
  }
  static const char* value(const ::webots_ros::robot_set_dataRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_set_dataResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_set_data >::value();
  }
  static const char* value(const ::webots_ros::robot_set_dataResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_set_dataResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_set_data >::value();
  }
  static const char* value(const ::webots_ros::robot_set_dataResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_SET_DATA_H
