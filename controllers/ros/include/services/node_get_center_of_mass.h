#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H

#include "ros/service_traits.h"


#include "node_get_center_of_massRequest.h"
#include "node_get_center_of_massResponse.h"


namespace webots_ros
{

struct node_get_center_of_mass
{

typedef node_get_center_of_massRequest Request;
typedef node_get_center_of_massResponse Response;
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
struct MD5Sum< ::webots_ros::node_get_center_of_mass > {
  static const char* value()
  {
    return "cab0a7dcf2d54b9136be289ec365456a";
  }

  static const char* value(const ::webots_ros::node_get_center_of_mass&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_center_of_mass > {
  static const char* value()
  {
    return "webots_ros/node_get_center_of_mass";
  }

  static const char* value(const ::webots_ros::node_get_center_of_mass&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_center_of_massRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_center_of_massRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_center_of_massResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_center_of_massResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_center_of_mass >::value();
  }
  static const char* value(const ::webots_ros::node_get_center_of_massResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_CENTER_OF_MASS_H
