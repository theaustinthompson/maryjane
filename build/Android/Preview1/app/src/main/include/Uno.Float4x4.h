// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Float4x4.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Uno{

// public intrinsic struct Float4x4 :8
// {
uStructType* Float4x4_typeof();
void Float4x4__ctor__fn(Float4x4* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44);
void Float4x4__Equals_fn(Float4x4* __this, uType* __type, uObject* o, bool* __retval);
void Float4x4__GetHashCode_fn(Float4x4* __this, uType* __type, int32_t* __retval);
void Float4x4__get_Identity_fn(Float4x4* __retval);
void Float4x4__get_Item_fn(Float4x4* __this, int32_t* index, ::g::Uno::Float4* __retval);
void Float4x4__set_Item_fn(Float4x4* __this, int32_t* index, ::g::Uno::Float4* value);
void Float4x4__New1_fn(float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44, Float4x4* __retval);
void Float4x4__op_Equality_fn(Float4x4* a, Float4x4* b, bool* __retval);
void Float4x4__ToString_fn(Float4x4* __this, uType* __type, uString** __retval);

struct Float4x4
{
    float M11;
    float M12;
    float M13;
    float M14;
    float M21;
    float M22;
    float M23;
    float M24;
    float M31;
    float M32;
    float M33;
    float M34;
    float M41;
    float M42;
    float M43;
    float M44;

    void ctor_(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float4x4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Float4x4__GetHashCode_fn(this, __type, &__retval), __retval; }
    ::g::Uno::Float4 Item(int32_t index);
    void Item(int32_t index, ::g::Uno::Float4 value);
    uString* ToString(uType* __type) { uString* __retval; return Float4x4__ToString_fn(this, __type, &__retval), __retval; }
};

Float4x4 Float4x4__New1(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
bool Float4x4__op_Equality(Float4x4 a, Float4x4 b);
Float4x4 Float4x4__Identity();
// }

}} // ::g::Uno
