// Generated by gencpp from file smach_msgs/SmachContainerStatus.msg
// DO NOT EDIT!


#ifndef SMACH_MSGS_MESSAGE_SMACHCONTAINERSTATUS_H
#define SMACH_MSGS_MESSAGE_SMACHCONTAINERSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace smach_msgs
{
template <class ContainerAllocator>
struct SmachContainerStatus_
{
  typedef SmachContainerStatus_<ContainerAllocator> Type;

  SmachContainerStatus_()
    : header()
    , path()
    , initial_states()
    , active_states()
    , local_data()
    , info()  {
    }
  SmachContainerStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , path(_alloc)
    , initial_states(_alloc)
    , active_states(_alloc)
    , local_data(_alloc)
    , info(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _path_type;
  _path_type path;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _initial_states_type;
  _initial_states_type initial_states;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _active_states_type;
  _active_states_type active_states;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _local_data_type;
  _local_data_type local_data;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  _info_type info;




  typedef boost::shared_ptr< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> const> ConstPtr;

}; // struct SmachContainerStatus_

typedef ::smach_msgs::SmachContainerStatus_<std::allocator<void> > SmachContainerStatus;

typedef boost::shared_ptr< ::smach_msgs::SmachContainerStatus > SmachContainerStatusPtr;
typedef boost::shared_ptr< ::smach_msgs::SmachContainerStatus const> SmachContainerStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::smach_msgs::SmachContainerStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace smach_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'smach_msgs': ['/home/francesco/ros_ws_handshake/src/executive_smach/smach_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5ba2bb79ac19e3842d562a191f2a675b";
  }

  static const char* value(const ::smach_msgs::SmachContainerStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5ba2bb79ac19e384ULL;
  static const uint64_t static_value2 = 0x2d562a191f2a675bULL;
};

template<class ContainerAllocator>
struct DataType< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "smach_msgs/SmachContainerStatus";
  }

  static const char* value(const ::smach_msgs::SmachContainerStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# The path to this node in the server\n\
string path\n\
\n\
# The initial state description\n\
# Effects an arc from the top state to each one\n\
string[] initial_states\n\
\n\
# The current state description\n\
string[] active_states\n\
\n\
# A pickled user data structure\n\
# i.e. the UserData's internal dictionary\n\
string local_data\n\
\n\
# Debugging info string\n\
string info\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::smach_msgs::SmachContainerStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.path);
      stream.next(m.initial_states);
      stream.next(m.active_states);
      stream.next(m.local_data);
      stream.next(m.info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SmachContainerStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::smach_msgs::SmachContainerStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::smach_msgs::SmachContainerStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.path);
    s << indent << "initial_states[]" << std::endl;
    for (size_t i = 0; i < v.initial_states.size(); ++i)
    {
      s << indent << "  initial_states[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.initial_states[i]);
    }
    s << indent << "active_states[]" << std::endl;
    for (size_t i = 0; i < v.active_states.size(); ++i)
    {
      s << indent << "  active_states[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.active_states[i]);
    }
    s << indent << "local_data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.local_data);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SMACH_MSGS_MESSAGE_SMACHCONTAINERSTATUS_H
