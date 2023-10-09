// Generated by gencpp from file data_parse/JiCaEgoMotion.msg
// DO NOT EDIT!


#ifndef DATA_PARSE_MESSAGE_JICAEGOMOTION_H
#define DATA_PARSE_MESSAGE_JICAEGOMOTION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace data_parse
{
template <class ContainerAllocator>
struct JiCaEgoMotion_
{
  typedef JiCaEgoMotion_<ContainerAllocator> Type;

  JiCaEgoMotion_()
    : header()
    , speed(0.0)
    , lat_velocity(0.0)
    , lgt_velocity(0.0)
    , lat_accel(0.0)
    , lgt_accel(0.0)
    , yaw_rate(0.0)
    , PosnLgtDelta(0.0)
    , PosnLatDelta(0.0)
    , AgDirDelta(0.0)
    , avert(0.0)
    , roll_rate(0.0)
    , time_stamp(0.0)  {
    }
  JiCaEgoMotion_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , speed(0.0)
    , lat_velocity(0.0)
    , lgt_velocity(0.0)
    , lat_accel(0.0)
    , lgt_accel(0.0)
    , yaw_rate(0.0)
    , PosnLgtDelta(0.0)
    , PosnLatDelta(0.0)
    , AgDirDelta(0.0)
    , avert(0.0)
    , roll_rate(0.0)
    , time_stamp(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _lat_velocity_type;
  _lat_velocity_type lat_velocity;

   typedef double _lgt_velocity_type;
  _lgt_velocity_type lgt_velocity;

   typedef double _lat_accel_type;
  _lat_accel_type lat_accel;

   typedef double _lgt_accel_type;
  _lgt_accel_type lgt_accel;

   typedef double _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef double _PosnLgtDelta_type;
  _PosnLgtDelta_type PosnLgtDelta;

   typedef double _PosnLatDelta_type;
  _PosnLatDelta_type PosnLatDelta;

   typedef double _AgDirDelta_type;
  _AgDirDelta_type AgDirDelta;

   typedef double _avert_type;
  _avert_type avert;

   typedef double _roll_rate_type;
  _roll_rate_type roll_rate;

   typedef double _time_stamp_type;
  _time_stamp_type time_stamp;





  typedef boost::shared_ptr< ::data_parse::JiCaEgoMotion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::data_parse::JiCaEgoMotion_<ContainerAllocator> const> ConstPtr;

}; // struct JiCaEgoMotion_

typedef ::data_parse::JiCaEgoMotion_<std::allocator<void> > JiCaEgoMotion;

typedef boost::shared_ptr< ::data_parse::JiCaEgoMotion > JiCaEgoMotionPtr;
typedef boost::shared_ptr< ::data_parse::JiCaEgoMotion const> JiCaEgoMotionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::data_parse::JiCaEgoMotion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::data_parse::JiCaEgoMotion_<ContainerAllocator1> & lhs, const ::data_parse::JiCaEgoMotion_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.speed == rhs.speed &&
    lhs.lat_velocity == rhs.lat_velocity &&
    lhs.lgt_velocity == rhs.lgt_velocity &&
    lhs.lat_accel == rhs.lat_accel &&
    lhs.lgt_accel == rhs.lgt_accel &&
    lhs.yaw_rate == rhs.yaw_rate &&
    lhs.PosnLgtDelta == rhs.PosnLgtDelta &&
    lhs.PosnLatDelta == rhs.PosnLatDelta &&
    lhs.AgDirDelta == rhs.AgDirDelta &&
    lhs.avert == rhs.avert &&
    lhs.roll_rate == rhs.roll_rate &&
    lhs.time_stamp == rhs.time_stamp;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::data_parse::JiCaEgoMotion_<ContainerAllocator1> & lhs, const ::data_parse::JiCaEgoMotion_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace data_parse

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::data_parse::JiCaEgoMotion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_parse::JiCaEgoMotion_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_parse::JiCaEgoMotion_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "54d9e18c5aea7a54f5520145e95dc662";
  }

  static const char* value(const ::data_parse::JiCaEgoMotion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x54d9e18c5aea7a54ULL;
  static const uint64_t static_value2 = 0xf5520145e95dc662ULL;
};

template<class ContainerAllocator>
struct DataType< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "data_parse/JiCaEgoMotion";
  }

  static const char* value(const ::data_parse::JiCaEgoMotion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"float64 speed\n"
"float64 lat_velocity\n"
"float64 lgt_velocity\n"
"float64 lat_accel\n"
"float64 lgt_accel\n"
"float64 yaw_rate\n"
"float64 PosnLgtDelta\n"
"float64 PosnLatDelta\n"
"float64 AgDirDelta\n"
"float64 avert\n"
"float64 roll_rate\n"
"float64 time_stamp\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::data_parse::JiCaEgoMotion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.speed);
      stream.next(m.lat_velocity);
      stream.next(m.lgt_velocity);
      stream.next(m.lat_accel);
      stream.next(m.lgt_accel);
      stream.next(m.yaw_rate);
      stream.next(m.PosnLgtDelta);
      stream.next(m.PosnLatDelta);
      stream.next(m.AgDirDelta);
      stream.next(m.avert);
      stream.next(m.roll_rate);
      stream.next(m.time_stamp);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JiCaEgoMotion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::data_parse::JiCaEgoMotion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::data_parse::JiCaEgoMotion_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "lat_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.lat_velocity);
    s << indent << "lgt_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.lgt_velocity);
    s << indent << "lat_accel: ";
    Printer<double>::stream(s, indent + "  ", v.lat_accel);
    s << indent << "lgt_accel: ";
    Printer<double>::stream(s, indent + "  ", v.lgt_accel);
    s << indent << "yaw_rate: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "PosnLgtDelta: ";
    Printer<double>::stream(s, indent + "  ", v.PosnLgtDelta);
    s << indent << "PosnLatDelta: ";
    Printer<double>::stream(s, indent + "  ", v.PosnLatDelta);
    s << indent << "AgDirDelta: ";
    Printer<double>::stream(s, indent + "  ", v.AgDirDelta);
    s << indent << "avert: ";
    Printer<double>::stream(s, indent + "  ", v.avert);
    s << indent << "roll_rate: ";
    Printer<double>::stream(s, indent + "  ", v.roll_rate);
    s << indent << "time_stamp: ";
    Printer<double>::stream(s, indent + "  ", v.time_stamp);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DATA_PARSE_MESSAGE_JICAEGOMOTION_H