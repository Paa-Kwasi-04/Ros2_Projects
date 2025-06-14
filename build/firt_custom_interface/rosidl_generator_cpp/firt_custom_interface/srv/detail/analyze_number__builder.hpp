// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from firt_custom_interface:srv/AnalyzeNumber.idl
// generated code does not contain a copyright notice

#ifndef FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__BUILDER_HPP_
#define FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "firt_custom_interface/srv/detail/analyze_number__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace firt_custom_interface
{

namespace srv
{

namespace builder
{

class Init_AnalyzeNumber_Request_number
{
public:
  Init_AnalyzeNumber_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::firt_custom_interface::srv::AnalyzeNumber_Request number(::firt_custom_interface::srv::AnalyzeNumber_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firt_custom_interface::srv::AnalyzeNumber_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firt_custom_interface::srv::AnalyzeNumber_Request>()
{
  return firt_custom_interface::srv::builder::Init_AnalyzeNumber_Request_number();
}

}  // namespace firt_custom_interface


namespace firt_custom_interface
{

namespace srv
{

namespace builder
{

class Init_AnalyzeNumber_Response_sign
{
public:
  explicit Init_AnalyzeNumber_Response_sign(::firt_custom_interface::srv::AnalyzeNumber_Response & msg)
  : msg_(msg)
  {}
  ::firt_custom_interface::srv::AnalyzeNumber_Response sign(::firt_custom_interface::srv::AnalyzeNumber_Response::_sign_type arg)
  {
    msg_.sign = std::move(arg);
    return std::move(msg_);
  }

private:
  ::firt_custom_interface::srv::AnalyzeNumber_Response msg_;
};

class Init_AnalyzeNumber_Response_parity
{
public:
  Init_AnalyzeNumber_Response_parity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnalyzeNumber_Response_sign parity(::firt_custom_interface::srv::AnalyzeNumber_Response::_parity_type arg)
  {
    msg_.parity = std::move(arg);
    return Init_AnalyzeNumber_Response_sign(msg_);
  }

private:
  ::firt_custom_interface::srv::AnalyzeNumber_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::firt_custom_interface::srv::AnalyzeNumber_Response>()
{
  return firt_custom_interface::srv::builder::Init_AnalyzeNumber_Response_parity();
}

}  // namespace firt_custom_interface

#endif  // FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__BUILDER_HPP_
