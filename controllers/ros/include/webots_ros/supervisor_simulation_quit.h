#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUIT_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUIT_H

#include "ros/service_traits.h"


#include "supervisor_simulation_quitRequest.h"
#include "supervisor_simulation_quitResponse.h"


namespace webots_ros
{

struct supervisor_simulation_quit
{

typedef supervisor_simulation_quitRequest Request;
typedef supervisor_simulation_quitResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_simulation_quit > {
  static const char* value()
  {
    return "aa055de19e0bd8c0d180447e68004d56";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_quit&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_quit > {
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_quit";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_quit&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_quitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_quit >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_quitRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_simulation_quitRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_quit >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_quitRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_simulation_quitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_simulation_quit >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_quitResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_simulation_quitResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_simulation_quit >::value();
  }
  static const char* value(const ::webots_ros::supervisor_simulation_quitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUIT_H
