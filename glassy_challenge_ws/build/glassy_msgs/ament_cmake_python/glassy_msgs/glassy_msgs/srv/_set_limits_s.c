// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from glassy_msgs:srv/SetLimits.idl
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
#include "glassy_msgs/srv/detail/set_limits__struct.h"
#include "glassy_msgs/srv/detail/set_limits__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool glassy_msgs__srv__set_limits__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("glassy_msgs.srv._set_limits.SetLimits_Request", full_classname_dest, 45) == 0);
  }
  glassy_msgs__srv__SetLimits_Request * ros_message = _ros_message;
  {  // max_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // min_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * glassy_msgs__srv__set_limits__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLimits_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("glassy_msgs.srv._set_limits");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLimits_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  glassy_msgs__srv__SetLimits_Request * ros_message = (glassy_msgs__srv__SetLimits_Request *)raw_ros_message;
  {  // max_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "glassy_msgs/srv/detail/set_limits__struct.h"
// already included above
// #include "glassy_msgs/srv/detail/set_limits__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool glassy_msgs__srv__set_limits__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("glassy_msgs.srv._set_limits.SetLimits_Response", full_classname_dest, 46) == 0);
  }
  glassy_msgs__srv__SetLimits_Response * ros_message = _ros_message;
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->result = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * glassy_msgs__srv__set_limits__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetLimits_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("glassy_msgs.srv._set_limits");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetLimits_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  glassy_msgs__srv__SetLimits_Response * ros_message = (glassy_msgs__srv__SetLimits_Response *)raw_ros_message;
  {  // result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
