// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/WeakDictionary.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct HashableWeakReference;}}}}
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class HashableWeakReference :10
// {
uType* HashableWeakReference_typeof();
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference);
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval);
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int32_t* __retval);
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval);
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval);

struct HashableWeakReference : uObject
{
    uStrong< ::g::Uno::WeakReference*> _reference;

    void ctor_(::g::Uno::WeakReference* reference);
    bool TryGetTarget(uObject** obj);
    static HashableWeakReference* New1(::g::Uno::WeakReference* reference);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
