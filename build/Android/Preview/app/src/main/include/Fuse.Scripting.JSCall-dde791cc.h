// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.7.2/JSCallback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__ActionClosure1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.ActionClosure<T> :53
// {
uType* JSCallback__ActionClosure1_typeof();
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action);
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval);
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct JSCallback__ActionClosure1 : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    uObject* Run(::g::Fuse::Scripting::Context* context, uArray* args);
    static JSCallback__ActionClosure1* New1(uType* __type, uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
