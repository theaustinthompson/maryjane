// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.iOS/1.7.4/StatusBarConfig.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace iOS{struct StatusBarConfig;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace iOS{

// public sealed class StatusBarConfig :28
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int32_t* __retval);
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int32_t* value);
void StatusBarConfig__Apply_fn();
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval);
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value);
void StatusBarConfig__New2_fn(StatusBarConfig** __retval);
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this);
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this);
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int32_t* __retval);
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int32_t* value);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    static uSStrong< ::g::Uno::Collections::List*> _stack_;
    static uSStrong< ::g::Uno::Collections::List*>& _stack() { return StatusBarConfig_typeof()->Init(), _stack_; }
    bool _isVisible;
    bool _hasIsVisible;
    int32_t _style;
    bool _hasStyle;
    int32_t _animation;
    bool _hasAnimation;

    void ctor_3();
    int32_t Animation();
    void Animation(int32_t value);
    bool IsVisible();
    void IsVisible(bool value);
    int32_t Style();
    void Style(int32_t value);
    static void Apply();
    static StatusBarConfig* New2();
};
// }

}}} // ::g::Fuse::iOS
