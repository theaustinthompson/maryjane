// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Selection/1.7.4/Selectable.ScriptClass.uno.
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
namespace g{namespace Fuse{namespace Selection{struct Selectable;}}}
namespace g{namespace Fuse{namespace Selection{struct Selection;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Selection{

// public partial sealed class Selectable :9
// {
::g::Fuse::Node_type* Selectable_typeof();
void Selectable__ctor_3_fn(Selectable* __this);
void Selectable__add_fn(Selectable* s);
void Selectable__Add1_fn(Selectable* __this);
void Selectable__New2_fn(Selectable** __retval);
void Selectable__OnRooted_fn(Selectable* __this);
void Selectable__OnUnrooted_fn(Selectable* __this);
void Selectable__remove_fn(Selectable* s);
void Selectable__Remove1_fn(Selectable* __this);
void Selectable__toggle_fn(Selectable* s);
void Selectable__Toggle_fn(Selectable* __this);
void Selectable__get_Value_fn(Selectable* __this, uString** __retval);
void Selectable__set_Value_fn(Selectable* __this, uString* value);

struct Selectable : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Selection::Selection*> _selection;
    static ::g::Uno::UX::Selector ValueName_;
    static ::g::Uno::UX::Selector& ValueName() { return Selectable_typeof()->Init(), ValueName_; }
    uStrong<uString*> _value;

    void ctor_3();
    void Add1();
    void Remove1();
    void Toggle();
    uString* Value();
    void Value(uString* value);
    static void add(Selectable* s);
    static Selectable* New2();
    static void remove(Selectable* s);
    static void toggle(Selectable* s);
};
// }

}}} // ::g::Fuse::Selection
