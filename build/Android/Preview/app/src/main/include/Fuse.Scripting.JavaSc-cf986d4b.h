// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.8.1/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.JavaSc-ac35ccc1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct LazyObservableProperty;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class LazyObservableProperty :7
// {
::g::Fuse::Scripting::JavaScript::ObservableProperty_type* LazyObservableProperty_typeof();
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c);
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c, LazyObservableProperty** __retval);

struct LazyObservableProperty : ::g::Fuse::Scripting::JavaScript::ObservableProperty
{
    void ctor_1(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c);
    uObject* Get(::g::Fuse::Scripting::Context* context, uArray* args);
    static LazyObservableProperty* New2(::g::Fuse::Scripting::JavaScript::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Context* c);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
