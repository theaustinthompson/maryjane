// This file was generated based on C:/Users/borde_000/Desktop/Apps/maryjane/maryjane/build/Android/Preview1/cache/ux14/maryjane.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct maryjane_FuseControlsTextControl_Value_Property;}

namespace g{

// internal sealed class maryjane_FuseControlsTextControl_Value_Property :43
// {
::g::Uno::UX::Property1_type* maryjane_FuseControlsTextControl_Value_Property_typeof();
void maryjane_FuseControlsTextControl_Value_Property__ctor_3_fn(maryjane_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name);
void maryjane_FuseControlsTextControl_Value_Property__Get1_fn(maryjane_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void maryjane_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, maryjane_FuseControlsTextControl_Value_Property** __retval);
void maryjane_FuseControlsTextControl_Value_Property__get_Object_fn(maryjane_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void maryjane_FuseControlsTextControl_Value_Property__Set1_fn(maryjane_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void maryjane_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(maryjane_FuseControlsTextControl_Value_Property* __this, bool* __retval);

struct maryjane_FuseControlsTextControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::TextControl*> _obj;

    void ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
    static maryjane_FuseControlsTextControl_Value_Property* New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
