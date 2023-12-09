// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/settings.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fsettings_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fsettings_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_proto_2fsettings_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fsettings_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_proto_2fsettings_2eproto;
class GameScreen;
struct GameScreenDefaultTypeInternal;
extern GameScreenDefaultTypeInternal _GameScreen_default_instance_;
class WindowContextSettings;
struct WindowContextSettingsDefaultTypeInternal;
extern WindowContextSettingsDefaultTypeInternal _WindowContextSettings_default_instance_;
class WindowDimensions;
struct WindowDimensionsDefaultTypeInternal;
extern WindowDimensionsDefaultTypeInternal _WindowDimensions_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

enum WindowType : int {
  WINDOW_TYPE_NORMAL = 0,
  WINDOW_TYPE_FULL_SCREEN = 1,
};

bool WindowType_IsValid(int value);
extern const uint32_t WindowType_internal_data_[];
constexpr WindowType WindowType_MIN = static_cast<WindowType>(0);
constexpr WindowType WindowType_MAX = static_cast<WindowType>(1);
constexpr int WindowType_ARRAYSIZE = 1 + 1;
const ::google::protobuf::EnumDescriptor*
WindowType_descriptor();
template <typename T>
const std::string& WindowType_Name(T value) {
  static_assert(std::is_same<T, WindowType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to WindowType_Name().");
  return WindowType_Name(static_cast<WindowType>(value));
}
template <>
inline const std::string& WindowType_Name(WindowType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<WindowType_descriptor,
                                                 0, 1>(
      static_cast<int>(value));
}
inline bool WindowType_Parse(absl::string_view name, WindowType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<WindowType>(
      WindowType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class WindowDimensions final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WindowDimensions) */ {
 public:
  inline WindowDimensions() : WindowDimensions(nullptr) {}
  ~WindowDimensions() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR WindowDimensions(::google::protobuf::internal::ConstantInitialized);

  inline WindowDimensions(const WindowDimensions& from)
      : WindowDimensions(nullptr, from) {}
  WindowDimensions(WindowDimensions&& from) noexcept
    : WindowDimensions() {
    *this = ::std::move(from);
  }

  inline WindowDimensions& operator=(const WindowDimensions& from) {
    CopyFrom(from);
    return *this;
  }
  inline WindowDimensions& operator=(WindowDimensions&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WindowDimensions& default_instance() {
    return *internal_default_instance();
  }
  static inline const WindowDimensions* internal_default_instance() {
    return reinterpret_cast<const WindowDimensions*>(
               &_WindowDimensions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WindowDimensions& a, WindowDimensions& b) {
    a.Swap(&b);
  }
  inline void Swap(WindowDimensions* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WindowDimensions* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WindowDimensions* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WindowDimensions>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const WindowDimensions& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const WindowDimensions& from) {
    WindowDimensions::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(WindowDimensions* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "WindowDimensions";
  }
  protected:
  explicit WindowDimensions(::google::protobuf::Arena* arena);
  WindowDimensions(::google::protobuf::Arena* arena, const WindowDimensions& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWidthFieldNumber = 1,
    kHeightFieldNumber = 2,
  };
  // required int32 width = 1;
  bool has_width() const;
  void clear_width() ;
  ::int32_t width() const;
  void set_width(::int32_t value);

  private:
  ::int32_t _internal_width() const;
  void _internal_set_width(::int32_t value);

  public:
  // required int32 height = 2;
  bool has_height() const;
  void clear_height() ;
  ::int32_t height() const;
  void set_height(::int32_t value);

  private:
  ::int32_t _internal_height() const;
  void _internal_set_height(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:WindowDimensions)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::int32_t width_;
    ::int32_t height_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fsettings_2eproto;
};// -------------------------------------------------------------------

class WindowContextSettings final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WindowContextSettings) */ {
 public:
  inline WindowContextSettings() : WindowContextSettings(nullptr) {}
  ~WindowContextSettings() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR WindowContextSettings(::google::protobuf::internal::ConstantInitialized);

  inline WindowContextSettings(const WindowContextSettings& from)
      : WindowContextSettings(nullptr, from) {}
  WindowContextSettings(WindowContextSettings&& from) noexcept
    : WindowContextSettings() {
    *this = ::std::move(from);
  }

  inline WindowContextSettings& operator=(const WindowContextSettings& from) {
    CopyFrom(from);
    return *this;
  }
  inline WindowContextSettings& operator=(WindowContextSettings&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const WindowContextSettings& default_instance() {
    return *internal_default_instance();
  }
  static inline const WindowContextSettings* internal_default_instance() {
    return reinterpret_cast<const WindowContextSettings*>(
               &_WindowContextSettings_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WindowContextSettings& a, WindowContextSettings& b) {
    a.Swap(&b);
  }
  inline void Swap(WindowContextSettings* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(WindowContextSettings* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WindowContextSettings* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WindowContextSettings>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const WindowContextSettings& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const WindowContextSettings& from) {
    WindowContextSettings::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(WindowContextSettings* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "WindowContextSettings";
  }
  protected:
  explicit WindowContextSettings(::google::protobuf::Arena* arena);
  WindowContextSettings(::google::protobuf::Arena* arena, const WindowContextSettings& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDepthBitsFieldNumber = 1,
    kStencilBitsFieldNumber = 2,
    kAntialiasingLevelFieldNumber = 3,
  };
  // required uint32 depth_bits = 1;
  bool has_depth_bits() const;
  void clear_depth_bits() ;
  ::uint32_t depth_bits() const;
  void set_depth_bits(::uint32_t value);

  private:
  ::uint32_t _internal_depth_bits() const;
  void _internal_set_depth_bits(::uint32_t value);

  public:
  // required uint32 stencil_bits = 2;
  bool has_stencil_bits() const;
  void clear_stencil_bits() ;
  ::uint32_t stencil_bits() const;
  void set_stencil_bits(::uint32_t value);

  private:
  ::uint32_t _internal_stencil_bits() const;
  void _internal_set_stencil_bits(::uint32_t value);

  public:
  // required uint32 antialiasing_level = 3;
  bool has_antialiasing_level() const;
  void clear_antialiasing_level() ;
  ::uint32_t antialiasing_level() const;
  void set_antialiasing_level(::uint32_t value);

  private:
  ::uint32_t _internal_antialiasing_level() const;
  void _internal_set_antialiasing_level(::uint32_t value);

  public:
  // @@protoc_insertion_point(class_scope:WindowContextSettings)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::uint32_t depth_bits_;
    ::uint32_t stencil_bits_;
    ::uint32_t antialiasing_level_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fsettings_2eproto;
};// -------------------------------------------------------------------

class GameScreen final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:GameScreen) */ {
 public:
  inline GameScreen() : GameScreen(nullptr) {}
  ~GameScreen() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR GameScreen(::google::protobuf::internal::ConstantInitialized);

  inline GameScreen(const GameScreen& from)
      : GameScreen(nullptr, from) {}
  GameScreen(GameScreen&& from) noexcept
    : GameScreen() {
    *this = ::std::move(from);
  }

  inline GameScreen& operator=(const GameScreen& from) {
    CopyFrom(from);
    return *this;
  }
  inline GameScreen& operator=(GameScreen&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GameScreen& default_instance() {
    return *internal_default_instance();
  }
  static inline const GameScreen* internal_default_instance() {
    return reinterpret_cast<const GameScreen*>(
               &_GameScreen_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GameScreen& a, GameScreen& b) {
    a.Swap(&b);
  }
  inline void Swap(GameScreen* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GameScreen* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GameScreen* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GameScreen>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const GameScreen& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const GameScreen& from) {
    GameScreen::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(GameScreen* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "GameScreen";
  }
  protected:
  explicit GameScreen(::google::protobuf::Arena* arena);
  GameScreen(::google::protobuf::Arena* arena, const GameScreen& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWindowDimensionsFieldNumber = 1,
    kWindowTypeFieldNumber = 2,
  };
  // required .WindowDimensions window_dimensions = 1;
  bool has_window_dimensions() const;
  void clear_window_dimensions() ;
  const ::WindowDimensions& window_dimensions() const;
  PROTOBUF_NODISCARD ::WindowDimensions* release_window_dimensions();
  ::WindowDimensions* mutable_window_dimensions();
  void set_allocated_window_dimensions(::WindowDimensions* value);
  void unsafe_arena_set_allocated_window_dimensions(::WindowDimensions* value);
  ::WindowDimensions* unsafe_arena_release_window_dimensions();

  private:
  const ::WindowDimensions& _internal_window_dimensions() const;
  ::WindowDimensions* _internal_mutable_window_dimensions();

  public:
  // required .WindowType window_type = 2;
  bool has_window_type() const;
  void clear_window_type() ;
  ::WindowType window_type() const;
  void set_window_type(::WindowType value);

  private:
  ::WindowType _internal_window_type() const;
  void _internal_set_window_type(::WindowType value);

  public:
  // @@protoc_insertion_point(class_scope:GameScreen)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 2,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    ::WindowDimensions* window_dimensions_;
    int window_type_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fsettings_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// WindowDimensions

// required int32 width = 1;
inline bool WindowDimensions::has_width() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void WindowDimensions::clear_width() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.width_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int32_t WindowDimensions::width() const {
  // @@protoc_insertion_point(field_get:WindowDimensions.width)
  return _internal_width();
}
inline void WindowDimensions::set_width(::int32_t value) {
  _internal_set_width(value);
  // @@protoc_insertion_point(field_set:WindowDimensions.width)
}
inline ::int32_t WindowDimensions::_internal_width() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.width_;
}
inline void WindowDimensions::_internal_set_width(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.width_ = value;
}

// required int32 height = 2;
inline bool WindowDimensions::has_height() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void WindowDimensions::clear_height() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.height_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int32_t WindowDimensions::height() const {
  // @@protoc_insertion_point(field_get:WindowDimensions.height)
  return _internal_height();
}
inline void WindowDimensions::set_height(::int32_t value) {
  _internal_set_height(value);
  // @@protoc_insertion_point(field_set:WindowDimensions.height)
}
inline ::int32_t WindowDimensions::_internal_height() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.height_;
}
inline void WindowDimensions::_internal_set_height(::int32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.height_ = value;
}

// -------------------------------------------------------------------

// WindowContextSettings

// required uint32 depth_bits = 1;
inline bool WindowContextSettings::has_depth_bits() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void WindowContextSettings::clear_depth_bits() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.depth_bits_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t WindowContextSettings::depth_bits() const {
  // @@protoc_insertion_point(field_get:WindowContextSettings.depth_bits)
  return _internal_depth_bits();
}
inline void WindowContextSettings::set_depth_bits(::uint32_t value) {
  _internal_set_depth_bits(value);
  // @@protoc_insertion_point(field_set:WindowContextSettings.depth_bits)
}
inline ::uint32_t WindowContextSettings::_internal_depth_bits() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.depth_bits_;
}
inline void WindowContextSettings::_internal_set_depth_bits(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.depth_bits_ = value;
}

// required uint32 stencil_bits = 2;
inline bool WindowContextSettings::has_stencil_bits() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void WindowContextSettings::clear_stencil_bits() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.stencil_bits_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t WindowContextSettings::stencil_bits() const {
  // @@protoc_insertion_point(field_get:WindowContextSettings.stencil_bits)
  return _internal_stencil_bits();
}
inline void WindowContextSettings::set_stencil_bits(::uint32_t value) {
  _internal_set_stencil_bits(value);
  // @@protoc_insertion_point(field_set:WindowContextSettings.stencil_bits)
}
inline ::uint32_t WindowContextSettings::_internal_stencil_bits() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.stencil_bits_;
}
inline void WindowContextSettings::_internal_set_stencil_bits(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.stencil_bits_ = value;
}

// required uint32 antialiasing_level = 3;
inline bool WindowContextSettings::has_antialiasing_level() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void WindowContextSettings::clear_antialiasing_level() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.antialiasing_level_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t WindowContextSettings::antialiasing_level() const {
  // @@protoc_insertion_point(field_get:WindowContextSettings.antialiasing_level)
  return _internal_antialiasing_level();
}
inline void WindowContextSettings::set_antialiasing_level(::uint32_t value) {
  _internal_set_antialiasing_level(value);
  // @@protoc_insertion_point(field_set:WindowContextSettings.antialiasing_level)
}
inline ::uint32_t WindowContextSettings::_internal_antialiasing_level() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.antialiasing_level_;
}
inline void WindowContextSettings::_internal_set_antialiasing_level(::uint32_t value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.antialiasing_level_ = value;
}

// -------------------------------------------------------------------

// GameScreen

// required .WindowDimensions window_dimensions = 1;
inline bool GameScreen::has_window_dimensions() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.window_dimensions_ != nullptr);
  return value;
}
inline void GameScreen::clear_window_dimensions() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (_impl_.window_dimensions_ != nullptr) _impl_.window_dimensions_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const ::WindowDimensions& GameScreen::_internal_window_dimensions() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  const ::WindowDimensions* p = _impl_.window_dimensions_;
  return p != nullptr ? *p : reinterpret_cast<const ::WindowDimensions&>(::_WindowDimensions_default_instance_);
}
inline const ::WindowDimensions& GameScreen::window_dimensions() const ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:GameScreen.window_dimensions)
  return _internal_window_dimensions();
}
inline void GameScreen::unsafe_arena_set_allocated_window_dimensions(::WindowDimensions* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::google::protobuf::MessageLite*>(_impl_.window_dimensions_);
  }
  _impl_.window_dimensions_ = reinterpret_cast<::WindowDimensions*>(value);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:GameScreen.window_dimensions)
}
inline ::WindowDimensions* GameScreen::release_window_dimensions() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::WindowDimensions* released = _impl_.window_dimensions_;
  _impl_.window_dimensions_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old = reinterpret_cast<::google::protobuf::MessageLite*>(released);
  released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  if (GetArena() == nullptr) {
    delete old;
  }
#else   // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArena() != nullptr) {
    released = ::google::protobuf::internal::DuplicateIfNonNull(released);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return released;
}
inline ::WindowDimensions* GameScreen::unsafe_arena_release_window_dimensions() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:GameScreen.window_dimensions)

  _impl_._has_bits_[0] &= ~0x00000001u;
  ::WindowDimensions* temp = _impl_.window_dimensions_;
  _impl_.window_dimensions_ = nullptr;
  return temp;
}
inline ::WindowDimensions* GameScreen::_internal_mutable_window_dimensions() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.window_dimensions_ == nullptr) {
    auto* p = CreateMaybeMessage<::WindowDimensions>(GetArena());
    _impl_.window_dimensions_ = reinterpret_cast<::WindowDimensions*>(p);
  }
  return _impl_.window_dimensions_;
}
inline ::WindowDimensions* GameScreen::mutable_window_dimensions() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::WindowDimensions* _msg = _internal_mutable_window_dimensions();
  // @@protoc_insertion_point(field_mutable:GameScreen.window_dimensions)
  return _msg;
}
inline void GameScreen::set_allocated_window_dimensions(::WindowDimensions* value) {
  ::google::protobuf::Arena* message_arena = GetArena();
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  if (message_arena == nullptr) {
    delete reinterpret_cast<::WindowDimensions*>(_impl_.window_dimensions_);
  }

  if (value != nullptr) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::WindowDimensions*>(value)->GetArena();
    if (message_arena != submessage_arena) {
      value = ::google::protobuf::internal::GetOwnedMessage(message_arena, value, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }

  _impl_.window_dimensions_ = reinterpret_cast<::WindowDimensions*>(value);
  // @@protoc_insertion_point(field_set_allocated:GameScreen.window_dimensions)
}

// required .WindowType window_type = 2;
inline bool GameScreen::has_window_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void GameScreen::clear_window_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.window_type_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::WindowType GameScreen::window_type() const {
  // @@protoc_insertion_point(field_get:GameScreen.window_type)
  return _internal_window_type();
}
inline void GameScreen::set_window_type(::WindowType value) {
  _internal_set_window_type(value);
  // @@protoc_insertion_point(field_set:GameScreen.window_type)
}
inline ::WindowType GameScreen::_internal_window_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::WindowType>(_impl_.window_type_);
}
inline void GameScreen::_internal_set_window_type(::WindowType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  assert(::WindowType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.window_type_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::WindowType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::WindowType>() {
  return ::WindowType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_proto_2fsettings_2eproto_2epb_2eh