// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.4/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager__Timer;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class TimerManager.Timer :251
// {
uType* TimerManager__Timer_typeof();
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat);
void TimerManager__Timer__GetMilliseconds_fn(double* __retval);
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval);
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this);
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this);
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this, ::g::Fuse::Scripting::Context* context, bool* __retval);

struct TimerManager__Timer : uObject
{
    static int32_t _id_;
    static int32_t& _id() { return _id_; }
    double _timeout;
    uStrong<uDelegate*> _callback;
    bool _repeat;
    bool _isRunning;
    double _startTime;
    int32_t ID;
    uStrong<uDelegate*> OnStop;

    void ctor_(double ms, uDelegate* callback, bool repeat);
    void Start();
    void Stop();
    bool Update(::g::Fuse::Scripting::Context* context);
    static double GetMilliseconds();
    static TimerManager__Timer* New1(double ms, uDelegate* callback, bool repeat);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
