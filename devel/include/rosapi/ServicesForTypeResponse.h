// Generated by gencpp from file rosapi/ServicesForTypeResponse.msg
// DO NOT EDIT!


#ifndef ROSAPI_MESSAGE_SERVICESFORTYPERESPONSE_H
#define ROSAPI_MESSAGE_SERVICESFORTYPERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rosapi
{
template <class ContainerAllocator>
struct ServicesForTypeResponse_
{
  typedef ServicesForTypeResponse_<ContainerAllocator> Type;

  ServicesForTypeResponse_()
    : services()  {
    }
  ServicesForTypeResponse_(const ContainerAllocator& _alloc)
    : services(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _services_type;
  _services_type services;




  typedef boost::shared_ptr< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServicesForTypeResponse_

typedef ::rosapi::ServicesForTypeResponse_<std::allocator<void> > ServicesForTypeResponse;

typedef boost::shared_ptr< ::rosapi::ServicesForTypeResponse > ServicesForTypeResponsePtr;
typedef boost::shared_ptr< ::rosapi::ServicesForTypeResponse const> ServicesForTypeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rosapi::ServicesForTypeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rosapi

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosapi': ['/home/francesco/ros_ws_handshake/src/rosbridge_suite/rosapi/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e44a7e7bcb900acadbcc28b132378f0c";
  }

  static const char* value(const ::rosapi::ServicesForTypeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe44a7e7bcb900acaULL;
  static const uint64_t static_value2 = 0xdbcc28b132378f0cULL;
};

template<class ContainerAllocator>
struct DataType< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rosapi/ServicesForTypeResponse";
  }

  static const char* value(const ::rosapi::ServicesForTypeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] services\n\
";
  }

  static const char* value(const ::rosapi::ServicesForTypeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.services);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServicesForTypeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rosapi::ServicesForTypeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rosapi::ServicesForTypeResponse_<ContainerAllocator>& v)
  {
    s << indent << "services[]" << std::endl;
    for (size_t i = 0; i < v.services.size(); ++i)
    {
      s << indent << "  services[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.services[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROSAPI_MESSAGE_SERVICESFORTYPERESPONSE_H
