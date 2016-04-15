#ifndef ROS_SUPERVISOR_HPP
#define ROS_SUPERVISOR_HPP

#include <webots/Supervisor.hpp>
#include "Ros.hpp"

#include <webots_ros/supervisor_simulation_quit.h>
#include <webots_ros/supervisor_simulation_revert.h>
#include <webots_ros/supervisor_simulation_reset_physics.h>
#include <webots_ros/supervisor_simulation_get_mode.h>
#include <webots_ros/supervisor_simulation_set_mode.h>
#include <webots_ros/supervisor_animation_start_recording.h>
#include <webots_ros/supervisor_animation_stop_recording.h>
#include <webots_ros/supervisor_load_world.h>
#include <webots_ros/supervisor_save_world.h>
#include <webots_ros/supervisor_export_image.h>
#include <webots_ros/supervisor_movie_start_recording.h>
#include <webots_ros/supervisor_movie_stop_recording.h>
#include <webots_ros/supervisor_set_label.h>
#include <webots_ros/supervisor_get_root.h>
#include <webots_ros/supervisor_get_self.h>
#include <webots_ros/supervisor_get_from_def.h>
#include <webots_ros/supervisor_get_from_id.h>

#include <webots_ros/node_get_id.h>
#include <webots_ros/node_get_type.h>
#include <webots_ros/node_get_type_name.h>
#include <webots_ros/node_get_base_type_name.h>
#include <webots_ros/node_get_parent_node.h>
#include <webots_ros/node_get_position.h>
#include <webots_ros/node_get_orientation.h>
#include <webots_ros/node_get_center_of_mass.h>
#include <webots_ros/node_get_number_of_contact_points.h>
#include <webots_ros/node_get_contact_point.h>
#include <webots_ros/node_get_static_balance.h>
#include <webots_ros/node_get_status.h>
#include <webots_ros/node_get_field.h>
#include <webots_ros/node_get_velocity.h>
#include <webots_ros/node_set_velocity.h>
#include <webots_ros/node_remove.h>
#include <webots_ros/node_reset_physics.h>

#include <webots_ros/field_get_type.h>
#include <webots_ros/field_get_type_name.h>
#include <webots_ros/field_get_count.h>
#include <webots_ros/field_get_bool.h>
#include <webots_ros/field_get_int32.h>
#include <webots_ros/field_get_float.h>
#include <webots_ros/field_get_vec2f.h>
#include <webots_ros/field_get_vec3f.h>
#include <webots_ros/field_get_rotation.h>
#include <webots_ros/field_get_color.h>
#include <webots_ros/field_get_string.h>
#include <webots_ros/field_get_node.h>
#include <webots_ros/field_set_bool.h>
#include <webots_ros/field_set_int32.h>
#include <webots_ros/field_set_float.h>
#include <webots_ros/field_set_vec2f.h>
#include <webots_ros/field_set_vec3f.h>
#include <webots_ros/field_set_rotation.h>
#include <webots_ros/field_set_color.h>
#include <webots_ros/field_set_string.h>
#include <webots_ros/field_import_node.h>
#include <webots_ros/field_import_node_from_string.h>
#include <webots_ros/field_remove_node.h>


using namespace webots;

class RosSupervisor 
{
  public :
    RosSupervisor(Ros *ros, Supervisor *supervisor);
    virtual ~RosSupervisor();
    
    bool simulationQuitCallback(webots_ros::supervisor_simulation_quit::Request &req, webots_ros::supervisor_simulation_quit::Response &res);
    bool simulationRevertCallback(webots_ros::supervisor_simulation_revert::Request &req, webots_ros::supervisor_simulation_revert::Response &res);
    bool simulationResetPhysicsCallback(webots_ros::supervisor_simulation_reset_physics::Request &req, webots_ros::supervisor_simulation_reset_physics::Response &res);
    bool simulationGetModeCallback(webots_ros::supervisor_simulation_get_mode::Request &req, webots_ros::supervisor_simulation_get_mode::Response &res);
    bool simulationSetModeCallback(webots_ros::supervisor_simulation_set_mode::Request &req, webots_ros::supervisor_simulation_set_mode::Response &res);
    bool loadWorldCallback(webots_ros::supervisor_load_world::Request &req, webots_ros::supervisor_load_world::Response &res);
    bool saveWorldCallback(webots_ros::supervisor_save_world::Request &req, webots_ros::supervisor_save_world::Response &res);
    bool exportImageCallback(webots_ros::supervisor_export_image::Request &req, webots_ros::supervisor_export_image::Response &res);
    bool animationStartRecordingCallback(webots_ros::supervisor_animation_start_recording::Request &req, webots_ros::supervisor_animation_start_recording::Response &res);
    bool animationStopRecordingCallback(webots_ros::supervisor_animation_stop_recording::Request &req, webots_ros::supervisor_animation_stop_recording::Response &res);
    bool movieStartRecordingCallback(webots_ros::supervisor_movie_start_recording::Request &req, webots_ros::supervisor_movie_start_recording::Response &res);
    bool movieStopRecordingCallback(webots_ros::supervisor_movie_stop_recording::Request &req, webots_ros::supervisor_movie_stop_recording::Response &res);
    bool movieFailedCallback(webots_ros::node_get_status::Request &req, webots_ros::node_get_status::Response &res);
    bool movieIsReadyCallback(webots_ros::node_get_status::Request &req, webots_ros::node_get_status::Response &res);
    
    bool setLabelCallback(webots_ros::supervisor_set_label::Request &req, webots_ros::supervisor_set_label::Response &res);
    bool getRootCallback(webots_ros::supervisor_get_root::Request &req, webots_ros::supervisor_get_root::Response &res);
    bool getSelfCallback(webots_ros::supervisor_get_self::Request &req, webots_ros::supervisor_get_self::Response &res);
    bool getFromDefCallback(webots_ros::supervisor_get_from_def::Request &req, webots_ros::supervisor_get_from_def::Response &res);
    bool getFromIdCallback(webots_ros::supervisor_get_from_id::Request &req, webots_ros::supervisor_get_from_id::Response &res);

    bool nodeGetIdCallback(webots_ros::node_get_id::Request &req, webots_ros::node_get_id::Response &res);
    bool nodeGetTypeCallback(webots_ros::node_get_type::Request &req, webots_ros::node_get_type::Response &res);
    bool nodeGetTypeNameCallback(webots_ros::node_get_type_name::Request &req, webots_ros::node_get_type_name::Response &res);
    bool nodeGetBaseTypeNameCallback(webots_ros::node_get_base_type_name::Request &req, webots_ros::node_get_base_type_name::Response &res);
    bool nodeGetParentNodeCallback(webots_ros::node_get_parent_node::Request &req, webots_ros::node_get_parent_node::Response &res);
    bool nodeGetPositionCallback(webots_ros::node_get_position::Request &req, webots_ros::node_get_position::Response &res);
    bool nodeGetOrientationCallback(webots_ros::node_get_orientation::Request &req, webots_ros::node_get_orientation::Response &res);
    bool nodeGetCenterOfMassCallback(webots_ros::node_get_center_of_mass::Request &req, webots_ros::node_get_center_of_mass::Response &res);
    bool nodeGetNumberOfContactPointsCallback(webots_ros::node_get_number_of_contact_points::Request &req, webots_ros::node_get_number_of_contact_points::Response &res);
    bool nodeGetContactPointCallback(webots_ros::node_get_contact_point::Request &req, webots_ros::node_get_contact_point::Response &res);
    bool nodeGetStaticBalanceCallback(webots_ros::node_get_static_balance::Request &req, webots_ros::node_get_static_balance::Response &res);
    bool nodeGetVelocityCallback(webots_ros::node_get_velocity::Request &req, webots_ros::node_get_velocity::Response &res);
    bool nodeSetVelocityCallback(webots_ros::node_set_velocity::Request &req, webots_ros::node_set_velocity::Response &res);
    bool nodeGetFieldCallback(webots_ros::node_get_field::Request &req, webots_ros::node_get_field::Response &res);
    bool nodeRemoveCallback(webots_ros::node_remove::Request &req, webots_ros::node_remove::Response &res);
    bool nodeResetPhysicsCallback(webots_ros::node_reset_physics::Request &req, webots_ros::node_reset_physics::Response &res);

    bool fieldGetTypeCallback(webots_ros::field_get_type::Request &req, webots_ros::field_get_type::Response &res);
    bool fieldGetTypeNameCallback(webots_ros::field_get_type_name::Request &req, webots_ros::field_get_type_name::Response &res);
    bool fieldGetCountCallback(webots_ros::field_get_count::Request &req, webots_ros::field_get_count::Response &res);
    bool fieldGetBoolCallback(webots_ros::field_get_bool::Request &req, webots_ros::field_get_bool::Response &res);
    bool fieldGetInt32Callback(webots_ros::field_get_int32::Request &req, webots_ros::field_get_int32::Response &res);
    bool fieldGetFloatCallback(webots_ros::field_get_float::Request &req, webots_ros::field_get_float::Response &res);
    bool fieldGetVec2fCallback(webots_ros::field_get_vec2f::Request &req, webots_ros::field_get_vec2f::Response &res);
    bool fieldGetVec3fCallback(webots_ros::field_get_vec3f::Request &req, webots_ros::field_get_vec3f::Response &res);
    bool fieldGetRotationCallback(webots_ros::field_get_rotation::Request &req, webots_ros::field_get_rotation::Response &res);
    bool fieldGetColorCallback(webots_ros::field_get_color::Request &req, webots_ros::field_get_color::Response &res);
    bool fieldGetStringCallback(webots_ros::field_get_string::Request &req, webots_ros::field_get_string::Response &res);
    bool fieldGetNodeCallback(webots_ros::field_get_node::Request &req, webots_ros::field_get_node::Response &res);
    bool fieldSetBoolCallback(webots_ros::field_set_bool::Request &req, webots_ros::field_set_bool::Response &res);
    bool fieldSetInt32Callback(webots_ros::field_set_int32::Request &req, webots_ros::field_set_int32::Response &res);
    bool fieldSetFloatCallback(webots_ros::field_set_float::Request &req, webots_ros::field_set_float::Response &res);
    bool fieldSetVec2fCallback(webots_ros::field_set_vec2f::Request &req, webots_ros::field_set_vec2f::Response &res);
    bool fieldSetVec3fCallback(webots_ros::field_set_vec3f::Request &req, webots_ros::field_set_vec3f::Response &res);
    bool fieldSetRotationCallback(webots_ros::field_set_rotation::Request &req, webots_ros::field_set_rotation::Response &res);
    bool fieldSetColorCallback(webots_ros::field_set_color::Request &req, webots_ros::field_set_color::Response &res);
    bool fieldSetStringCallback(webots_ros::field_set_string::Request &req, webots_ros::field_set_string::Response &res);
    bool fieldImportNodeCallback(webots_ros::field_import_node::Request &req, webots_ros::field_import_node::Response &res);
    bool fieldImportNodeFromStringCallback(webots_ros::field_import_node_from_string::Request &req, webots_ros::field_import_node_from_string::Response &res);
    bool fieldRemoveNodeCallback(webots_ros::field_remove_node::Request &req, webots_ros::field_remove_node::Response &res);
    
  private :
    Supervisor        *mSupervisor;
    Ros               *mRos;
    ros::ServiceServer mSimulationQuitServer;
    ros::ServiceServer mSimulationRevertServer;
    ros::ServiceServer mSimulationResetPhysicsServer;
    ros::ServiceServer mSimulationGetModeServer;
    ros::ServiceServer mSimulationSetModeServer;
    ros::ServiceServer mLoadWorldServer;
    ros::ServiceServer mSaveWorldServer;
    ros::ServiceServer mExportImageServer;
    ros::ServiceServer mAnimationStartRecordingServer;
    ros::ServiceServer mAnimationStopRecordingServer;
    ros::ServiceServer mMovieStartRecordingServer;
    ros::ServiceServer mMovieStopRecordingServer;
    ros::ServiceServer mMovieFailedServer;
    ros::ServiceServer mMovieIsReadyServer;
    ros::ServiceServer mSetLabelServer;
    ros::ServiceServer mGetRootServer;
    ros::ServiceServer mGetSelfServer;
    ros::ServiceServer mGetFromDefServer;
    ros::ServiceServer mGetFromIdServer;

    ros::ServiceServer mNodeGetIdServer;
    ros::ServiceServer mNodeGetTypeServer;
    ros::ServiceServer mNodeGetTypeNameServer;
    ros::ServiceServer mNodeGetBaseTypeNameServer;
    ros::ServiceServer mNodeGetParentNodeServer;
    ros::ServiceServer mNodeGetPositionServer;
    ros::ServiceServer mNodeGetOrientationServer;
    ros::ServiceServer mNodeGetCenterOfMassServer;
    ros::ServiceServer mNodeGetNumberOfContactPointsServer;
    ros::ServiceServer mNodeGetContactPointServer;
    ros::ServiceServer mNodeGetStaticBalanceServer;
    ros::ServiceServer mNodeGetVelocityServer;
    ros::ServiceServer mNodeSetVelocityServer;
    ros::ServiceServer mNodeGetFieldServer;
    ros::ServiceServer mNodeRemoveServer;
    ros::ServiceServer mNodeResetPhysicsServer;

    ros::ServiceServer mFieldGetTypeServer;
    ros::ServiceServer mFieldGetTypeNameServer;
    ros::ServiceServer mFieldGetCountServer;
    ros::ServiceServer mFieldGetBoolServer;
    ros::ServiceServer mFieldGetInt32Server;
    ros::ServiceServer mFieldGetFloatServer;
    ros::ServiceServer mFieldGetVec2fServer;
    ros::ServiceServer mFieldGetVec3fServer;
    ros::ServiceServer mFieldGetRotationServer;
    ros::ServiceServer mFieldGetColorServer;
    ros::ServiceServer mFieldGetStringServer;
    ros::ServiceServer mFieldGetNodeServer;
    ros::ServiceServer mFieldSetBoolServer;
    ros::ServiceServer mFieldSetInt32Server;
    ros::ServiceServer mFieldSetFloatServer;
    ros::ServiceServer mFieldSetVec2fServer;
    ros::ServiceServer mFieldSetVec3fServer;
    ros::ServiceServer mFieldSetOrientationServer;
    ros::ServiceServer mFieldSetRotationServer;
    ros::ServiceServer mFieldSetColorServer;
    ros::ServiceServer mFieldSetStringServer;
    ros::ServiceServer mFieldImportNodeServer;
    ros::ServiceServer mFieldImportNodeFromStringServer;
    ros::ServiceServer mFieldRemoveNodeServer;
};

#endif //ROS_SUPERVISOR_HPP
