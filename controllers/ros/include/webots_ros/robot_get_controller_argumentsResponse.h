#ifndef WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTSRESPONSE_H
#define WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTSRESPONSE_H


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
struct robot_get_controller_argumentsResponse_
{
  typedef robot_get_controller_argumentsResponse_<ContainerAllocator> Type;

  robot_get_controller_argumentsResponse_()
    : arguments()  {
    }
  robot_get_controller_argumentsResponse_(const ContainerAllocator& _alloc)
    : arguments(_alloc)  {
    }


   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _arguments_type;
  _arguments_type arguments;




  typedef boost::shared_ptr< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::robot_get_controller_argumentsResponse_<std::allocator<void> > robot_get_controller_argumentsResponse;

typedef boost::shared_ptr< ::webots_ros::robot_get_controller_argumentsResponse > robot_get_controller_argumentsResponsePtr;
typedef boost::shared_ptr< ::webots_ros::robot_get_controller_argumentsResponse const> robot_get_controller_argumentsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d1c8ecfda29858dc9a342c263b02dffc";
  }

  static const char* value(const ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0147e4f36cba5cdaULL;
  static const uint64_t static_value2 = 0x7fa39c089e493413ULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/robot_get_controller_argumentsResponse";
  }

  static const char* value(const ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string arguments\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.arguments);

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
struct Printer< ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::robot_get_controller_argumentsResponse_<ContainerAllocator>& v)
  {
        s << indent << "arguments: ";
Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.arguments);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_GET_CONTROLLER_ARGUMENTSRESPONSE_H
