// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.8.1/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Timer;}}

namespace g{
namespace Fuse{

// public sealed class Timer :7
// {
uType* Timer_typeof();
void Timer__ctor__fn(Timer* __this, double* interval, uDelegate* callback);
void Timer__New1_fn(double* interval, uDelegate* callback, Timer** __retval);
void Timer__Start_fn(Timer* __this);
void Timer__Stop_fn(Timer* __this);
void Timer__Update_fn(Timer* __this);
void Timer__Wait_fn(double* duration, uDelegate* callback);

struct Timer : uObject
{
    uStrong<uDelegate*> _callback;
    double _startTime;
    double _interval;
    bool _running;
    bool _once;

    void ctor_(double interval, uDelegate* callback);
    void Start();
    void Stop();
    void Update();
    static Timer* New1(double interval, uDelegate* callback);
    static void Wait(double duration, uDelegate* callback);
};
// }

}} // ::g::Fuse
