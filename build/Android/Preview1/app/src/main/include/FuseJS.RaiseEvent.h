// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/FuseJS/1.7.4/UserEvents.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace FuseJS{struct RaiseEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace FuseJS{

// internal sealed class RaiseEvent :8
// {
uType* RaiseEvent_typeof();
void RaiseEvent__ctor__fn(RaiseEvent* __this);
void RaiseEvent__New1_fn(RaiseEvent** __retval);
void RaiseEvent__Raise_fn(RaiseEvent* __this);

struct RaiseEvent : uObject
{
    uStrong< ::g::Fuse::Node*> Source;
    uStrong<uString*> Name;
    uStrong< ::g::Uno::Collections::Dictionary*> Args;

    void ctor_();
    void Raise();
    static RaiseEvent* New1();
};
// }

}} // ::g::FuseJS
