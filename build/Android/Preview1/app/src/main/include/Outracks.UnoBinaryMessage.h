// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/BinaryMessage.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{struct UnoBinaryMessage;}}
namespace g{namespace Outracks{template<class T>struct Optional1;}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}

namespace g{
namespace Outracks{

// public static class UnoBinaryMessage :16
// {
uClassType* UnoBinaryMessage_typeof();
void UnoBinaryMessage__SubArray_fn(uType* __type, uArray* data, int32_t* index, int32_t* length, uArray** __retval);
void UnoBinaryMessage__TryParse_fn(uType* __type, uObject* message, uString* type, uDelegate* action, uTRef __retval);

struct UnoBinaryMessage : uObject
{
    static uArray* SubArray(uType* __type, uArray* data, int32_t index, int32_t length);
    template<class T>
    static ::g::Outracks::Optional1<T> TryParse(uType* __type, uObject* message, uString* type, uDelegate* action);
};

}} // ::g::Outracks

#include <Outracks.Optional1-1.h>
#include <Uno.Object.h>

namespace g{
namespace Outracks{

template<class T>
::g::Outracks::Optional1<T> UnoBinaryMessage::TryParse(uType* __type, uObject* message, uString* type, uDelegate* action) { ::g::Outracks::Optional1<T> __retval; return UnoBinaryMessage__TryParse_fn(__type, message, type, action, &__retval), __retval; }
// }

}} // ::g::Outracks
