// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from learning_interface:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "learning_interface/srv/detail/add_two_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
learning_interface__srv__AddTwoInts_Request__init(learning_interface__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
learning_interface__srv__AddTwoInts_Request__fini(learning_interface__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

learning_interface__srv__AddTwoInts_Request *
learning_interface__srv__AddTwoInts_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Request * msg = (learning_interface__srv__AddTwoInts_Request *)allocator.allocate(sizeof(learning_interface__srv__AddTwoInts_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_interface__srv__AddTwoInts_Request));
  bool success = learning_interface__srv__AddTwoInts_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_interface__srv__AddTwoInts_Request__destroy(learning_interface__srv__AddTwoInts_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_interface__srv__AddTwoInts_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_interface__srv__AddTwoInts_Request__Sequence__init(learning_interface__srv__AddTwoInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Request * data = NULL;

  if (size) {
    data = (learning_interface__srv__AddTwoInts_Request *)allocator.zero_allocate(size, sizeof(learning_interface__srv__AddTwoInts_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_interface__srv__AddTwoInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_interface__srv__AddTwoInts_Request__fini(&data[i - 1]);
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
learning_interface__srv__AddTwoInts_Request__Sequence__fini(learning_interface__srv__AddTwoInts_Request__Sequence * array)
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
      learning_interface__srv__AddTwoInts_Request__fini(&array->data[i]);
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

learning_interface__srv__AddTwoInts_Request__Sequence *
learning_interface__srv__AddTwoInts_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Request__Sequence * array = (learning_interface__srv__AddTwoInts_Request__Sequence *)allocator.allocate(sizeof(learning_interface__srv__AddTwoInts_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_interface__srv__AddTwoInts_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_interface__srv__AddTwoInts_Request__Sequence__destroy(learning_interface__srv__AddTwoInts_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_interface__srv__AddTwoInts_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}


bool
learning_interface__srv__AddTwoInts_Response__init(learning_interface__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
learning_interface__srv__AddTwoInts_Response__fini(learning_interface__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

learning_interface__srv__AddTwoInts_Response *
learning_interface__srv__AddTwoInts_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Response * msg = (learning_interface__srv__AddTwoInts_Response *)allocator.allocate(sizeof(learning_interface__srv__AddTwoInts_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(learning_interface__srv__AddTwoInts_Response));
  bool success = learning_interface__srv__AddTwoInts_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
learning_interface__srv__AddTwoInts_Response__destroy(learning_interface__srv__AddTwoInts_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    learning_interface__srv__AddTwoInts_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
learning_interface__srv__AddTwoInts_Response__Sequence__init(learning_interface__srv__AddTwoInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Response * data = NULL;

  if (size) {
    data = (learning_interface__srv__AddTwoInts_Response *)allocator.zero_allocate(size, sizeof(learning_interface__srv__AddTwoInts_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = learning_interface__srv__AddTwoInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        learning_interface__srv__AddTwoInts_Response__fini(&data[i - 1]);
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
learning_interface__srv__AddTwoInts_Response__Sequence__fini(learning_interface__srv__AddTwoInts_Response__Sequence * array)
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
      learning_interface__srv__AddTwoInts_Response__fini(&array->data[i]);
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

learning_interface__srv__AddTwoInts_Response__Sequence *
learning_interface__srv__AddTwoInts_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  learning_interface__srv__AddTwoInts_Response__Sequence * array = (learning_interface__srv__AddTwoInts_Response__Sequence *)allocator.allocate(sizeof(learning_interface__srv__AddTwoInts_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = learning_interface__srv__AddTwoInts_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
learning_interface__srv__AddTwoInts_Response__Sequence__destroy(learning_interface__srv__AddTwoInts_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    learning_interface__srv__AddTwoInts_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}
