// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: seniordesign.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "seniordesign.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace seniordesign {

namespace {

const ::google::protobuf::Descriptor* ProcessingResults_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProcessingResults_reflection_ = NULL;
const ::google::protobuf::Descriptor* ProcessingAck_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProcessingAck_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Direction_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_seniordesign_2eproto() {
  protobuf_AddDesc_seniordesign_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "seniordesign.proto");
  GOOGLE_CHECK(file != NULL);
  ProcessingResults_descriptor_ = file->message_type(0);
  static const int ProcessingResults_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingResults, direction_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingResults, confidence_),
  };
  ProcessingResults_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProcessingResults_descriptor_,
      ProcessingResults::default_instance_,
      ProcessingResults_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProcessingResults),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingResults, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingResults, _is_default_instance_));
  ProcessingAck_descriptor_ = file->message_type(1);
  static const int ProcessingAck_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingAck, timestamp_),
  };
  ProcessingAck_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ProcessingAck_descriptor_,
      ProcessingAck::default_instance_,
      ProcessingAck_offsets_,
      -1,
      -1,
      -1,
      sizeof(ProcessingAck),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingAck, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessingAck, _is_default_instance_));
  Direction_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_seniordesign_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProcessingResults_descriptor_, &ProcessingResults::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ProcessingAck_descriptor_, &ProcessingAck::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_seniordesign_2eproto() {
  delete ProcessingResults::default_instance_;
  delete ProcessingResults_reflection_;
  delete ProcessingAck::default_instance_;
  delete ProcessingAck_reflection_;
}

void protobuf_AddDesc_seniordesign_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022seniordesign.proto\022\014seniordesign\"S\n\021Pr"
    "ocessingResults\022*\n\tdirection\030\001 \001(\0162\027.sen"
    "iordesign.Direction\022\022\n\nconfidence\030\002 \001(\001\""
    "\"\n\rProcessingAck\022\021\n\ttimestamp\030\001 \001(\004*H\n\tD"
    "irection\022\013\n\007NEUTRAL\020\000\022\013\n\007FORWARD\020\001\022\014\n\010BA"
    "CKWARD\020\002\022\010\n\004LEFT\020\003\022\t\n\005RIGHT\020\004b\006proto3", 237);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "seniordesign.proto", &protobuf_RegisterTypes);
  ProcessingResults::default_instance_ = new ProcessingResults();
  ProcessingAck::default_instance_ = new ProcessingAck();
  ProcessingResults::default_instance_->InitAsDefaultInstance();
  ProcessingAck::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_seniordesign_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_seniordesign_2eproto {
  StaticDescriptorInitializer_seniordesign_2eproto() {
    protobuf_AddDesc_seniordesign_2eproto();
  }
} static_descriptor_initializer_seniordesign_2eproto_;
const ::google::protobuf::EnumDescriptor* Direction_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Direction_descriptor_;
}
bool Direction_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int ProcessingResults::kDirectionFieldNumber;
const int ProcessingResults::kConfidenceFieldNumber;
#endif  // !_MSC_VER

ProcessingResults::ProcessingResults()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:seniordesign.ProcessingResults)
}

void ProcessingResults::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProcessingResults::ProcessingResults(const ProcessingResults& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:seniordesign.ProcessingResults)
}

void ProcessingResults::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  direction_ = 0;
  confidence_ = 0;
}

ProcessingResults::~ProcessingResults() {
  // @@protoc_insertion_point(destructor:seniordesign.ProcessingResults)
  SharedDtor();
}

void ProcessingResults::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProcessingResults::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProcessingResults::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProcessingResults_descriptor_;
}

const ProcessingResults& ProcessingResults::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_seniordesign_2eproto();
  return *default_instance_;
}

ProcessingResults* ProcessingResults::default_instance_ = NULL;

ProcessingResults* ProcessingResults::New(::google::protobuf::Arena* arena) const {
  ProcessingResults* n = new ProcessingResults;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProcessingResults::Clear() {
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ProcessingResults*>(16)->f)

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(confidence_, direction_);

#undef ZR_HELPER_
#undef ZR_

}

bool ProcessingResults::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:seniordesign.ProcessingResults)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .seniordesign.Direction direction = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_direction(static_cast< ::seniordesign::Direction >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_confidence;
        break;
      }

      // optional double confidence = 2;
      case 2: {
        if (tag == 17) {
         parse_confidence:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &confidence_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:seniordesign.ProcessingResults)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:seniordesign.ProcessingResults)
  return false;
#undef DO_
}

void ProcessingResults::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:seniordesign.ProcessingResults)
  // optional .seniordesign.Direction direction = 1;
  if (this->direction() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->direction(), output);
  }

  // optional double confidence = 2;
  if (this->confidence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->confidence(), output);
  }

  // @@protoc_insertion_point(serialize_end:seniordesign.ProcessingResults)
}

::google::protobuf::uint8* ProcessingResults::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:seniordesign.ProcessingResults)
  // optional .seniordesign.Direction direction = 1;
  if (this->direction() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->direction(), target);
  }

  // optional double confidence = 2;
  if (this->confidence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->confidence(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:seniordesign.ProcessingResults)
  return target;
}

int ProcessingResults::ByteSize() const {
  int total_size = 0;

  // optional .seniordesign.Direction direction = 1;
  if (this->direction() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->direction());
  }

  // optional double confidence = 2;
  if (this->confidence() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProcessingResults::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ProcessingResults* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProcessingResults>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProcessingResults::MergeFrom(const ProcessingResults& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.direction() != 0) {
    set_direction(from.direction());
  }
  if (from.confidence() != 0) {
    set_confidence(from.confidence());
  }
}

void ProcessingResults::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProcessingResults::CopyFrom(const ProcessingResults& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessingResults::IsInitialized() const {

  return true;
}

void ProcessingResults::Swap(ProcessingResults* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProcessingResults::InternalSwap(ProcessingResults* other) {
  std::swap(direction_, other->direction_);
  std::swap(confidence_, other->confidence_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProcessingResults::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProcessingResults_descriptor_;
  metadata.reflection = ProcessingResults_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProcessingResults

// optional .seniordesign.Direction direction = 1;
void ProcessingResults::clear_direction() {
  direction_ = 0;
}
 ::seniordesign::Direction ProcessingResults::direction() const {
  // @@protoc_insertion_point(field_get:seniordesign.ProcessingResults.direction)
  return static_cast< ::seniordesign::Direction >(direction_);
}
 void ProcessingResults::set_direction(::seniordesign::Direction value) {
  
  direction_ = value;
  // @@protoc_insertion_point(field_set:seniordesign.ProcessingResults.direction)
}

// optional double confidence = 2;
void ProcessingResults::clear_confidence() {
  confidence_ = 0;
}
 double ProcessingResults::confidence() const {
  // @@protoc_insertion_point(field_get:seniordesign.ProcessingResults.confidence)
  return confidence_;
}
 void ProcessingResults::set_confidence(double value) {
  
  confidence_ = value;
  // @@protoc_insertion_point(field_set:seniordesign.ProcessingResults.confidence)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#ifndef _MSC_VER
const int ProcessingAck::kTimestampFieldNumber;
#endif  // !_MSC_VER

ProcessingAck::ProcessingAck()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:seniordesign.ProcessingAck)
}

void ProcessingAck::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ProcessingAck::ProcessingAck(const ProcessingAck& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:seniordesign.ProcessingAck)
}

void ProcessingAck::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  timestamp_ = GOOGLE_ULONGLONG(0);
}

ProcessingAck::~ProcessingAck() {
  // @@protoc_insertion_point(destructor:seniordesign.ProcessingAck)
  SharedDtor();
}

void ProcessingAck::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ProcessingAck::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProcessingAck::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProcessingAck_descriptor_;
}

const ProcessingAck& ProcessingAck::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_seniordesign_2eproto();
  return *default_instance_;
}

ProcessingAck* ProcessingAck::default_instance_ = NULL;

ProcessingAck* ProcessingAck::New(::google::protobuf::Arena* arena) const {
  ProcessingAck* n = new ProcessingAck;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ProcessingAck::Clear() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}

bool ProcessingAck::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:seniordesign.ProcessingAck)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 timestamp = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:seniordesign.ProcessingAck)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:seniordesign.ProcessingAck)
  return false;
#undef DO_
}

void ProcessingAck::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:seniordesign.ProcessingAck)
  // optional uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:seniordesign.ProcessingAck)
}

::google::protobuf::uint8* ProcessingAck::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:seniordesign.ProcessingAck)
  // optional uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:seniordesign.ProcessingAck)
  return target;
}

int ProcessingAck::ByteSize() const {
  int total_size = 0;

  // optional uint64 timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->timestamp());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ProcessingAck::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ProcessingAck* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ProcessingAck>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProcessingAck::MergeFrom(const ProcessingAck& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void ProcessingAck::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProcessingAck::CopyFrom(const ProcessingAck& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessingAck::IsInitialized() const {

  return true;
}

void ProcessingAck::Swap(ProcessingAck* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ProcessingAck::InternalSwap(ProcessingAck* other) {
  std::swap(timestamp_, other->timestamp_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ProcessingAck::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProcessingAck_descriptor_;
  metadata.reflection = ProcessingAck_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ProcessingAck

// optional uint64 timestamp = 1;
void ProcessingAck::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 ProcessingAck::timestamp() const {
  // @@protoc_insertion_point(field_get:seniordesign.ProcessingAck.timestamp)
  return timestamp_;
}
 void ProcessingAck::set_timestamp(::google::protobuf::uint64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:seniordesign.ProcessingAck.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace seniordesign

// @@protoc_insertion_point(global_scope)
