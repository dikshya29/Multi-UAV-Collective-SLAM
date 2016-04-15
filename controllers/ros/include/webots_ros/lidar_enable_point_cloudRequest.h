#ifndef WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUDREQUEST_H
#define WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUDREQUEST_H


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
struct lidar_enable_point_cloudRequest_
{
  typedef lidar_enable_point_cloudRequest_<ContainerAllocator> Type;

  lidar_enable_point_cloudRequest_()
    : enable(0)  {
    }
  lidar_enable_point_cloudRequest_(const ContainerAllocator& _alloc)
    : enable(0)  {
    }

    
   typedef uint8_t _enable_type;
  _enable_type enable;




  typedef boost::shared_ptr< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::lidar_enable_point_cloudRequest_<std::allocator<void> > lidar_enable_point_cloudRequest;

typedef boost::shared_ptr< ::webots_ros::lidar_enable_point_cloudRequest > lidar_enable_point_cloudRequestPtr;
typedef boost::shared_ptr< ::webots_ros::lidar_enable_point_cloudRequest const> lidar_enable_point_cloudRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace webots_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'webots_ros

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "afc85352ca2bea8ffa30f931a12de254";
  }

  static const char* value(const ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/lidar_enable_point_cloudRequest";
  }

  static const char* value(const ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 enable\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.enable);

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
struct Printer< ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::lidar_enable_point_cloudRequest_<ContainerAllocator>& v)
  {
        s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_LIDAR_ENABLE_POINT_CLOUDREQUEST_H
