#ifndef WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKETRESPONSE_H
#define WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKETRESPONSE_H


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
struct receiver_next_packetResponse_
{
  typedef receiver_next_packetResponse_<ContainerAllocator> Type;

  receiver_next_packetResponse_()
    : success(0)  {
    }
  receiver_next_packetResponse_(const ContainerAllocator& _alloc)
    : success(0)  {
    }


   typedef int8_t _success_type;
  _success_type success;




  typedef boost::shared_ptr< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::receiver_next_packetResponse_<std::allocator<void> > receiver_next_packetResponse;

typedef boost::shared_ptr< ::webots_ros::receiver_next_packetResponse > receiver_next_packetResponsePtr;
typedef boost::shared_ptr< ::webots_ros::receiver_next_packetResponse const> receiver_next_packetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2a42f8e83a0d1e81ff806bb0cbf4e594";
  }

  static const char* value(const ::webots_ros::receiver_next_packetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/receiver_next_packetResponse";
  }

  static const char* value(const ::webots_ros::receiver_next_packetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 success\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::receiver_next_packetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.success);

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
struct Printer< ::webots_ros::receiver_next_packetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::receiver_next_packetResponse_<ContainerAllocator>& v)
  {
        s << indent << "success: ";
    Printer<int8_t>::stream(s, indent + "  ", v.success);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_RECEIVER_NEXT_PACKETRESPONSE_H
