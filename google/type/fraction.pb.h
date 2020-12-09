// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/type/fraction.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ffraction_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ffraction_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2ftype_2ffraction_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2ftype_2ffraction_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2ftype_2ffraction_2eproto;
namespace google {
namespace type {
class Fraction;
class FractionDefaultTypeInternal;
extern FractionDefaultTypeInternal _Fraction_default_instance_;
}  // namespace type
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::type::Fraction* Arena::CreateMaybeMessage<::google::type::Fraction>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace type {

// ===================================================================

class Fraction PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.type.Fraction) */ {
 public:
  inline Fraction() : Fraction(nullptr) {}
  virtual ~Fraction();

  Fraction(const Fraction& from);
  Fraction(Fraction&& from) noexcept
    : Fraction() {
    *this = ::std::move(from);
  }

  inline Fraction& operator=(const Fraction& from) {
    CopyFrom(from);
    return *this;
  }
  inline Fraction& operator=(Fraction&& from) noexcept {
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
  static const Fraction& default_instance();

  static inline const Fraction* internal_default_instance() {
    return reinterpret_cast<const Fraction*>(
               &_Fraction_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Fraction& a, Fraction& b) {
    a.Swap(&b);
  }
  inline void Swap(Fraction* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Fraction* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Fraction* New() const final {
    return CreateMaybeMessage<Fraction>(nullptr);
  }

  Fraction* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Fraction>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Fraction& from);
  void MergeFrom(const Fraction& from);
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
  void InternalSwap(Fraction* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.type.Fraction";
  }
  protected:
  explicit Fraction(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2ftype_2ffraction_2eproto);
    return ::descriptor_table_google_2ftype_2ffraction_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNumeratorFieldNumber = 1,
    kDenominatorFieldNumber = 2,
  };
  // int64 numerator = 1;
  void clear_numerator();
  ::PROTOBUF_NAMESPACE_ID::int64 numerator() const;
  void set_numerator(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_numerator() const;
  void _internal_set_numerator(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 denominator = 2;
  void clear_denominator();
  ::PROTOBUF_NAMESPACE_ID::int64 denominator() const;
  void set_denominator(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_denominator() const;
  void _internal_set_denominator(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:google.type.Fraction)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int64 numerator_;
  ::PROTOBUF_NAMESPACE_ID::int64 denominator_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2ftype_2ffraction_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Fraction

// int64 numerator = 1;
inline void Fraction::clear_numerator() {
  numerator_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fraction::_internal_numerator() const {
  return numerator_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fraction::numerator() const {
  // @@protoc_insertion_point(field_get:google.type.Fraction.numerator)
  return _internal_numerator();
}
inline void Fraction::_internal_set_numerator(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  numerator_ = value;
}
inline void Fraction::set_numerator(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_numerator(value);
  // @@protoc_insertion_point(field_set:google.type.Fraction.numerator)
}

// int64 denominator = 2;
inline void Fraction::clear_denominator() {
  denominator_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fraction::_internal_denominator() const {
  return denominator_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Fraction::denominator() const {
  // @@protoc_insertion_point(field_get:google.type.Fraction.denominator)
  return _internal_denominator();
}
inline void Fraction::_internal_set_denominator(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  denominator_ = value;
}
inline void Fraction::set_denominator(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_denominator(value);
  // @@protoc_insertion_point(field_set:google.type.Fraction.denominator)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace type
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2ftype_2ffraction_2eproto
