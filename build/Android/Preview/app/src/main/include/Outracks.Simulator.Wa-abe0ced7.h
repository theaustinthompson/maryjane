// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Concurrency/Tasks.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct Task;}}}
namespace g{namespace Outracks{namespace Simulator{struct WaitForFirstResult;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class WaitForFirstResult<T> :95
// {
uType* WaitForFirstResult_typeof();
void WaitForFirstResult__ctor__fn(WaitForFirstResult* __this, uObject* pending, uDelegate* onNoResult);
void WaitForFirstResult__Execute_fn(WaitForFirstResult* __this, uTRef __retval);
void WaitForFirstResult__New1_fn(uType* __type, uObject* pending, uDelegate* onNoResult, WaitForFirstResult** __retval);

struct WaitForFirstResult : uObject
{
    uStrong< ::g::Uno::Collections::List*> _pending;
    uStrong<uDelegate*> _onNoResult;

    void ctor_(uObject* pending, uDelegate* onNoResult);
    template<class T>
    T Execute() { T __retval; return WaitForFirstResult__Execute_fn(this, &__retval), __retval; }
    static WaitForFirstResult* New1(uType* __type, uObject* pending, uDelegate* onNoResult);
};
// }

}}} // ::g::Outracks::Simulator
