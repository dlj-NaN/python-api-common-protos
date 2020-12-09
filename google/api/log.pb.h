// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/log.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flog_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flog_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "google/api/label.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2flog_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2flog_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fapi_2flog_2eproto;
namespace google {
namespace api {
class LogDescriptor;
class LogDescriptorDefaultTypeInternal;
extern LogDescriptorDefaultTypeInternal _LogDescriptor_default_instance_;
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::api::LogDescriptor* Arena::CreateMaybeMessage<::google::api::LogDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace api {

// ===================================================================

class LogDescriptor PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.api.LogDescriptor) */ {
 public:
  inline LogDescriptor() : LogDescriptor(nullptr) {}
  virtual ~LogDescriptor();

  LogDescriptor(const LogDescriptor& from);
  LogDescriptor(LogDescriptor&& from) noexcept
    : LogDescriptor() {
    *this = ::std::move(from);
  }

  inline LogDescriptor& operator=(const LogDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline LogDescriptor& operator=(LogDescriptor&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LogDescriptor& default_instance();

  static inline const LogDescriptor* internal_default_instance() {
    return reinterpret_cast<const LogDescriptor*>(
               &_LogDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LogDescriptor& a, LogDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(LogDescriptor* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LogDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LogDescriptor* New() const final {
    return CreateMaybeMessage<LogDescriptor>(nullptr);
  }

  LogDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LogDescriptor>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LogDescriptor& from);
  void MergeFrom(const LogDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LogDescriptor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.api.LogDescriptor";
  }
  protected:
  explicit LogDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fapi_2flog_2eproto);
    return ::descriptor_table_google_2fapi_2flog_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLabelsFieldNumber = 2,
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 3,
    kDisplayNameFieldNumber = 4,
  };
  // repeated .google.api.LabelDescriptor labels = 2;
  int labels_size() const;
  private:
  int _internal_labels_size() const;
  public:
  void clear_labels();
  ::google::api::LabelDescriptor* mutable_labels(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::LabelDescriptor >*
      mutable_labels();
  private:
  const ::google::api::LabelDescriptor& _internal_labels(int index) const;
  ::google::api::LabelDescriptor* _internal_add_labels();
  public:
  const ::google::api::LabelDescriptor& labels(int index) const;
  ::google::api::LabelDescriptor* add_labels();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::LabelDescriptor >&
      labels() const;

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string description = 3;
  void clear_description();
  const std::string& description() const;
  void set_description(const std::string& value);
  void set_description(std::string&& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  std::string* mutable_description();
  std::string* release_description();
  void set_allocated_description(std::string* description);
  private:
  const std::string& _internal_description() const;
  void _internal_set_description(const std::string& value);
  std::string* _internal_mutable_description();
  public:

  // string display_name = 4;
  void clear_display_name();
  const std::string& display_name() const;
  void set_display_name(const std::string& value);
  void set_display_name(std::string&& value);
  void set_display_name(const char* value);
  void set_display_name(const char* value, size_t size);
  std::string* mutable_display_name();
  std::string* release_display_name();
  void set_allocated_display_name(std::string* display_name);
  private:
  const std::string& _internal_display_name() const;
  void _internal_set_display_name(const std::string& value);
  std::string* _internal_mutable_display_name();
  public:

  // @@protoc_insertion_point(class_scope:google.api.LogDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::LabelDescriptor > labels_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr description_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr display_name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fapi_2flog_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LogDescriptor

// string name = 1;
inline void LogDescriptor::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& LogDescriptor::name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.name)
  return _internal_name();
}
inline void LogDescriptor::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.name)
}
inline std::string* LogDescriptor::mutable_name() {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.name)
  return _internal_mutable_name();
}
inline const std::string& LogDescriptor::_internal_name() const {
  return name_.Get();
}
inline void LogDescriptor::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void LogDescriptor::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.name)
}
inline void LogDescriptor::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.name)
}
inline void LogDescriptor::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.name)
}
inline std::string* LogDescriptor::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* LogDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LogDescriptor::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.name)
}

// repeated .google.api.LabelDescriptor labels = 2;
inline int LogDescriptor::_internal_labels_size() const {
  return labels_.size();
}
inline int LogDescriptor::labels_size() const {
  return _internal_labels_size();
}
inline ::google::api::LabelDescriptor* LogDescriptor::mutable_labels(int index) {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.labels)
  return labels_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::LabelDescriptor >*
LogDescriptor::mutable_labels() {
  // @@protoc_insertion_point(field_mutable_list:google.api.LogDescriptor.labels)
  return &labels_;
}
inline const ::google::api::LabelDescriptor& LogDescriptor::_internal_labels(int index) const {
  return labels_.Get(index);
}
inline const ::google::api::LabelDescriptor& LogDescriptor::labels(int index) const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.labels)
  return _internal_labels(index);
}
inline ::google::api::LabelDescriptor* LogDescriptor::_internal_add_labels() {
  return labels_.Add();
}
inline ::google::api::LabelDescriptor* LogDescriptor::add_labels() {
  // @@protoc_insertion_point(field_add:google.api.LogDescriptor.labels)
  return _internal_add_labels();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::google::api::LabelDescriptor >&
LogDescriptor::labels() const {
  // @@protoc_insertion_point(field_list:google.api.LogDescriptor.labels)
  return labels_;
}

// string description = 3;
inline void LogDescriptor::clear_description() {
  description_.ClearToEmpty();
}
inline const std::string& LogDescriptor::description() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.description)
  return _internal_description();
}
inline void LogDescriptor::set_description(const std::string& value) {
  _internal_set_description(value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.description)
}
inline std::string* LogDescriptor::mutable_description() {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.description)
  return _internal_mutable_description();
}
inline const std::string& LogDescriptor::_internal_description() const {
  return description_.Get();
}
inline void LogDescriptor::_internal_set_description(const std::string& value) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void LogDescriptor::set_description(std::string&& value) {
  
  description_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.description)
}
inline void LogDescriptor::set_description(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.description)
}
inline void LogDescriptor::set_description(const char* value,
    size_t size) {
  
  description_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.description)
}
inline std::string* LogDescriptor::_internal_mutable_description() {
  
  return description_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* LogDescriptor::release_description() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.description)
  return description_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LogDescriptor::set_allocated_description(std::string* description) {
  if (description != nullptr) {
    
  } else {
    
  }
  description_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), description,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.description)
}

// string display_name = 4;
inline void LogDescriptor::clear_display_name() {
  display_name_.ClearToEmpty();
}
inline const std::string& LogDescriptor::display_name() const {
  // @@protoc_insertion_point(field_get:google.api.LogDescriptor.display_name)
  return _internal_display_name();
}
inline void LogDescriptor::set_display_name(const std::string& value) {
  _internal_set_display_name(value);
  // @@protoc_insertion_point(field_set:google.api.LogDescriptor.display_name)
}
inline std::string* LogDescriptor::mutable_display_name() {
  // @@protoc_insertion_point(field_mutable:google.api.LogDescriptor.display_name)
  return _internal_mutable_display_name();
}
inline const std::string& LogDescriptor::_internal_display_name() const {
  return display_name_.Get();
}
inline void LogDescriptor::_internal_set_display_name(const std::string& value) {
  
  display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void LogDescriptor::set_display_name(std::string&& value) {
  
  display_name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.api.LogDescriptor.display_name)
}
inline void LogDescriptor::set_display_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:google.api.LogDescriptor.display_name)
}
inline void LogDescriptor::set_display_name(const char* value,
    size_t size) {
  
  display_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.api.LogDescriptor.display_name)
}
inline std::string* LogDescriptor::_internal_mutable_display_name() {
  
  return display_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* LogDescriptor::release_display_name() {
  // @@protoc_insertion_point(field_release:google.api.LogDescriptor.display_name)
  return display_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LogDescriptor::set_allocated_display_name(std::string* display_name) {
  if (display_name != nullptr) {
    
  } else {
    
  }
  display_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), display_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.api.LogDescriptor.display_name)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace api
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2flog_2eproto
