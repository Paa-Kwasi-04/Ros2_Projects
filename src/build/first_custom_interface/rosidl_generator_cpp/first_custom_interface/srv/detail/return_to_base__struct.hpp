// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from first_custom_interface:srv/ReturnToBase.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_HPP_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__first_custom_interface__srv__ReturnToBase_Request __attribute__((deprecated))
#else
# define DEPRECATED__first_custom_interface__srv__ReturnToBase_Request __declspec(deprecated)
#endif

namespace first_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReturnToBase_Request_
{
  using Type = ReturnToBase_Request_<ContainerAllocator>;

  explicit ReturnToBase_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  explicit ReturnToBase_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_custom_interface__srv__ReturnToBase_Request
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_custom_interface__srv__ReturnToBase_Request
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnToBase_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnToBase_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnToBase_Request_

// alias to use template instance with default allocator
using ReturnToBase_Request =
  first_custom_interface::srv::ReturnToBase_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_custom_interface


#ifndef _WIN32
# define DEPRECATED__first_custom_interface__srv__ReturnToBase_Response __attribute__((deprecated))
#else
# define DEPRECATED__first_custom_interface__srv__ReturnToBase_Response __declspec(deprecated)
#endif

namespace first_custom_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReturnToBase_Response_
{
  using Type = ReturnToBase_Response_<ContainerAllocator>;

  explicit ReturnToBase_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ReturnToBase_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__first_custom_interface__srv__ReturnToBase_Response
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__first_custom_interface__srv__ReturnToBase_Response
    std::shared_ptr<first_custom_interface::srv::ReturnToBase_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReturnToBase_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReturnToBase_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReturnToBase_Response_

// alias to use template instance with default allocator
using ReturnToBase_Response =
  first_custom_interface::srv::ReturnToBase_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace first_custom_interface

namespace first_custom_interface
{

namespace srv
{

struct ReturnToBase
{
  using Request = first_custom_interface::srv::ReturnToBase_Request;
  using Response = first_custom_interface::srv::ReturnToBase_Response;
};

}  // namespace srv

}  // namespace first_custom_interface

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_HPP_
