// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.8.1/UpdateManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct UpdateListener;}}

namespace g{
namespace Fuse{

// internal sealed class UpdateListener :44
// {
uType* UpdateListener_typeof();
void UpdateListener__ctor__fn(UpdateListener* __this);
void UpdateListener__Invoke_fn(UpdateListener* __this);
void UpdateListener__New1_fn(UpdateListener** __retval);

struct UpdateListener : uObject
{
    uStrong<uDelegate*> action;
    uStrong<uObject*> update;
    bool removed;
    int32_t deferFrame;
    int32_t sequence;

    void ctor_();
    void Invoke();
    static UpdateListener* New1();
};
// }

}} // ::g::Fuse
