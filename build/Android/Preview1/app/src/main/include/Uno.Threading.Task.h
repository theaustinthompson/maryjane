// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Threading/1.8.0/Tasks/Tasks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct CancellationTokenSource;}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct Task;}}}
namespace g{namespace Uno{struct AggregateException;}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class Task :64
// {
struct Task_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Task_type* Task_typeof();
void Task__ctor__fn(Task* __this, uDelegate* taskDelegate);
void Task__get_CancellationTokenSource_fn(Task* __this, ::g::Uno::Threading::CancellationTokenSource** __retval);
void Task__Dispose_fn(Task* __this);
void Task__get_Exception_fn(Task* __this, ::g::Uno::AggregateException** __retval);
void Task__set_Exception_fn(Task* __this, ::g::Uno::AggregateException* value);
void Task__Execute_fn(Task* __this);
void Task__InvokeTaskDelegate_fn(Task* __this);
void Task__New1_fn(uDelegate* taskDelegate, Task** __retval);
void Task__Run_fn(uDelegate* taskDelegate, Task** __retval);
void Task__Run1_fn(uDelegate* taskDelegate, uObject* scheduler, Task** __retval);
void Task__get_Status_fn(Task* __this, int32_t* __retval);
void Task__set_Status_fn(Task* __this, int32_t* value);
void Task__Wait_fn(Task* __this);

struct Task : uObject
{
    uStrong< ::g::Uno::AggregateException*> _exception;
    int32_t _taskStatus;
    uStrong< ::g::Uno::Threading::CancellationTokenSource*> _cancellationTokenSource;
    uStrong< ::g::Uno::Threading::ManualResetEvent*> _manualResetEvent;
    uStrong<uDelegate*> _taskDelegate;

    void ctor_(uDelegate* taskDelegate);
    ::g::Uno::Threading::CancellationTokenSource* CancellationTokenSource();
    void Dispose();
    ::g::Uno::AggregateException* Exception();
    void Exception(::g::Uno::AggregateException* value);
    void Execute();
    void InvokeTaskDelegate();
    int32_t Status();
    void Status(int32_t value);
    void Wait();
    static Task* New1(uDelegate* taskDelegate);
    static Task* Run(uDelegate* taskDelegate);
    static Task* Run1(uDelegate* taskDelegate, uObject* scheduler);
};
// }

}}} // ::g::Uno::Threading
