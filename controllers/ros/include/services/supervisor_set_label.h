#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SET_LABEL_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SET_LABEL_H

#include "ros/service_traits.h"


#include "supervisor_set_labelRequest.h"
#include "supervisor_set_labelResponse.h"


namespace webots_ros
{

struct supervisor_set_label
{

typedef supervisor_set_labelRequest Request;
typedef supervisor_set_labelResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_set_label > {
  static const char* value()
  {
    return "f531e55ec87f9b43cc80e4cbef35f51f";
  }

  static const char* value(const ::webots_ros::supervisor_set_label&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_set_label > {
  static const char* value()
  {
    return "webots_ros/supervisor_set_label";
  }

  static const char* value(const ::webots_ros::supervisor_set_label&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_set_labelRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_ros::supervisor_set_labelRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_set_labelRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_ros::supervisor_set_labelRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_set_labelResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_ros::supervisor_set_labelResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_set_labelResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_set_label >::value();
  }
  static const char* value(const ::webots_ros::supervisor_set_labelResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SET_LABEL_H
