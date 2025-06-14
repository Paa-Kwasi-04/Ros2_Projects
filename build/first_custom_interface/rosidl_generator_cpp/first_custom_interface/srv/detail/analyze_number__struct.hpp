// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_custom_interface:srv/AnalyzeNumber.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_HPP_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Request __attribute__((deprecated))
#else
# define DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Request __declspec(deprecated)
#endif

namespace first_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AnalyzeNumber_Request_
{
  using Type = AnalyzeNumber_Request_<ContainerAllocator>;

  explicit AnalyzeNumber_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0l;
    }
  }

  explicit AnalyzeNumber_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->number = 0l;
    }
  }

  // field types and members
  using _number_type =
    int32_t;
  _number_type number;

  // setters for named parameter idiom
  Type & set__number(
    const int32_t & _arg)
  {
    this->number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Request
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Request
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnalyzeNumber_Request_ & other) const
  {
    if (this->number != other.number) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnalyzeNumber_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnalyzeNumber_Request_

// alias to use template instance with default allocator
using AnalyzeNumber_Request =
  first_custom_interface::srv::AnalyzeNumber_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_custom_interface


#ifndef _WIN32
# define DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Response __attribute__((deprecated))
#else
# define DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Response __declspec(deprecated)
#endif

namespace first_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AnalyzeNumber_Response_
{
  using Type = AnalyzeNumber_Response_<ContainerAllocator>;

  explicit AnalyzeNumber_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parity = "";
      this->sign = "";
    }
  }

  explicit AnalyzeNumber_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parity(_alloc),
    sign(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parity = "";
      this->sign = "";
    }
  }

  // field types and members
  using _parity_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parity_type parity;
  using _sign_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sign_type sign;

  // setters for named parameter idiom
  Type & set__parity(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parity = _arg;
    return *this;
  }
  Type & set__sign(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sign = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Response
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_custom_interface__srv__AnalyzeNumber_Response
    std::shared_ptr<first_custom_interface::srv::AnalyzeNumber_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnalyzeNumber_Response_ & other) const
  {
    if (this->parity != other.parity) {
      return false;
    }
    if (this->sign != other.sign) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnalyzeNumber_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnalyzeNumber_Response_

// alias to use template instance with default allocator
using AnalyzeNumber_Response =
  first_custom_interface::srv::AnalyzeNumber_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_custom_interface

namespace first_custom_interface
{

namespace srv
{

struct AnalyzeNumber
{
  using Request = first_custom_interface::srv::AnalyzeNumber_Request;
  using Response = first_custom_interface::srv::AnalyzeNumber_Response;
};

}  // namespace srv

}  // namespace first_custom_interface

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_HPP_
