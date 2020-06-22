// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: buff.proto

#ifndef PROTOBUF_INCLUDED_buff_2eproto
#define PROTOBUF_INCLUDED_buff_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_buff_2eproto 

namespace protobuf_buff_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_buff_2eproto
namespace sock {
class Info;
class InfoDefaultTypeInternal;
extern InfoDefaultTypeInternal _Info_default_instance_;
class PersonInfo;
class PersonInfoDefaultTypeInternal;
extern PersonInfoDefaultTypeInternal _PersonInfo_default_instance_;
}  // namespace sock
namespace google {
namespace protobuf {
template<> ::sock::Info* Arena::CreateMaybeMessage<::sock::Info>(Arena*);
template<> ::sock::PersonInfo* Arena::CreateMaybeMessage<::sock::PersonInfo>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace sock {

// ===================================================================

class Info : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sock.Info) */ {
 public:
  Info();
  virtual ~Info();

  Info(const Info& from);

  inline Info& operator=(const Info& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Info(Info&& from) noexcept
    : Info() {
    *this = ::std::move(from);
  }

  inline Info& operator=(Info&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Info& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Info* internal_default_instance() {
    return reinterpret_cast<const Info*>(
               &_Info_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Info* other);
  friend void swap(Info& a, Info& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Info* New() const final {
    return CreateMaybeMessage<Info>(NULL);
  }

  Info* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Info>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Info& from);
  void MergeFrom(const Info& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Info* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sock.Info)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_buff_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class PersonInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sock.PersonInfo) */ {
 public:
  PersonInfo();
  virtual ~PersonInfo();

  PersonInfo(const PersonInfo& from);

  inline PersonInfo& operator=(const PersonInfo& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PersonInfo(PersonInfo&& from) noexcept
    : PersonInfo() {
    *this = ::std::move(from);
  }

  inline PersonInfo& operator=(PersonInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PersonInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PersonInfo* internal_default_instance() {
    return reinterpret_cast<const PersonInfo*>(
               &_PersonInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(PersonInfo* other);
  friend void swap(PersonInfo& a, PersonInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PersonInfo* New() const final {
    return CreateMaybeMessage<PersonInfo>(NULL);
  }

  PersonInfo* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PersonInfo>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PersonInfo& from);
  void MergeFrom(const PersonInfo& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PersonInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .sock.Info info = 1;
  int info_size() const;
  void clear_info();
  static const int kInfoFieldNumber = 1;
  ::sock::Info* mutable_info(int index);
  ::google::protobuf::RepeatedPtrField< ::sock::Info >*
      mutable_info();
  const ::sock::Info& info(int index) const;
  ::sock::Info* add_info();
  const ::google::protobuf::RepeatedPtrField< ::sock::Info >&
      info() const;

  // @@protoc_insertion_point(class_scope:sock.PersonInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::sock::Info > info_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_buff_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Info

// string name = 1;
inline void Info::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Info::name() const {
  // @@protoc_insertion_point(field_get:sock.Info.name)
  return name_.GetNoArena();
}
inline void Info::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sock.Info.name)
}
#if LANG_CXX11
inline void Info::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sock.Info.name)
}
#endif
inline void Info::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sock.Info.name)
}
inline void Info::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sock.Info.name)
}
inline ::std::string* Info::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:sock.Info.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Info::release_name() {
  // @@protoc_insertion_point(field_release:sock.Info.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Info::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:sock.Info.name)
}

// int32 id = 2;
inline void Info::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Info::id() const {
  // @@protoc_insertion_point(field_get:sock.Info.id)
  return id_;
}
inline void Info::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:sock.Info.id)
}

// -------------------------------------------------------------------

// PersonInfo

// repeated .sock.Info info = 1;
inline int PersonInfo::info_size() const {
  return info_.size();
}
inline void PersonInfo::clear_info() {
  info_.Clear();
}
inline ::sock::Info* PersonInfo::mutable_info(int index) {
  // @@protoc_insertion_point(field_mutable:sock.PersonInfo.info)
  return info_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::sock::Info >*
PersonInfo::mutable_info() {
  // @@protoc_insertion_point(field_mutable_list:sock.PersonInfo.info)
  return &info_;
}
inline const ::sock::Info& PersonInfo::info(int index) const {
  // @@protoc_insertion_point(field_get:sock.PersonInfo.info)
  return info_.Get(index);
}
inline ::sock::Info* PersonInfo::add_info() {
  // @@protoc_insertion_point(field_add:sock.PersonInfo.info)
  return info_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sock::Info >&
PersonInfo::info() const {
  // @@protoc_insertion_point(field_list:sock.PersonInfo.info)
  return info_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sock

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_buff_2eproto
