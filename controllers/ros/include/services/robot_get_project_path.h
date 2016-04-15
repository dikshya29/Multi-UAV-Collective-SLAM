#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_PROJECT_PATH_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_PROJECT_PATH_H

#include "ros/service_traits.h"


#include "robot_get_project_pathRequest.h"
#include "robot_get_project_pathResponse.h"


namespace webots_ros
{

struct robot_get_project_path
{

typedef robot_get_project_pathRequest Request;
typedef robot_get_project_pathResponse Response;
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
struct MD5Sum< ::webots_ros::robot_get_project_path > {
  static const char* value()
  {
    return "fe494ce3859bc7201e535d02fca42e4e";
  }

  static const char* value(const ::webots_ros::robot_get_project_path&) { return value(); }
};

template<>
struct DataType< ::webots_ros::robot_get_project_path > {
  static const char* value()
  {
    return "webots_ros/robot_get_project_path";
  }

  static const char* value(const ::webots_ros::robot_get_project_path&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::robot_get_project_pathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_project_path >::value();
  }
  static const char* value(const ::webots_ros::robot_get_project_pathRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::robot_get_project_pathRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_project_path >::value();
  }
  static const char* value(const ::webots_ros::robot_get_project_pathRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::robot_get_project_pathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::robot_get_project_path >::value();
  }
  static const char* value(const ::webots_ros::robot_get_project_pathResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::robot_get_project_pathResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::robot_get_project_path >::value();
  }
  static const char* value(const ::webots_ros::robot_get_project_pathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_PROJECT_PATH_H
