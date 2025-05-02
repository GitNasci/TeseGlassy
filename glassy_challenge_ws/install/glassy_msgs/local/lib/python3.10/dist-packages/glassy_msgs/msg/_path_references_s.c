// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from glassy_msgs:msg/PathReferences.idl
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
#include "glassy_msgs/msg/detail/path_references__struct.h"
#include "glassy_msgs/msg/detail/path_references__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool glassy_msgs__msg__path_references__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("glassy_msgs.msg._path_references.PathReferences", full_classname_dest, 47) == 0);
  }
  glassy_msgs__msg__PathReferences * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // x_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_active = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // path_segment_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_segment_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_segment_index = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // path_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->path_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tangent_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "tangent_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tangent_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * glassy_msgs__msg__path_references__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathReferences */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("glassy_msgs.msg._path_references");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathReferences");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  glassy_msgs__msg__PathReferences * ros_message = (glassy_msgs__msg__PathReferences *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_active
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->is_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_segment_index
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->path_segment_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_segment_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->path_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tangent_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tangent_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tangent_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
