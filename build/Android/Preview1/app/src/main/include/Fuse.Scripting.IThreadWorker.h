// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.8.1/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof();

struct IThreadWorker
{
    void(*fp_Invoke)(uObject*, uDelegate*);
    void(*fp_Invoke1)(uObject*, uDelegate*);
    static void Invoke(const uInterface& __this, uDelegate* action) { __this.VTable<IThreadWorker>()->fp_Invoke(__this, action); }
    static void Invoke1(const uInterface& __this, uDelegate* action) { __this.VTable<IThreadWorker>()->fp_Invoke1(__this, action); }
};
// }

}}} // ::g::Fuse::Scripting
