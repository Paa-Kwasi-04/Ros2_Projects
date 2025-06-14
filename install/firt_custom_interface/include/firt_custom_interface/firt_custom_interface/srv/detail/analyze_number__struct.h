// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from firt_custom_interface:srv/AnalyzeNumber.idl
// generated code does not contain a copyright notice

#ifndef FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_H_
#define FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AnalyzeNumber in the package firt_custom_interface.
typedef struct firt_custom_interface__srv__AnalyzeNumber_Request
{
  int32_t number;
} firt_custom_interface__srv__AnalyzeNumber_Request;

// Struct for a sequence of firt_custom_interface__srv__AnalyzeNumber_Request.
typedef struct firt_custom_interface__srv__AnalyzeNumber_Request__Sequence
{
  firt_custom_interface__srv__AnalyzeNumber_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} firt_custom_interface__srv__AnalyzeNumber_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'parity'
// Member 'sign'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AnalyzeNumber in the package firt_custom_interface.
typedef struct firt_custom_interface__srv__AnalyzeNumber_Response
{
  /// 'even' or 'odd'
  rosidl_runtime_c__String parity;
  /// 'positive', 'negative', or 'zero'
  rosidl_runtime_c__String sign;
} firt_custom_interface__srv__AnalyzeNumber_Response;

// Struct for a sequence of firt_custom_interface__srv__AnalyzeNumber_Response.
typedef struct firt_custom_interface__srv__AnalyzeNumber_Response__Sequence
{
  firt_custom_interface__srv__AnalyzeNumber_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} firt_custom_interface__srv__AnalyzeNumber_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRT_CUSTOM_INTERFACE__SRV__DETAIL__ANALYZE_NUMBER__STRUCT_H_
