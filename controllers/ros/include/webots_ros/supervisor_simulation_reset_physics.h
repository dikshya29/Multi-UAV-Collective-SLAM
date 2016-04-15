#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_RESET_PHYSICS_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_RESET_PHYSICS_H

#include "ros/service_traits.h"


#include "supervisor_simulation_reset_physicsRequest.h"
#include "supervisor_simulation_reset_physicsResponse.h"


namespace webots_ros
{

struct supervisor_simulation_reset_physics
{

typedef supervisor_simulation_reset_physicsRequest Request;
typedef supervisor_simulation_reset_physicsResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_simulation_reset_physics > {
  static const char* value()
  {
    return "2a42f8e83a0d1e81ff806bb0cbf4e594";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_reset_physics&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_reset_physics > {
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_reset_physics";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_reset_physics&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_reset_physicsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_reset_physicsRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_simulation_reset_physicsRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_reset_physicsRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_reset_physicsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_reset_physicsResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_reset_physicsResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_reset_physics >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_reset_physicsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_RESET_PHYSICS_H
