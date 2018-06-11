// Generated by gencpp from file rosbridge_library/TestRequestOnlyRequest.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTONLYREQUEST_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTONLYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosbridge_library
{
template <class ContainerAllocator>
struct TestRequestOnlyRequest_
{
  typedef TestRequestOnlyRequest_<ContainerAllocator> Type;

  TestRequestOnlyRequest_()
    : data(0)  {
    }
  TestRequestOnlyRequest_(const ContainerAllocator& _alloc)
    : data(0)  {
  (void)_alloc;
    }



   typedef int32_t _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TestRequestOnlyRequest_

typedef ::rosbridge_library::TestRequestOnlyRequest_<std::allocator<void> > TestRequestOnlyRequest;

typedef boost::shared_ptr< ::rosbridge_library::TestRequestOnlyRequest > TestRequestOnlyRequestPtr;
typedef boost::shared_ptr< ::rosbridge_library::TestRequestOnlyRequest const> TestRequestOnlyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosbridge_library

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'rosbridge_library': ['/home/francesco/ros_ws_handshake/src/rosbridge_suite/rosbridge_library/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da5909fbe378aeaf85e547e830cc1bb7";
  }

  static const char* value(const ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda5909fbe378aeafULL;
  static const uint64_t static_value2 = 0x85e547e830cc1bb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosbridge_library/TestRequestOnlyRequest";
  }

  static const char* value(const ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 data\n\
";
  }

  static const char* value(const ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TestRequestOnlyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosbridge_library::TestRequestOnlyRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTREQUESTONLYREQUEST_H
