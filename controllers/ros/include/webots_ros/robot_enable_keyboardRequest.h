#ifndef WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARDREQUEST_H
#define WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARDREQUEST_H


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
struct robot_enable_keyboardRequest_
{
  typedef robot_enable_keyboardRequest_<ContainerAllocator> Type;

  robot_enable_keyboardRequest_()
    : period(0)  {
    }
  robot_enable_keyboardRequest_(const ContainerAllocator& _alloc)
    : period(0)  {
    }

    
   typedef int32_t _period_type;
  _period_type period;




  typedef boost::shared_ptr< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::robot_enable_keyboardRequest_<std::allocator<void> > robot_enable_keyboardRequest;

typedef boost::shared_ptr< ::webots_ros::robot_enable_keyboardRequest > robot_enable_keyboardRequestPtr;
typedef boost::shared_ptr< ::webots_ros::robot_enable_keyboardRequest const> robot_enable_keyboardRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a110dabfebb6564a90e4b1104e445e2a";
  }

  static const char* value(const ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/robot_enable_keyboardRequest";
  }

  static const char* value(const ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 period\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.period);

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
struct Printer< ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::robot_enable_keyboardRequest_<ContainerAllocator>& v)
  {
        s << indent << "period: ";
    Printer<int32_t>::stream(s, indent + "  ", v.period);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_ROBOT_ENABLE_KEYBOARDREQUEST_H
