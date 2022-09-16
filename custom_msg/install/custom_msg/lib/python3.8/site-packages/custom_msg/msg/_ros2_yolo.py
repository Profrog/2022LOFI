# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msg:msg/Ros2Yolo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ros2Yolo(type):
    """Metaclass of message 'Ros2Yolo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msg.msg.Ros2Yolo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ros2_yolo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ros2_yolo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ros2_yolo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ros2_yolo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ros2_yolo

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ros2Yolo(metaclass=Metaclass_Ros2Yolo):
    """Message class 'Ros2Yolo'."""

    __slots__ = [
        '_o_image',
        '_detect_info',
    ]

    _fields_and_field_types = {
        'o_image': 'string',
        'detect_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.o_image = kwargs.get('o_image', str())
        self.detect_info = kwargs.get('detect_info', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.o_image != other.o_image:
            return False
        if self.detect_info != other.detect_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def o_image(self):
        """Message field 'o_image'."""
        return self._o_image

    @o_image.setter
    def o_image(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'o_image' field must be of type 'str'"
        self._o_image = value

    @property
    def detect_info(self):
        """Message field 'detect_info'."""
        return self._detect_info

    @detect_info.setter
    def detect_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'detect_info' field must be of type 'str'"
        self._detect_info = value
