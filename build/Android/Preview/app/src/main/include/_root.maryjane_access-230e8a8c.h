// This file was generated based on C:/Users/borde_000/Desktop/Apps/maryjane/maryjane/build/Android/Preview/cache/ux13/maryjane.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct maryjane_accessor_Tab_Text;}

namespace g{

// internal sealed class maryjane_accessor_Tab_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* maryjane_accessor_Tab_Text_typeof();
void maryjane_accessor_Tab_Text__ctor_1_fn(maryjane_accessor_Tab_Text* __this);
void maryjane_accessor_Tab_Text__GetAsObject_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void maryjane_accessor_Tab_Text__get_Name_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::Selector* __retval);
void maryjane_accessor_Tab_Text__New1_fn(maryjane_accessor_Tab_Text** __retval);
void maryjane_accessor_Tab_Text__get_PropertyType_fn(maryjane_accessor_Tab_Text* __this, uType** __retval);
void maryjane_accessor_Tab_Text__SetAsObject_fn(maryjane_accessor_Tab_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void maryjane_accessor_Tab_Text__get_SupportsOriginSetter_fn(maryjane_accessor_Tab_Text* __this, bool* __retval);

struct maryjane_accessor_Tab_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return maryjane_accessor_Tab_Text_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return maryjane_accessor_Tab_Text_typeof()->Init(), _name_; }

    void ctor_1();
    static maryjane_accessor_Tab_Text* New1();
};
// }

} // ::g
