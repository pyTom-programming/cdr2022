// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:action/Movement.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_HPP_
#define ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_Goal __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_Goal_
{
  using Type = Movement_Goal_<ContainerAllocator>;

  explicit Movement_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_type = 0;
      this->translation_setpoint = 0.0;
      this->rotation_setpoint = 0.0;
    }
  }

  explicit Movement_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_type = 0;
      this->translation_setpoint = 0.0;
      this->rotation_setpoint = 0.0;
    }
  }

  // field types and members
  using _movement_type_type =
    int8_t;
  _movement_type_type movement_type;
  using _translation_setpoint_type =
    double;
  _translation_setpoint_type translation_setpoint;
  using _rotation_setpoint_type =
    double;
  _rotation_setpoint_type rotation_setpoint;

  // setters for named parameter idiom
  Type & set__movement_type(
    const int8_t & _arg)
  {
    this->movement_type = _arg;
    return *this;
  }
  Type & set__translation_setpoint(
    const double & _arg)
  {
    this->translation_setpoint = _arg;
    return *this;
  }
  Type & set__rotation_setpoint(
    const double & _arg)
  {
    this->rotation_setpoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_Goal
    std::shared_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_Goal
    std::shared_ptr<robot_interfaces::action::Movement_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_Goal_ & other) const
  {
    if (this->movement_type != other.movement_type) {
      return false;
    }
    if (this->translation_setpoint != other.translation_setpoint) {
      return false;
    }
    if (this->rotation_setpoint != other.rotation_setpoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_Goal_

// alias to use template instance with default allocator
using Movement_Goal =
  robot_interfaces::action::Movement_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_Result __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_Result __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_Result_
{
  using Type = Movement_Result_<ContainerAllocator>;

  explicit Movement_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_error = 0.0;
      this->y_error = 0.0;
      this->theta_error = 0.0;
    }
  }

  explicit Movement_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_error = 0.0;
      this->y_error = 0.0;
      this->theta_error = 0.0;
    }
  }

  // field types and members
  using _x_error_type =
    double;
  _x_error_type x_error;
  using _y_error_type =
    double;
  _y_error_type y_error;
  using _theta_error_type =
    double;
  _theta_error_type theta_error;

  // setters for named parameter idiom
  Type & set__x_error(
    const double & _arg)
  {
    this->x_error = _arg;
    return *this;
  }
  Type & set__y_error(
    const double & _arg)
  {
    this->y_error = _arg;
    return *this;
  }
  Type & set__theta_error(
    const double & _arg)
  {
    this->theta_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_Result
    std::shared_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_Result
    std::shared_ptr<robot_interfaces::action::Movement_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_Result_ & other) const
  {
    if (this->x_error != other.x_error) {
      return false;
    }
    if (this->y_error != other.y_error) {
      return false;
    }
    if (this->theta_error != other.theta_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_Result_

// alias to use template instance with default allocator
using Movement_Result =
  robot_interfaces::action::Movement_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_Feedback __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_Feedback_
{
  using Type = Movement_Feedback_<ContainerAllocator>;

  explicit Movement_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Movement_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_Feedback
    std::shared_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_Feedback
    std::shared_ptr<robot_interfaces::action::Movement_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_Feedback_

// alias to use template instance with default allocator
using Movement_Feedback =
  robot_interfaces::action::Movement_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robot_interfaces/action/detail/movement__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_SendGoal_Request __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_SendGoal_Request_
{
  using Type = Movement_SendGoal_Request_<ContainerAllocator>;

  explicit Movement_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Movement_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robot_interfaces::action::Movement_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robot_interfaces::action::Movement_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_SendGoal_Request
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_SendGoal_Request
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_SendGoal_Request_

// alias to use template instance with default allocator
using Movement_SendGoal_Request =
  robot_interfaces::action::Movement_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_SendGoal_Response __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_SendGoal_Response_
{
  using Type = Movement_SendGoal_Response_<ContainerAllocator>;

  explicit Movement_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Movement_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_SendGoal_Response
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_SendGoal_Response
    std::shared_ptr<robot_interfaces::action::Movement_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_SendGoal_Response_

// alias to use template instance with default allocator
using Movement_SendGoal_Response =
  robot_interfaces::action::Movement_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces

namespace robot_interfaces
{

namespace action
{

struct Movement_SendGoal
{
  using Request = robot_interfaces::action::Movement_SendGoal_Request;
  using Response = robot_interfaces::action::Movement_SendGoal_Response;
};

}  // namespace action

}  // namespace robot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_GetResult_Request __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_GetResult_Request_
{
  using Type = Movement_GetResult_Request_<ContainerAllocator>;

  explicit Movement_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Movement_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_GetResult_Request
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_GetResult_Request
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_GetResult_Request_

// alias to use template instance with default allocator
using Movement_GetResult_Request =
  robot_interfaces::action::Movement_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "robot_interfaces/action/detail/movement__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_GetResult_Response __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_GetResult_Response_
{
  using Type = Movement_GetResult_Response_<ContainerAllocator>;

  explicit Movement_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Movement_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robot_interfaces::action::Movement_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robot_interfaces::action::Movement_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_GetResult_Response
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_GetResult_Response
    std::shared_ptr<robot_interfaces::action::Movement_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_GetResult_Response_

// alias to use template instance with default allocator
using Movement_GetResult_Response =
  robot_interfaces::action::Movement_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces

namespace robot_interfaces
{

namespace action
{

struct Movement_GetResult
{
  using Request = robot_interfaces::action::Movement_GetResult_Request;
  using Response = robot_interfaces::action::Movement_GetResult_Response;
};

}  // namespace action

}  // namespace robot_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robot_interfaces/action/detail/movement__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__action__Movement_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__action__Movement_FeedbackMessage __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Movement_FeedbackMessage_
{
  using Type = Movement_FeedbackMessage_<ContainerAllocator>;

  explicit Movement_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Movement_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robot_interfaces::action::Movement_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robot_interfaces::action::Movement_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__action__Movement_FeedbackMessage
    std::shared_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__action__Movement_FeedbackMessage
    std::shared_ptr<robot_interfaces::action::Movement_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Movement_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Movement_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Movement_FeedbackMessage_

// alias to use template instance with default allocator
using Movement_FeedbackMessage =
  robot_interfaces::action::Movement_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robot_interfaces
{

namespace action
{

struct Movement
{
  /// The goal message defined in the action definition.
  using Goal = robot_interfaces::action::Movement_Goal;
  /// The result message defined in the action definition.
  using Result = robot_interfaces::action::Movement_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robot_interfaces::action::Movement_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robot_interfaces::action::Movement_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robot_interfaces::action::Movement_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robot_interfaces::action::Movement_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Movement Movement;

}  // namespace action

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__MOVEMENT__STRUCT_HPP_
