// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/FuseJS/DebugLog.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct DebugLog;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class DebugLog :6
// {
uClassType* DebugLog_typeof();
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c);
void DebugLog__Log_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct DebugLog : uObject
{
    static void Init(::g::Fuse::Scripting::Context* c);
    static uObject* Log(::g::Fuse::Scripting::Context* context, uArray* args);
};
// }

}}} // ::g::Fuse::Reactive
