// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.7.2/With.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.ValueFo-a26c06f.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct With;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class With :28
// {
struct With_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Node__ISubtreeDataProvider interface8;
    ::g::Fuse::Reactive::ValueForwarder__IValueListener interface9;
};

With_type* With_typeof();
void With__ctor_5_fn(With* __this);
void With__get_Data_fn(With* __this, uObject** __retval);
void With__set_Data_fn(With* __this, uObject* value);
void With__FuseNodeISubtreeDataProviderTryGetDataProvider_fn(With* __this, ::g::Fuse::Node* child, int32_t* type, uObject** provider, int32_t* __retval);
void With__FuseReactiveValueForwarderIValueListenerLostValue_fn(With* __this);
void With__FuseReactiveValueForwarderIValueListenerNewValue_fn(With* __this, uObject* value);
void With__New2_fn(With** __retval);
void With__OnRooted_fn(With* __this);
void With__SetSubtreeData_fn(With* __this, uObject* value);

struct With : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _sub;
    uStrong<uObject*> _sourceData;
    uStrong<uObject*> _subtreeData;

    void ctor_5();
    uObject* Data();
    void Data(uObject* value);
    void SetSubtreeData(uObject* value);
    static With* New2();
};
// }

}}} // ::g::Fuse::Reactive
