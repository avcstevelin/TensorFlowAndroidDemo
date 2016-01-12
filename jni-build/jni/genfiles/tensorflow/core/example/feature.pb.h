// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/example/feature.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tensorflow {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

class BytesList;
class Feature;
class FeatureList;
class FeatureLists;
class Features;
class FloatList;
class Int64List;

// ===================================================================

class BytesList : public ::google::protobuf::Message {
 public:
  BytesList();
  virtual ~BytesList();

  BytesList(const BytesList& from);

  inline BytesList& operator=(const BytesList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BytesList& default_instance();

  void Swap(BytesList* other);

  // implements Message ----------------------------------------------

  inline BytesList* New() const { return New(NULL); }

  BytesList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BytesList& from);
  void MergeFrom(const BytesList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(BytesList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bytes value = 1;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  const ::std::string& value(int index) const;
  ::std::string* mutable_value(int index);
  void set_value(int index, const ::std::string& value);
  void set_value(int index, const char* value);
  void set_value(int index, const void* value, size_t size);
  ::std::string* add_value();
  void add_value(const ::std::string& value);
  void add_value(const char* value);
  void add_value(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& value() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_value();

  // @@protoc_insertion_point(class_scope:tensorflow.BytesList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::std::string> value_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static BytesList* default_instance_;
};
// -------------------------------------------------------------------

class FloatList : public ::google::protobuf::Message {
 public:
  FloatList();
  virtual ~FloatList();

  FloatList(const FloatList& from);

  inline FloatList& operator=(const FloatList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FloatList& default_instance();

  void Swap(FloatList* other);

  // implements Message ----------------------------------------------

  inline FloatList* New() const { return New(NULL); }

  FloatList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FloatList& from);
  void MergeFrom(const FloatList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FloatList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated float value = 1 [packed = true];
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  float value(int index) const;
  void set_value(int index, float value);
  void add_value(float value);
  const ::google::protobuf::RepeatedField< float >&
      value() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:tensorflow.FloatList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< float > value_;
  mutable int _value_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static FloatList* default_instance_;
};
// -------------------------------------------------------------------

class Int64List : public ::google::protobuf::Message {
 public:
  Int64List();
  virtual ~Int64List();

  Int64List(const Int64List& from);

  inline Int64List& operator=(const Int64List& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Int64List& default_instance();

  void Swap(Int64List* other);

  // implements Message ----------------------------------------------

  inline Int64List* New() const { return New(NULL); }

  Int64List* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Int64List& from);
  void MergeFrom(const Int64List& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Int64List* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 value = 1 [packed = true];
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  ::google::protobuf::int64 value(int index) const;
  void set_value(int index, ::google::protobuf::int64 value);
  void add_value(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      value() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_value();

  // @@protoc_insertion_point(class_scope:tensorflow.Int64List)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > value_;
  mutable int _value_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static Int64List* default_instance_;
};
// -------------------------------------------------------------------

class Feature : public ::google::protobuf::Message {
 public:
  Feature();
  virtual ~Feature();

  Feature(const Feature& from);

  inline Feature& operator=(const Feature& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Feature& default_instance();

  enum KindCase {
    kBytesList = 1,
    kFloatList = 2,
    kInt64List = 3,
    KIND_NOT_SET = 0,
  };

  void Swap(Feature* other);

  // implements Message ----------------------------------------------

  inline Feature* New() const { return New(NULL); }

  Feature* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Feature& from);
  void MergeFrom(const Feature& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Feature* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tensorflow.BytesList bytes_list = 1;
  bool has_bytes_list() const;
  void clear_bytes_list();
  static const int kBytesListFieldNumber = 1;
  const ::tensorflow::BytesList& bytes_list() const;
  ::tensorflow::BytesList* mutable_bytes_list();
  ::tensorflow::BytesList* release_bytes_list();
  void set_allocated_bytes_list(::tensorflow::BytesList* bytes_list);

  // optional .tensorflow.FloatList float_list = 2;
  bool has_float_list() const;
  void clear_float_list();
  static const int kFloatListFieldNumber = 2;
  const ::tensorflow::FloatList& float_list() const;
  ::tensorflow::FloatList* mutable_float_list();
  ::tensorflow::FloatList* release_float_list();
  void set_allocated_float_list(::tensorflow::FloatList* float_list);

  // optional .tensorflow.Int64List int64_list = 3;
  bool has_int64_list() const;
  void clear_int64_list();
  static const int kInt64ListFieldNumber = 3;
  const ::tensorflow::Int64List& int64_list() const;
  ::tensorflow::Int64List* mutable_int64_list();
  ::tensorflow::Int64List* release_int64_list();
  void set_allocated_int64_list(::tensorflow::Int64List* int64_list);

  KindCase kind_case() const;
  // @@protoc_insertion_point(class_scope:tensorflow.Feature)
 private:
  inline void set_has_bytes_list();
  inline void set_has_float_list();
  inline void set_has_int64_list();

  inline bool has_kind() const;
  void clear_kind();
  inline void clear_has_kind();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  union KindUnion {
    KindUnion() {}
    ::tensorflow::BytesList* bytes_list_;
    ::tensorflow::FloatList* float_list_;
    ::tensorflow::Int64List* int64_list_;
  } kind_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static Feature* default_instance_;
};
// -------------------------------------------------------------------

class Features : public ::google::protobuf::Message {
 public:
  Features();
  virtual ~Features();

  Features(const Features& from);

  inline Features& operator=(const Features& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Features& default_instance();

  void Swap(Features* other);

  // implements Message ----------------------------------------------

  inline Features* New() const { return New(NULL); }

  Features* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Features& from);
  void MergeFrom(const Features& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Features* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .tensorflow.Feature> feature = 1;
  int feature_size() const;
  void clear_feature();
  static const int kFeatureFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::tensorflow::Feature >&
      feature() const;
  ::google::protobuf::Map< ::std::string, ::tensorflow::Feature >*
      mutable_feature();

  // @@protoc_insertion_point(class_scope:tensorflow.Features)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::tensorflow::Feature,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      Features_FeatureEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::tensorflow::Feature,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > feature_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static Features* default_instance_;
};
// -------------------------------------------------------------------

class FeatureList : public ::google::protobuf::Message {
 public:
  FeatureList();
  virtual ~FeatureList();

  FeatureList(const FeatureList& from);

  inline FeatureList& operator=(const FeatureList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FeatureList& default_instance();

  void Swap(FeatureList* other);

  // implements Message ----------------------------------------------

  inline FeatureList* New() const { return New(NULL); }

  FeatureList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FeatureList& from);
  void MergeFrom(const FeatureList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .tensorflow.Feature feature = 1;
  int feature_size() const;
  void clear_feature();
  static const int kFeatureFieldNumber = 1;
  const ::tensorflow::Feature& feature(int index) const;
  ::tensorflow::Feature* mutable_feature(int index);
  ::tensorflow::Feature* add_feature();
  ::google::protobuf::RepeatedPtrField< ::tensorflow::Feature >*
      mutable_feature();
  const ::google::protobuf::RepeatedPtrField< ::tensorflow::Feature >&
      feature() const;

  // @@protoc_insertion_point(class_scope:tensorflow.FeatureList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::tensorflow::Feature > feature_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static FeatureList* default_instance_;
};
// -------------------------------------------------------------------

class FeatureLists : public ::google::protobuf::Message {
 public:
  FeatureLists();
  virtual ~FeatureLists();

  FeatureLists(const FeatureLists& from);

  inline FeatureLists& operator=(const FeatureLists& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FeatureLists& default_instance();

  void Swap(FeatureLists* other);

  // implements Message ----------------------------------------------

  inline FeatureLists* New() const { return New(NULL); }

  FeatureLists* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FeatureLists& from);
  void MergeFrom(const FeatureLists& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FeatureLists* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, .tensorflow.FeatureList> feature_list = 1;
  int feature_list_size() const;
  void clear_feature_list();
  static const int kFeatureListFieldNumber = 1;
  const ::google::protobuf::Map< ::std::string, ::tensorflow::FeatureList >&
      feature_list() const;
  ::google::protobuf::Map< ::std::string, ::tensorflow::FeatureList >*
      mutable_feature_list();

  // @@protoc_insertion_point(class_scope:tensorflow.FeatureLists)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::tensorflow::FeatureList,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      FeatureLists_FeatureListEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::tensorflow::FeatureList,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > feature_list_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_AssignDesc_tensorflow_2fcore_2fexample_2ffeature_2eproto();
  friend void protobuf_ShutdownFile_tensorflow_2fcore_2fexample_2ffeature_2eproto();

  void InitAsDefaultInstance();
  static FeatureLists* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BytesList

// repeated bytes value = 1;
inline int BytesList::value_size() const {
  return value_.size();
}
inline void BytesList::clear_value() {
  value_.Clear();
}
inline const ::std::string& BytesList::value(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.BytesList.value)
  return value_.Get(index);
}
inline ::std::string* BytesList::mutable_value(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.BytesList.value)
  return value_.Mutable(index);
}
inline void BytesList::set_value(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.BytesList.value)
  value_.Mutable(index)->assign(value);
}
inline void BytesList::set_value(int index, const char* value) {
  value_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.BytesList.value)
}
inline void BytesList::set_value(int index, const void* value, size_t size) {
  value_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.BytesList.value)
}
inline ::std::string* BytesList::add_value() {
  return value_.Add();
}
inline void BytesList::add_value(const ::std::string& value) {
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.BytesList.value)
}
inline void BytesList::add_value(const char* value) {
  value_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.BytesList.value)
}
inline void BytesList::add_value(const void* value, size_t size) {
  value_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.BytesList.value)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BytesList::value() const {
  // @@protoc_insertion_point(field_list:tensorflow.BytesList.value)
  return value_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BytesList::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.BytesList.value)
  return &value_;
}

// -------------------------------------------------------------------

// FloatList

// repeated float value = 1 [packed = true];
inline int FloatList::value_size() const {
  return value_.size();
}
inline void FloatList::clear_value() {
  value_.Clear();
}
inline float FloatList::value(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.FloatList.value)
  return value_.Get(index);
}
inline void FloatList::set_value(int index, float value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.FloatList.value)
}
inline void FloatList::add_value(float value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.FloatList.value)
}
inline const ::google::protobuf::RepeatedField< float >&
FloatList::value() const {
  // @@protoc_insertion_point(field_list:tensorflow.FloatList.value)
  return value_;
}
inline ::google::protobuf::RepeatedField< float >*
FloatList::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.FloatList.value)
  return &value_;
}

// -------------------------------------------------------------------

// Int64List

// repeated int64 value = 1 [packed = true];
inline int Int64List::value_size() const {
  return value_.size();
}
inline void Int64List::clear_value() {
  value_.Clear();
}
inline ::google::protobuf::int64 Int64List::value(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.Int64List.value)
  return value_.Get(index);
}
inline void Int64List::set_value(int index, ::google::protobuf::int64 value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.Int64List.value)
}
inline void Int64List::add_value(::google::protobuf::int64 value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.Int64List.value)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
Int64List::value() const {
  // @@protoc_insertion_point(field_list:tensorflow.Int64List.value)
  return value_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
Int64List::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.Int64List.value)
  return &value_;
}

// -------------------------------------------------------------------

// Feature

// optional .tensorflow.BytesList bytes_list = 1;
inline bool Feature::has_bytes_list() const {
  return kind_case() == kBytesList;
}
inline void Feature::set_has_bytes_list() {
  _oneof_case_[0] = kBytesList;
}
inline void Feature::clear_bytes_list() {
  if (has_bytes_list()) {
    delete kind_.bytes_list_;
    clear_has_kind();
  }
}
inline  const ::tensorflow::BytesList& Feature::bytes_list() const {
  // @@protoc_insertion_point(field_get:tensorflow.Feature.bytes_list)
  return has_bytes_list()
      ? *kind_.bytes_list_
      : ::tensorflow::BytesList::default_instance();
}
inline ::tensorflow::BytesList* Feature::mutable_bytes_list() {
  if (!has_bytes_list()) {
    clear_kind();
    set_has_bytes_list();
    kind_.bytes_list_ = new ::tensorflow::BytesList;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.Feature.bytes_list)
  return kind_.bytes_list_;
}
inline ::tensorflow::BytesList* Feature::release_bytes_list() {
  if (has_bytes_list()) {
    clear_has_kind();
    ::tensorflow::BytesList* temp = kind_.bytes_list_;
    kind_.bytes_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Feature::set_allocated_bytes_list(::tensorflow::BytesList* bytes_list) {
  clear_kind();
  if (bytes_list) {
    set_has_bytes_list();
    kind_.bytes_list_ = bytes_list;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Feature.bytes_list)
}

// optional .tensorflow.FloatList float_list = 2;
inline bool Feature::has_float_list() const {
  return kind_case() == kFloatList;
}
inline void Feature::set_has_float_list() {
  _oneof_case_[0] = kFloatList;
}
inline void Feature::clear_float_list() {
  if (has_float_list()) {
    delete kind_.float_list_;
    clear_has_kind();
  }
}
inline  const ::tensorflow::FloatList& Feature::float_list() const {
  // @@protoc_insertion_point(field_get:tensorflow.Feature.float_list)
  return has_float_list()
      ? *kind_.float_list_
      : ::tensorflow::FloatList::default_instance();
}
inline ::tensorflow::FloatList* Feature::mutable_float_list() {
  if (!has_float_list()) {
    clear_kind();
    set_has_float_list();
    kind_.float_list_ = new ::tensorflow::FloatList;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.Feature.float_list)
  return kind_.float_list_;
}
inline ::tensorflow::FloatList* Feature::release_float_list() {
  if (has_float_list()) {
    clear_has_kind();
    ::tensorflow::FloatList* temp = kind_.float_list_;
    kind_.float_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Feature::set_allocated_float_list(::tensorflow::FloatList* float_list) {
  clear_kind();
  if (float_list) {
    set_has_float_list();
    kind_.float_list_ = float_list;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Feature.float_list)
}

// optional .tensorflow.Int64List int64_list = 3;
inline bool Feature::has_int64_list() const {
  return kind_case() == kInt64List;
}
inline void Feature::set_has_int64_list() {
  _oneof_case_[0] = kInt64List;
}
inline void Feature::clear_int64_list() {
  if (has_int64_list()) {
    delete kind_.int64_list_;
    clear_has_kind();
  }
}
inline  const ::tensorflow::Int64List& Feature::int64_list() const {
  // @@protoc_insertion_point(field_get:tensorflow.Feature.int64_list)
  return has_int64_list()
      ? *kind_.int64_list_
      : ::tensorflow::Int64List::default_instance();
}
inline ::tensorflow::Int64List* Feature::mutable_int64_list() {
  if (!has_int64_list()) {
    clear_kind();
    set_has_int64_list();
    kind_.int64_list_ = new ::tensorflow::Int64List;
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.Feature.int64_list)
  return kind_.int64_list_;
}
inline ::tensorflow::Int64List* Feature::release_int64_list() {
  if (has_int64_list()) {
    clear_has_kind();
    ::tensorflow::Int64List* temp = kind_.int64_list_;
    kind_.int64_list_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void Feature::set_allocated_int64_list(::tensorflow::Int64List* int64_list) {
  clear_kind();
  if (int64_list) {
    set_has_int64_list();
    kind_.int64_list_ = int64_list;
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.Feature.int64_list)
}

inline bool Feature::has_kind() const {
  return kind_case() != KIND_NOT_SET;
}
inline void Feature::clear_has_kind() {
  _oneof_case_[0] = KIND_NOT_SET;
}
inline Feature::KindCase Feature::kind_case() const {
  return Feature::KindCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// Features

// map<string, .tensorflow.Feature> feature = 1;
inline int Features::feature_size() const {
  return feature_.size();
}
inline void Features::clear_feature() {
  feature_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::tensorflow::Feature >&
Features::feature() const {
  // @@protoc_insertion_point(field_map:tensorflow.Features.feature)
  return feature_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::tensorflow::Feature >*
Features::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.Features.feature)
  return feature_.MutableMap();
}

// -------------------------------------------------------------------

// FeatureList

// repeated .tensorflow.Feature feature = 1;
inline int FeatureList::feature_size() const {
  return feature_.size();
}
inline void FeatureList::clear_feature() {
  feature_.Clear();
}
inline const ::tensorflow::Feature& FeatureList::feature(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.FeatureList.feature)
  return feature_.Get(index);
}
inline ::tensorflow::Feature* FeatureList::mutable_feature(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.FeatureList.feature)
  return feature_.Mutable(index);
}
inline ::tensorflow::Feature* FeatureList::add_feature() {
  // @@protoc_insertion_point(field_add:tensorflow.FeatureList.feature)
  return feature_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::tensorflow::Feature >*
FeatureList::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.FeatureList.feature)
  return &feature_;
}
inline const ::google::protobuf::RepeatedPtrField< ::tensorflow::Feature >&
FeatureList::feature() const {
  // @@protoc_insertion_point(field_list:tensorflow.FeatureList.feature)
  return feature_;
}

// -------------------------------------------------------------------

// FeatureLists

// map<string, .tensorflow.FeatureList> feature_list = 1;
inline int FeatureLists::feature_list_size() const {
  return feature_list_.size();
}
inline void FeatureLists::clear_feature_list() {
  feature_list_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::tensorflow::FeatureList >&
FeatureLists::feature_list() const {
  // @@protoc_insertion_point(field_map:tensorflow.FeatureLists.feature_list)
  return feature_list_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::tensorflow::FeatureList >*
FeatureLists::mutable_feature_list() {
  // @@protoc_insertion_point(field_mutable_map:tensorflow.FeatureLists.feature_list)
  return feature_list_.MutableMap();
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fexample_2ffeature_2eproto__INCLUDED
