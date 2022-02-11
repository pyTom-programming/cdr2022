// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:msg/Position.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/msg/detail/position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
robot_interfaces__msg__Position__init(robot_interfaces__msg__Position * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // theta
  return true;
}

void
robot_interfaces__msg__Position__fini(robot_interfaces__msg__Position * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // theta
}

robot_interfaces__msg__Position *
robot_interfaces__msg__Position__create()
{
  robot_interfaces__msg__Position * msg = (robot_interfaces__msg__Position *)malloc(sizeof(robot_interfaces__msg__Position));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__msg__Position));
  bool success = robot_interfaces__msg__Position__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__msg__Position__destroy(robot_interfaces__msg__Position * msg)
{
  if (msg) {
    robot_interfaces__msg__Position__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__msg__Position__Sequence__init(robot_interfaces__msg__Position__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__msg__Position * data = NULL;
  if (size) {
    data = (robot_interfaces__msg__Position *)calloc(size, sizeof(robot_interfaces__msg__Position));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__msg__Position__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__msg__Position__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_interfaces__msg__Position__Sequence__fini(robot_interfaces__msg__Position__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__msg__Position__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_interfaces__msg__Position__Sequence *
robot_interfaces__msg__Position__Sequence__create(size_t size)
{
  robot_interfaces__msg__Position__Sequence * array = (robot_interfaces__msg__Position__Sequence *)malloc(sizeof(robot_interfaces__msg__Position__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__msg__Position__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__msg__Position__Sequence__destroy(robot_interfaces__msg__Position__Sequence * array)
{
  if (array) {
    robot_interfaces__msg__Position__Sequence__fini(array);
  }
  free(array);
}
