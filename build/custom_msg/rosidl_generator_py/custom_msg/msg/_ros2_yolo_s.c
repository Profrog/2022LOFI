// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msg:msg/Ros2Yolo.idl
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
#include "custom_msg/msg/detail/ros2_yolo__struct.h"
#include "custom_msg/msg/detail/ros2_yolo__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msg__msg__ros2_yolo__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("custom_msg.msg._ros2_yolo.Ros2Yolo", full_classname_dest, 34) == 0);
  }
  custom_msg__msg__Ros2Yolo * ros_message = _ros_message;
  {  // o_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_image");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->o_image, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // detect_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "detect_info");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->detect_info, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // o_label
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_label");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->o_label, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // o_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->o_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // o_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->o_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // o_size_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_size_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->o_size_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // o_size_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "o_size_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->o_size_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msg__msg__ros2_yolo__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ros2Yolo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msg.msg._ros2_yolo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ros2Yolo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msg__msg__Ros2Yolo * ros_message = (custom_msg__msg__Ros2Yolo *)raw_ros_message;
  {  // o_image
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->o_image.data,
      strlen(ros_message->o_image.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // detect_info
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->detect_info.data,
      strlen(ros_message->detect_info.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "detect_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_label
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->o_label.data,
      strlen(ros_message->o_label.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_label", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->o_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->o_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_size_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->o_size_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_size_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // o_size_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->o_size_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "o_size_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
