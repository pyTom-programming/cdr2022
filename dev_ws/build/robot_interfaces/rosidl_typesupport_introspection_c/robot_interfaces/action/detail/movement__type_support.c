// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/action/detail/movement__functions.h"
#include "robot_interfaces/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_Goal__init(message_memory);
}

void Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_member_array[3] = {
  {
    "movement_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Goal, movement_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Goal, translation_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_setpoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Goal, rotation_setpoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_Goal",  // message name
  3,  // number of fields
  sizeof(robot_interfaces__action__Movement_Goal),
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_member_array,  // message members
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle = {
  0,
  &Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Goal)() {
  if (!Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle.typesupport_identifier) {
    Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Goal__rosidl_typesupport_introspection_c__Movement_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_Result__init(message_memory);
}

void Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_member_array[3] = {
  {
    "x_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Result, x_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Result, y_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Result, theta_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_Result",  // message name
  3,  // number of fields
  sizeof(robot_interfaces__action__Movement_Result),
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_member_array,  // message members
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle = {
  0,
  &Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Result)() {
  if (!Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle.typesupport_identifier) {
    Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Result__rosidl_typesupport_introspection_c__Movement_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_Feedback__init(message_memory);
}

void Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_Feedback",  // message name
  1,  // number of fields
  sizeof(robot_interfaces__action__Movement_Feedback),
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_member_array,  // message members
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle = {
  0,
  &Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Feedback)() {
  if (!Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle.typesupport_identifier) {
    Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_Feedback__rosidl_typesupport_introspection_c__Movement_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robot_interfaces/action/movement.h"
// Member `goal`
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_SendGoal_Request__init(message_memory);
}

void Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__Movement_SendGoal_Request),
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array,  // message members
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle = {
  0,
  &Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Request)() {
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Goal)();
  if (!Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_SendGoal_Request__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_SendGoal_Response__init(message_memory);
}

void Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__Movement_SendGoal_Response),
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array,  // message members
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle = {
  0,
  &Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Response)() {
  Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_SendGoal_Response__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_members = {
  "robot_interfaces__action",  // service namespace
  "Movement_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle = {
  0,
  &robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal)() {
  if (!robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_SendGoal_Response)()->data;
  }

  return &robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_GetResult_Request__init(message_memory);
}

void Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robot_interfaces__action__Movement_GetResult_Request),
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array,  // message members
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle = {
  0,
  &Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Request)() {
  Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_GetResult_Request__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robot_interfaces/action/movement.h"
// Member `result`
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_GetResult_Response__init(message_memory);
}

void Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__Movement_GetResult_Response),
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array,  // message members
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle = {
  0,
  &Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Response)() {
  Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Result)();
  if (!Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_GetResult_Response__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_members = {
  "robot_interfaces__action",  // service namespace
  "Movement_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle = {
  0,
  &robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult)() {
  if (!robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.typesupport_identifier) {
    robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_GetResult_Response)()->data;
  }

  return &robot_interfaces__action__detail__movement__rosidl_typesupport_introspection_c__Movement_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_interfaces/action/detail/movement__functions.h"
// already included above
// #include "robot_interfaces/action/detail/movement__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robot_interfaces/action/movement.h"
// Member `feedback`
// already included above
// #include "robot_interfaces/action/detail/movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__action__Movement_FeedbackMessage__init(message_memory);
}

void Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_fini_function(void * message_memory)
{
  robot_interfaces__action__Movement_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__action__Movement_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_members = {
  "robot_interfaces__action",  // message namespace
  "Movement_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__action__Movement_FeedbackMessage),
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array,  // message members
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle = {
  0,
  &Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_FeedbackMessage)() {
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, action, Movement_Feedback)();
  if (!Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Movement_FeedbackMessage__rosidl_typesupport_introspection_c__Movement_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
