// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/V8/Object.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Scripting.Object.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct AutoReleasePool;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Object;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal sealed extern class Object :8
// {
::g::Fuse::Scripting::Object_type* Object_typeof();
void Object__ctor_1_fn(Object* __this, ::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj);
void Object__CallMethod_fn(Object* __this, ::g::Fuse::Scripting::Context* context, uString* name, uArray* args, uObject** __retval);
void Object__CallMethod1_fn(Object* __this, uString* name, uArray* args, uObject** __retval);
void Object__ContainsKey_fn(Object* __this, uString* key, bool* __retval);
void Object__Equals2_fn(Object* __this, ::g::Fuse::Scripting::Object* o, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int32_t* __retval);
void Object__GetJSObject_fn(Object* __this, ::g::Fuse::Scripting::V8::AutoReleasePool* pool, ::JSObject** __retval);
void Object__InstanceOf_fn(Object* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* type, bool* __retval);
void Object__InstanceOf1_fn(Object* __this, ::g::Fuse::Scripting::Function* type, bool* __retval);
void Object__get_Item_fn(Object* __this, uString* key, uObject** __retval);
void Object__set_Item_fn(Object* __this, uString* key, uObject* value);
void Object__get_Keys_fn(Object* __this, uArray** __retval);
void Object__New1_fn(::g::Fuse::Scripting::V8::Context* context, ::JSObject** obj, Object** __retval);

struct Object : ::g::Fuse::Scripting::Object
{
    uWeak< ::g::Fuse::Scripting::V8::Context*> _context;
    ::JSObject* _object;

    void ctor_1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj);
    ::JSObject* GetJSObject(::g::Fuse::Scripting::V8::AutoReleasePool pool);
    static Object* New1(::g::Fuse::Scripting::V8::Context* context, ::JSObject* obj);
};
// }

}}}} // ::g::Fuse::Scripting::V8
