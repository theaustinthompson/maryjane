// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Time/Instant.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct Duration;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct Instant :5
// {
uStructType* Instant_typeof();
void Instant__ctor__fn(Instant* __this, int64_t* ticks);
void Instant__Equals_fn(Instant* __this, uType* __type, uObject* obj, bool* __retval);
void Instant__Equals2_fn(Instant* __this, Instant* other, bool* __retval);
void Instant__FromUtc_fn(int32_t* year, int32_t* monthOfYear, int32_t* dayOfMonth, int32_t* hourOfDay, int32_t* minuteOfHour, Instant* __retval);
void Instant__GetHashCode_fn(Instant* __this, uType* __type, int32_t* __retval);
void Instant__Minus2_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval);
void Instant__New1_fn(int64_t* ticks, Instant* __retval);
void Instant__op_Addition_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval);
void Instant__op_Equality_fn(Instant* left, Instant* right, bool* __retval);
void Instant__op_Subtraction_fn(Instant* left, ::g::Uno::Time::Duration* right, Instant* __retval);
void Instant__op_Subtraction1_fn(Instant* left, Instant* right, ::g::Uno::Time::Duration* __retval);
void Instant__Plus1_fn(Instant* __this, ::g::Uno::Time::Offset* offset, Instant* __retval);
void Instant__PlusTicks_fn(Instant* __this, int64_t* ticksToAdd, Instant* __retval);
void Instant__get_Ticks_fn(Instant* __this, int64_t* __retval);
void Instant__ToString_fn(Instant* __this, uType* __type, uString** __retval);

struct Instant
{
    int64_t _ticks;

    void ctor_(int64_t ticks);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Instant__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(Instant other);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Instant__GetHashCode_fn(this, __type, &__retval), __retval; }
    Instant Minus2(::g::Uno::Time::Offset offset);
    Instant Plus1(::g::Uno::Time::Offset offset);
    Instant PlusTicks(int64_t ticksToAdd);
    int64_t Ticks();
    uString* ToString(uType* __type) { uString* __retval; return Instant__ToString_fn(this, __type, &__retval), __retval; }
};

Instant Instant__FromUtc(int32_t year, int32_t monthOfYear, int32_t dayOfMonth, int32_t hourOfDay, int32_t minuteOfHour);
Instant Instant__New1(int64_t ticks);
Instant Instant__op_Addition(Instant left, ::g::Uno::Time::Duration right);
bool Instant__op_Equality(Instant left, Instant right);
Instant Instant__op_Subtraction(Instant left, ::g::Uno::Time::Duration right);
::g::Uno::Time::Duration Instant__op_Subtraction1(Instant left, Instant right);
// }

}}} // ::g::Uno::Time
