# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/httpbody.proto
"""Generated protocol buffer code."""
import ctypes, importlib, sys
_dlopenflags = sys.getdlopenflags()
sys.setdlopenflags(_dlopenflags | ctypes.RTLD_GLOBAL)

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database

importlib.import_module('_descriptors')
sys.setdlopenflags(_dlopenflags)
del _dlopenflags, ctypes, importlib, sys
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


DESCRIPTOR = _descriptor.FileDescriptor(
  name='google/api/httpbody.proto',
  package='google.api',
  syntax='proto3',
  serialized_options=b'\n\016com.google.apiB\rHttpBodyProtoP\001Z;google.golang.org/genproto/googleapis/api/httpbody;httpbody\242\002\004GAPI',
  create_key=_descriptor._internal_create_key,
  serialized_pb=''
)



HttpBody = _reflection.GeneratedProtocolMessageType('HttpBody', (_message.Message,), {
  'DESCRIPTOR' : 'google.api.HttpBody',
  '__module__' : 'google.api.httpbody_pb2'
  # @@protoc_insertion_point(class_scope:google.api.HttpBody)
  })
_sym_db.RegisterMessage(HttpBody)

# @@protoc_insertion_point(module_scope)
