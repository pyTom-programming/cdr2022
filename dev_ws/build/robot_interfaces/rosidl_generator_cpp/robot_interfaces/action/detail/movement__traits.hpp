// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
#define ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_

#include "robot_interfaces/action/detail/movement__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movement_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_type: ";
    value_to_yaml(msg.movement_type, out);
    out << "\n";
  }

  // member: translation_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_setpoint: ";
    value_to_yaml(msg.translation_setpoint, out);
    out << "\n";
  }

  // member: rotation_setpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_setpoint: ";
    value_to_yaml(msg.rotation_setpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_Goal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_Goal>()
{
  return "robot_interfaces::action::Movement_Goal";
}

template<>
inline const char * name<robot_interfaces::action::Movement_Goal>()
{
  return "robot_interfaces/action/Movement_Goal";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::action::Movement_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_error: ";
    value_to_yaml(msg.x_error, out);
    out << "\n";
  }

  // member: y_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_error: ";
    value_to_yaml(msg.y_error, out);
    out << "\n";
  }

  // member: theta_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta_error: ";
    value_to_yaml(msg.theta_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_Result & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_Result>()
{
  return "robot_interfaces::action::Movement_Result";
}

template<>
inline const char * name<robot_interfaces::action::Movement_Result>()
{
  return "robot_interfaces/action/Movement_Result";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::action::Movement_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_Feedback & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_Feedback>()
{
  return "robot_interfaces::action::Movement_Feedback";
}

template<>
inline const char * name<robot_interfaces::action::Movement_Feedback>()
{
  return "robot_interfaces/action/Movement_Feedback";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::action::Movement_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robot_interfaces/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_SendGoal_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_SendGoal_Request>()
{
  return "robot_interfaces::action::Movement_SendGoal_Request";
}

template<>
inline const char * name<robot_interfaces::action::Movement_SendGoal_Request>()
{
  return "robot_interfaces/action/Movement_SendGoal_Request";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robot_interfaces::action::Movement_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robot_interfaces::action::Movement_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interfaces::action::Movement_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_SendGoal_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_SendGoal_Response>()
{
  return "robot_interfaces::action::Movement_SendGoal_Response";
}

template<>
inline const char * name<robot_interfaces::action::Movement_SendGoal_Response>()
{
  return "robot_interfaces/action/Movement_SendGoal_Response";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robot_interfaces::action::Movement_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::action::Movement_SendGoal>()
{
  return "robot_interfaces::action::Movement_SendGoal";
}

template<>
inline const char * name<robot_interfaces::action::Movement_SendGoal>()
{
  return "robot_interfaces/action/Movement_SendGoal";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::action::Movement_SendGoal_Request>::value &&
    has_fixed_size<robot_interfaces::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::action::Movement_SendGoal_Request>::value &&
    has_bounded_size<robot_interfaces::action::Movement_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::action::Movement_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::action::Movement_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::action::Movement_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_GetResult_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_GetResult_Request>()
{
  return "robot_interfaces::action::Movement_GetResult_Request";
}

template<>
inline const char * name<robot_interfaces::action::Movement_GetResult_Request>()
{
  return "robot_interfaces/action/Movement_GetResult_Request";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interfaces::action::Movement_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interfaces/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_GetResult_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_GetResult_Response>()
{
  return "robot_interfaces::action::Movement_GetResult_Response";
}

template<>
inline const char * name<robot_interfaces::action::Movement_GetResult_Response>()
{
  return "robot_interfaces/action/Movement_GetResult_Response";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robot_interfaces::action::Movement_Result>::value> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robot_interfaces::action::Movement_Result>::value> {};

template<>
struct is_message<robot_interfaces::action::Movement_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_interfaces::action::Movement_GetResult>()
{
  return "robot_interfaces::action::Movement_GetResult";
}

template<>
inline const char * name<robot_interfaces::action::Movement_GetResult>()
{
  return "robot_interfaces/action/Movement_GetResult";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_interfaces::action::Movement_GetResult_Request>::value &&
    has_fixed_size<robot_interfaces::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_interfaces::action::Movement_GetResult_Request>::value &&
    has_bounded_size<robot_interfaces::action::Movement_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robot_interfaces::action::Movement_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robot_interfaces::action::Movement_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_interfaces::action::Movement_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robot_interfaces/action/detail/movement__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const robot_interfaces::action::Movement_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const robot_interfaces::action::Movement_FeedbackMessage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<robot_interfaces::action::Movement_FeedbackMessage>()
{
  return "robot_interfaces::action::Movement_FeedbackMessage";
}

template<>
inline const char * name<robot_interfaces::action::Movement_FeedbackMessage>()
{
  return "robot_interfaces/action/Movement_FeedbackMessage";
}

template<>
struct has_fixed_size<robot_interfaces::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robot_interfaces::action::Movement_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_interfaces::action::Movement_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robot_interfaces::action::Movement_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_interfaces::action::Movement_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robot_interfaces::action::Movement>
  : std::true_type
{
};

template<>
struct is_action_goal<robot_interfaces::action::Movement_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robot_interfaces::action::Movement_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robot_interfaces::action::Movement_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__TRAITS_HPP_
