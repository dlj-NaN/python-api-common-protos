# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/consumer.proto
"""Generated protocol buffer code."""
import ctypes, importlib, sys
_dlopenflags = sys.getdlopenflags()
sys.setdlopenflags(_dlopenflags | ctypes.RTLD_GLOBAL)

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
  name='google/api/consumer.proto',
  package='google.api',
  syntax='proto3',
  serialized_options=b'\n\016com.google.apiB\rConsumerProtoP\001ZEgoogle.golang.org/genproto/googleapis/api/serviceconfig;serviceconfig',
  create_key=_descriptor._internal_create_key,
  serialized_pb=''
)



ProjectProperties = _reflection.GeneratedProtocolMessageType('ProjectProperties', (_message.Message,), {
  'DESCRIPTOR' : 'google.api.ProjectProperties',
  '__module__' : 'google.api.consumer_pb2'
  # @@protoc_insertion_point(class_scope:google.api.ProjectProperties)
  })
_sym_db.RegisterMessage(ProjectProperties)

Property = _reflection.GeneratedProtocolMessageType('Property', (_message.Message,), {
  'DESCRIPTOR' : 'google.api.Property',
  '__module__' : 'google.api.consumer_pb2'
  # @@protoc_insertion_point(class_scope:google.api.Property)
  })
_sym_db.RegisterMessage(Property)

# @@protoc_insertion_point(module_scope)
