#ifndef WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUITREQUEST_H
#define WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUITREQUEST_H


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
struct supervisor_simulation_quitRequest_
{
  typedef supervisor_simulation_quitRequest_<ContainerAllocator> Type;

  supervisor_simulation_quitRequest_()
    : status(0)  {
    }
  supervisor_simulation_quitRequest_(const ContainerAllocator& _alloc)
    : status(0)  {
    }

    
   typedef int32_t _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::supervisor_simulation_quitRequest_<std::allocator<void> > supervisor_simulation_quitRequest;

typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_quitRequest > supervisor_simulation_quitRequestPtr;
typedef boost::shared_ptr< ::webots_ros::supervisor_simulation_quitRequest const> supervisor_simulation_quitRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa055de19e0bd8c0d180447e68004d56";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/supervisor_simulation_quitRequest";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.status);

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
struct Printer< ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::supervisor_simulation_quitRequest_<ContainerAllocator>& v)
  {
        s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_SUPERVISOR_SIMULATION_QUITREQUEST_H
