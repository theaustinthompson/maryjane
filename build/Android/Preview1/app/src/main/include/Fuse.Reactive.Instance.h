// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.7.4/Instance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IDeferred.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.ItemsWi-e7592013.h>
#include <Fuse.Reactive.WindowItem.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instance;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Instance :12
// {
::g::Fuse::Reactive::Instantiator_type* Instance_typeof();
void Instance__ctor_5_fn(Instance* __this);
void Instance__get_Item_fn(Instance* __this, uObject** __retval);
void Instance__set_Item_fn(Instance* __this, uObject* value);
void Instance__New4_fn(Instance** __retval);

struct Instance : ::g::Fuse::Reactive::Instantiator
{
    uStrong<uObject*> _item;

    void ctor_5();
    uObject* Item();
    void Item(uObject* value);
    static Instance* New4();
};
// }

}}} // ::g::Fuse::Reactive
