// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Concurrency/ConcurrentQueue.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class ConcurrentQueue<T> :8
// {
uType* ConcurrentQueue_typeof();
void ConcurrentQueue__ctor__fn(ConcurrentQueue* __this);
void ConcurrentQueue__Enqueue_fn(ConcurrentQueue* __this, void* data);
void ConcurrentQueue__New1_fn(uType* __type, ConcurrentQueue** __retval);
void ConcurrentQueue__TryDequeue_fn(ConcurrentQueue* __this, uTRef data, bool* __retval);

struct ConcurrentQueue : uObject
{
    uStrong< ::g::Uno::Collections::Queue*> _queue;
    uStrong<uObject*> _mutex;

    void ctor_();
    template<class T>
    void Enqueue(T data) { ConcurrentQueue__Enqueue_fn(this, uConstrain(__type->T(0), data)); }
    template<class T>
    bool TryDequeue(T* data) { bool __retval; return ConcurrentQueue__TryDequeue_fn(this, uConstrain(__type->T(0), data), &__retval), __retval; }
    static ConcurrentQueue* New1(uType* __type);
};
// }

}}} // ::g::Outracks::Simulator
