// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.8.1/JavaScript.Dependencies.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__Dependency;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class JavaScript.Dependency :12
// {
struct JavaScript__Dependency_type : uType
{
    ::g::Fuse::Reactive::IListener interface0;
};

JavaScript__Dependency_type* JavaScript__Dependency_typeof();
void JavaScript__Dependency__ctor__fn(JavaScript__Dependency* __this, uString* name, uObject* expression);
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval);
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value);
void JavaScript__Dependency__FuseReactiveIListenerOnLostData_fn(JavaScript__Dependency* __this, uObject* source);
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data);
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval);
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value);
void JavaScript__Dependency__New1_fn(uString* name, uObject* expression, JavaScript__Dependency** __retval);
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script);
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this);

struct JavaScript__Dependency : uObject
{
    uStrong< ::g::Fuse::Reactive::JavaScript*> _script;
    uStrong<uObject*> _expSubscription;
    bool HasValue;
    uStrong<uObject*> Value;
    uStrong<uObject*> _Expression;
    uStrong<uString*> _Name;

    void ctor_(uString* name, uObject* expression);
    uObject* Expression();
    void Expression(uObject* value);
    uString* Name();
    void Name(uString* value);
    void Subscribe(::g::Fuse::Reactive::JavaScript* script);
    void Unsubscribe();
    static JavaScript__Dependency* New1(uString* name, uObject* expression);
};
// }

}}} // ::g::Fuse::Reactive
