#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERS_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERS_H

#include "ros/service_traits.h"


#include "differential_wheels_set_encodersRequest.h"
#include "differential_wheels_set_encodersResponse.h"


namespace webots_ros
{

struct differential_wheels_set_encoders
{

typedef differential_wheels_set_encodersRequest Request;
typedef differential_wheels_set_encodersResponse Response;
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
struct MD5Sum< ::webots_ros::differential_wheels_set_encoders > {
  static const char* value()
  {
    return "a3f660fa6747eeaef7c7125d534eaa59";
  }

  static const char* value(const ::webots_ros::differential_wheels_set_encoders&) { return value(); }
};

template<>
struct DataType< ::webots_ros::differential_wheels_set_encoders > {
  static const char* value()
  {
    return "webots_ros/differential_wheels_set_encoders";
  }

  static const char* value(const ::webots_ros::differential_wheels_set_encoders&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::differential_wheels_set_encodersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_set_encoders >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_set_encodersRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::differential_wheels_set_encodersRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_set_encoders >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_set_encodersRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::differential_wheels_set_encodersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::differential_wheels_set_encoders >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_set_encodersResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::differential_wheels_set_encodersResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::differential_wheels_set_encoders >::value();
  }
  static const char* value(const ::webots_ros::differential_wheels_set_encodersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERS_H
