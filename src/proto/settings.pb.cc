// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/settings.proto

#include "proto/settings.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr WindowDimensions::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        width_{0},
        height_{0} {}

template <typename>
PROTOBUF_CONSTEXPR WindowDimensions::WindowDimensions(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct WindowDimensionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WindowDimensionsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WindowDimensionsDefaultTypeInternal() {}
  union {
    WindowDimensions _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WindowDimensionsDefaultTypeInternal _WindowDimensions_default_instance_;

inline constexpr WindowContextSettings::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        depth_bits_{0u},
        stencil_bits_{0u},
        antialiasing_level_{0u} {}

template <typename>
PROTOBUF_CONSTEXPR WindowContextSettings::WindowContextSettings(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct WindowContextSettingsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WindowContextSettingsDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WindowContextSettingsDefaultTypeInternal() {}
  union {
    WindowContextSettings _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WindowContextSettingsDefaultTypeInternal _WindowContextSettings_default_instance_;

inline constexpr GameScreen::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        window_dimensions_{nullptr},
        window_type_{static_cast< ::WindowType >(0)} {}

template <typename>
PROTOBUF_CONSTEXPR GameScreen::GameScreen(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct GameScreenDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GameScreenDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~GameScreenDefaultTypeInternal() {}
  union {
    GameScreen _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GameScreenDefaultTypeInternal _GameScreen_default_instance_;
static ::_pb::Metadata file_level_metadata_proto_2fsettings_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_proto_2fsettings_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_proto_2fsettings_2eproto = nullptr;
const ::uint32_t TableStruct_proto_2fsettings_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::WindowDimensions, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::WindowDimensions, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::WindowDimensions, _impl_.width_),
    PROTOBUF_FIELD_OFFSET(::WindowDimensions, _impl_.height_),
    0,
    1,
    PROTOBUF_FIELD_OFFSET(::WindowContextSettings, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::WindowContextSettings, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::WindowContextSettings, _impl_.depth_bits_),
    PROTOBUF_FIELD_OFFSET(::WindowContextSettings, _impl_.stencil_bits_),
    PROTOBUF_FIELD_OFFSET(::WindowContextSettings, _impl_.antialiasing_level_),
    0,
    1,
    2,
    PROTOBUF_FIELD_OFFSET(::GameScreen, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::GameScreen, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::GameScreen, _impl_.window_dimensions_),
    PROTOBUF_FIELD_OFFSET(::GameScreen, _impl_.window_type_),
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::WindowDimensions)},
        {12, 23, -1, sizeof(::WindowContextSettings)},
        {26, 36, -1, sizeof(::GameScreen)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::_WindowDimensions_default_instance_._instance,
    &::_WindowContextSettings_default_instance_._instance,
    &::_GameScreen_default_instance_._instance,
};
const char descriptor_table_protodef_proto_2fsettings_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\024proto/settings.proto\"1\n\020WindowDimensio"
    "ns\022\r\n\005width\030\001 \002(\005\022\016\n\006height\030\002 \002(\005\"]\n\025Win"
    "dowContextSettings\022\022\n\ndepth_bits\030\001 \002(\r\022\024"
    "\n\014stencil_bits\030\002 \002(\r\022\032\n\022antialiasing_lev"
    "el\030\003 \002(\r\"\\\n\nGameScreen\022,\n\021window_dimensi"
    "ons\030\001 \002(\0132\021.WindowDimensions\022 \n\013window_t"
    "ype\030\002 \002(\0162\013.WindowType*A\n\nWindowType\022\026\n\022"
    "WINDOW_TYPE_NORMAL\020\000\022\033\n\027WINDOW_TYPE_FULL"
    "_SCREEN\020\001"
};
static ::absl::once_flag descriptor_table_proto_2fsettings_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proto_2fsettings_2eproto = {
    false,
    false,
    329,
    descriptor_table_protodef_proto_2fsettings_2eproto,
    "proto/settings.proto",
    &descriptor_table_proto_2fsettings_2eproto_once,
    nullptr,
    0,
    3,
    schemas,
    file_default_instances,
    TableStruct_proto_2fsettings_2eproto::offsets,
    file_level_metadata_proto_2fsettings_2eproto,
    file_level_enum_descriptors_proto_2fsettings_2eproto,
    file_level_service_descriptors_proto_2fsettings_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proto_2fsettings_2eproto_getter() {
  return &descriptor_table_proto_2fsettings_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proto_2fsettings_2eproto(&descriptor_table_proto_2fsettings_2eproto);
const ::google::protobuf::EnumDescriptor* WindowType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_proto_2fsettings_2eproto);
  return file_level_enum_descriptors_proto_2fsettings_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t WindowType_internal_data_[] = {
    131072u, 0u, };
bool WindowType_IsValid(int value) {
  return 0 <= value && value <= 1;
}
// ===================================================================

class WindowDimensions::_Internal {
 public:
  using HasBits = decltype(std::declval<WindowDimensions>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_._has_bits_);
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

WindowDimensions::WindowDimensions(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:WindowDimensions)
}
WindowDimensions::WindowDimensions(
    ::google::protobuf::Arena* arena, const WindowDimensions& from)
    : WindowDimensions(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE WindowDimensions::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void WindowDimensions::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, width_),
           0,
           offsetof(Impl_, height_) -
               offsetof(Impl_, width_) +
               sizeof(Impl_::height_));
}
WindowDimensions::~WindowDimensions() {
  // @@protoc_insertion_point(destructor:WindowDimensions)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void WindowDimensions::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void WindowDimensions::Clear() {
// @@protoc_insertion_point(message_clear_start:WindowDimensions)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.width_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.height_) -
        reinterpret_cast<char*>(&_impl_.width_)) + sizeof(_impl_.height_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* WindowDimensions::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 0, 0, 2> WindowDimensions::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_WindowDimensions_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // required int32 height = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WindowDimensions, _impl_.height_), 1>(),
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.height_)}},
    // required int32 width = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WindowDimensions, _impl_.width_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.width_)}},
  }}, {{
    65535, 65535
  }}, {{
    // required int32 width = 1;
    {PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.width_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
    // required int32 height = 2;
    {PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.height_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* WindowDimensions::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WindowDimensions)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int32 width = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<1>(
            stream, this->_internal_width(), target);
  }

  // required int32 height = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteInt32ToArrayWithField<2>(
            stream, this->_internal_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WindowDimensions)
  return target;
}

::size_t WindowDimensions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WindowDimensions)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // required int32 width = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_width());
    }

    // required int32 height = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
          this->_internal_height());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData WindowDimensions::_class_data_ = {
    WindowDimensions::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* WindowDimensions::GetClassData() const {
  return &_class_data_;
}

void WindowDimensions::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<WindowDimensions*>(&to_msg);
  auto& from = static_cast<const WindowDimensions&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WindowDimensions)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.width_ = from._impl_.width_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.height_ = from._impl_.height_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void WindowDimensions::CopyFrom(const WindowDimensions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WindowDimensions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool WindowDimensions::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) {
    return false;
  }
  return true;
}

::_pbi::CachedSize* WindowDimensions::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void WindowDimensions::InternalSwap(WindowDimensions* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.height_)
      + sizeof(WindowDimensions::_impl_.height_)
      - PROTOBUF_FIELD_OFFSET(WindowDimensions, _impl_.width_)>(
          reinterpret_cast<char*>(&_impl_.width_),
          reinterpret_cast<char*>(&other->_impl_.width_));
}

::google::protobuf::Metadata WindowDimensions::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fsettings_2eproto_getter, &descriptor_table_proto_2fsettings_2eproto_once,
      file_level_metadata_proto_2fsettings_2eproto[0]);
}
// ===================================================================

class WindowContextSettings::_Internal {
 public:
  using HasBits = decltype(std::declval<WindowContextSettings>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_._has_bits_);
  static void set_has_depth_bits(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_stencil_bits(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_antialiasing_level(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

WindowContextSettings::WindowContextSettings(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:WindowContextSettings)
}
WindowContextSettings::WindowContextSettings(
    ::google::protobuf::Arena* arena, const WindowContextSettings& from)
    : WindowContextSettings(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE WindowContextSettings::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void WindowContextSettings::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, depth_bits_),
           0,
           offsetof(Impl_, antialiasing_level_) -
               offsetof(Impl_, depth_bits_) +
               sizeof(Impl_::antialiasing_level_));
}
WindowContextSettings::~WindowContextSettings() {
  // @@protoc_insertion_point(destructor:WindowContextSettings)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void WindowContextSettings::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void WindowContextSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:WindowContextSettings)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.depth_bits_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.antialiasing_level_) -
        reinterpret_cast<char*>(&_impl_.depth_bits_)) + sizeof(_impl_.antialiasing_level_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* WindowContextSettings::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 0, 2> WindowContextSettings::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_._has_bits_),
    0, // no _extensions_
    3, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967288,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_WindowContextSettings_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // required uint32 depth_bits = 1;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WindowContextSettings, _impl_.depth_bits_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.depth_bits_)}},
    // required uint32 stencil_bits = 2;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WindowContextSettings, _impl_.stencil_bits_), 1>(),
     {16, 1, 0, PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.stencil_bits_)}},
    // required uint32 antialiasing_level = 3;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WindowContextSettings, _impl_.antialiasing_level_), 2>(),
     {24, 2, 0, PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.antialiasing_level_)}},
  }}, {{
    65535, 65535
  }}, {{
    // required uint32 depth_bits = 1;
    {PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.depth_bits_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // required uint32 stencil_bits = 2;
    {PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.stencil_bits_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // required uint32 antialiasing_level = 3;
    {PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.antialiasing_level_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* WindowContextSettings::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:WindowContextSettings)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required uint32 depth_bits = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        1, this->_internal_depth_bits(), target);
  }

  // required uint32 stencil_bits = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        2, this->_internal_stencil_bits(), target);
  }

  // required uint32 antialiasing_level = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        3, this->_internal_antialiasing_level(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:WindowContextSettings)
  return target;
}

::size_t WindowContextSettings::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:WindowContextSettings)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // required uint32 depth_bits = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_depth_bits());
    }

    // required uint32 stencil_bits = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_stencil_bits());
    }

    // required uint32 antialiasing_level = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_antialiasing_level());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData WindowContextSettings::_class_data_ = {
    WindowContextSettings::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* WindowContextSettings::GetClassData() const {
  return &_class_data_;
}

void WindowContextSettings::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<WindowContextSettings*>(&to_msg);
  auto& from = static_cast<const WindowContextSettings&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:WindowContextSettings)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.depth_bits_ = from._impl_.depth_bits_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.stencil_bits_ = from._impl_.stencil_bits_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.antialiasing_level_ = from._impl_.antialiasing_level_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void WindowContextSettings::CopyFrom(const WindowContextSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:WindowContextSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool WindowContextSettings::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) {
    return false;
  }
  return true;
}

::_pbi::CachedSize* WindowContextSettings::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void WindowContextSettings::InternalSwap(WindowContextSettings* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.antialiasing_level_)
      + sizeof(WindowContextSettings::_impl_.antialiasing_level_)
      - PROTOBUF_FIELD_OFFSET(WindowContextSettings, _impl_.depth_bits_)>(
          reinterpret_cast<char*>(&_impl_.depth_bits_),
          reinterpret_cast<char*>(&other->_impl_.depth_bits_));
}

::google::protobuf::Metadata WindowContextSettings::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fsettings_2eproto_getter, &descriptor_table_proto_2fsettings_2eproto_once,
      file_level_metadata_proto_2fsettings_2eproto[1]);
}
// ===================================================================

class GameScreen::_Internal {
 public:
  using HasBits = decltype(std::declval<GameScreen>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(GameScreen, _impl_._has_bits_);
  static const ::WindowDimensions& window_dimensions(const GameScreen* msg);
  static void set_has_window_dimensions(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_window_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

const ::WindowDimensions& GameScreen::_Internal::window_dimensions(const GameScreen* msg) {
  return *msg->_impl_.window_dimensions_;
}
GameScreen::GameScreen(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:GameScreen)
}
inline PROTOBUF_NDEBUG_INLINE GameScreen::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0} {}

GameScreen::GameScreen(
    ::google::protobuf::Arena* arena,
    const GameScreen& from)
    : ::google::protobuf::Message(arena) {
  GameScreen* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::uint32_t cached_has_bits = _impl_._has_bits_[0];
  _impl_.window_dimensions_ = (cached_has_bits & 0x00000001u)
                ? CreateMaybeMessage<::WindowDimensions>(arena, *from._impl_.window_dimensions_)
                : nullptr;
  _impl_.window_type_ = from._impl_.window_type_;

  // @@protoc_insertion_point(copy_constructor:GameScreen)
}
inline PROTOBUF_NDEBUG_INLINE GameScreen::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void GameScreen::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, window_dimensions_),
           0,
           offsetof(Impl_, window_type_) -
               offsetof(Impl_, window_dimensions_) +
               sizeof(Impl_::window_type_));
}
GameScreen::~GameScreen() {
  // @@protoc_insertion_point(destructor:GameScreen)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void GameScreen::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  delete _impl_.window_dimensions_;
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void GameScreen::Clear() {
// @@protoc_insertion_point(message_clear_start:GameScreen)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    ABSL_DCHECK(_impl_.window_dimensions_ != nullptr);
    _impl_.window_dimensions_->Clear();
  }
  _impl_.window_type_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* GameScreen::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 2, 0, 2> GameScreen::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(GameScreen, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_GameScreen_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // required .WindowType window_type = 2;
    {::_pbi::TcParser::FastEr0S1,
     {16, 1, 1, PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_type_)}},
    // required .WindowDimensions window_dimensions = 1;
    {::_pbi::TcParser::FastMtS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_dimensions_)}},
  }}, {{
    65535, 65535
  }}, {{
    // required .WindowDimensions window_dimensions = 1;
    {PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_dimensions_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kMessage | ::_fl::kTvTable)},
    // required .WindowType window_type = 2;
    {PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_type_), _Internal::kHasBitsOffset + 1, 1,
    (0 | ::_fl::kFcOptional | ::_fl::kEnumRange)},
  }}, {{
    {::_pbi::TcParser::GetTable<::WindowDimensions>()},
    {0, 2},
  }}, {{
  }},
};

::uint8_t* GameScreen::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:GameScreen)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required .WindowDimensions window_dimensions = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
        1, _Internal::window_dimensions(this),
        _Internal::window_dimensions(this).GetCachedSize(), target, stream);
  }

  // required .WindowType window_type = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        2, this->_internal_window_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GameScreen)
  return target;
}

::size_t GameScreen::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GameScreen)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // required .WindowDimensions window_dimensions = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.window_dimensions_);
    }

    // required .WindowType window_type = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_window_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData GameScreen::_class_data_ = {
    GameScreen::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* GameScreen::GetClassData() const {
  return &_class_data_;
}

void GameScreen::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<GameScreen*>(&to_msg);
  auto& from = static_cast<const GameScreen&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:GameScreen)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_window_dimensions()->::WindowDimensions::MergeFrom(
          from._internal_window_dimensions());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.window_type_ = from._impl_.window_type_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void GameScreen::CopyFrom(const GameScreen& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GameScreen)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool GameScreen::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) {
    return false;
  }
  if ((_impl_._has_bits_[0] & 0x00000001u) != 0) {
    if (!_impl_.window_dimensions_->IsInitialized()) return false;
  }
  return true;
}

::_pbi::CachedSize* GameScreen::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void GameScreen::InternalSwap(GameScreen* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_type_)
      + sizeof(GameScreen::_impl_.window_type_)
      - PROTOBUF_FIELD_OFFSET(GameScreen, _impl_.window_dimensions_)>(
          reinterpret_cast<char*>(&_impl_.window_dimensions_),
          reinterpret_cast<char*>(&other->_impl_.window_dimensions_));
}

::google::protobuf::Metadata GameScreen::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fsettings_2eproto_getter, &descriptor_table_proto_2fsettings_2eproto_once,
      file_level_metadata_proto_2fsettings_2eproto[2]);
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
