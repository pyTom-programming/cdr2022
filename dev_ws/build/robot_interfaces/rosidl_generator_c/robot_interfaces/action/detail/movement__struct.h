// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_H_
#define ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_Goal
{
  int8_t movement_type;
  double translation_setpoint;
  double rotation_setpoint;
} robot_interfaces__action__Movement_Goal;

// Struct for a sequence of robot_interfaces__action__Movement_Goal.
typedef struct robot_interfaces__action__Movement_Goal__Sequence
{
  robot_interfaces__action__Movement_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_Result
{
  double x_error;
  double y_error;
  double theta_error;
} robot_interfaces__action__Movement_Result;

// Struct for a sequence of robot_interfaces__action__Movement_Result.
typedef struct robot_interfaces__action__Movement_Result__Sequence
{
  robot_interfaces__action__Movement_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} robot_interfaces__action__Movement_Feedback;

// Struct for a sequence of robot_interfaces__action__Movement_Feedback.
typedef struct robot_interfaces__action__Movement_Feedback__Sequence
{
  robot_interfaces__action__Movement_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_interfaces/action/detail/movement__struct.h"

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__Movement_Goal goal;
} robot_interfaces__action__Movement_SendGoal_Request;

// Struct for a sequence of robot_interfaces__action__Movement_SendGoal_Request.
typedef struct robot_interfaces__action__Movement_SendGoal_Request__Sequence
{
  robot_interfaces__action__Movement_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_interfaces__action__Movement_SendGoal_Response;

// Struct for a sequence of robot_interfaces__action__Movement_SendGoal_Response.
typedef struct robot_interfaces__action__Movement_SendGoal_Response__Sequence
{
  robot_interfaces__action__Movement_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_interfaces__action__Movement_GetResult_Request;

// Struct for a sequence of robot_interfaces__action__Movement_GetResult_Request.
typedef struct robot_interfaces__action__Movement_GetResult_Request__Sequence
{
  robot_interfaces__action__Movement_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_GetResult_Response
{
  int8_t status;
  robot_interfaces__action__Movement_Result result;
} robot_interfaces__action__Movement_GetResult_Response;

// Struct for a sequence of robot_interfaces__action__Movement_GetResult_Response.
typedef struct robot_interfaces__action__Movement_GetResult_Response__Sequence
{
  robot_interfaces__action__Movement_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"

// Struct defined in action/Movement in the package robot_interfaces.
typedef struct robot_interfaces__action__Movement_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_interfaces__action__Movement_Feedback feedback;
} robot_interfaces__action__Movement_FeedbackMessage;

// Struct for a sequence of robot_interfaces__action__Movement_FeedbackMessage.
typedef struct robot_interfaces__action__Movement_FeedbackMessage__Sequence
{
  robot_interfaces__action__Movement_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__action__Movement_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_H_
