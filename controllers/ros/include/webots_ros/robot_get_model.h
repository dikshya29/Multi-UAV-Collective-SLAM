#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_MODEL_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_MODEL_H

#include "ros/service_traits.h"


#include "robot_get_modelRequest.h"
#include "robot_get_modelResponse.h"


namespace webots_ros
{

struct robot_get_model
{

typedef robot_get_modelRequest Request;
typedef robot_get_modelResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_model > {
  static const char* value()
  {
    return "84a2cc35e0ea265a76f42c32a9fb704a";
  }

  static const char* value(const ::webots_ros::robot_get_model&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_model > {
  static const char* value()
  {
    return "webots_ros/robot_get_model";
  }

  static const char* value(const ::webots_ros::robot_get_model&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_modelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_model >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modelRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_modelRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_model >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modelRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_modelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_model >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modelResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_modelResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_model >::value();
  }
  static const char* value(const ::webots_ros::robot_get_modelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_MODEL_H
