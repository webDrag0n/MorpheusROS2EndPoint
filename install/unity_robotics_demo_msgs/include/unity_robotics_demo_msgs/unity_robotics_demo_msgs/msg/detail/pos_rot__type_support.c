// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from unity_robotics_demo_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__rosidl_typesupport_introspection_c.h"
#include "unity_robotics_demo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__functions.h"
#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  unity_robotics_demo_msgs__msg__PosRot__init(message_memory);
}

void unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_fini_function(void * message_memory)
{
  unity_robotics_demo_msgs__msg__PosRot__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_member_array[7] = {
  {
    "pos_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, pos_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, pos_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, pos_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, rot_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, rot_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, rot_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rot_w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_robotics_demo_msgs__msg__PosRot, rot_w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_members = {
  "unity_robotics_demo_msgs__msg",  // message namespace
  "PosRot",  // message name
  7,  // number of fields
  sizeof(unity_robotics_demo_msgs__msg__PosRot),
  unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_member_array,  // message members
  unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_init_function,  // function to initialize message memory (memory has to be allocated)
  unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_type_support_handle = {
  0,
  &unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_unity_robotics_demo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unity_robotics_demo_msgs, msg, PosRot)() {
  if (!unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_type_support_handle.typesupport_identifier) {
    unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &unity_robotics_demo_msgs__msg__PosRot__rosidl_typesupport_introspection_c__PosRot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
