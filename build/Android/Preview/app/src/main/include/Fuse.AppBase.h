// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.2/AppBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IProperties.h>
#include <Fuse.IRootVisualProvider.h>
#include <Uno.Application.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{struct AppBase;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Properties;}}
namespace g{namespace Fuse{struct RootViewport;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Resource;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public abstract class AppBase :41
// {
struct AppBase_type : uType
{
    ::g::Fuse::IProperties interface0;
    ::g::Fuse::IRootVisualProvider interface1;
    void(*fp_get_Children)(::g::Fuse::AppBase*, uObject**);
    void(*fp_get_ChildrenVisual)(::g::Fuse::AppBase*, ::g::Fuse::Visual**);
    void(*fp_OnUpdate)(::g::Fuse::AppBase*);
};

AppBase_type* AppBase_typeof();
void AppBase__ctor_2_fn(AppBase* __this);
void AppBase__get_Background_fn(AppBase* __this, ::g::Uno::Float4* __retval);
void AppBase__set_Background_fn(AppBase* __this, ::g::Uno::Float4* value);
void AppBase__get_Current2_fn(AppBase** __retval);
void AppBase__get_CurrentRootViewport_fn(::g::Fuse::RootViewport** __retval);
void AppBase__FuseIRootVisualProviderget_Root_fn(AppBase* __this, ::g::Fuse::Visual** __retval);
void AppBase__OnEnteringBackground_fn(AppBase* __this, int32_t* s);
void AppBase__OnLowMemory_fn(AppBase* __this);
void AppBase__OnUnhandledException_fn(AppBase* __this, ::g::Uno::Exception* e, bool* propagate);
void AppBase__OnUnhandledExceptionInternal_fn(::g::Uno::Exception* e);
void AppBase__OnUpdate_fn(AppBase* __this);
void AppBase__get_PixelsPerPoint_fn(AppBase* __this, float* __retval);
void AppBase__get_Properties_fn(AppBase* __this, ::g::Fuse::Properties** __retval);
void AppBase__get_Resources_fn(AppBase* __this, uObject** __retval);
void AppBase__get_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport** __retval);
void AppBase__set_RootViewport_fn(AppBase* __this, ::g::Fuse::RootViewport* value);
void AppBase__TestSetRootViewport_fn(::g::Fuse::RootViewport* rv);
void AppBase__add_UnhandledException_fn(AppBase* __this, uDelegate* value);
void AppBase__remove_UnhandledException_fn(AppBase* __this, uDelegate* value);

struct AppBase : ::g::Uno::Application
{
    uStrong< ::g::Fuse::Properties*> _properties;
    static uSStrong< ::g::Fuse::RootViewport*> _testRootViewport_;
    static uSStrong< ::g::Fuse::RootViewport*>& _testRootViewport() { return _testRootViewport_; }
    ::g::Uno::Float4 _Background;
    uStrong< ::g::Fuse::RootViewport*> _RootViewport;
    uStrong<uDelegate*> UnhandledException1;

    void ctor_2();
    ::g::Uno::Float4 Background();
    void Background(::g::Uno::Float4 value);
    uObject* Children() { uObject* __retval; return (((AppBase_type*)__type)->fp_get_Children)(this, &__retval), __retval; }
    ::g::Fuse::Visual* ChildrenVisual() { ::g::Fuse::Visual* __retval; return (((AppBase_type*)__type)->fp_get_ChildrenVisual)(this, &__retval), __retval; }
    void OnEnteringBackground(int32_t s);
    void OnLowMemory();
    void OnUnhandledException(::g::Uno::Exception* e, bool propagate);
    void OnUpdate() { (((AppBase_type*)__type)->fp_OnUpdate)(this); }
    float PixelsPerPoint();
    ::g::Fuse::Properties* Properties();
    uObject* Resources();
    ::g::Fuse::RootViewport* RootViewport();
    void RootViewport(::g::Fuse::RootViewport* value);
    void add_UnhandledException(uDelegate* value);
    void remove_UnhandledException(uDelegate* value);
    static void OnUnhandledExceptionInternal(::g::Uno::Exception* e);
    static void OnUpdate(AppBase* __this) { AppBase__OnUpdate_fn(__this); }
    static void TestSetRootViewport(::g::Fuse::RootViewport* rv);
    static AppBase* Current2();
    static ::g::Fuse::RootViewport* CurrentRootViewport();
};
// }

}} // ::g::Fuse
