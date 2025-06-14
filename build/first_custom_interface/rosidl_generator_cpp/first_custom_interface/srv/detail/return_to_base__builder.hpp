// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from first_custom_interface:srv/ReturnToBase.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__BUILDER_HPP_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "first_custom_interface/srv/detail/return_to_base__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace first_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ReturnToBase_Request_y
{
public:
  explicit Init_ReturnToBase_Request_y(::first_custom_interface::srv::ReturnToBase_Request & msg)
  : msg_(msg)
  {}
  ::first_custom_interface::srv::ReturnToBase_Request y(::first_custom_interface::srv::ReturnToBase_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_custom_interface::srv::ReturnToBase_Request msg_;
};

class Init_ReturnToBase_Request_x
{
public:
  Init_ReturnToBase_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReturnToBase_Request_y x(::first_custom_interface::srv::ReturnToBase_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ReturnToBase_Request_y(msg_);
  }

private:
  ::first_custom_interface::srv::ReturnToBase_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_custom_interface::srv::ReturnToBase_Request>()
{
  return first_custom_interface::srv::builder::Init_ReturnToBase_Request_x();
}

}  // namespace first_custom_interface


namespace first_custom_interface
{

namespace srv
{

namespace builder
{

class Init_ReturnToBase_Response_accepted
{
public:
  Init_ReturnToBase_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::first_custom_interface::srv::ReturnToBase_Response accepted(::first_custom_interface::srv::ReturnToBase_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return std::move(msg_);
  }

private:
  ::first_custom_interface::srv::ReturnToBase_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::first_custom_interface::srv::ReturnToBase_Response>()
{
  return first_custom_interface::srv::builder::Init_ReturnToBase_Response_accepted();
}

}  // namespace first_custom_interface

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__BUILDER_HPP_
