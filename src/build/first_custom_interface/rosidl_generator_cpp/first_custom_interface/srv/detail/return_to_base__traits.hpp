// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_custom_interface:srv/ReturnToBase.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__TRAITS_HPP_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "first_custom_interface/srv/detail/return_to_base__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace first_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReturnToBase_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReturnToBase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReturnToBase_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace first_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use first_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const first_custom_interface::srv::ReturnToBase_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_custom_interface::srv::ReturnToBase_Request & msg)
{
  return first_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_custom_interface::srv::ReturnToBase_Request>()
{
  return "first_custom_interface::srv::ReturnToBase_Request";
}

template<>
inline const char * name<first_custom_interface::srv::ReturnToBase_Request>()
{
  return "first_custom_interface/srv/ReturnToBase_Request";
}

template<>
struct has_fixed_size<first_custom_interface::srv::ReturnToBase_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<first_custom_interface::srv::ReturnToBase_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<first_custom_interface::srv::ReturnToBase_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace first_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReturnToBase_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReturnToBase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReturnToBase_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace first_custom_interface

namespace rosidl_generator_traits
{

[[deprecated("use first_custom_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const first_custom_interface::srv::ReturnToBase_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_custom_interface::srv::ReturnToBase_Response & msg)
{
  return first_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_custom_interface::srv::ReturnToBase_Response>()
{
  return "first_custom_interface::srv::ReturnToBase_Response";
}

template<>
inline const char * name<first_custom_interface::srv::ReturnToBase_Response>()
{
  return "first_custom_interface/srv/ReturnToBase_Response";
}

template<>
struct has_fixed_size<first_custom_interface::srv::ReturnToBase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<first_custom_interface::srv::ReturnToBase_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<first_custom_interface::srv::ReturnToBase_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_custom_interface::srv::ReturnToBase>()
{
  return "first_custom_interface::srv::ReturnToBase";
}

template<>
inline const char * name<first_custom_interface::srv::ReturnToBase>()
{
  return "first_custom_interface/srv/ReturnToBase";
}

template<>
struct has_fixed_size<first_custom_interface::srv::ReturnToBase>
  : std::integral_constant<
    bool,
    has_fixed_size<first_custom_interface::srv::ReturnToBase_Request>::value &&
    has_fixed_size<first_custom_interface::srv::ReturnToBase_Response>::value
  >
{
};

template<>
struct has_bounded_size<first_custom_interface::srv::ReturnToBase>
  : std::integral_constant<
    bool,
    has_bounded_size<first_custom_interface::srv::ReturnToBase_Request>::value &&
    has_bounded_size<first_custom_interface::srv::ReturnToBase_Response>::value
  >
{
};

template<>
struct is_service<first_custom_interface::srv::ReturnToBase>
  : std::true_type
{
};

template<>
struct is_service_request<first_custom_interface::srv::ReturnToBase_Request>
  : std::true_type
{
};

template<>
struct is_service_response<first_custom_interface::srv::ReturnToBase_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__TRAITS_HPP_
