#ifndef WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H
#define WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H


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
struct display_draw_textRequest_
{
  typedef display_draw_textRequest_<ContainerAllocator> Type;

  display_draw_textRequest_()
    : text()
    , x(0)
    , y(0)  {
    }
  display_draw_textRequest_(const ContainerAllocator& _alloc)
    : text(_alloc)
    , x(0)
    , y(0)  {
    }

    
   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _text_type;
  _text_type text;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;




  typedef boost::shared_ptr< ::webots_ros::display_draw_textRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_ros::display_draw_textRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

};

typedef ::webots_ros::display_draw_textRequest_<std::allocator<void> > display_draw_textRequest;

typedef boost::shared_ptr< ::webots_ros::display_draw_textRequest > display_draw_textRequestPtr;
typedef boost::shared_ptr< ::webots_ros::display_draw_textRequest const> display_draw_textRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_ros::display_draw_textRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_ros::display_draw_textRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_ros::display_draw_textRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_ros::display_draw_textRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b82c6acdec67a202bbbbd0b3aba5aa0c";
  }

  static const char* value(const ::webots_ros::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf9df5232b65af94fULL;
  static const uint64_t static_value2 = 0x73f79fe6d84301bbULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_ros/display_draw_textRequest";
  }

  static const char* value(const ::webots_ros::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string text\n\
			int32 x\n\
			int32 y\n\\n\
\n\
";
  }

  static const char* value(const ::webots_ros::display_draw_textRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
            stream.next(m.text);
      stream.next(m.x);
      stream.next(m.y);

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
struct Printer< ::webots_ros::display_draw_textRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_ros::display_draw_textRequest_<ContainerAllocator>& v)
  {
        s << indent << "text: ";
Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.text);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);

  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_DISPLAY_DRAW_TEXTREQUEST_H
