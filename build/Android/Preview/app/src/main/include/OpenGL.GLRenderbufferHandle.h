// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/OpenGL/GLRenderbufferHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace OpenGL{

// public extern struct GLRenderbufferHandle :11
// {
uStructType* GLRenderbufferHandle_typeof();
void GLRenderbufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval);
void GLRenderbufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval);
void GLRenderbufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval);

struct GLRenderbufferHandle
{
    static uint32_t Zero_;
    static uint32_t& Zero() { return Zero_; }

    static bool Equals(uint32_t __this, uType* __type, uObject* obj) { bool __retval; return GLRenderbufferHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int32_t GetHashCode(uint32_t __this, uType* __type) { int32_t __retval; return GLRenderbufferHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static bool op_Inequality(uint32_t left, uint32_t right);
};
// }

}} // ::g::OpenGL
