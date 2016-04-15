#ifndef ROS_CAMERA_HPP
#define ROS_CAMERA_HPP

#include <webots/Camera.hpp>
#include "RosSensor.hpp"
#include <webots_ros/camera_get_info.h>
#include <webots_ros/camera_get_focus_info.h>
#include <webots_ros/camera_get_zoom_info.h>
#include <webots_ros/camera_save_image.h>
#include <webots_ros/camera_set_focal_distance.h>
#include <webots_ros/camera_set_fov.h>

using namespace webots;

class RosCamera : public RosSensor 
{
  public :
    RosCamera(Camera *camera, Ros *ros);
    virtual ~RosCamera();

    virtual ros::Publisher createPublisher();
    virtual void           publishValue(ros::Publisher publisher);
    bool                   getInfoCallback(webots_ros::camera_get_info::Request &req, webots_ros::camera_get_info::Response &res);
    bool                   getFocusInfoCallback(webots_ros::camera_get_focus_info::Request &req, webots_ros::camera_get_focus_info::Response &res);
    bool                   getZoomInfoCallback(webots_ros::camera_get_zoom_info::Request &req, webots_ros::camera_get_zoom_info::Response &res);
    bool                   saveImageCallback(webots_ros::camera_save_image::Request &req, webots_ros::camera_save_image::Response &res);
    bool                   setFovCallback(webots_ros::camera_set_fov::Request &req, webots_ros::camera_set_fov::Response &res);
    bool                   setFocalDistanceCallback(webots_ros::camera_set_focal_distance::Request &req, webots_ros::camera_set_focal_distance::Response &res);

    virtual void           rosEnable(int ms)   {mCamera->enable(ms);}
    virtual void           rosDisable()        {mCamera->disable();}
    virtual int            rosSamplingPeriod() {return mCamera->getSamplingPeriod();}

  private :
    Camera            *mCamera;
    std::string        mColorTopic;
    ros::ServiceServer mInfoServer;
    ros::ServiceServer mFocusInfoServer;
    ros::ServiceServer mZoomInfoServer;
    ros::ServiceServer mImageServer;
    ros::ServiceServer mSetFovServer;
    ros::ServiceServer mSetFocalDistanceServer;
};

#endif //ROS_CAMERA_HPP
