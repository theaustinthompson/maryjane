// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.8.1/WhileKeyboardVisible.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct WindowCaps;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileKeyboardVisible :12
// {
struct WhileKeyboardVisible_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Uno::UX::IPropertyListener interface8;
};

WhileKeyboardVisible_type* WhileKeyboardVisible_typeof();
void WhileKeyboardVisible__ctor_6_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__CheckActivation_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__New2_fn(WhileKeyboardVisible** __retval);
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval);
void WhileKeyboardVisible__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileKeyboardVisible* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* name);

struct WhileKeyboardVisible : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Reactive::WindowCaps*> _caps;
    static uSStrong<uObject*> Keyboard_;
    static uSStrong<uObject*>& Keyboard() { return WhileKeyboardVisible_typeof()->Init(), Keyboard_; }

    void ctor_6();
    void CheckActivation();
    float Threshold();
    static WhileKeyboardVisible* New2();
};
// }

}}} // ::g::Fuse::Triggers
