#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_REVERT_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_REVERT_H

#include "ros/service_traits.h"


#include "supervisor_simulation_revertRequest.h"
#include "supervisor_simulation_revertResponse.h"


namespace webots_ros
{

struct supervisor_simulation_revert
{

typedef supervisor_simulation_revertRequest Request;
typedef supervisor_simulation_revertResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_simulation_revert > {
  static const char* value()
  {
    return "2a42f8e83a0d1e81ff806bb0cbf4e594";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_revert&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_revert > {
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_revert";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_revert&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_revertRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_revert >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_revertRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_simulation_revertRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_revert >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_revertRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_revertResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_revert >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_revertResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_revertResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_revert >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_revertResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_REVERT_H
