// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.4/ModuleInstance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Diagno-2903b551.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ModuleInstance;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class ModuleInstance :7
// {
uType* ModuleInstance_typeof();
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, uObject* worker, ::g::Fuse::Reactive::JavaScript* js);
void ModuleInstance__Dispose_fn(ModuleInstance* __this);
void ModuleInstance__Evaluate_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context);
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context);
void ModuleInstance__New2_fn(uObject* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval);
void ModuleInstance__ReflectExports_fn(ModuleInstance* __this, bool* __retval);
void ModuleInstance__ReflectExportsJS_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context);
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this);

struct ModuleInstance : ::g::Fuse::Scripting::DiagnosticSubject
{
    uStrong<uObject*> _worker;
    uStrong< ::g::Fuse::Reactive::JavaScript*> _js;
    uStrong< ::g::Uno::Collections::Dictionary*> _deps;
    uStrong<uObject*> _dc;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _moduleResult;
    static uSStrong<uObject*> _resetHookMutex_;
    static uSStrong<uObject*>& _resetHookMutex() { return ModuleInstance_typeof()->Init(), _resetHookMutex_; }
    uStrong< ::g::Fuse::Scripting::DiagnosticSubject*> _diagnostic1;

    void ctor_1(uObject* worker, ::g::Fuse::Reactive::JavaScript* js);
    void Dispose();
    void Evaluate(::g::Fuse::Scripting::Context* context);
    void EvaluateModule(::g::Fuse::Scripting::Context* context);
    bool ReflectExports();
    void ReflectExportsJS(::g::Fuse::Scripting::Context* context);
    void SetDataContext();
    static ModuleInstance* New2(uObject* worker, ::g::Fuse::Reactive::JavaScript* js);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
