#ifndef WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGEREQUEST_H
#define WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGEREQUEST_H


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
struct emitter_set_rangeRequest_
{
  typedef emitter_set_rangeRequest_<ContainerAllocator> Type;

  emitter_set_rangeRequest_()
    : range(0.0)  {
    }
  emitter_set_rangeRequest_(const ContainerAllocator& _alloc)
    : range(0.0)  {
    }

    
   typedef double _range_type;
  _range_type range;




  typedef boost::shared_ptr< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::emitter_set_rangeRequest_<std::allocator<void> > emitter_set_rangeRequest;

typedef boost::shared_ptr< ::webots_ros::emitter_set_rangeRequest > emitter_set_rangeRequestPtr;
typedef boost::shared_ptr< ::webots_ros::emitter_set_rangeRequest const> emitter_set_rangeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8112cdf5ba21a60e770ffbd686190b96";
  }

  static const char* value(const ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/emitter_set_rangeRequest";
  }

  static const char* value(const ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 range\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.range);

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
struct Printer< ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::emitter_set_rangeRequest_<ContainerAllocator>& v)
  {
        s << indent << "range: ";
    Printer<double>::stream(s, indent + "  ", v.range);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_EMITTER_SET_RANGEREQUEST_H
