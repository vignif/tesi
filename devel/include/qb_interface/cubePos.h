// Generated by gencpp from file qb_interface/cubePos.msg
// DO NOT EDIT!


#ifndef QB_INTERFACE_MESSAGE_CUBEPOS_H
#define QB_INTERFACE_MESSAGE_CUBEPOS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qb_interface
{
template <class ContainerAllocator>
struct cubePos_
{
  typedef cubePos_<ContainerAllocator> Type;

  cubePos_()
    : p_1()
    , p_2()
    , p_L()  {
    }
  cubePos_(const ContainerAllocator& _alloc)
    : p_1(_alloc)
    , p_2(_alloc)
    , p_L(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _p_1_type;
  _p_1_type p_1;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _p_2_type;
  _p_2_type p_2;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _p_L_type;
  _p_L_type p_L;




  typedef boost::shared_ptr< ::qb_interface::cubePos_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qb_interface::cubePos_<ContainerAllocator> const> ConstPtr;

}; // struct cubePos_

typedef ::qb_interface::cubePos_<std::allocator<void> > cubePos;

typedef boost::shared_ptr< ::qb_interface::cubePos > cubePosPtr;
typedef boost::shared_ptr< ::qb_interface::cubePos const> cubePosConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qb_interface::cubePos_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qb_interface::cubePos_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace qb_interface

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'qb_interface': ['/home/francesco/ros_ws_handshake/src/qb_interface/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::qb_interface::cubePos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qb_interface::cubePos_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_interface::cubePos_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qb_interface::cubePos_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_interface::cubePos_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qb_interface::cubePos_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qb_interface::cubePos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a02b665022ec76721e512ea8351a945c";
  }

  static const char* value(const ::qb_interface::cubePos_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa02b665022ec7672ULL;
  static const uint64_t static_value2 = 0x1e512ea8351a945cULL;
};

template<class ContainerAllocator>
struct DataType< ::qb_interface::cubePos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qb_interface/cubePos";
  }

  static const char* value(const ::qb_interface::cubePos_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qb_interface::cubePos_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] p_1\n\
float32[] p_2\n\
float32[] p_L\n\
";
  }

  static const char* value(const ::qb_interface::cubePos_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qb_interface::cubePos_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.p_1);
      stream.next(m.p_2);
      stream.next(m.p_L);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cubePos_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qb_interface::cubePos_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qb_interface::cubePos_<ContainerAllocator>& v)
  {
    s << indent << "p_1[]" << std::endl;
    for (size_t i = 0; i < v.p_1.size(); ++i)
    {
      s << indent << "  p_1[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.p_1[i]);
    }
    s << indent << "p_2[]" << std::endl;
    for (size_t i = 0; i < v.p_2.size(); ++i)
    {
      s << indent << "  p_2[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.p_2[i]);
    }
    s << indent << "p_L[]" << std::endl;
    for (size_t i = 0; i < v.p_L.size(); ++i)
    {
      s << indent << "  p_L[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.p_L[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QB_INTERFACE_MESSAGE_CUBEPOS_H
