// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.7.2/NativeFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeFunction__NativeFunctionClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativeFunction.NativeFunctionClosure :27
// {
uType* NativeFunction__NativeFunctionClosure_typeof();
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context);
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval);

struct NativeFunction__NativeFunctionClosure : uObject
{
    uStrong<uDelegate*> _callback;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context);
    uObject* Callback(::g::Fuse::Scripting::Context* context, uArray* args);
    static NativeFunction__NativeFunctionClosure* New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context);
};
// }

}}} // ::g::Fuse::Scripting
