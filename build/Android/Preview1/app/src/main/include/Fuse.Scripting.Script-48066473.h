// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.8.1/ScriptModule.Require.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Dependency.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule__RequireContext;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ScriptModule.RequireContext :14
// {
uType* ScriptModule__RequireContext_typeof();
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt);
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt, ScriptModule__RequireContext** __retval);
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* context, uString* id, uObject** __retval);

struct ScriptModule__RequireContext : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _c;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _dependant;
    uStrong< ::g::Fuse::Scripting::ScriptModule*> _m;
    uStrong< ::g::Uno::Collections::Dictionary*> _rt;
    static uSStrong<uString*> _lastErrorPath_;
    static uSStrong<uString*>& _lastErrorPath() { return _lastErrorPath_; }

    void ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt);
    uObject* Require(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* Require1(::g::Fuse::Scripting::Context* context, uString* id);
    static ScriptModule__RequireContext* New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt);
};
// }

}}} // ::g::Fuse::Scripting
