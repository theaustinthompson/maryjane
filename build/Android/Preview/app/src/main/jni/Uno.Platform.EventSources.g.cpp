// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.EventSou-774431f7.h>
#include <Uno.Platform.EventSou-afb2ad40.h>
#include <Uno.Platform.EventSou-b16da529.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.OSFrame.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\Platform\EventSources.uno
// ------------------------------------------------------------------------------------------------------

// public static class HardwareKeys :40
// {
static void HardwareKeys_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&HardwareKeys::KeyDown1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&HardwareKeys::KeyUp1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("add_KeyDown", NULL, (void*)HardwareKeys__add_KeyDown_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]),
        new uFunction("remove_KeyDown", NULL, (void*)HardwareKeys__remove_KeyDown_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]),
        new uFunction("add_KeyUp", NULL, (void*)HardwareKeys__add_KeyUp_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]),
        new uFunction("remove_KeyUp", NULL, (void*)HardwareKeys__remove_KeyUp_fn, 0, true, uVoid_typeof(), 1, ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]));
}

uClassType* HardwareKeys_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.EventSources.HardwareKeys", options);
    type->fp_build_ = HardwareKeys_build;
    return type;
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :42
void HardwareKeys__add_KeyDown_fn(uDelegate* value)
{
    HardwareKeys::add_KeyDown(value);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :42
void HardwareKeys__remove_KeyDown_fn(uDelegate* value)
{
    HardwareKeys::remove_KeyDown(value);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :43
void HardwareKeys__add_KeyUp_fn(uDelegate* value)
{
    HardwareKeys::add_KeyUp(value);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :43
void HardwareKeys__remove_KeyUp_fn(uDelegate* value)
{
    HardwareKeys::remove_KeyUp(value);
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :45
void HardwareKeys__OnKeyDown_fn(int32_t* key, int32_t* modifiers, bool* __retval)
{
    *__retval = HardwareKeys::OnKeyDown(*key, *modifiers);
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :55
void HardwareKeys__OnKeyUp_fn(int32_t* key, int32_t* modifiers, bool* __retval)
{
    *__retval = HardwareKeys::OnKeyUp(*key, *modifiers);
}

uSStrong<uDelegate*> HardwareKeys::KeyDown1_;
uSStrong<uDelegate*> HardwareKeys::KeyUp1_;

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :45
bool HardwareKeys::OnKeyDown(int32_t key, int32_t modifiers)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "OnKeyDown(Uno.Platform.Key,Uno.Platform.EventModifiers)");
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers, NULL);
    uDelegate* handler = HardwareKeys::KeyDown1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :55
bool HardwareKeys::OnKeyUp(int32_t key, int32_t modifiers)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "OnKeyUp(Uno.Platform.Key,Uno.Platform.EventModifiers)");
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers, NULL);
    uDelegate* handler = HardwareKeys::KeyUp1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :42
void HardwareKeys::add_KeyDown(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    HardwareKeys::KeyDown1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HardwareKeys::KeyDown1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :42
void HardwareKeys::remove_KeyDown(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    HardwareKeys::KeyDown1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HardwareKeys::KeyDown1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :43
void HardwareKeys::add_KeyUp(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    HardwareKeys::KeyUp1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HardwareKeys::KeyUp1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :43
void HardwareKeys::remove_KeyUp(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.HardwareKeys", "remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs>)");
    HardwareKeys::KeyUp1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HardwareKeys::KeyUp1_, value), ::TYPES[0/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\Platform\EventSources.uno
// ------------------------------------------------------------------------------------------------------

// public static class InterAppInvoke :7
// {
// static generated InterAppInvoke() :7
static void InterAppInvoke__cctor__fn(uType* __type)
{
    InterAppInvoke::DelayedUri_ = ::STRINGS[0/*""*/];
}

static void InterAppInvoke_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::TYPES[1] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&InterAppInvoke::DelayedUri_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<string>*/], (uintptr_t)&InterAppInvoke::ReceivedURI1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("add_ReceivedURI", NULL, (void*)InterAppInvoke__add_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[2/*Uno.EventHandler<string>*/]),
        new uFunction("remove_ReceivedURI", NULL, (void*)InterAppInvoke__remove_ReceivedURI_fn, 0, true, uVoid_typeof(), 1, ::TYPES[2/*Uno.EventHandler<string>*/]));
}

uClassType* InterAppInvoke_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.EventSources.InterAppInvoke", options);
    type->fp_build_ = InterAppInvoke_build;
    type->fp_cctor_ = InterAppInvoke__cctor__fn;
    return type;
}

// private static void DispatchDelayedUri(Uno.Platform.ApplicationState state) :25
void InterAppInvoke__DispatchDelayedUri_fn(int32_t* state)
{
    InterAppInvoke::DispatchDelayedUri(*state);
}

// internal static void OnReceivedURI(string Uri) :11
void InterAppInvoke__OnReceivedURI_fn(uString* Uri)
{
    InterAppInvoke::OnReceivedURI(Uri);
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) :9
void InterAppInvoke__add_ReceivedURI_fn(uDelegate* value)
{
    InterAppInvoke::add_ReceivedURI(value);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) :9
void InterAppInvoke__remove_ReceivedURI_fn(uDelegate* value)
{
    InterAppInvoke::remove_ReceivedURI(value);
}

uSStrong<uString*> InterAppInvoke::DelayedUri_;
uSStrong<uDelegate*> InterAppInvoke::ReceivedURI1_;

// private static void DispatchDelayedUri(Uno.Platform.ApplicationState state) [static] :25
void InterAppInvoke::DispatchDelayedUri(int32_t state)
{
    uStackFrame __("Uno.Platform.EventSources.InterAppInvoke", "DispatchDelayedUri(Uno.Platform.ApplicationState)");
    InterAppInvoke_typeof()->Init();
    uDelegate* handler = InterAppInvoke::ReceivedURI1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (uString*)InterAppInvoke::DelayedUri_);

    InterAppInvoke::DelayedUri_ = ::STRINGS[0/*""*/];
    ::g::Uno::Platform::CoreApp::remove_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)InterAppInvoke__DispatchDelayedUri_fn));
}

// internal static void OnReceivedURI(string Uri) [static] :11
void InterAppInvoke::OnReceivedURI(uString* Uri)
{
    uStackFrame __("Uno.Platform.EventSources.InterAppInvoke", "OnReceivedURI(string)");
    InterAppInvoke_typeof()->Init();

    if ((::g::Uno::Platform::CoreApp::State() == 2) || (::g::Uno::Platform::CoreApp::State() == 3))
    {
        uDelegate* handler = InterAppInvoke::ReceivedURI1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, Uri);
    }
    else
    {
        InterAppInvoke::DelayedUri_ = Uri;
        ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[1/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)InterAppInvoke__DispatchDelayedUri_fn));
    }
}

// public static generated void add_ReceivedURI(Uno.EventHandler<string> value) [static] :9
void InterAppInvoke::add_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.InterAppInvoke", "add_ReceivedURI(Uno.EventHandler<string>)");
    InterAppInvoke_typeof()->Init();
    InterAppInvoke::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(InterAppInvoke::ReceivedURI1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// public static generated void remove_ReceivedURI(Uno.EventHandler<string> value) [static] :9
void InterAppInvoke::remove_ReceivedURI(uDelegate* value)
{
    uStackFrame __("Uno.Platform.EventSources.InterAppInvoke", "remove_ReceivedURI(Uno.EventHandler<string>)");
    InterAppInvoke_typeof()->Init();
    InterAppInvoke::ReceivedURI1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(InterAppInvoke::ReceivedURI1_, value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\Platform\EventSources.uno
// ------------------------------------------------------------------------------------------------------

// public static class TextSource :67
// {
static void TextSource_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("get_IsTextInputActive", NULL, (void*)TextSource__get_IsTextInputActive_fn, 0, true, ::g::Uno::Bool_typeof(), 0));
}

uClassType* TextSource_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.EventSources.TextSource", options);
    type->fp_build_ = TextSource_build;
    return type;
}

// public static bool get_IsTextInputActive() :88
void TextSource__get_IsTextInputActive_fn(bool* __retval)
{
    *__retval = TextSource::IsTextInputActive();
}

// public static bool get_IsTextInputActive() [static] :88
bool TextSource::IsTextInputActive()
{
    return false;
}
// }

}}}} // ::g::Uno::Platform::EventSources
