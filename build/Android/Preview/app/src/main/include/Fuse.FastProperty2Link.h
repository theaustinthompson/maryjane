// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.2/Visual.FastProperties2.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty2Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty2Link :26
// {
uType* FastProperty2Link_typeof();
void FastProperty2Link__ctor__fn(FastProperty2Link* __this, int32_t* p);
void FastProperty2Link__New1_fn(int32_t* p, FastProperty2Link** __retval);

struct FastProperty2Link : uObject
{
    int32_t Property;
    uStrong<FastProperty2Link*> Next;

    void ctor_(int32_t p);
    static FastProperty2Link* New1(int32_t p);
};
// }

}} // ::g::Fuse
