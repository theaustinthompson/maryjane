// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ListMirror.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct ThreadWorker;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// internal sealed class Observable :6
// {
struct Observable_type : ::g::Fuse::Scripting::ListMirror_type
{
    ::g::Fuse::Reactive::IObservable interface2;
    ::g::Fuse::Reactive::IObservableArray interface3;
};

Observable_type* Observable_typeof();
void Observable__ctor_3_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback);
void Observable__Create_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, Observable** __retval);
void Observable__FuseReactiveIObservableArraySubscribe_fn(Observable* __this, uObject* observer, uObject** __retval);
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval);
void Observable__get_Item_fn(Observable* __this, int32_t* index, uObject** __retval);
void Observable__get_Length_fn(Observable* __this, int32_t* __retval);
void Observable__New1_fn(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback, Observable** __retval);
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval);
void Observable__ObserveChange_fn(Observable* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Observable__ObserversCleanup_fn(Observable* __this);
void Observable__RemoveSubscriber_fn(Observable* __this, ::g::Fuse::Scripting::Context* context);
void Observable__SetValue_fn(Observable* __this, int32_t* index, uObject* value);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval);
void Observable__SubscribeInternal_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval);
void Observable__ToInt_fn(Observable* __this, uObject* obj, int32_t* __retval);
void Observable__Unsubscribe_fn(Observable* __this);
void Observable__UnsubscribeValues_fn(Observable* __this);

struct Observable : ::g::Fuse::Scripting::ListMirror
{
    uStrong< ::g::Uno::Collections::List*> _values;
    uStrong< ::g::Uno::Collections::List*> _observers;
    bool _usingObservers;
    uStrong<uObject*> _worker;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong< ::g::Fuse::Scripting::Function*> _observeChange;
    bool _isUnsubscribed;

    void ctor_3(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback);
    bool IsUnsubscribed();
    ::g::Fuse::Scripting::Object* Object();
    uObject* ObserveChange(::g::Fuse::Scripting::Context* context, uArray* args);
    void ObserversCleanup();
    void RemoveSubscriber(::g::Fuse::Scripting::Context* context);
    void SetValue(int32_t index, uObject* value);
    uObject* Subscribe(uObject* observer);
    Observable__Subscription* SubscribeInternal(uObject* observer);
    int32_t ToInt(uObject* obj);
    void UnsubscribeValues();
    static Observable* Create(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker);
    static Observable* New1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
