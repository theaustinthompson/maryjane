// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/Visual.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct Visual__ParameterProperty;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// private sealed class Visual.ParameterProperty :19
// {
::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof();
void Visual__ParameterProperty__ctor_3_fn(Visual__ParameterProperty* __this, ::g::Fuse::Visual* visual);
void Visual__ParameterProperty__Get1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void Visual__ParameterProperty__New1_fn(::g::Fuse::Visual* visual, Visual__ParameterProperty** __retval);
void Visual__ParameterProperty__get_Object_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void Visual__ParameterProperty__Set1_fn(Visual__ParameterProperty* __this, ::g::Uno::UX::PropertyObject* obj, uString* value, uObject* origin);
void Visual__ParameterProperty__get_SupportsOriginSetter_fn(Visual__ParameterProperty* __this, bool* __retval);

struct Visual__ParameterProperty : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Visual*> _visual;
    static ::g::Uno::UX::Selector _name1_;
    static ::g::Uno::UX::Selector& _name1() { return Visual__ParameterProperty_typeof()->Init(), _name1_; }

    void ctor_3(::g::Fuse::Visual* visual);
    static Visual__ParameterProperty* New1(::g::Fuse::Visual* visual);
};
// }

}} // ::g::Fuse
