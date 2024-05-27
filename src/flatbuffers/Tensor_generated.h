// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_
#define FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "Schema_generated.h"

namespace org {
namespace apache {
namespace arrow {
namespace flatbuf {

struct TensorDim;
struct TensorDimBuilder;
struct TensorDimT;

struct Tensor;
struct TensorBuilder;
struct TensorT;

struct TensorDimT : public ::flatbuffers::NativeTable {
  typedef TensorDim TableType;
  int64_t size = 0;
  std::string name{};
};

/// ----------------------------------------------------------------------
/// Data structures for dense tensors
/// Shape data for a single axis in a tensor
struct TensorDim FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TensorDimT NativeTableType;
  typedef TensorDimBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SIZE = 4,
    VT_NAME = 6
  };
  /// Length of dimension
  int64_t size() const {
    return GetField<int64_t>(VT_SIZE, 0);
  }
  /// Name of the dimension, optional
  const ::flatbuffers::String *name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NAME);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_SIZE, 8) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
  TensorDimT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TensorDimT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<TensorDim> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TensorDimT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct TensorDimBuilder {
  typedef TensorDim Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_size(int64_t size) {
    fbb_.AddElement<int64_t>(TensorDim::VT_SIZE, size, 0);
  }
  void add_name(::flatbuffers::Offset<::flatbuffers::String> name) {
    fbb_.AddOffset(TensorDim::VT_NAME, name);
  }
  explicit TensorDimBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TensorDim> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TensorDim>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TensorDim> CreateTensorDim(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t size = 0,
    ::flatbuffers::Offset<::flatbuffers::String> name = 0) {
  TensorDimBuilder builder_(_fbb);
  builder_.add_size(size);
  builder_.add_name(name);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TensorDim> CreateTensorDimDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t size = 0,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return org::apache::arrow::flatbuf::CreateTensorDim(
      _fbb,
      size,
      name__);
}

::flatbuffers::Offset<TensorDim> CreateTensorDim(::flatbuffers::FlatBufferBuilder &_fbb, const TensorDimT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct TensorT : public ::flatbuffers::NativeTable {
  typedef Tensor TableType;
  org::apache::arrow::flatbuf::TypeUnion type{};
  std::vector<std::unique_ptr<org::apache::arrow::flatbuf::TensorDimT>> shape{};
  std::vector<int64_t> strides{};
  std::unique_ptr<org::apache::arrow::flatbuf::Buffer> data{};
  TensorT() = default;
  TensorT(const TensorT &o);
  TensorT(TensorT&&) FLATBUFFERS_NOEXCEPT = default;
  TensorT &operator=(TensorT o) FLATBUFFERS_NOEXCEPT;
};

struct Tensor FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TensorT NativeTableType;
  typedef TensorBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE_TYPE = 4,
    VT_TYPE = 6,
    VT_SHAPE = 8,
    VT_STRIDES = 10,
    VT_DATA = 12
  };
  org::apache::arrow::flatbuf::Type type_type() const {
    return static_cast<org::apache::arrow::flatbuf::Type>(GetField<uint8_t>(VT_TYPE_TYPE, 0));
  }
  /// The type of data contained in a value cell. Currently only fixed-width
  /// value types are supported, no strings or nested types
  const void *type() const {
    return GetPointer<const void *>(VT_TYPE);
  }
  template<typename T> const T *type_as() const;
  const org::apache::arrow::flatbuf::Null *type_as_Null() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Null ? static_cast<const org::apache::arrow::flatbuf::Null *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Int *type_as_Int() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Int ? static_cast<const org::apache::arrow::flatbuf::Int *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::FloatingPoint *type_as_FloatingPoint() const {
    return type_type() == org::apache::arrow::flatbuf::Type_FloatingPoint ? static_cast<const org::apache::arrow::flatbuf::FloatingPoint *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Binary *type_as_Binary() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Binary ? static_cast<const org::apache::arrow::flatbuf::Binary *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Utf8 *type_as_Utf8() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Utf8 ? static_cast<const org::apache::arrow::flatbuf::Utf8 *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Bool *type_as_Bool() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Bool ? static_cast<const org::apache::arrow::flatbuf::Bool *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Decimal *type_as_Decimal() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Decimal ? static_cast<const org::apache::arrow::flatbuf::Decimal *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Date *type_as_Date() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Date ? static_cast<const org::apache::arrow::flatbuf::Date *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Time *type_as_Time() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Time ? static_cast<const org::apache::arrow::flatbuf::Time *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Timestamp *type_as_Timestamp() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Timestamp ? static_cast<const org::apache::arrow::flatbuf::Timestamp *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Interval *type_as_Interval() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Interval ? static_cast<const org::apache::arrow::flatbuf::Interval *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::List *type_as_List() const {
    return type_type() == org::apache::arrow::flatbuf::Type_List ? static_cast<const org::apache::arrow::flatbuf::List *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Struct_ *type_as_Struct_() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Struct_ ? static_cast<const org::apache::arrow::flatbuf::Struct_ *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Union *type_as_Union() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Union ? static_cast<const org::apache::arrow::flatbuf::Union *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::FixedSizeBinary *type_as_FixedSizeBinary() const {
    return type_type() == org::apache::arrow::flatbuf::Type_FixedSizeBinary ? static_cast<const org::apache::arrow::flatbuf::FixedSizeBinary *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::FixedSizeList *type_as_FixedSizeList() const {
    return type_type() == org::apache::arrow::flatbuf::Type_FixedSizeList ? static_cast<const org::apache::arrow::flatbuf::FixedSizeList *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Map *type_as_Map() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Map ? static_cast<const org::apache::arrow::flatbuf::Map *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Duration *type_as_Duration() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Duration ? static_cast<const org::apache::arrow::flatbuf::Duration *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::LargeBinary *type_as_LargeBinary() const {
    return type_type() == org::apache::arrow::flatbuf::Type_LargeBinary ? static_cast<const org::apache::arrow::flatbuf::LargeBinary *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::LargeUtf8 *type_as_LargeUtf8() const {
    return type_type() == org::apache::arrow::flatbuf::Type_LargeUtf8 ? static_cast<const org::apache::arrow::flatbuf::LargeUtf8 *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::LargeList *type_as_LargeList() const {
    return type_type() == org::apache::arrow::flatbuf::Type_LargeList ? static_cast<const org::apache::arrow::flatbuf::LargeList *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::RunEndEncoded *type_as_RunEndEncoded() const {
    return type_type() == org::apache::arrow::flatbuf::Type_RunEndEncoded ? static_cast<const org::apache::arrow::flatbuf::RunEndEncoded *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::BinaryView *type_as_BinaryView() const {
    return type_type() == org::apache::arrow::flatbuf::Type_BinaryView ? static_cast<const org::apache::arrow::flatbuf::BinaryView *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::Utf8View *type_as_Utf8View() const {
    return type_type() == org::apache::arrow::flatbuf::Type_Utf8View ? static_cast<const org::apache::arrow::flatbuf::Utf8View *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::ListView *type_as_ListView() const {
    return type_type() == org::apache::arrow::flatbuf::Type_ListView ? static_cast<const org::apache::arrow::flatbuf::ListView *>(type()) : nullptr;
  }
  const org::apache::arrow::flatbuf::LargeListView *type_as_LargeListView() const {
    return type_type() == org::apache::arrow::flatbuf::Type_LargeListView ? static_cast<const org::apache::arrow::flatbuf::LargeListView *>(type()) : nullptr;
  }
  /// The dimensions of the tensor, optionally named
  const ::flatbuffers::Vector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>> *shape() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>> *>(VT_SHAPE);
  }
  /// Non-negative byte offsets to advance one value cell along each dimension
  /// If omitted, default to row-major order (C-like).
  const ::flatbuffers::Vector<int64_t> *strides() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_STRIDES);
  }
  /// The location and size of the tensor's data
  const org::apache::arrow::flatbuf::Buffer *data() const {
    return GetStruct<const org::apache::arrow::flatbuf::Buffer *>(VT_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_TYPE_TYPE, 1) &&
           VerifyOffsetRequired(verifier, VT_TYPE) &&
           VerifyType(verifier, type(), type_type()) &&
           VerifyOffsetRequired(verifier, VT_SHAPE) &&
           verifier.VerifyVector(shape()) &&
           verifier.VerifyVectorOfTables(shape()) &&
           VerifyOffset(verifier, VT_STRIDES) &&
           verifier.VerifyVector(strides()) &&
           VerifyFieldRequired<org::apache::arrow::flatbuf::Buffer>(verifier, VT_DATA, 8) &&
           verifier.EndTable();
  }
  TensorT *UnPack(const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(TensorT *_o, const ::flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static ::flatbuffers::Offset<Tensor> Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TensorT* _o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

template<> inline const org::apache::arrow::flatbuf::Null *Tensor::type_as<org::apache::arrow::flatbuf::Null>() const {
  return type_as_Null();
}

template<> inline const org::apache::arrow::flatbuf::Int *Tensor::type_as<org::apache::arrow::flatbuf::Int>() const {
  return type_as_Int();
}

template<> inline const org::apache::arrow::flatbuf::FloatingPoint *Tensor::type_as<org::apache::arrow::flatbuf::FloatingPoint>() const {
  return type_as_FloatingPoint();
}

template<> inline const org::apache::arrow::flatbuf::Binary *Tensor::type_as<org::apache::arrow::flatbuf::Binary>() const {
  return type_as_Binary();
}

template<> inline const org::apache::arrow::flatbuf::Utf8 *Tensor::type_as<org::apache::arrow::flatbuf::Utf8>() const {
  return type_as_Utf8();
}

template<> inline const org::apache::arrow::flatbuf::Bool *Tensor::type_as<org::apache::arrow::flatbuf::Bool>() const {
  return type_as_Bool();
}

template<> inline const org::apache::arrow::flatbuf::Decimal *Tensor::type_as<org::apache::arrow::flatbuf::Decimal>() const {
  return type_as_Decimal();
}

template<> inline const org::apache::arrow::flatbuf::Date *Tensor::type_as<org::apache::arrow::flatbuf::Date>() const {
  return type_as_Date();
}

template<> inline const org::apache::arrow::flatbuf::Time *Tensor::type_as<org::apache::arrow::flatbuf::Time>() const {
  return type_as_Time();
}

template<> inline const org::apache::arrow::flatbuf::Timestamp *Tensor::type_as<org::apache::arrow::flatbuf::Timestamp>() const {
  return type_as_Timestamp();
}

template<> inline const org::apache::arrow::flatbuf::Interval *Tensor::type_as<org::apache::arrow::flatbuf::Interval>() const {
  return type_as_Interval();
}

template<> inline const org::apache::arrow::flatbuf::List *Tensor::type_as<org::apache::arrow::flatbuf::List>() const {
  return type_as_List();
}

template<> inline const org::apache::arrow::flatbuf::Struct_ *Tensor::type_as<org::apache::arrow::flatbuf::Struct_>() const {
  return type_as_Struct_();
}

template<> inline const org::apache::arrow::flatbuf::Union *Tensor::type_as<org::apache::arrow::flatbuf::Union>() const {
  return type_as_Union();
}

template<> inline const org::apache::arrow::flatbuf::FixedSizeBinary *Tensor::type_as<org::apache::arrow::flatbuf::FixedSizeBinary>() const {
  return type_as_FixedSizeBinary();
}

template<> inline const org::apache::arrow::flatbuf::FixedSizeList *Tensor::type_as<org::apache::arrow::flatbuf::FixedSizeList>() const {
  return type_as_FixedSizeList();
}

template<> inline const org::apache::arrow::flatbuf::Map *Tensor::type_as<org::apache::arrow::flatbuf::Map>() const {
  return type_as_Map();
}

template<> inline const org::apache::arrow::flatbuf::Duration *Tensor::type_as<org::apache::arrow::flatbuf::Duration>() const {
  return type_as_Duration();
}

template<> inline const org::apache::arrow::flatbuf::LargeBinary *Tensor::type_as<org::apache::arrow::flatbuf::LargeBinary>() const {
  return type_as_LargeBinary();
}

template<> inline const org::apache::arrow::flatbuf::LargeUtf8 *Tensor::type_as<org::apache::arrow::flatbuf::LargeUtf8>() const {
  return type_as_LargeUtf8();
}

template<> inline const org::apache::arrow::flatbuf::LargeList *Tensor::type_as<org::apache::arrow::flatbuf::LargeList>() const {
  return type_as_LargeList();
}

template<> inline const org::apache::arrow::flatbuf::RunEndEncoded *Tensor::type_as<org::apache::arrow::flatbuf::RunEndEncoded>() const {
  return type_as_RunEndEncoded();
}

template<> inline const org::apache::arrow::flatbuf::BinaryView *Tensor::type_as<org::apache::arrow::flatbuf::BinaryView>() const {
  return type_as_BinaryView();
}

template<> inline const org::apache::arrow::flatbuf::Utf8View *Tensor::type_as<org::apache::arrow::flatbuf::Utf8View>() const {
  return type_as_Utf8View();
}

template<> inline const org::apache::arrow::flatbuf::ListView *Tensor::type_as<org::apache::arrow::flatbuf::ListView>() const {
  return type_as_ListView();
}

template<> inline const org::apache::arrow::flatbuf::LargeListView *Tensor::type_as<org::apache::arrow::flatbuf::LargeListView>() const {
  return type_as_LargeListView();
}

struct TensorBuilder {
  typedef Tensor Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_type_type(org::apache::arrow::flatbuf::Type type_type) {
    fbb_.AddElement<uint8_t>(Tensor::VT_TYPE_TYPE, static_cast<uint8_t>(type_type), 0);
  }
  void add_type(::flatbuffers::Offset<void> type) {
    fbb_.AddOffset(Tensor::VT_TYPE, type);
  }
  void add_shape(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>>> shape) {
    fbb_.AddOffset(Tensor::VT_SHAPE, shape);
  }
  void add_strides(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> strides) {
    fbb_.AddOffset(Tensor::VT_STRIDES, strides);
  }
  void add_data(const org::apache::arrow::flatbuf::Buffer *data) {
    fbb_.AddStruct(Tensor::VT_DATA, data);
  }
  explicit TensorBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Tensor> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Tensor>(end);
    fbb_.Required(o, Tensor::VT_TYPE);
    fbb_.Required(o, Tensor::VT_SHAPE);
    fbb_.Required(o, Tensor::VT_DATA);
    return o;
  }
};

inline ::flatbuffers::Offset<Tensor> CreateTensor(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    org::apache::arrow::flatbuf::Type type_type = org::apache::arrow::flatbuf::Type_NONE,
    ::flatbuffers::Offset<void> type = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>>> shape = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> strides = 0,
    const org::apache::arrow::flatbuf::Buffer *data = nullptr) {
  TensorBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_strides(strides);
  builder_.add_shape(shape);
  builder_.add_type(type);
  builder_.add_type_type(type_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Tensor> CreateTensorDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    org::apache::arrow::flatbuf::Type type_type = org::apache::arrow::flatbuf::Type_NONE,
    ::flatbuffers::Offset<void> type = 0,
    const std::vector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>> *shape = nullptr,
    const std::vector<int64_t> *strides = nullptr,
    const org::apache::arrow::flatbuf::Buffer *data = nullptr) {
  auto shape__ = shape ? _fbb.CreateVector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>>(*shape) : 0;
  auto strides__ = strides ? _fbb.CreateVector<int64_t>(*strides) : 0;
  return org::apache::arrow::flatbuf::CreateTensor(
      _fbb,
      type_type,
      type,
      shape__,
      strides__,
      data);
}

::flatbuffers::Offset<Tensor> CreateTensor(::flatbuffers::FlatBufferBuilder &_fbb, const TensorT *_o, const ::flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline TensorDimT *TensorDim::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<TensorDimT>(new TensorDimT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void TensorDim::UnPackTo(TensorDimT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = size(); _o->size = _e; }
  { auto _e = name(); if (_e) _o->name = _e->str(); }
}

inline ::flatbuffers::Offset<TensorDim> TensorDim::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TensorDimT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTensorDim(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<TensorDim> CreateTensorDim(::flatbuffers::FlatBufferBuilder &_fbb, const TensorDimT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const TensorDimT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _size = _o->size;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  return org::apache::arrow::flatbuf::CreateTensorDim(
      _fbb,
      _size,
      _name);
}

inline TensorT::TensorT(const TensorT &o)
      : type(o.type),
        strides(o.strides),
        data((o.data) ? new org::apache::arrow::flatbuf::Buffer(*o.data) : nullptr) {
  shape.reserve(o.shape.size());
  for (const auto &shape_ : o.shape) { shape.emplace_back((shape_) ? new org::apache::arrow::flatbuf::TensorDimT(*shape_) : nullptr); }
}

inline TensorT &TensorT::operator=(TensorT o) FLATBUFFERS_NOEXCEPT {
  std::swap(type, o.type);
  std::swap(shape, o.shape);
  std::swap(strides, o.strides);
  std::swap(data, o.data);
  return *this;
}

inline TensorT *Tensor::UnPack(const ::flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<TensorT>(new TensorT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Tensor::UnPackTo(TensorT *_o, const ::flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = type_type(); _o->type.type = _e; }
  { auto _e = type(); if (_e) _o->type.value = org::apache::arrow::flatbuf::TypeUnion::UnPack(_e, type_type(), _resolver); }
  { auto _e = shape(); if (_e) { _o->shape.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->shape[_i]) { _e->Get(_i)->UnPackTo(_o->shape[_i].get(), _resolver); } else { _o->shape[_i] = std::unique_ptr<org::apache::arrow::flatbuf::TensorDimT>(_e->Get(_i)->UnPack(_resolver)); }; } } else { _o->shape.resize(0); } }
  { auto _e = strides(); if (_e) { _o->strides.resize(_e->size()); for (::flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->strides[_i] = _e->Get(_i); } } else { _o->strides.resize(0); } }
  { auto _e = data(); if (_e) _o->data = std::unique_ptr<org::apache::arrow::flatbuf::Buffer>(new org::apache::arrow::flatbuf::Buffer(*_e)); }
}

inline ::flatbuffers::Offset<Tensor> Tensor::Pack(::flatbuffers::FlatBufferBuilder &_fbb, const TensorT* _o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  return CreateTensor(_fbb, _o, _rehasher);
}

inline ::flatbuffers::Offset<Tensor> CreateTensor(::flatbuffers::FlatBufferBuilder &_fbb, const TensorT *_o, const ::flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { ::flatbuffers::FlatBufferBuilder *__fbb; const TensorT* __o; const ::flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _type_type = _o->type.type;
  auto _type = _o->type.Pack(_fbb);
  auto _shape = _fbb.CreateVector<::flatbuffers::Offset<org::apache::arrow::flatbuf::TensorDim>> (_o->shape.size(), [](size_t i, _VectorArgs *__va) { return CreateTensorDim(*__va->__fbb, __va->__o->shape[i].get(), __va->__rehasher); }, &_va );
  auto _strides = _o->strides.size() ? _fbb.CreateVector(_o->strides) : 0;
  auto _data = _o->data ? _o->data.get() : nullptr;
  return org::apache::arrow::flatbuf::CreateTensor(
      _fbb,
      _type_type,
      _type,
      _shape,
      _strides,
      _data);
}

inline const org::apache::arrow::flatbuf::Tensor *GetTensor(const void *buf) {
  return ::flatbuffers::GetRoot<org::apache::arrow::flatbuf::Tensor>(buf);
}

inline const org::apache::arrow::flatbuf::Tensor *GetSizePrefixedTensor(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<org::apache::arrow::flatbuf::Tensor>(buf);
}

inline bool VerifyTensorBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<org::apache::arrow::flatbuf::Tensor>(nullptr);
}

inline bool VerifySizePrefixedTensorBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<org::apache::arrow::flatbuf::Tensor>(nullptr);
}

inline void FinishTensorBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<org::apache::arrow::flatbuf::Tensor> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTensorBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<org::apache::arrow::flatbuf::Tensor> root) {
  fbb.FinishSizePrefixed(root);
}

inline std::unique_ptr<org::apache::arrow::flatbuf::TensorT> UnPackTensor(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<org::apache::arrow::flatbuf::TensorT>(GetTensor(buf)->UnPack(res));
}

inline std::unique_ptr<org::apache::arrow::flatbuf::TensorT> UnPackSizePrefixedTensor(
    const void *buf,
    const ::flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<org::apache::arrow::flatbuf::TensorT>(GetSizePrefixedTensor(buf)->UnPack(res));
}

}  // namespace flatbuf
}  // namespace arrow
}  // namespace apache
}  // namespace org

#endif  // FLATBUFFERS_GENERATED_TENSOR_ORG_APACHE_ARROW_FLATBUF_H_