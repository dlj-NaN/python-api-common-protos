# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: google/api/quota.proto
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
  name='google/api/quota.proto',
  package='google.api',
  syntax='proto3',
  serialized_options=b'\n\016com.google.apiB\nQuotaProtoP\001ZEgoogle.golang.org/genproto/googleapis/api/serviceconfig;serviceconfig\242\002\004GAPI',
  create_key=_descriptor._internal_create_key,
  serialized_pb=''
)



Quota = _reflection.GeneratedProtocolMessageType('Quota', (_message.Message,), {
  'DESCRIPTOR' : 'google.api.Quota',
  '__module__' : 'google.api.quota_pb2'
  # @@protoc_insertion_point(class_scope:google.api.Quota)
  })
_sym_db.RegisterMessage(Quota)

MetricRule = _reflection.GeneratedProtocolMessageType('MetricRule', (_message.Message,), {

  'MetricCostsEntry' : _reflection.GeneratedProtocolMessageType('MetricCostsEntry', (_message.Message,), {
    'DESCRIPTOR' : 'google.api.MetricRule.MetricCostsEntry',
    '__module__' : 'google.api.quota_pb2'
    # @@protoc_insertion_point(class_scope:google.api.MetricRule.MetricCostsEntry)
    })
  ,
  'DESCRIPTOR' : 'google.api.MetricRule',
  '__module__' : 'google.api.quota_pb2'
  # @@protoc_insertion_point(class_scope:google.api.MetricRule)
  })
_sym_db.RegisterMessage(MetricRule)
_sym_db.RegisterMessage(MetricRule.MetricCostsEntry)

QuotaLimit = _reflection.GeneratedProtocolMessageType('QuotaLimit', (_message.Message,), {

  'ValuesEntry' : _reflection.GeneratedProtocolMessageType('ValuesEntry', (_message.Message,), {
    'DESCRIPTOR' : 'google.api.QuotaLimit.ValuesEntry',
    '__module__' : 'google.api.quota_pb2'
    # @@protoc_insertion_point(class_scope:google.api.QuotaLimit.ValuesEntry)
    })
  ,
  'DESCRIPTOR' : 'google.api.QuotaLimit',
  '__module__' : 'google.api.quota_pb2'
  # @@protoc_insertion_point(class_scope:google.api.QuotaLimit)
  })
_sym_db.RegisterMessage(QuotaLimit)
_sym_db.RegisterMessage(QuotaLimit.ValuesEntry)

# @@protoc_insertion_point(module_scope)
