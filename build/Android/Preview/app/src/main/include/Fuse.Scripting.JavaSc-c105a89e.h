// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.8.1/RootableScriptModule.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Dependency.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ClassInstance;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct RootableScriptModule;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class RootableScriptModule :18
// {
::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof();
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args);
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c);
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result);
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval);
void RootableScriptModule__GenerateRequireTable_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval);
void RootableScriptModule__get_ModuleNames_fn(RootableScriptModule* __this, int32_t* __retval);
void RootableScriptModule__set_ModuleNames_fn(RootableScriptModule* __this, int32_t* value);
void RootableScriptModule__New2_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval);

struct RootableScriptModule : ::g::Fuse::Scripting::ScriptModule
{
    uStrong< ::g::Fuse::Scripting::JavaScript::ThreadWorker*> _worker;
    uStrong< ::g::Uno::UX::NameTable*> _names;
    uStrong< ::g::Fuse::Scripting::JavaScript::ClassInstance*> _classInstance;
    int32_t _moduleNames;
    uStrong< ::g::Uno::Collections::Dictionary*> Dependencies;

    void ctor_2(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
    void EnsureClassInstanceRooted(::g::Fuse::Scripting::Context* c);
    int32_t ModuleNames();
    void ModuleNames(int32_t value);
    static RootableScriptModule* New2(::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Uno::UX::NameTable* names);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
