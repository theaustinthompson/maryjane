// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerModule__CallbackClosure;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class TimerModule.CallbackClosure :148
// {
uType* TimerModule__CallbackClosure_typeof();
void TimerModule__CallbackClosure__ctor__fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args);
void TimerModule__CallbackClosure__Callback_fn(TimerModule__CallbackClosure* __this, ::g::Fuse::Scripting::Context* context);
void TimerModule__CallbackClosure__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args, TimerModule__CallbackClosure** __retval);

struct TimerModule__CallbackClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _func;
    uStrong<uArray*> _args;
    uStrong< ::g::Fuse::Scripting::Context*> _context;

    void ctor_(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args);
    void Callback(::g::Fuse::Scripting::Context* context);
    static TimerModule__CallbackClosure* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* func, uArray* args);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
