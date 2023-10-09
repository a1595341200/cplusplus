// Generated by gencpp from file data_parse/AdjacentLaneFrame.msg
// DO NOT EDIT!


#ifndef DATA_PARSE_MESSAGE_ADJACENTLANEFRAME_H
#define DATA_PARSE_MESSAGE_ADJACENTLANEFRAME_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <data_parse/AdjacentLane.h>

namespace data_parse
{
template <class ContainerAllocator>
struct AdjacentLaneFrame_
{
  typedef AdjacentLaneFrame_<ContainerAllocator> Type;

  AdjacentLaneFrame_()
    : header()
    , adject_lanes()  {
    }
  AdjacentLaneFrame_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , adject_lanes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::data_parse::AdjacentLane_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::data_parse::AdjacentLane_<ContainerAllocator> >> _adject_lanes_type;
  _adject_lanes_type adject_lanes;





  typedef boost::shared_ptr< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> const> ConstPtr;

}; // struct AdjacentLaneFrame_

typedef ::data_parse::AdjacentLaneFrame_<std::allocator<void> > AdjacentLaneFrame;

typedef boost::shared_ptr< ::data_parse::AdjacentLaneFrame > AdjacentLaneFramePtr;
typedef boost::shared_ptr< ::data_parse::AdjacentLaneFrame const> AdjacentLaneFrameConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::data_parse::AdjacentLaneFrame_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::data_parse::AdjacentLaneFrame_<ContainerAllocator1> & lhs, const ::data_parse::AdjacentLaneFrame_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.adject_lanes == rhs.adject_lanes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::data_parse::AdjacentLaneFrame_<ContainerAllocator1> & lhs, const ::data_parse::AdjacentLaneFrame_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace data_parse

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bdfb3c3ee954044143731d5348c7d930";
  }

  static const char* value(const ::data_parse::AdjacentLaneFrame_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbdfb3c3ee9540441ULL;
  static const uint64_t static_value2 = 0x43731d5348c7d930ULL;
};

template<class ContainerAllocator>
struct DataType< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "data_parse/AdjacentLaneFrame";
  }

  static const char* value(const ::data_parse::AdjacentLaneFrame_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"AdjacentLane[] adject_lanes\n"
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
"\n"
"================================================================================\n"
"MSG: data_parse/AdjacentLane\n"
"std_msgs/Header header\n"
"\n"
"uint8 Lanes_Adjacent_Count\n"
"# enum\n"
"uint8 Adjacent_Type\n"
"uint8 UNDECIDED = 0\n"
"uint8 SOLID = 1\n"
"uint8 DASHED = 2\n"
"uint8 DLM = 3 \n"
"uint8 BOTTS = 4\n"
"uint8 DECELERATION = 5\n"
"uint8 HOV_LANE = 6\n"
"\n"
"float64 Adjacent_Confidence\n"
"float64 Adjacent_View_Range_Start\n"
"float64 Adjacent_View_Range_End\n"
"\n"
"# enum\n"
"uint8 Adjacent_Line_Role\n"
"uint8 NONE = 0\n"
"uint8 LEFT__LEFT_LANEMARK = 1\n"
"uint8 LEFT__RIGHT_LANEMARK = 2\n"
"uint8 RIGHT__LEFT_LANEMARK = 3\n"
"uint8 RIGHT__RIGHT_LANEMARK = 4\n"
"\n"
"LHParam Adjacent_Line_C\n"
"================================================================================\n"
"MSG: data_parse/LHParam\n"
"float64 LH_C0\n"
"float64 LH_C1\n"
"float64 LH_C2\n"
"float64 LH_C3\n"
;
  }

  static const char* value(const ::data_parse::AdjacentLaneFrame_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.adject_lanes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AdjacentLaneFrame_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::data_parse::AdjacentLaneFrame_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::data_parse::AdjacentLaneFrame_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "adject_lanes[]" << std::endl;
    for (size_t i = 0; i < v.adject_lanes.size(); ++i)
    {
      s << indent << "  adject_lanes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::data_parse::AdjacentLane_<ContainerAllocator> >::stream(s, indent + "    ", v.adject_lanes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DATA_PARSE_MESSAGE_ADJACENTLANEFRAME_H