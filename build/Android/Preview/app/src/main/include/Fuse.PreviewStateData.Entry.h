// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.2/PreviewState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PreviewStateData__Entry;}}

namespace g{
namespace Fuse{

// private sealed class PreviewStateData.Entry :69
// {
uType* PreviewStateData__Entry_typeof();
void PreviewStateData__Entry__ctor__fn(PreviewStateData__Entry* __this);
void PreviewStateData__Entry__New1_fn(PreviewStateData__Entry** __retval);

struct PreviewStateData__Entry : uObject
{
    uStrong<uObject*> Data;
    bool Consumed;

    void ctor_();
    static PreviewStateData__Entry* New1();
};
// }

}} // ::g::Fuse
