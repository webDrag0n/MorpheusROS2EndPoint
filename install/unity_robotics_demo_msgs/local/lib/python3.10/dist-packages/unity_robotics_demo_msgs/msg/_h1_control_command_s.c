// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from unity_robotics_demo_msgs:msg/H1ControlCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__struct.h"
#include "unity_robotics_demo_msgs/msg/detail/h1_control_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool unity_robotics_demo_msgs__msg__h1_control_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("unity_robotics_demo_msgs.msg._h1_control_command.H1ControlCommand", full_classname_dest, 65) == 0);
  }
  unity_robotics_demo_msgs__msg__H1ControlCommand * ros_message = _ros_message;
  {  // left_hip_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hip_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_hip_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_hip_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hip_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_hip_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_hip_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_hip_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_hip_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_knee
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_knee");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_knee = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_ankle
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ankle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_ankle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_hip_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hip_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_hip_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_hip_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hip_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_hip_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_hip_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_hip_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_hip_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_knee
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_knee");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_knee = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_ankle
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ankle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_ankle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // torso
    PyObject * field = PyObject_GetAttrString(_pymsg, "torso");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->torso = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_shoulder_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_shoulder_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_shoulder_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_shoulder_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_shoulder_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_shoulder_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_shoulder_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_elbow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_elbow = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_shoulder_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_shoulder_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_shoulder_roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder_roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_shoulder_roll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_shoulder_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_shoulder_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_shoulder_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_elbow
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_elbow");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_elbow = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * unity_robotics_demo_msgs__msg__h1_control_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of H1ControlCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("unity_robotics_demo_msgs.msg._h1_control_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "H1ControlCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  unity_robotics_demo_msgs__msg__H1ControlCommand * ros_message = (unity_robotics_demo_msgs__msg__H1ControlCommand *)raw_ros_message;
  {  // left_hip_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_hip_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hip_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_hip_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_hip_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hip_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_hip_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_hip_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_hip_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_knee
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_knee);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_knee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_ankle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_ankle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ankle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hip_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_hip_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hip_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hip_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_hip_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hip_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_hip_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_hip_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_hip_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_knee
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_knee);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_knee", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ankle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_ankle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ankle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // torso
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->torso);
    {
      int rc = PyObject_SetAttrString(_pymessage, "torso", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_shoulder_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_shoulder_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_shoulder_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_shoulder_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_shoulder_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_shoulder_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_shoulder_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_elbow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_shoulder_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_shoulder_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_shoulder_roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_shoulder_roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder_roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_shoulder_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_shoulder_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_shoulder_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_elbow
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_elbow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_elbow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
