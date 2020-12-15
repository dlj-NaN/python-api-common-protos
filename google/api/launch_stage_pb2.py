# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/launch_stage.proto
"""Generated protocol buffer code."""
import ctypes, importlib, sys
_dlopenflags = sys.getdlopenflags()
sys.setdlopenflags(_dlopenflags | ctypes.RTLD_GLOBAL)

from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database

importlib.import_module('google.api_common_protos._descriptors')
sys.setdlopenflags(_dlopenflags)
del _dlopenflags, ctypes, importlib, sys
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/api/launch_stage.proto',
  package='google.api',
  syntax='proto3',
  serialized_options=b'\n\016com.google.apiB\020LaunchStageProtoP\001Z-google.golang.org/genproto/googleapis/api;api\242\002\004GAPI',
  create_key=_descriptor._internal_create_key,
  serialized_pb=''
)

_LAUNCHSTAGE = _descriptor.EnumDescriptor(
  name='LaunchStage',
  full_name='google.api.LaunchStage',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=45,
  serialized_end=151,
)

LaunchStage = enum_type_wrapper.EnumTypeWrapper(_LAUNCHSTAGE)
LAUNCH_STAGE_UNSPECIFIED = 0
EARLY_ACCESS = 1
ALPHA = 2
BETA = 3
GA = 4
DEPRECATED = 5


# @@protoc_insertion_point(module_scope)
