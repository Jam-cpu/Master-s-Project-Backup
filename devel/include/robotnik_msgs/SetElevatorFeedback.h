// Generated by gencpp from file robotnik_msgs/SetElevatorFeedback.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SETELEVATORFEEDBACK_H
#define ROBOTNIK_MSGS_MESSAGE_SETELEVATORFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <robotnik_msgs/ElevatorStatus.h>

namespace robotnik_msgs
{
template <class ContainerAllocator>
struct SetElevatorFeedback_
{
  typedef SetElevatorFeedback_<ContainerAllocator> Type;

  SetElevatorFeedback_()
    : status()  {
    }
  SetElevatorFeedback_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::robotnik_msgs::ElevatorStatus_<ContainerAllocator>  _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct SetElevatorFeedback_

typedef ::robotnik_msgs::SetElevatorFeedback_<std::allocator<void> > SetElevatorFeedback;

typedef boost::shared_ptr< ::robotnik_msgs::SetElevatorFeedback > SetElevatorFeedbackPtr;
typedef boost::shared_ptr< ::robotnik_msgs::SetElevatorFeedback const> SetElevatorFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator1> & lhs, const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator1> & lhs, const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47e3f709643220443260a9d8c1f901ea";
  }

  static const char* value(const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47e3f70964322044ULL;
  static const uint64_t static_value2 = 0x3260a9d8c1f901eaULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/SetElevatorFeedback";
  }

  static const char* value(const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"robotnik_msgs/ElevatorStatus status\n"
"\n"
"\n"
"================================================================================\n"
"MSG: robotnik_msgs/ElevatorStatus\n"
"# state\n"
"string RAISING=raising\n"
"string LOWERING=lowering\n"
"string IDLE=idle\n"
"string ERROR_G_IO=error_getting_io\n"
"string ERROR_S_IO=error_setting_io\n"
"string ERROR_TIMEOUT=error_timeout_in_action\n"
"# position\n"
"string UP=up\n"
"string DOWN=down\n"
"string UNKNOWN=unknown\n"
"# IDLE, RAISING, LOWERING\n"
"string state\n"
"# UP, DOWN, UNKNOWN\n"
"string position\n"
"float32 height\n"
;
  }

  static const char* value(const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetElevatorFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::SetElevatorFeedback_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    s << std::endl;
    Printer< ::robotnik_msgs::ElevatorStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SETELEVATORFEEDBACK_H
