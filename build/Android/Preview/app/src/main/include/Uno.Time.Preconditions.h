// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Time/Utilities/Preconditions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Preconditions;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Preconditions :3
// {
uClassType* Preconditions_typeof();
void Preconditions__CheckArgumentRange_fn(uString* paramName, int32_t* value, int32_t* minInclusive, int32_t* maxInclusive);
void Preconditions__CheckArgumentRange1_fn(uString* paramName, int64_t* value, int64_t* minInclusive, int64_t* maxInclusive);
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval);

struct Preconditions : uObject
{
    static void CheckArgumentRange(uString* paramName, int32_t value, int32_t minInclusive, int32_t maxInclusive);
    static void CheckArgumentRange1(uString* paramName, int64_t value, int64_t minInclusive, int64_t maxInclusive);
    static uObject* CheckNotNull(uType* __type, uObject* argument, uString* paramName);
};
// }

}}} // ::g::Uno::Time
