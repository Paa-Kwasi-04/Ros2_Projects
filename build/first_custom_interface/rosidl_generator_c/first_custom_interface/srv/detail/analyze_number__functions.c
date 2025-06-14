// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from first_custom_interface:srv/AnalyzeNumber.idl
// generated code does not contain a copyright notice
#include "first_custom_interface/srv/detail/analyze_number__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
first_custom_interface__srv__AnalyzeNumber_Request__init(first_custom_interface__srv__AnalyzeNumber_Request * msg)
{
  if (!msg) {
    return false;
  }
  // number
  return true;
}

void
first_custom_interface__srv__AnalyzeNumber_Request__fini(first_custom_interface__srv__AnalyzeNumber_Request * msg)
{
  if (!msg) {
    return;
  }
  // number
}

bool
first_custom_interface__srv__AnalyzeNumber_Request__are_equal(const first_custom_interface__srv__AnalyzeNumber_Request * lhs, const first_custom_interface__srv__AnalyzeNumber_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
first_custom_interface__srv__AnalyzeNumber_Request__copy(
  const first_custom_interface__srv__AnalyzeNumber_Request * input,
  first_custom_interface__srv__AnalyzeNumber_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

first_custom_interface__srv__AnalyzeNumber_Request *
first_custom_interface__srv__AnalyzeNumber_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Request * msg = (first_custom_interface__srv__AnalyzeNumber_Request *)allocator.allocate(sizeof(first_custom_interface__srv__AnalyzeNumber_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_custom_interface__srv__AnalyzeNumber_Request));
  bool success = first_custom_interface__srv__AnalyzeNumber_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_custom_interface__srv__AnalyzeNumber_Request__destroy(first_custom_interface__srv__AnalyzeNumber_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_custom_interface__srv__AnalyzeNumber_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__init(first_custom_interface__srv__AnalyzeNumber_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Request * data = NULL;

  if (size) {
    data = (first_custom_interface__srv__AnalyzeNumber_Request *)allocator.zero_allocate(size, sizeof(first_custom_interface__srv__AnalyzeNumber_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_custom_interface__srv__AnalyzeNumber_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_custom_interface__srv__AnalyzeNumber_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__fini(first_custom_interface__srv__AnalyzeNumber_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_custom_interface__srv__AnalyzeNumber_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_custom_interface__srv__AnalyzeNumber_Request__Sequence *
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Request__Sequence * array = (first_custom_interface__srv__AnalyzeNumber_Request__Sequence *)allocator.allocate(sizeof(first_custom_interface__srv__AnalyzeNumber_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_custom_interface__srv__AnalyzeNumber_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__destroy(first_custom_interface__srv__AnalyzeNumber_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_custom_interface__srv__AnalyzeNumber_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__are_equal(const first_custom_interface__srv__AnalyzeNumber_Request__Sequence * lhs, const first_custom_interface__srv__AnalyzeNumber_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_custom_interface__srv__AnalyzeNumber_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_custom_interface__srv__AnalyzeNumber_Request__Sequence__copy(
  const first_custom_interface__srv__AnalyzeNumber_Request__Sequence * input,
  first_custom_interface__srv__AnalyzeNumber_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_custom_interface__srv__AnalyzeNumber_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_custom_interface__srv__AnalyzeNumber_Request * data =
      (first_custom_interface__srv__AnalyzeNumber_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_custom_interface__srv__AnalyzeNumber_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_custom_interface__srv__AnalyzeNumber_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_custom_interface__srv__AnalyzeNumber_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `parity`
// Member `sign`
#include "rosidl_runtime_c/string_functions.h"

bool
first_custom_interface__srv__AnalyzeNumber_Response__init(first_custom_interface__srv__AnalyzeNumber_Response * msg)
{
  if (!msg) {
    return false;
  }
  // parity
  if (!rosidl_runtime_c__String__init(&msg->parity)) {
    first_custom_interface__srv__AnalyzeNumber_Response__fini(msg);
    return false;
  }
  // sign
  if (!rosidl_runtime_c__String__init(&msg->sign)) {
    first_custom_interface__srv__AnalyzeNumber_Response__fini(msg);
    return false;
  }
  return true;
}

void
first_custom_interface__srv__AnalyzeNumber_Response__fini(first_custom_interface__srv__AnalyzeNumber_Response * msg)
{
  if (!msg) {
    return;
  }
  // parity
  rosidl_runtime_c__String__fini(&msg->parity);
  // sign
  rosidl_runtime_c__String__fini(&msg->sign);
}

bool
first_custom_interface__srv__AnalyzeNumber_Response__are_equal(const first_custom_interface__srv__AnalyzeNumber_Response * lhs, const first_custom_interface__srv__AnalyzeNumber_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parity
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parity), &(rhs->parity)))
  {
    return false;
  }
  // sign
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sign), &(rhs->sign)))
  {
    return false;
  }
  return true;
}

bool
first_custom_interface__srv__AnalyzeNumber_Response__copy(
  const first_custom_interface__srv__AnalyzeNumber_Response * input,
  first_custom_interface__srv__AnalyzeNumber_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // parity
  if (!rosidl_runtime_c__String__copy(
      &(input->parity), &(output->parity)))
  {
    return false;
  }
  // sign
  if (!rosidl_runtime_c__String__copy(
      &(input->sign), &(output->sign)))
  {
    return false;
  }
  return true;
}

first_custom_interface__srv__AnalyzeNumber_Response *
first_custom_interface__srv__AnalyzeNumber_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Response * msg = (first_custom_interface__srv__AnalyzeNumber_Response *)allocator.allocate(sizeof(first_custom_interface__srv__AnalyzeNumber_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(first_custom_interface__srv__AnalyzeNumber_Response));
  bool success = first_custom_interface__srv__AnalyzeNumber_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
first_custom_interface__srv__AnalyzeNumber_Response__destroy(first_custom_interface__srv__AnalyzeNumber_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    first_custom_interface__srv__AnalyzeNumber_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__init(first_custom_interface__srv__AnalyzeNumber_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Response * data = NULL;

  if (size) {
    data = (first_custom_interface__srv__AnalyzeNumber_Response *)allocator.zero_allocate(size, sizeof(first_custom_interface__srv__AnalyzeNumber_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = first_custom_interface__srv__AnalyzeNumber_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        first_custom_interface__srv__AnalyzeNumber_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__fini(first_custom_interface__srv__AnalyzeNumber_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      first_custom_interface__srv__AnalyzeNumber_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

first_custom_interface__srv__AnalyzeNumber_Response__Sequence *
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  first_custom_interface__srv__AnalyzeNumber_Response__Sequence * array = (first_custom_interface__srv__AnalyzeNumber_Response__Sequence *)allocator.allocate(sizeof(first_custom_interface__srv__AnalyzeNumber_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = first_custom_interface__srv__AnalyzeNumber_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__destroy(first_custom_interface__srv__AnalyzeNumber_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    first_custom_interface__srv__AnalyzeNumber_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__are_equal(const first_custom_interface__srv__AnalyzeNumber_Response__Sequence * lhs, const first_custom_interface__srv__AnalyzeNumber_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!first_custom_interface__srv__AnalyzeNumber_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
first_custom_interface__srv__AnalyzeNumber_Response__Sequence__copy(
  const first_custom_interface__srv__AnalyzeNumber_Response__Sequence * input,
  first_custom_interface__srv__AnalyzeNumber_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(first_custom_interface__srv__AnalyzeNumber_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    first_custom_interface__srv__AnalyzeNumber_Response * data =
      (first_custom_interface__srv__AnalyzeNumber_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!first_custom_interface__srv__AnalyzeNumber_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          first_custom_interface__srv__AnalyzeNumber_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!first_custom_interface__srv__AnalyzeNumber_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
