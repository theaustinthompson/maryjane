// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/Optional.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{struct NullToNone;}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}

namespace g{
namespace Outracks{

// public static class NullToNone :9
// {
uClassType* NullToNone_typeof();
void NullToNone__ToOptional_fn(uType* __type, uObject* value, uTRef __retval);

struct NullToNone : uObject
{
    static ::g::Outracks::Optional1<uStrong<uObject*> > ToOptional(uType* __type, uObject* value);
};

}} // ::g::Outracks

#include <Outracks.Optional1-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{

inline ::g::Outracks::Optional1<uStrong<uObject*> > NullToNone::ToOptional(uType* __type, uObject* value) { ::g::Outracks::Optional1<uStrong<uObject*> > __retval; return NullToNone__ToOptional_fn(__type, value, &__retval), __retval; }
// }

}} // ::g::Outracks
