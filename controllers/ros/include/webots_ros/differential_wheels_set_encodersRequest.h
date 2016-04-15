#ifndef WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERSREQUEST_H
#define WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERSREQUEST_H


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
struct differential_wheels_set_encodersRequest_
{
  typedef differential_wheels_set_encodersRequest_<ContainerAllocator> Type;

  differential_wheels_set_encodersRequest_()
    : left(0.0)
    , right(0.0)  {
    }
  differential_wheels_set_encodersRequest_(const ContainerAllocator& _alloc)
    : left(0.0)
    , right(0.0)  {
    }

    
   typedef double _left_type;
  _left_type left;

   typedef double _right_type;
  _right_type right;




  typedef boost::shared_ptr< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::differential_wheels_set_encodersRequest_<std::allocator<void> > differential_wheels_set_encodersRequest;

typedef boost::shared_ptr< ::webots_ros::differential_wheels_set_encodersRequest > differential_wheels_set_encodersRequestPtr;
typedef boost::shared_ptr< ::webots_ros::differential_wheels_set_encodersRequest const> differential_wheels_set_encodersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3f660fa6747eeaef7c7125d534eaa59";
  }

  static const char* value(const ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/differential_wheels_set_encodersRequest";
  }

  static const char* value(const ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 left\n\
			float64 right\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.left);
      stream.next(m.right);

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
struct Printer< ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::differential_wheels_set_encodersRequest_<ContainerAllocator>& v)
  {
        s << indent << "left: ";
    Printer<double>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<double>::stream(s, indent + "  ", v.right);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DIFFERENTIAL_WHEELS_SET_ENCODERSREQUEST_H
