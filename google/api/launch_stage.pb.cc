// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/launch_stage.proto

#include "google/api/launch_stage.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace google {
namespace api {
}  // namespace api
}  // namespace google
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_google_2fapi_2flaunch_5fstage_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2flaunch_5fstage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2flaunch_5fstage_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fapi_2flaunch_5fstage_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2fapi_2flaunch_5fstage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035google/api/launch_stage.proto\022\ngoogle."
  "api*j\n\013LaunchStage\022\034\n\030LAUNCH_STAGE_UNSPE"
  "CIFIED\020\000\022\020\n\014EARLY_ACCESS\020\001\022\t\n\005ALPHA\020\002\022\010\n"
  "\004BETA\020\003\022\006\n\002GA\020\004\022\016\n\nDEPRECATED\020\005BZ\n\016com.g"
  "oogle.apiB\020LaunchStageProtoP\001Z-google.go"
  "lang.org/genproto/googleapis/api;api\242\002\004G"
  "APIb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2flaunch_5fstage_2eproto = {
  false, false, descriptor_table_protodef_google_2fapi_2flaunch_5fstage_2eproto, "google/api/launch_stage.proto", 251,
  &descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_once, descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_sccs, descriptor_table_google_2fapi_2flaunch_5fstage_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_google_2fapi_2flaunch_5fstage_2eproto::offsets,
  file_level_metadata_google_2fapi_2flaunch_5fstage_2eproto, 0, file_level_enum_descriptors_google_2fapi_2flaunch_5fstage_2eproto, file_level_service_descriptors_google_2fapi_2flaunch_5fstage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2flaunch_5fstage_2eproto(&descriptor_table_google_2fapi_2flaunch_5fstage_2eproto);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LaunchStage_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2flaunch_5fstage_2eproto);
  return file_level_enum_descriptors_google_2fapi_2flaunch_5fstage_2eproto[0];
}
bool LaunchStage_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
