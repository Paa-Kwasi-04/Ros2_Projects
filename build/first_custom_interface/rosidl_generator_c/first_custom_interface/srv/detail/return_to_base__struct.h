// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_custom_interface:srv/ReturnToBase.idl
// generated code does not contain a copyright notice

#ifndef FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_H_
#define FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReturnToBase in the package first_custom_interface.
typedef struct first_custom_interface__srv__ReturnToBase_Request
{
  float x;
  float y;
} first_custom_interface__srv__ReturnToBase_Request;

// Struct for a sequence of first_custom_interface__srv__ReturnToBase_Request.
typedef struct first_custom_interface__srv__ReturnToBase_Request__Sequence
{
  first_custom_interface__srv__ReturnToBase_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_custom_interface__srv__ReturnToBase_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ReturnToBase in the package first_custom_interface.
typedef struct first_custom_interface__srv__ReturnToBase_Response
{
  bool accepted;
} first_custom_interface__srv__ReturnToBase_Response;

// Struct for a sequence of first_custom_interface__srv__ReturnToBase_Response.
typedef struct first_custom_interface__srv__ReturnToBase_Response__Sequence
{
  first_custom_interface__srv__ReturnToBase_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_custom_interface__srv__ReturnToBase_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_CUSTOM_INTERFACE__SRV__DETAIL__RETURN_TO_BASE__STRUCT_H_
