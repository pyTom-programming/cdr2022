// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__FUNCTIONS_H_
#define ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "robot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robot_interfaces/action/detail/movement__struct.h"

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_Goal
 * )) before or use
 * robot_interfaces__action__Movement_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Goal__init(robot_interfaces__action__Movement_Goal * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Goal__fini(robot_interfaces__action__Movement_Goal * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Goal *
robot_interfaces__action__Movement_Goal__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Goal__destroy(robot_interfaces__action__Movement_Goal * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Goal__Sequence__init(robot_interfaces__action__Movement_Goal__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Goal__Sequence__fini(robot_interfaces__action__Movement_Goal__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Goal__Sequence *
robot_interfaces__action__Movement_Goal__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Goal__Sequence__destroy(robot_interfaces__action__Movement_Goal__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_Result
 * )) before or use
 * robot_interfaces__action__Movement_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Result__init(robot_interfaces__action__Movement_Result * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Result__fini(robot_interfaces__action__Movement_Result * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Result *
robot_interfaces__action__Movement_Result__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Result__destroy(robot_interfaces__action__Movement_Result * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Result__Sequence__init(robot_interfaces__action__Movement_Result__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Result__Sequence__fini(robot_interfaces__action__Movement_Result__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Result__Sequence *
robot_interfaces__action__Movement_Result__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Result__Sequence__destroy(robot_interfaces__action__Movement_Result__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_Feedback
 * )) before or use
 * robot_interfaces__action__Movement_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Feedback__init(robot_interfaces__action__Movement_Feedback * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Feedback__fini(robot_interfaces__action__Movement_Feedback * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Feedback *
robot_interfaces__action__Movement_Feedback__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Feedback__destroy(robot_interfaces__action__Movement_Feedback * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_Feedback__Sequence__init(robot_interfaces__action__Movement_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Feedback__Sequence__fini(robot_interfaces__action__Movement_Feedback__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_Feedback__Sequence *
robot_interfaces__action__Movement_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_Feedback__Sequence__destroy(robot_interfaces__action__Movement_Feedback__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_SendGoal_Request
 * )) before or use
 * robot_interfaces__action__Movement_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_SendGoal_Request__init(robot_interfaces__action__Movement_SendGoal_Request * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Request__fini(robot_interfaces__action__Movement_SendGoal_Request * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_SendGoal_Request *
robot_interfaces__action__Movement_SendGoal_Request__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Request__destroy(robot_interfaces__action__Movement_SendGoal_Request * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_SendGoal_Request__Sequence__init(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Request__Sequence__fini(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_SendGoal_Request__Sequence *
robot_interfaces__action__Movement_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Request__Sequence__destroy(robot_interfaces__action__Movement_SendGoal_Request__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_SendGoal_Response
 * )) before or use
 * robot_interfaces__action__Movement_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_SendGoal_Response__init(robot_interfaces__action__Movement_SendGoal_Response * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Response__fini(robot_interfaces__action__Movement_SendGoal_Response * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_SendGoal_Response *
robot_interfaces__action__Movement_SendGoal_Response__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Response__destroy(robot_interfaces__action__Movement_SendGoal_Response * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_SendGoal_Response__Sequence__init(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Response__Sequence__fini(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_SendGoal_Response__Sequence *
robot_interfaces__action__Movement_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_SendGoal_Response__Sequence__destroy(robot_interfaces__action__Movement_SendGoal_Response__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_GetResult_Request
 * )) before or use
 * robot_interfaces__action__Movement_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_GetResult_Request__init(robot_interfaces__action__Movement_GetResult_Request * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Request__fini(robot_interfaces__action__Movement_GetResult_Request * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_GetResult_Request *
robot_interfaces__action__Movement_GetResult_Request__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Request__destroy(robot_interfaces__action__Movement_GetResult_Request * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_GetResult_Request__Sequence__init(robot_interfaces__action__Movement_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Request__Sequence__fini(robot_interfaces__action__Movement_GetResult_Request__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_GetResult_Request__Sequence *
robot_interfaces__action__Movement_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Request__Sequence__destroy(robot_interfaces__action__Movement_GetResult_Request__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_GetResult_Response
 * )) before or use
 * robot_interfaces__action__Movement_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_GetResult_Response__init(robot_interfaces__action__Movement_GetResult_Response * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Response__fini(robot_interfaces__action__Movement_GetResult_Response * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_GetResult_Response *
robot_interfaces__action__Movement_GetResult_Response__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Response__destroy(robot_interfaces__action__Movement_GetResult_Response * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_GetResult_Response__Sequence__init(robot_interfaces__action__Movement_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Response__Sequence__fini(robot_interfaces__action__Movement_GetResult_Response__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_GetResult_Response__Sequence *
robot_interfaces__action__Movement_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_GetResult_Response__Sequence__destroy(robot_interfaces__action__Movement_GetResult_Response__Sequence * array);

/// Initialize action/Movement message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robot_interfaces__action__Movement_FeedbackMessage
 * )) before or use
 * robot_interfaces__action__Movement_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_FeedbackMessage__init(robot_interfaces__action__Movement_FeedbackMessage * msg);

/// Finalize action/Movement message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_FeedbackMessage__fini(robot_interfaces__action__Movement_FeedbackMessage * msg);

/// Create action/Movement message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robot_interfaces__action__Movement_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_FeedbackMessage *
robot_interfaces__action__Movement_FeedbackMessage__create();

/// Destroy action/Movement message.
/**
 * It calls
 * robot_interfaces__action__Movement_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_FeedbackMessage__destroy(robot_interfaces__action__Movement_FeedbackMessage * msg);


/// Initialize array of action/Movement messages.
/**
 * It allocates the memory for the number of elements and calls
 * robot_interfaces__action__Movement_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
bool
robot_interfaces__action__Movement_FeedbackMessage__Sequence__init(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_FeedbackMessage__Sequence__fini(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array);

/// Create array of action/Movement messages.
/**
 * It allocates the memory for the array and calls
 * robot_interfaces__action__Movement_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
robot_interfaces__action__Movement_FeedbackMessage__Sequence *
robot_interfaces__action__Movement_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Movement messages.
/**
 * It calls
 * robot_interfaces__action__Movement_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
void
robot_interfaces__action__Movement_FeedbackMessage__Sequence__destroy(robot_interfaces__action__Movement_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__FUNCTIONS_H_
