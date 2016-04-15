#ifndef WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_H
#define WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_H

#include "ros/service_traits.h"


#include "field_import_nodeRequest.h"
#include "field_import_nodeResponse.h"


namespace webots_ros
{

struct field_import_node
{

typedef field_import_nodeRequest Request;
typedef field_import_nodeResponse Response;
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
struct MD5Sum< ::webots_ros::field_import_node > {
  static const char* value()
  {
    return "7ae35e4ee41afc3355320c40a4ed6624";
  }

  static const char* value(const ::webots_ros::field_import_node&) { return value(); }
};

template<>
struct DataType< ::webots_ros::field_import_node > {
  static const char* value()
  {
    return "webots_ros/field_import_node";
  }

  static const char* value(const ::webots_ros::field_import_node&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::field_import_nodeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_import_node >::value();
  }
  static const char* value(const ::webots_ros::field_import_nodeRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::field_import_nodeRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_import_node >::value();
  }
  static const char* value(const ::webots_ros::field_import_nodeRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::field_import_nodeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::field_import_node >::value();
  }
  static const char* value(const ::webots_ros::field_import_nodeResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::field_import_nodeResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::field_import_node >::value();
  }
  static const char* value(const ::webots_ros::field_import_nodeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_FIELD_IMPORT_NODE_H