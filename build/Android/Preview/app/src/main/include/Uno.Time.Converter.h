// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Time/Utilities/Converter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Converter;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Converter :3
// {
uClassType* Converter_typeof();
void Converter__TicksToDays_fn(int64_t* ticks, int32_t* __retval);

struct Converter : uObject
{
    static int32_t TicksToDays(int64_t ticks);
};
// }

}}} // ::g::Uno::Time
