// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.4/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal abstract interface IMirror :10
// {
uInterfaceType* IMirror_typeof();

struct IMirror
{
    void(*fp_Reflect)(uObject*, ::g::Fuse::Scripting::Context*, uObject*, uObject**);
    static uObject* Reflect(const uInterface& __this, ::g::Fuse::Scripting::Context* context, uObject* obj) { uObject* __retval; return __this.VTable<IMirror>()->fp_Reflect(__this, context, obj, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
