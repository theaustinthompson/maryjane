// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/TreeObservable/TreeObject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IProper-5c136cab.h>
#include <Fuse.Scripting.Subscr-24ebf004.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObject__PropertySubscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class TreeObject.PropertySubscription :18
// {
struct TreeObject__PropertySubscription_type : ::g::Fuse::Scripting::SubscriptionSubject__Subscription_type
{
    ::g::Fuse::Reactive::IPropertySubscription interface1;
};

TreeObject__PropertySubscription_type* TreeObject__PropertySubscription_typeof();
void TreeObject__PropertySubscription__ctor_1_fn(TreeObject__PropertySubscription* __this, ::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer);
void TreeObject__PropertySubscription__FuseReactiveIPropertySubscriptionTrySetExclusive_fn(TreeObject__PropertySubscription* __this, uString* key, uObject* newValue, bool* __retval);
void TreeObject__PropertySubscription__New1_fn(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer, TreeObject__PropertySubscription** __retval);
void TreeObject__PropertySubscription__OnPropertyChanged_fn(TreeObject__PropertySubscription* __this, uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude);

struct TreeObject__PropertySubscription : ::g::Fuse::Scripting::SubscriptionSubject__Subscription
{
    uStrong<uObject*> _observer;

    void ctor_1(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer);
    void OnPropertyChanged(uString* key, uObject* newValue, TreeObject__PropertySubscription* exclude);
    static TreeObject__PropertySubscription* New1(::g::Fuse::Scripting::JavaScript::TreeObject* om, uObject* observer);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
