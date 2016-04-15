#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_START_RECORDING_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_START_RECORDING_H

#include "ros/service_traits.h"


#include "supervisor_animation_start_recordingRequest.h"
#include "supervisor_animation_start_recordingResponse.h"


namespace webots_ros
{

struct supervisor_animation_start_recording
{

typedef supervisor_animation_start_recordingRequest Request;
typedef supervisor_animation_start_recordingResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_animation_start_recording > {
  static const char* value()
  {
    return "b6de0f8a85f11aeb56b1f3e2c833f7d3";
  }

  static const char* value(const ::webots_ros::supervisor_animation_start_recording&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_animation_start_recording > {
  static const char* value()
  {
    return "webots_ros/supervisor_animation_start_recording";
  }

  static const char* value(const ::webots_ros::supervisor_animation_start_recording&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_animation_start_recordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_animation_start_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_start_recordingRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_animation_start_recordingRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_animation_start_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_start_recordingRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_animation_start_recordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_animation_start_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_start_recordingResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_animation_start_recordingResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_animation_start_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_start_recordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_START_RECORDING_H
