// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from first_custom_interface:srv/AnalyzeNumber.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__TRAITS_HPP_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "first_custom_interface/srv/detail/analyze_number__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace first_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AnalyzeNumber_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: number
  {
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalyzeNumber_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    rosidl_generator_traits::value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalyzeNumber_Request & msg, bool use_flow_style = false)
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
  const first_custom_interface::srv::AnalyzeNumber_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_custom_interface::srv::AnalyzeNumber_Request & msg)
{
  return first_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_custom_interface::srv::AnalyzeNumber_Request>()
{
  return "first_custom_interface::srv::AnalyzeNumber_Request";
}

template<>
inline const char * name<first_custom_interface::srv::AnalyzeNumber_Request>()
{
  return "first_custom_interface/srv/AnalyzeNumber_Request";
}

template<>
struct has_fixed_size<first_custom_interface::srv::AnalyzeNumber_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<first_custom_interface::srv::AnalyzeNumber_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<first_custom_interface::srv::AnalyzeNumber_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace first_custom_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const AnalyzeNumber_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: parity
  {
    out << "parity: ";
    rosidl_generator_traits::value_to_yaml(msg.parity, out);
    out << ", ";
  }

  // member: sign
  {
    out << "sign: ";
    rosidl_generator_traits::value_to_yaml(msg.sign, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AnalyzeNumber_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parity: ";
    rosidl_generator_traits::value_to_yaml(msg.parity, out);
    out << "\n";
  }

  // member: sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign: ";
    rosidl_generator_traits::value_to_yaml(msg.sign, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AnalyzeNumber_Response & msg, bool use_flow_style = false)
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
  const first_custom_interface::srv::AnalyzeNumber_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  first_custom_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use first_custom_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const first_custom_interface::srv::AnalyzeNumber_Response & msg)
{
  return first_custom_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<first_custom_interface::srv::AnalyzeNumber_Response>()
{
  return "first_custom_interface::srv::AnalyzeNumber_Response";
}

template<>
inline const char * name<first_custom_interface::srv::AnalyzeNumber_Response>()
{
  return "first_custom_interface/srv/AnalyzeNumber_Response";
}

template<>
struct has_fixed_size<first_custom_interface::srv::AnalyzeNumber_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<first_custom_interface::srv::AnalyzeNumber_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<first_custom_interface::srv::AnalyzeNumber_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<first_custom_interface::srv::AnalyzeNumber>()
{
  return "first_custom_interface::srv::AnalyzeNumber";
}

template<>
inline const char * name<first_custom_interface::srv::AnalyzeNumber>()
{
  return "first_custom_interface/srv/AnalyzeNumber";
}

template<>
struct has_fixed_size<first_custom_interface::srv::AnalyzeNumber>
  : std::integral_constant<
    bool,
    has_fixed_size<first_custom_interface::srv::AnalyzeNumber_Request>::value &&
    has_fixed_size<first_custom_interface::srv::AnalyzeNumber_Response>::value
  >
{
};

template<>
struct has_bounded_size<first_custom_interface::srv::AnalyzeNumber>
  : std::integral_constant<
    bool,
    has_bounded_size<first_custom_interface::srv::AnalyzeNumber_Request>::value &&
    has_bounded_size<first_custom_interface::srv::AnalyzeNumber_Response>::value
  >
{
};

template<>
struct is_service<first_custom_interface::srv::AnalyzeNumber>
  : std::true_type
{
};

template<>
struct is_service_request<first_custom_interface::srv::AnalyzeNumber_Request>
  : std::true_type
{
};

template<>
struct is_service_response<first_custom_interface::srv::AnalyzeNumber_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__TRAITS_HPP_
