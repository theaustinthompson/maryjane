// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.7.4/JSCallback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__FuncClosure1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.FuncClosure<TArg, TResult> :111
// {
uType* JSCallback__FuncClosure1_typeof();
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method);
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval);
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct JSCallback__FuncClosure1 : uObject
{
    uStrong<uDelegate*> _method;

    void ctor_(uDelegate* method);
    uObject* Run(::g::Fuse::Scripting::Context* context, uArray* args);
    static JSCallback__FuncClosure1* New1(uType* __type, uDelegate* method);
};
// }

}}} // ::g::Fuse::Scripting
