// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.7.2/Each.uno.
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
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Each :94
// {
::g::Fuse::Reactive::Instantiator_type* Each_typeof();
void Each__ctor_5_fn(Each* __this);
void Each__ctor_6_fn(Each* __this, uObject* templates);
void Each__get_Count_fn(Each* __this, int32_t* __retval);
void Each__set_Count_fn(Each* __this, int32_t* value);
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval);
void Each__GetItems1_fn(::g::Fuse::Visual* container, uObject** __retval);
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval);
void Each__get_Items_fn(Each* __this, uObject** __retval);
void Each__set_Items_fn(Each* __this, uObject* value);
void Each__get_Limit1_fn(Each* __this, int32_t* __retval);
void Each__set_Limit1_fn(Each* __this, int32_t* value);
void Each__New4_fn(Each** __retval);
void Each__New5_fn(uObject* templates, Each** __retval);
void Each__get_Offset1_fn(Each* __this, int32_t* __retval);
void Each__set_Offset1_fn(Each* __this, int32_t* value);
void Each__SetItems1_fn(::g::Fuse::Visual* container, uObject* items);
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key);

struct Each : ::g::Fuse::Reactive::Instantiator
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _eachHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _eachHandle() { return Each_typeof()->Init(), _eachHandle_; }
    int32_t _count;
    bool _hasCount;

    void ctor_5();
    void ctor_6(uObject* templates);
    int32_t Count();
    void Count(int32_t value);
    uObject* Items();
    void Items(uObject* value);
    int32_t Limit1();
    void Limit1(int32_t value);
    int32_t Offset1();
    void Offset1(int32_t value);
    static Each* GetEach(::g::Fuse::Visual* container);
    static uObject* GetItems1(::g::Fuse::Visual* container);
    static uString* GetMatchKey(::g::Fuse::Visual* container);
    static Each* New4();
    static Each* New5(uObject* templates);
    static void SetItems1(::g::Fuse::Visual* container, uObject* items);
    static void SetMatchKey(::g::Fuse::Visual* container, uString* key);
};
// }

}}} // ::g::Fuse::Reactive
