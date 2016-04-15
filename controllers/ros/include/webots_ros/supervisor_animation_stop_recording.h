#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_STOP_RECORDING_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_STOP_RECORDING_H

#include "ros/service_traits.h"


#include "supervisor_animation_stop_recordingRequest.h"
#include "supervisor_animation_stop_recordingResponse.h"


namespace webots_ros
{

struct supervisor_animation_stop_recording
{

typedef supervisor_animation_stop_recordingRequest Request;
typedef supervisor_animation_stop_recordingResponse Response;
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
struct MD5Sum< ::webots_ros::supervisor_animation_stop_recording > {
  static const char* value()
  {
    return "2a42f8e83a0d1e81ff806bb0cbf4e594";
  }

  static const char* value(const ::webots_ros::supervisor_animation_stop_recording&) { return value(); }
};

template<>
struct DataType< ::webots_ros::supervisor_animation_stop_recording > {
  static const char* value()
  {
    return "webots_ros/supervisor_animation_stop_recording";
  }

  static const char* value(const ::webots_ros::supervisor_animation_stop_recording&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::supervisor_animation_stop_recordingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_animation_stop_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_stop_recordingRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::supervisor_animation_stop_recordingRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_animation_stop_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_stop_recordingRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::supervisor_animation_stop_recordingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::supervisor_animation_stop_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_stop_recordingResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::supervisor_animation_stop_recordingResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::supervisor_animation_stop_recording >::value();
  }
  static const char* value(const ::webots_ros::supervisor_animation_stop_recordingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_ANIMATION_STOP_RECORDING_H
