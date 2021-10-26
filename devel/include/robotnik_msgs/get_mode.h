// Generated by gencpp from file robotnik_msgs/get_mode.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_GET_MODE_H
#define ROBOTNIK_MSGS_MESSAGE_GET_MODE_H

#include <ros/service_traits.h>


#include <robotnik_msgs/get_modeRequest.h>
#include <robotnik_msgs/get_modeResponse.h>


namespace robotnik_msgs
{

struct get_mode
{

typedef get_modeRequest Request;
typedef get_modeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct get_mode
} // namespace robotnik_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotnik_msgs::get_mode > {
  static const char* value()
  {
    return "418c02483a8ca57215fb7b31c5c87234";
  }

  static const char* value(const ::robotnik_msgs::get_mode&) { return value(); }
};

template<>
struct DataType< ::robotnik_msgs::get_mode > {
  static const char* value()
  {
    return "robotnik_msgs/get_mode";
  }

  static const char* value(const ::robotnik_msgs::get_mode&) { return value(); }
};


// service_traits::MD5Sum< ::robotnik_msgs::get_modeRequest> should match
// service_traits::MD5Sum< ::robotnik_msgs::get_mode >
template<>
struct MD5Sum< ::robotnik_msgs::get_modeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::get_mode >::value();
  }
  static const char* value(const ::robotnik_msgs::get_modeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::get_modeRequest> should match
// service_traits::DataType< ::robotnik_msgs::get_mode >
template<>
struct DataType< ::robotnik_msgs::get_modeRequest>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::get_mode >::value();
  }
  static const char* value(const ::robotnik_msgs::get_modeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotnik_msgs::get_modeResponse> should match
// service_traits::MD5Sum< ::robotnik_msgs::get_mode >
template<>
struct MD5Sum< ::robotnik_msgs::get_modeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotnik_msgs::get_mode >::value();
  }
  static const char* value(const ::robotnik_msgs::get_modeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotnik_msgs::get_modeResponse> should match
// service_traits::DataType< ::robotnik_msgs::get_mode >
template<>
struct DataType< ::robotnik_msgs::get_modeResponse>
{
  static const char* value()
  {
    return DataType< ::robotnik_msgs::get_mode >::value();
  }
  static const char* value(const ::robotnik_msgs::get_modeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_GET_MODE_H
