// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Scripting.JavaScript/1.7.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaSc-8e9ad5a9.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Set;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Set :411
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Set_typeof();
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t* origin);
void Observable__Set__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t* origin, Observable__Set** __retval);
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub);
void Observable__Set__Unsubscribe_fn(Observable__Set* __this);

struct Observable__Set : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    uStrong<uObject*> _value;
    int32_t _origin;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t origin);
    static Observable__Set* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, int32_t origin);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
