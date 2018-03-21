// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Gestures/1.7.4/Pressed.uno.
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
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhilePressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class WhilePressed :49
// {
::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof();
void WhilePressed__ctor_6_fn(WhilePressed* __this);
void WhilePressed__get_Capture_fn(WhilePressed* __this, bool* __retval);
void WhilePressed__set_Capture_fn(WhilePressed* __this, bool* value);
void WhilePressed__CheckStatus_fn(WhilePressed* __this, uObject* s, uObject* a);
void WhilePressed__New2_fn(WhilePressed** __retval);
void WhilePressed__OnClickerPressing_fn(WhilePressed* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* count);
void WhilePressed__OnPointerEntered_fn(WhilePressed* __this, uObject* sender, uObject* args);
void WhilePressed__OnPointerLeft_fn(WhilePressed* __this, uObject* sender, uObject* args);
void WhilePressed__OnRooted_fn(WhilePressed* __this);
void WhilePressed__OnUnrooted_fn(WhilePressed* __this);
void WhilePressed__get_PointerType_fn(WhilePressed* __this, int32_t* __retval);
void WhilePressed__set_PointerType_fn(WhilePressed* __this, int32_t* value);
void WhilePressed__get_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* __retval);
void WhilePressed__set_PressedPosition_fn(WhilePressed* __this, ::g::Uno::Float2* value);

struct WhilePressed : ::g::Fuse::Triggers::WhileTrigger
{
    ::g::Uno::Float2 _pressedPosition;
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;
    int32_t _pointerType;
    bool _inside;
    bool _Capture;

    void ctor_6();
    bool Capture();
    void Capture(bool value);
    void CheckStatus(uObject* s, uObject* a);
    void OnClickerPressing(::g::Fuse::Input::PointerEventArgs* args, int32_t count);
    void OnPointerEntered(uObject* sender, uObject* args);
    void OnPointerLeft(uObject* sender, uObject* args);
    int32_t PointerType();
    void PointerType(int32_t value);
    ::g::Uno::Float2 PressedPosition();
    void PressedPosition(::g::Uno::Float2 value);
    static WhilePressed* New2();
};
// }

}}} // ::g::Fuse::Gestures
