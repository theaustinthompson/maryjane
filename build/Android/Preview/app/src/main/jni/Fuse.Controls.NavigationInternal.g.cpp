// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNav-4d426250.h>
#include <_root.FuseControlsNav-bfeb1093.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Navigat-325d320d.h>
#include <Fuse.Controls.Navigat-3abd94bc.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Navigat-72feefa7.h>
#include <Fuse.Controls.Navigat-830df8a4.h>
#include <Fuse.Controls.Navigat-831df711.h>
#include <Fuse.Controls.Navigat-8b5bc4f.h>
#include <Fuse.Controls.Navigat-8c78e52a.h>
#include <Fuse.Controls.Navigat-9705f33a.h>
#include <Fuse.Controls.Navigat-9f619694.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-e720de5b.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Transit-122edce0.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\.uno\ux13\Fuse.Controls.NavigationInternal.BlockInputWhileNavigating.g.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------------

// public partial sealed class BlockInputWhileNavigating :4
// {
// static BlockInputWhileNavigating() :8
static void BlockInputWhileNavigating__cctor_2_fn(uType* __type)
{
    BlockInputWhileNavigating::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"HitTestMode"*/]);
}

static void BlockInputWhileNavigating_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HitTestMode");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(39,
        ::g::Fuse::Controls::NavigationControl_typeof(), offsetof(BlockInputWhileNavigating, nav), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL), offsetof(BlockInputWhileNavigating, nav_HitTestMode_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&BlockInputWhileNavigating::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BlockInputWhileNavigating__New3_fn, 0, true, type, 1, ::g::Fuse::Controls::NavigationControl_typeof()));
}

::g::Fuse::Triggers::Trigger_type* BlockInputWhileNavigating_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigating_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(BlockInputWhileNavigating);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.BlockInputWhileNavigating", options);
    type->fp_build_ = BlockInputWhileNavigating_build;
    type->fp_cctor_ = BlockInputWhileNavigating__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public BlockInputWhileNavigating(Fuse.Controls.NavigationControl nav) :12
void BlockInputWhileNavigating__ctor_7_fn(BlockInputWhileNavigating* __this, ::g::Fuse::Controls::NavigationControl* nav1)
{
    __this->ctor_7(nav1);
}

// private void InitializeUX() :18
void BlockInputWhileNavigating__InitializeUX_fn(BlockInputWhileNavigating* __this)
{
    __this->InitializeUX();
}

// public BlockInputWhileNavigating New(Fuse.Controls.NavigationControl nav) :12
void BlockInputWhileNavigating__New3_fn(::g::Fuse::Controls::NavigationControl* nav1, BlockInputWhileNavigating** __retval)
{
    *__retval = BlockInputWhileNavigating::New3(nav1);
}

::g::Uno::UX::Selector BlockInputWhileNavigating::__selector0_;

// public BlockInputWhileNavigating(Fuse.Controls.NavigationControl nav) [instance] :12
void BlockInputWhileNavigating::ctor_7(::g::Fuse::Controls::NavigationControl* nav1)
{
    uStackFrame __("Fuse.Controls.NavigationInternal.BlockInputWhileNavigating", ".ctor(Fuse.Controls.NavigationControl)");
    ctor_6();
    nav = nav1;
    InitializeUX();
}

// private void InitializeUX() [instance] :18
void BlockInputWhileNavigating::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.BlockInputWhileNavigating", "InitializeUX()");
    nav_HitTestMode_inst = ::g::FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::New1(nav, BlockInputWhileNavigating::__selector0_);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Fuse.Elements.HitTestMode>*/], nav_HitTestMode_inst);
    ::g::Fuse::Animations::Change__set_Value_fn(temp, uCRef<int32_t>(2));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public BlockInputWhileNavigating New(Fuse.Controls.NavigationControl nav) [static] :12
BlockInputWhileNavigating* BlockInputWhileNavigating::New3(::g::Fuse::Controls::NavigationControl* nav1)
{
    BlockInputWhileNavigating* obj1 = (BlockInputWhileNavigating*)uNew(BlockInputWhileNavigating_typeof());
    obj1->ctor_7(nav1);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\NavigationInternal\EnterHorizontal.uno
// -------------------------------------------------------------------------------------------------------------------------

// public partial sealed class EnterHorizontal :9
// {
// static EnterHorizontal() :6
static void EnterHorizontal__cctor_2_fn(uType* __type)
{
}

static void EnterHorizontal_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnterHorizontal__New3_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnteringAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EnterHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.EnterHorizontal", options);
    type->fp_build_ = EnterHorizontal_build;
    type->fp_ctor_ = (void*)EnterHorizontal__New3_fn;
    type->fp_cctor_ = EnterHorizontal__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnterHorizontal() :10
void EnterHorizontal__ctor_8_fn(EnterHorizontal* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :14
void EnterHorizontal__InitializeUX_fn(EnterHorizontal* __this)
{
    __this->InitializeUX();
}

// public EnterHorizontal New() :10
void EnterHorizontal__New3_fn(EnterHorizontal** __retval)
{
    *__retval = EnterHorizontal::New3();
}

// public EnterHorizontal() [instance] :10
void EnterHorizontal::ctor_8()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.EnterHorizontal", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void EnterHorizontal::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.EnterHorizontal", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->X(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public EnterHorizontal New() [static] :10
EnterHorizontal* EnterHorizontal::New3()
{
    EnterHorizontal* obj1 = (EnterHorizontal*)uNew(EnterHorizontal_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\NavigationInternal\EnterVertical.uno
// -----------------------------------------------------------------------------------------------------------------------

// public partial sealed class EnterVertical :9
// {
// static EnterVertical() :6
static void EnterVertical__cctor_2_fn(uType* __type)
{
}

static void EnterVertical_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EnterVertical__New3_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::EnteringAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EnterVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.EnterVertical", options);
    type->fp_build_ = EnterVertical_build;
    type->fp_ctor_ = (void*)EnterVertical__New3_fn;
    type->fp_cctor_ = EnterVertical__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public EnterVertical() :10
void EnterVertical__ctor_8_fn(EnterVertical* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :14
void EnterVertical__InitializeUX_fn(EnterVertical* __this)
{
    __this->InitializeUX();
}

// public EnterVertical New() :10
void EnterVertical__New3_fn(EnterVertical** __retval)
{
    *__retval = EnterVertical::New3();
}

// public EnterVertical() [instance] :10
void EnterVertical::ctor_8()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.EnterVertical", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void EnterVertical::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.EnterVertical", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->Y(-1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public EnterVertical New() [static] :10
EnterVertical* EnterVertical::New3()
{
    EnterVertical* obj1 = (EnterVertical*)uNew(EnterVertical_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\NavigationInternal\ExitHorizontal.uno
// ------------------------------------------------------------------------------------------------------------------------

// public partial sealed class ExitHorizontal :8
// {
// static ExitHorizontal() :6
static void ExitHorizontal__cctor_2_fn(uType* __type)
{
}

static void ExitHorizontal_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitHorizontal__New3_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::ExitingAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ExitHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.ExitHorizontal", options);
    type->fp_build_ = ExitHorizontal_build;
    type->fp_ctor_ = (void*)ExitHorizontal__New3_fn;
    type->fp_cctor_ = ExitHorizontal__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitHorizontal() :10
void ExitHorizontal__ctor_8_fn(ExitHorizontal* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :14
void ExitHorizontal__InitializeUX_fn(ExitHorizontal* __this)
{
    __this->InitializeUX();
}

// public ExitHorizontal New() :10
void ExitHorizontal__New3_fn(ExitHorizontal** __retval)
{
    *__retval = ExitHorizontal::New3();
}

// public ExitHorizontal() [instance] :10
void ExitHorizontal::ctor_8()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.ExitHorizontal", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void ExitHorizontal::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.ExitHorizontal", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->X(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public ExitHorizontal New() [static] :10
ExitHorizontal* ExitHorizontal::New3()
{
    ExitHorizontal* obj1 = (ExitHorizontal*)uNew(ExitHorizontal_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\NavigationInternal\ExitVertical.uno
// ----------------------------------------------------------------------------------------------------------------------

// public partial sealed class ExitVertical :9
// {
// static ExitVertical() :6
static void ExitVertical__cctor_2_fn(uType* __type)
{
}

static void ExitVertical_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Navigation::NavigationAnimation_type, interface7));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ExitVertical__New3_fn, 0, true, type, 0));
}

::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof()
{
    static uSStrong< ::g::Fuse::Navigation::NavigationAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::ExitingAnimation_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ExitVertical);
    options.TypeSize = sizeof(::g::Fuse::Navigation::NavigationAnimation_type);
    type = (::g::Fuse::Navigation::NavigationAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.ExitVertical", options);
    type->fp_build_ = ExitVertical_build;
    type->fp_ctor_ = (void*)ExitVertical__New3_fn;
    type->fp_cctor_ = ExitVertical__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ExitVertical() :10
void ExitVertical__ctor_8_fn(ExitVertical* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :14
void ExitVertical__InitializeUX_fn(ExitVertical* __this)
{
    __this->InitializeUX();
}

// public ExitVertical New() :10
void ExitVertical__New3_fn(ExitVertical** __retval)
{
    *__retval = ExitVertical::New3();
}

// public ExitVertical() [instance] :10
void ExitVertical::ctor_8()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.ExitVertical", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void ExitVertical::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.ExitVertical", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    temp->Y(1.0f);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public ExitVertical New() [static] :10
ExitVertical* ExitVertical::New3()
{
    ExitVertical* obj1 = (ExitVertical*)uNew(ExitVertical_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\.uno\ux13\Fuse.Controls.NavigationInternal.NavEnterHorizontal.g.uno
// ------------------------------------------------------------------------------------------------------------------------------------------------------

// public partial sealed class NavEnterHorizontal :4
// {
// static NavEnterHorizontal() :6
static void NavEnterHorizontal__cctor_2_fn(uType* __type)
{
}

static void NavEnterHorizontal_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(47);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavEnterHorizontal__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* NavEnterHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Transition_typeof();
    options.FieldCount = 47;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavEnterHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavEnterHorizontal", options);
    type->fp_build_ = NavEnterHorizontal_build;
    type->fp_ctor_ = (void*)NavEnterHorizontal__New3_fn;
    type->fp_cctor_ = NavEnterHorizontal__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavEnterHorizontal() :10
void NavEnterHorizontal__ctor_6_fn(NavEnterHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :14
void NavEnterHorizontal__InitializeUX_fn(NavEnterHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavEnterHorizontal New() :10
void NavEnterHorizontal__New3_fn(NavEnterHorizontal** __retval)
{
    *__retval = NavEnterHorizontal::New3();
}

// public NavEnterHorizontal() [instance] :10
void NavEnterHorizontal::ctor_6()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavEnterHorizontal", ".ctor()");
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void NavEnterHorizontal::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavEnterHorizontal", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Actions::ReleasePage* temp1 = ::g::Fuse::Triggers::Actions::ReleasePage::New2();
    Direction(1);
    temp->X(1.0f);
    temp->Duration(0.3);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp1->AtProgress(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
}

// public NavEnterHorizontal New() [static] :10
NavEnterHorizontal* NavEnterHorizontal::New3()
{
    NavEnterHorizontal* obj1 = (NavEnterHorizontal*)uNew(NavEnterHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\.uno\ux13\Fuse.Controls.NavigationInternal.NavExitHorizontal.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------------------------

// public partial sealed class NavExitHorizontal :4
// {
// static NavExitHorizontal() :6
static void NavExitHorizontal__cctor_2_fn(uType* __type)
{
}

static void NavExitHorizontal_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::TranslationModes_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(47);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavExitHorizontal__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Trigger_type* NavExitHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Transition_typeof();
    options.FieldCount = 47;
    options.InterfaceCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NavExitHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavExitHorizontal", options);
    type->fp_build_ = NavExitHorizontal_build;
    type->fp_ctor_ = (void*)NavExitHorizontal__New3_fn;
    type->fp_cctor_ = NavExitHorizontal__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavExitHorizontal() :10
void NavExitHorizontal__ctor_6_fn(NavExitHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :14
void NavExitHorizontal__InitializeUX_fn(NavExitHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavExitHorizontal New() :10
void NavExitHorizontal__New3_fn(NavExitHorizontal** __retval)
{
    *__retval = NavExitHorizontal::New3();
}

// public NavExitHorizontal() [instance] :10
void NavExitHorizontal::ctor_6()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavExitHorizontal", ".ctor()");
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void NavExitHorizontal::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavExitHorizontal", "InitializeUX()");
    ::g::Fuse::Animations::Move* temp = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::Actions::ReleasePage* temp1 = ::g::Fuse::Triggers::Actions::ReleasePage::New2();
    Direction(2);
    temp->X(-1.0f);
    temp->Duration(0.3);
    temp->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp->Easing(::g::Fuse::Animations::Easing::QuadraticInOut());
    temp1->AtProgress(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Actions()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp1);
}

// public NavExitHorizontal New() [static] :10
NavExitHorizontal* NavExitHorizontal::New3()
{
    NavExitHorizontal* obj1 = (NavExitHorizontal*)uNew(NavExitHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\.uno\ux13\Fuse.Controls.NavigationInternal.NavRemoveHorizontal.g.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------

// public partial sealed class NavRemoveHorizontal :4
// {
// static NavRemoveHorizontal() :6
static void NavRemoveHorizontal__cctor_2_fn(uType* __type)
{
}

static void NavRemoveHorizontal_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface7),
        ::g::Fuse::IBeginRemoveVisualListener_typeof(), offsetof(::g::Fuse::Triggers::RemovingAnimation_type, interface8));
    type->SetFields(38);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NavRemoveHorizontal__New3_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::RemovingAnimation_type* NavRemoveHorizontal_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::RemovingAnimation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::RemovingAnimation_typeof();
    options.FieldCount = 38;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(NavRemoveHorizontal);
    options.TypeSize = sizeof(::g::Fuse::Triggers::RemovingAnimation_type);
    type = (::g::Fuse::Triggers::RemovingAnimation_type*)uClassType::New("Fuse.Controls.NavigationInternal.NavRemoveHorizontal", options);
    type->fp_build_ = NavRemoveHorizontal_build;
    type->fp_ctor_ = (void*)NavRemoveHorizontal__New3_fn;
    type->fp_cctor_ = NavRemoveHorizontal__cctor_2_fn;
    type->interface8.fp_OnBeginRemoveVisual = (void(*)(uObject*, ::g::Fuse::PendingRemoveVisual*))::g::Fuse::Triggers::RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NavRemoveHorizontal() :10
void NavRemoveHorizontal__ctor_6_fn(NavRemoveHorizontal* __this)
{
    __this->ctor_6();
}

// private void InitializeUX() :14
void NavRemoveHorizontal__InitializeUX_fn(NavRemoveHorizontal* __this)
{
    __this->InitializeUX();
}

// public NavRemoveHorizontal New() :10
void NavRemoveHorizontal__New3_fn(NavRemoveHorizontal** __retval)
{
    *__retval = NavRemoveHorizontal::New3();
}

// public NavRemoveHorizontal() [instance] :10
void NavRemoveHorizontal::ctor_6()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavRemoveHorizontal", ".ctor()");
    ctor_5();
    InitializeUX();
}

// private void InitializeUX() [instance] :14
void NavRemoveHorizontal::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.NavRemoveHorizontal", "InitializeUX()");
    ::g::Fuse::Animations::Scale* temp = ::g::Fuse::Animations::Scale::New2();
    temp->Factor(0.7f);
    temp->Duration(0.3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public NavRemoveHorizontal New() [static] :10
NavRemoveHorizontal* NavRemoveHorizontal::New3()
{
    NavRemoveHorizontal* obj1 = (NavRemoveHorizontal*)uNew(NavRemoveHorizontal_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.7.2\.uno\ux13\Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze.g.uno
// -------------------------------------------------------------------------------------------------------------------------------------------------------------

// public partial sealed class PageWhileNavigatingFreeze :4
// {
// static PageWhileNavigatingFreeze() :8
static void PageWhileNavigatingFreeze__cctor_2_fn(uType* __type)
{
    PageWhileNavigatingFreeze::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"IsFrozen"*/]);
}

static void PageWhileNavigatingFreeze_build(uType* type)
{
    ::STRINGS[1] = uString::Const("IsFrozen");
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7));
    type->SetFields(39,
        ::g::Fuse::Controls::Page_typeof(), offsetof(PageWhileNavigatingFreeze, page), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(PageWhileNavigatingFreeze, page_IsFrozen_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&PageWhileNavigatingFreeze::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PageWhileNavigatingFreeze__New3_fn, 0, true, type, 1, ::g::Fuse::Controls::Page_typeof()));
}

::g::Fuse::Triggers::Trigger_type* PageWhileNavigatingFreeze_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Navigation::WhileNavigating_typeof();
    options.FieldCount = 42;
    options.InterfaceCount = 8;
    options.ObjectSize = sizeof(PageWhileNavigatingFreeze);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze", options);
    type->fp_build_ = PageWhileNavigatingFreeze_build;
    type->fp_cctor_ = PageWhileNavigatingFreeze__cctor_2_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageWhileNavigatingFreeze(Fuse.Controls.Page page) :12
void PageWhileNavigatingFreeze__ctor_7_fn(PageWhileNavigatingFreeze* __this, ::g::Fuse::Controls::Page* page1)
{
    __this->ctor_7(page1);
}

// private void InitializeUX() :18
void PageWhileNavigatingFreeze__InitializeUX_fn(PageWhileNavigatingFreeze* __this)
{
    __this->InitializeUX();
}

// public PageWhileNavigatingFreeze New(Fuse.Controls.Page page) :12
void PageWhileNavigatingFreeze__New3_fn(::g::Fuse::Controls::Page* page1, PageWhileNavigatingFreeze** __retval)
{
    *__retval = PageWhileNavigatingFreeze::New3(page1);
}

::g::Uno::UX::Selector PageWhileNavigatingFreeze::__selector0_;

// public PageWhileNavigatingFreeze(Fuse.Controls.Page page) [instance] :12
void PageWhileNavigatingFreeze::ctor_7(::g::Fuse::Controls::Page* page1)
{
    uStackFrame __("Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze", ".ctor(Fuse.Controls.Page)");
    ctor_6();
    page = page1;
    InitializeUX();
}

// private void InitializeUX() [instance] :18
void PageWhileNavigatingFreeze::InitializeUX()
{
    uStackFrame __("Fuse.Controls.NavigationInternal.PageWhileNavigatingFreeze", "InitializeUX()");
    page_IsFrozen_inst = ::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(page, PageWhileNavigatingFreeze::__selector0_);
    ::g::Fuse::Animations::Change* temp = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], page_IsFrozen_inst);
    ::g::Fuse::Animations::Change__set_Value_fn(temp, uCRef(true));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Animators()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp);
}

// public PageWhileNavigatingFreeze New(Fuse.Controls.Page page) [static] :12
PageWhileNavigatingFreeze* PageWhileNavigatingFreeze::New3(::g::Fuse::Controls::Page* page1)
{
    PageWhileNavigatingFreeze* obj1 = (PageWhileNavigatingFreeze*)uNew(PageWhileNavigatingFreeze_typeof());
    obj1->ctor_7(page1);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
