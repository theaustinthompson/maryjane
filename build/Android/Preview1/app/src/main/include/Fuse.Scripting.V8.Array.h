// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.4/V8/Array.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Scripting.Array.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Array;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Array :7
// {
::g::Fuse::Scripting::Array_type* Array_typeof();
void Array__ctor_1_fn(Array* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSArray** array);
void Array__Equals2_fn(Array* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void Array__GetHashCode_fn(Array* __this, int32_t* __retval);
void Array__GetJSArray_fn(Array* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSArray** __retval);
void Array__get_Item_fn(Array* __this, int32_t* index, uObject** __retval);
void Array__set_Item_fn(Array* __this, int32_t* index, uObject* value);
void Array__get_Length_fn(Array* __this, int32_t* __retval);
void Array__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSArray** array, Array** __retval);

struct Array : ::g::Fuse::Scripting::Array
{
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    ::JSArray* _array;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array);
    ::JSArray* GetJSArray(::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static Array* New1(::g::Fuse::Scripting::V8::Context* context, ::JSArray* array);
};
// }

}}}} // ::g::Fuse::Scripting::V8
