#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNITRESPONSE_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNITRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include "ros/types.h"
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"



namespace webots_ros
{
template <class ContainerAllocator>
struct differential_wheels_get_speed_unitResponse_
{
  typedef differential_wheels_get_speed_unitResponse_<ContainerAllocator> Type;

  differential_wheels_get_speed_unitResponse_()
    : speedUnit(0.0)  {
    }
  differential_wheels_get_speed_unitResponse_(const ContainerAllocator& _alloc)
    : speedUnit(0.0)  {
    }


   typedef double _speedUnit_type;
  _speedUnit_type speedUnit;




  typedef boost::shared_ptr< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::differential_wheels_get_speed_unitResponse_<std::allocator<void> > differential_wheels_get_speed_unitResponse;

typedef boost::shared_ptr< ::webots_ros::differential_wheels_get_speed_unitResponse > differential_wheels_get_speed_unitResponsePtr;
typedef boost::shared_ptr< ::webots_ros::differential_wheels_get_speed_unitResponse const> differential_wheels_get_speed_unitResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros': ['/home/simon/my_Webots_Projects/controllers/ros_controller/catkin_ws/src/webots_ros/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5869bb7c2087d797eea5c6250689e752";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/differential_wheels_get_speed_unitResponse";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 speedUnit\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.speedUnit);

    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  };

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::differential_wheels_get_speed_unitResponse_<ContainerAllocator>& v)
  {
        s << indent << "speedUnit: ";
    Printer<double>::stream(s, indent + "  ", v.speedUnit);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_GET_SPEED_UNITRESPONSE_H
