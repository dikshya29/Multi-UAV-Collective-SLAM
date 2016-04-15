#ifndef WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_APERTURE_H
#define WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_APERTURE_H

#include "ros/service_traits.h"


#include "distance_sensor_get_apertureRequest.h"
#include "distance_sensor_get_apertureResponse.h"


namespace webots_ros
{

struct distance_sensor_get_aperture
{

typedef distance_sensor_get_apertureRequest Request;
typedef distance_sensor_get_apertureResponse Response;
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
struct MD5Sum< ::webots_ros::distance_sensor_get_aperture > {
  static const char* value()
  {
    return "17ac4c292c09918a6faf733d143ad098";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_aperture&) { return value(); }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_aperture > {
  static const char* value()
  {
    return "webots_ros/distance_sensor_get_aperture";
  }

  static const char* value(const ::webots_ros::distance_sensor_get_aperture&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_apertureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_aperture >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_apertureRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::distance_sensor_get_apertureRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_aperture >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_apertureRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::distance_sensor_get_apertureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::distance_sensor_get_aperture >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_apertureResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::distance_sensor_get_apertureResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::distance_sensor_get_aperture >::value();
  }
  static const char* value(const ::webots_ros::distance_sensor_get_apertureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISTANCE_SENSOR_GET_APERTURE_H
