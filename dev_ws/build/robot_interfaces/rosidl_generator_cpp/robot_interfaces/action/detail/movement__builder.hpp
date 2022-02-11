// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
#define ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_

#include "robot_interfaces/action/detail/movement__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_Goal_rotation_setpoint
{
public:
  explicit Init_Movement_Goal_rotation_setpoint(::robot_interfaces::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_Goal rotation_setpoint(::robot_interfaces::action::Movement_Goal::_rotation_setpoint_type arg)
  {
    msg_.rotation_setpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Goal msg_;
};

class Init_Movement_Goal_translation_setpoint
{
public:
  explicit Init_Movement_Goal_translation_setpoint(::robot_interfaces::action::Movement_Goal & msg)
  : msg_(msg)
  {}
  Init_Movement_Goal_rotation_setpoint translation_setpoint(::robot_interfaces::action::Movement_Goal::_translation_setpoint_type arg)
  {
    msg_.translation_setpoint = std::move(arg);
    return Init_Movement_Goal_rotation_setpoint(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Goal msg_;
};

class Init_Movement_Goal_movement_type
{
public:
  Init_Movement_Goal_movement_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Goal_translation_setpoint movement_type(::robot_interfaces::action::Movement_Goal::_movement_type_type arg)
  {
    msg_.movement_type = std::move(arg);
    return Init_Movement_Goal_translation_setpoint(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_Goal>()
{
  return robot_interfaces::action::builder::Init_Movement_Goal_movement_type();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_Result_theta_error
{
public:
  explicit Init_Movement_Result_theta_error(::robot_interfaces::action::Movement_Result & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_Result theta_error(::robot_interfaces::action::Movement_Result::_theta_error_type arg)
  {
    msg_.theta_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Result msg_;
};

class Init_Movement_Result_y_error
{
public:
  explicit Init_Movement_Result_y_error(::robot_interfaces::action::Movement_Result & msg)
  : msg_(msg)
  {}
  Init_Movement_Result_theta_error y_error(::robot_interfaces::action::Movement_Result::_y_error_type arg)
  {
    msg_.y_error = std::move(arg);
    return Init_Movement_Result_theta_error(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Result msg_;
};

class Init_Movement_Result_x_error
{
public:
  Init_Movement_Result_x_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_Result_y_error x_error(::robot_interfaces::action::Movement_Result::_x_error_type arg)
  {
    msg_.x_error = std::move(arg);
    return Init_Movement_Result_y_error(msg_);
  }

private:
  ::robot_interfaces::action::Movement_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_Result>()
{
  return robot_interfaces::action::builder::Init_Movement_Result_x_error();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_Feedback>()
{
  return ::robot_interfaces::action::Movement_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Request_goal
{
public:
  explicit Init_Movement_SendGoal_Request_goal(::robot_interfaces::action::Movement_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_SendGoal_Request goal(::robot_interfaces::action::Movement_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_SendGoal_Request msg_;
};

class Init_Movement_SendGoal_Request_goal_id
{
public:
  Init_Movement_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Request_goal goal_id(::robot_interfaces::action::Movement_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_interfaces::action::Movement_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_SendGoal_Request>()
{
  return robot_interfaces::action::builder::Init_Movement_SendGoal_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_SendGoal_Response_stamp
{
public:
  explicit Init_Movement_SendGoal_Response_stamp(::robot_interfaces::action::Movement_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_SendGoal_Response stamp(::robot_interfaces::action::Movement_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_SendGoal_Response msg_;
};

class Init_Movement_SendGoal_Response_accepted
{
public:
  Init_Movement_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_SendGoal_Response_stamp accepted(::robot_interfaces::action::Movement_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Movement_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_interfaces::action::Movement_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_SendGoal_Response>()
{
  return robot_interfaces::action::builder::Init_Movement_SendGoal_Response_accepted();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Request_goal_id
{
public:
  Init_Movement_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::Movement_GetResult_Request goal_id(::robot_interfaces::action::Movement_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_GetResult_Request>()
{
  return robot_interfaces::action::builder::Init_Movement_GetResult_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_GetResult_Response_result
{
public:
  explicit Init_Movement_GetResult_Response_result(::robot_interfaces::action::Movement_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_GetResult_Response result(::robot_interfaces::action::Movement_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_GetResult_Response msg_;
};

class Init_Movement_GetResult_Response_status
{
public:
  Init_Movement_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_GetResult_Response_result status(::robot_interfaces::action::Movement_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Movement_GetResult_Response_result(msg_);
  }

private:
  ::robot_interfaces::action::Movement_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_GetResult_Response>()
{
  return robot_interfaces::action::builder::Init_Movement_GetResult_Response_status();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Movement_FeedbackMessage_feedback
{
public:
  explicit Init_Movement_FeedbackMessage_feedback(::robot_interfaces::action::Movement_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Movement_FeedbackMessage feedback(::robot_interfaces::action::Movement_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Movement_FeedbackMessage msg_;
};

class Init_Movement_FeedbackMessage_goal_id
{
public:
  Init_Movement_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Movement_FeedbackMessage_feedback goal_id(::robot_interfaces::action::Movement_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Movement_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_interfaces::action::Movement_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Movement_FeedbackMessage>()
{
  return robot_interfaces::action::builder::Init_Movement_FeedbackMessage_goal_id();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__BUILDER_HPP_
