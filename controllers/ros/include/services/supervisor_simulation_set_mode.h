#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODE_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODE_H

#include "ros/service_traits.h"


#include "supervisor_simulation_set_modeRequest.h"
#include "supervisor_simulation_set_modeResponse.h"


namespace webots_ros
{

struct supervisor_simulation_set_mode
{

typedef supervisor_simulation_set_modeRequest Request;
typedef supervisor_simulation_set_modeResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_simulation_set_mode > {
  static const char* value()
  {
    return "85eca10f52dfb9f021add50423bffa27";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_set_mode&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_set_mode > {
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_set_mode";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_set_mode&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_set_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_set_mode >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_set_modeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_simulation_set_modeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_set_mode >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_set_modeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_set_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_set_mode >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_set_modeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_set_modeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_set_mode >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_set_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_SET_MODE_H
