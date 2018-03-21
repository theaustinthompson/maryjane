// This file was generated based on C:/Users/borde_000/Desktop/Apps/maryjane/maryjane/build/Android/Preview/cache/ux13/maryjane.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.maryjane_access-230e8a8c.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class maryjane_accessor_Tab_Text :1
// {
// static generated maryjane_accessor_Tab_Text() :1
static void maryjane_accessor_Tab_Text__cctor__fn(uType* __type)
{
    maryjane_accessor_Tab_Text::Singleton_ = maryjane_accessor_Tab_Text::New1();
    maryjane_accessor_Tab_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void maryjane_accessor_Tab_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::Tab_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&maryjane_accessor_Tab_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&maryjane_accessor_Tab_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* maryjane_accessor_Tab_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(maryjane_accessor_Tab_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("maryjane_accessor_Tab_Text", options);
    type->fp_build_ = maryjane_accessor_Tab_Text_build;
    type->fp_ctor_ = (void*)maryjane_accessor_Tab_Text__New1_fn;
    type->fp_cctor_ = maryjane_accessor_Tab_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))maryjane_accessor_Tab_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))maryjane_accessor_Tab_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))maryjane_accessor_Tab_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))maryjane_accessor_Tab_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))maryjane_accessor_Tab_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated maryjane_accessor_Tab_Text() :1
void maryjane_accessor_Tab_Text__ctor_1_fn(maryjane_accessor_Tab_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void maryjane_accessor_Tab_Text__GetAsObject_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("maryjane_accessor_Tab_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void maryjane_accessor_Tab_Text__get_Name_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = maryjane_accessor_Tab_Text::_name_, void();
}

// public generated maryjane_accessor_Tab_Text New() :1
void maryjane_accessor_Tab_Text__New1_fn(maryjane_accessor_Tab_Text** __retval)
{
    *__retval = maryjane_accessor_Tab_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void maryjane_accessor_Tab_Text__get_PropertyType_fn(maryjane_accessor_Tab_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void maryjane_accessor_Tab_Text__SetAsObject_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("maryjane_accessor_Tab_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Tab*>(obj, ::TYPES[0/*Tab*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void maryjane_accessor_Tab_Text__get_SupportsOriginSetter_fn(maryjane_accessor_Tab_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> maryjane_accessor_Tab_Text::Singleton_;
::g::Uno::UX::Selector maryjane_accessor_Tab_Text::_name_;

// public generated maryjane_accessor_Tab_Text() [instance] :1
void maryjane_accessor_Tab_Text::ctor_1()
{
    ctor_();
}

// public generated maryjane_accessor_Tab_Text New() [static] :1
maryjane_accessor_Tab_Text* maryjane_accessor_Tab_Text::New1()
{
    maryjane_accessor_Tab_Text* obj1 = (maryjane_accessor_Tab_Text*)uNew(maryjane_accessor_Tab_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
