// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice
#include "robot_interfaces/action/detail/movement__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
robot_interfaces__action__Movement_Goal__init(robot_interfaces__action__Movement_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // movement_type
  // translation_setpoint
  // rotation_setpoint
  return true;
}

void
robot_interfaces__action__Movement_Goal__fini(robot_interfaces__action__Movement_Goal * msg)
{
  if (!msg) {
    return;
  }
  // movement_type
  // translation_setpoint
  // rotation_setpoint
}

robot_interfaces__action__Movement_Goal *
robot_interfaces__action__Movement_Goal__create()
{
  robot_interfaces__action__Movement_Goal * msg = (robot_interfaces__action__Movement_Goal *)malloc(sizeof(robot_interfaces__action__Movement_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_Goal));
  bool success = robot_interfaces__action__Movement_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_Goal__destroy(robot_interfaces__action__Movement_Goal * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_Goal__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_Goal__Sequence__init(robot_interfaces__action__Movement_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_Goal * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_Goal *)calloc(size, sizeof(robot_interfaces__action__Movement_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_Goal__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_Goal__Sequence__fini(robot_interfaces__action__Movement_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_Goal__fini(&array->data[i]);
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

robot_interfaces__action__Movement_Goal__Sequence *
robot_interfaces__action__Movement_Goal__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_Goal__Sequence * array = (robot_interfaces__action__Movement_Goal__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_Goal__Sequence__destroy(robot_interfaces__action__Movement_Goal__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
robot_interfaces__action__Movement_Result__init(robot_interfaces__action__Movement_Result * msg)
{
  if (!msg) {
    return false;
  }
  // x_error
  // y_error
  // theta_error
  return true;
}

void
robot_interfaces__action__Movement_Result__fini(robot_interfaces__action__Movement_Result * msg)
{
  if (!msg) {
    return;
  }
  // x_error
  // y_error
  // theta_error
}

robot_interfaces__action__Movement_Result *
robot_interfaces__action__Movement_Result__create()
{
  robot_interfaces__action__Movement_Result * msg = (robot_interfaces__action__Movement_Result *)malloc(sizeof(robot_interfaces__action__Movement_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_Result));
  bool success = robot_interfaces__action__Movement_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_Result__destroy(robot_interfaces__action__Movement_Result * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_Result__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_Result__Sequence__init(robot_interfaces__action__Movement_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_Result * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_Result *)calloc(size, sizeof(robot_interfaces__action__Movement_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_Result__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_Result__Sequence__fini(robot_interfaces__action__Movement_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_Result__fini(&array->data[i]);
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

robot_interfaces__action__Movement_Result__Sequence *
robot_interfaces__action__Movement_Result__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_Result__Sequence * array = (robot_interfaces__action__Movement_Result__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_Result__Sequence__destroy(robot_interfaces__action__Movement_Result__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_Result__Sequence__fini(array);
  }
  free(array);
}


bool
robot_interfaces__action__Movement_Feedback__init(robot_interfaces__action__Movement_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
robot_interfaces__action__Movement_Feedback__fini(robot_interfaces__action__Movement_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

robot_interfaces__action__Movement_Feedback *
robot_interfaces__action__Movement_Feedback__create()
{
  robot_interfaces__action__Movement_Feedback * msg = (robot_interfaces__action__Movement_Feedback *)malloc(sizeof(robot_interfaces__action__Movement_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_Feedback));
  bool success = robot_interfaces__action__Movement_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_Feedback__destroy(robot_interfaces__action__Movement_Feedback * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_Feedback__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_Feedback__Sequence__init(robot_interfaces__action__Movement_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_Feedback * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_Feedback *)calloc(size, sizeof(robot_interfaces__action__Movement_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_Feedback__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_Feedback__Sequence__fini(robot_interfaces__action__Movement_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_Feedback__fini(&array->data[i]);
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

robot_interfaces__action__Movement_Feedback__Sequence *
robot_interfaces__action__Movement_Feedback__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_Feedback__Sequence * array = (robot_interfaces__action__Movement_Feedback__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_Feedback__Sequence__destroy(robot_interfaces__action__Movement_Feedback__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"

bool
robot_interfaces__action__Movement_SendGoal_Request__init(robot_interfaces__action__Movement_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_interfaces__action__Movement_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!robot_interfaces__action__Movement_Goal__init(&msg->goal)) {
    robot_interfaces__action__Movement_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__action__Movement_SendGoal_Request__fini(robot_interfaces__action__Movement_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  robot_interfaces__action__Movement_Goal__fini(&msg->goal);
}

robot_interfaces__action__Movement_SendGoal_Request *
robot_interfaces__action__Movement_SendGoal_Request__create()
{
  robot_interfaces__action__Movement_SendGoal_Request * msg = (robot_interfaces__action__Movement_SendGoal_Request *)malloc(sizeof(robot_interfaces__action__Movement_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_SendGoal_Request));
  bool success = robot_interfaces__action__Movement_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_SendGoal_Request__destroy(robot_interfaces__action__Movement_SendGoal_Request * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_SendGoal_Request__Sequence__init(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_SendGoal_Request * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_SendGoal_Request *)calloc(size, sizeof(robot_interfaces__action__Movement_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_SendGoal_Request__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_SendGoal_Request__Sequence__fini(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_SendGoal_Request__fini(&array->data[i]);
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

robot_interfaces__action__Movement_SendGoal_Request__Sequence *
robot_interfaces__action__Movement_SendGoal_Request__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_SendGoal_Request__Sequence * array = (robot_interfaces__action__Movement_SendGoal_Request__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_SendGoal_Request__Sequence__destroy(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
robot_interfaces__action__Movement_SendGoal_Response__init(robot_interfaces__action__Movement_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    robot_interfaces__action__Movement_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__action__Movement_SendGoal_Response__fini(robot_interfaces__action__Movement_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

robot_interfaces__action__Movement_SendGoal_Response *
robot_interfaces__action__Movement_SendGoal_Response__create()
{
  robot_interfaces__action__Movement_SendGoal_Response * msg = (robot_interfaces__action__Movement_SendGoal_Response *)malloc(sizeof(robot_interfaces__action__Movement_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_SendGoal_Response));
  bool success = robot_interfaces__action__Movement_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_SendGoal_Response__destroy(robot_interfaces__action__Movement_SendGoal_Response * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_SendGoal_Response__Sequence__init(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_SendGoal_Response * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_SendGoal_Response *)calloc(size, sizeof(robot_interfaces__action__Movement_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_SendGoal_Response__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_SendGoal_Response__Sequence__fini(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_SendGoal_Response__fini(&array->data[i]);
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

robot_interfaces__action__Movement_SendGoal_Response__Sequence *
robot_interfaces__action__Movement_SendGoal_Response__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_SendGoal_Response__Sequence * array = (robot_interfaces__action__Movement_SendGoal_Response__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_SendGoal_Response__Sequence__destroy(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
robot_interfaces__action__Movement_GetResult_Request__init(robot_interfaces__action__Movement_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_interfaces__action__Movement_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__action__Movement_GetResult_Request__fini(robot_interfaces__action__Movement_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

robot_interfaces__action__Movement_GetResult_Request *
robot_interfaces__action__Movement_GetResult_Request__create()
{
  robot_interfaces__action__Movement_GetResult_Request * msg = (robot_interfaces__action__Movement_GetResult_Request *)malloc(sizeof(robot_interfaces__action__Movement_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_GetResult_Request));
  bool success = robot_interfaces__action__Movement_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_GetResult_Request__destroy(robot_interfaces__action__Movement_GetResult_Request * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_GetResult_Request__Sequence__init(robot_interfaces__action__Movement_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_GetResult_Request * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_GetResult_Request *)calloc(size, sizeof(robot_interfaces__action__Movement_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_GetResult_Request__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_GetResult_Request__Sequence__fini(robot_interfaces__action__Movement_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_GetResult_Request__fini(&array->data[i]);
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

robot_interfaces__action__Movement_GetResult_Request__Sequence *
robot_interfaces__action__Movement_GetResult_Request__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_GetResult_Request__Sequence * array = (robot_interfaces__action__Movement_GetResult_Request__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_GetResult_Request__Sequence__destroy(robot_interfaces__action__Movement_GetResult_Request__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"

bool
robot_interfaces__action__Movement_GetResult_Response__init(robot_interfaces__action__Movement_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!robot_interfaces__action__Movement_Result__init(&msg->result)) {
    robot_interfaces__action__Movement_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__action__Movement_GetResult_Response__fini(robot_interfaces__action__Movement_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  robot_interfaces__action__Movement_Result__fini(&msg->result);
}

robot_interfaces__action__Movement_GetResult_Response *
robot_interfaces__action__Movement_GetResult_Response__create()
{
  robot_interfaces__action__Movement_GetResult_Response * msg = (robot_interfaces__action__Movement_GetResult_Response *)malloc(sizeof(robot_interfaces__action__Movement_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_GetResult_Response));
  bool success = robot_interfaces__action__Movement_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_GetResult_Response__destroy(robot_interfaces__action__Movement_GetResult_Response * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_GetResult_Response__Sequence__init(robot_interfaces__action__Movement_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_GetResult_Response * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_GetResult_Response *)calloc(size, sizeof(robot_interfaces__action__Movement_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_GetResult_Response__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_GetResult_Response__Sequence__fini(robot_interfaces__action__Movement_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_GetResult_Response__fini(&array->data[i]);
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

robot_interfaces__action__Movement_GetResult_Response__Sequence *
robot_interfaces__action__Movement_GetResult_Response__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_GetResult_Response__Sequence * array = (robot_interfaces__action__Movement_GetResult_Response__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_GetResult_Response__Sequence__destroy(robot_interfaces__action__Movement_GetResult_Response__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"

bool
robot_interfaces__action__Movement_FeedbackMessage__init(robot_interfaces__action__Movement_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    robot_interfaces__action__Movement_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!robot_interfaces__action__Movement_Feedback__init(&msg->feedback)) {
    robot_interfaces__action__Movement_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
robot_interfaces__action__Movement_FeedbackMessage__fini(robot_interfaces__action__Movement_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  robot_interfaces__action__Movement_Feedback__fini(&msg->feedback);
}

robot_interfaces__action__Movement_FeedbackMessage *
robot_interfaces__action__Movement_FeedbackMessage__create()
{
  robot_interfaces__action__Movement_FeedbackMessage * msg = (robot_interfaces__action__Movement_FeedbackMessage *)malloc(sizeof(robot_interfaces__action__Movement_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_interfaces__action__Movement_FeedbackMessage));
  bool success = robot_interfaces__action__Movement_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
robot_interfaces__action__Movement_FeedbackMessage__destroy(robot_interfaces__action__Movement_FeedbackMessage * msg)
{
  if (msg) {
    robot_interfaces__action__Movement_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
robot_interfaces__action__Movement_FeedbackMessage__Sequence__init(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  robot_interfaces__action__Movement_FeedbackMessage * data = NULL;
  if (size) {
    data = (robot_interfaces__action__Movement_FeedbackMessage *)calloc(size, sizeof(robot_interfaces__action__Movement_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_interfaces__action__Movement_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_interfaces__action__Movement_FeedbackMessage__fini(&data[i - 1]);
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
robot_interfaces__action__Movement_FeedbackMessage__Sequence__fini(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_interfaces__action__Movement_FeedbackMessage__fini(&array->data[i]);
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

robot_interfaces__action__Movement_FeedbackMessage__Sequence *
robot_interfaces__action__Movement_FeedbackMessage__Sequence__create(size_t size)
{
  robot_interfaces__action__Movement_FeedbackMessage__Sequence * array = (robot_interfaces__action__Movement_FeedbackMessage__Sequence *)malloc(sizeof(robot_interfaces__action__Movement_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = robot_interfaces__action__Movement_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
robot_interfaces__action__Movement_FeedbackMessage__Sequence__destroy(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array)
{
  if (array) {
    robot_interfaces__action__Movement_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
