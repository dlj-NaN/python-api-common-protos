# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/rpc/error_details.proto
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
  name='google/rpc/error_details.proto',
  package='google.rpc',
  syntax='proto3',
  serialized_options=b'\n\016com.google.rpcB\021ErrorDetailsProtoP\001Z?google.golang.org/genproto/googleapis/rpc/errdetails;errdetails\242\002\003RPC',
  create_key=_descriptor._internal_create_key,
  serialized_pb=''
)



RetryInfo = _reflection.GeneratedProtocolMessageType('RetryInfo', (_message.Message,), {
  'DESCRIPTOR' : 'google.rpc.RetryInfo',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.RetryInfo)
  })
_sym_db.RegisterMessage(RetryInfo)

DebugInfo = _reflection.GeneratedProtocolMessageType('DebugInfo', (_message.Message,), {
  'DESCRIPTOR' : 'google.rpc.DebugInfo',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.DebugInfo)
  })
_sym_db.RegisterMessage(DebugInfo)

QuotaFailure = _reflection.GeneratedProtocolMessageType('QuotaFailure', (_message.Message,), {

  'Violation' : _reflection.GeneratedProtocolMessageType('Violation', (_message.Message,), {
    'DESCRIPTOR' : 'google.rpc.QuotaFailure.Violation',
    '__module__' : 'google.rpc.error_details_pb2'
    # @@protoc_insertion_point(class_scope:google.rpc.QuotaFailure.Violation)
    })
  ,
  'DESCRIPTOR' : 'google.rpc.QuotaFailure',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.QuotaFailure)
  })
_sym_db.RegisterMessage(QuotaFailure)
_sym_db.RegisterMessage(QuotaFailure.Violation)

ErrorInfo = _reflection.GeneratedProtocolMessageType('ErrorInfo', (_message.Message,), {

  'MetadataEntry' : _reflection.GeneratedProtocolMessageType('MetadataEntry', (_message.Message,), {
    'DESCRIPTOR' : 'google.rpc.ErrorInfo.MetadataEntry',
    '__module__' : 'google.rpc.error_details_pb2'
    # @@protoc_insertion_point(class_scope:google.rpc.ErrorInfo.MetadataEntry)
    })
  ,
  'DESCRIPTOR' : 'google.rpc.ErrorInfo',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.ErrorInfo)
  })
_sym_db.RegisterMessage(ErrorInfo)
_sym_db.RegisterMessage(ErrorInfo.MetadataEntry)

PreconditionFailure = _reflection.GeneratedProtocolMessageType('PreconditionFailure', (_message.Message,), {

  'Violation' : _reflection.GeneratedProtocolMessageType('Violation', (_message.Message,), {
    'DESCRIPTOR' : 'google.rpc.PreconditionFailure.Violation',
    '__module__' : 'google.rpc.error_details_pb2'
    # @@protoc_insertion_point(class_scope:google.rpc.PreconditionFailure.Violation)
    })
  ,
  'DESCRIPTOR' : 'google.rpc.PreconditionFailure',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.PreconditionFailure)
  })
_sym_db.RegisterMessage(PreconditionFailure)
_sym_db.RegisterMessage(PreconditionFailure.Violation)

BadRequest = _reflection.GeneratedProtocolMessageType('BadRequest', (_message.Message,), {

  'FieldViolation' : _reflection.GeneratedProtocolMessageType('FieldViolation', (_message.Message,), {
    'DESCRIPTOR' : 'google.rpc.BadRequest.FieldViolation',
    '__module__' : 'google.rpc.error_details_pb2'
    # @@protoc_insertion_point(class_scope:google.rpc.BadRequest.FieldViolation)
    })
  ,
  'DESCRIPTOR' : 'google.rpc.BadRequest',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.BadRequest)
  })
_sym_db.RegisterMessage(BadRequest)
_sym_db.RegisterMessage(BadRequest.FieldViolation)

RequestInfo = _reflection.GeneratedProtocolMessageType('RequestInfo', (_message.Message,), {
  'DESCRIPTOR' : 'google.rpc.RequestInfo',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.RequestInfo)
  })
_sym_db.RegisterMessage(RequestInfo)

ResourceInfo = _reflection.GeneratedProtocolMessageType('ResourceInfo', (_message.Message,), {
  'DESCRIPTOR' : 'google.rpc.ResourceInfo',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.ResourceInfo)
  })
_sym_db.RegisterMessage(ResourceInfo)

Help = _reflection.GeneratedProtocolMessageType('Help', (_message.Message,), {

  'Link' : _reflection.GeneratedProtocolMessageType('Link', (_message.Message,), {
    'DESCRIPTOR' : 'google.rpc.Help.Link',
    '__module__' : 'google.rpc.error_details_pb2'
    # @@protoc_insertion_point(class_scope:google.rpc.Help.Link)
    })
  ,
  'DESCRIPTOR' : 'google.rpc.Help',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.Help)
  })
_sym_db.RegisterMessage(Help)
_sym_db.RegisterMessage(Help.Link)

LocalizedMessage = _reflection.GeneratedProtocolMessageType('LocalizedMessage', (_message.Message,), {
  'DESCRIPTOR' : 'google.rpc.LocalizedMessage',
  '__module__' : 'google.rpc.error_details_pb2'
  # @@protoc_insertion_point(class_scope:google.rpc.LocalizedMessage)
  })
_sym_db.RegisterMessage(LocalizedMessage)

# @@protoc_insertion_point(module_scope)
