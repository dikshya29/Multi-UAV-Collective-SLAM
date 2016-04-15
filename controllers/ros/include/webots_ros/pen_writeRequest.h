#ifndef WEBOTS_ROS_MESSAGE_PEN_WRITEREQUEST_H
#define WEBOTS_ROS_MESSAGE_PEN_WRITEREQUEST_H


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
struct pen_writeRequest_
{
  typedef pen_writeRequest_<ContainerAllocator> Type;

  pen_writeRequest_()
    : write(0)  {
    }
  pen_writeRequest_(const ContainerAllocator& _alloc)
    : write(0)  {
    }

    
   typedef uint8_t _write_type;
  _write_type write;




  typedef boost::shared_ptr< ::webots_ros::pen_writeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::pen_writeRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::pen_writeRequest_<std::allocator<void> > pen_writeRequest;

typedef boost::shared_ptr< ::webots_ros::pen_writeRequest > pen_writeRequestPtr;
typedef boost::shared_ptr< ::webots_ros::pen_writeRequest const> pen_writeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::pen_writeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::pen_writeRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::pen_writeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::pen_writeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::pen_writeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b4100292a1338db339a5288c7167636";
  }

  static const char* value(const ::webots_ros::pen_writeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/pen_writeRequest";
  }

  static const char* value(const ::webots_ros::pen_writeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 write\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::pen_writeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.write);

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
struct Printer< ::webots_ros::pen_writeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::pen_writeRequest_<ContainerAllocator>& v)
  {
        s << indent << "write: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.write);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_PEN_WRITEREQUEST_H
