// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Time/ZonedDateTime.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Time.LocalDateTime.h>
#include <Uno.Time.Offset.h>
namespace g{namespace Uno{namespace Time{struct CalendarSystem;}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone;}}}
namespace g{namespace Uno{namespace Time{struct Instant;}}}
namespace g{namespace Uno{namespace Time{struct ZonedDateTime;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class ZonedDateTime :6
// {
uType* ZonedDateTime_typeof();
void ZonedDateTime__ctor__fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone);
void ZonedDateTime__ctor_1_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar);
void ZonedDateTime__ctor_2_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone);
void ZonedDateTime__get_Day_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__Equals_fn(ZonedDateTime* __this, uObject* obj, bool* __retval);
void ZonedDateTime__Equals2_fn(ZonedDateTime* __this, ZonedDateTime* other, bool* __retval);
void ZonedDateTime__GetHashCode_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__get_Hour_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__get_Instant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval);
void ZonedDateTime__get_LocalDateTime_fn(ZonedDateTime* __this, ::g::Uno::Time::LocalDateTime* __retval);
void ZonedDateTime__get_Minute_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__get_Month_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__New1_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval);
void ZonedDateTime__New2_fn(::g::Uno::Time::Instant* instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar, ZonedDateTime** __retval);
void ZonedDateTime__New3_fn(::g::Uno::Time::LocalDateTime* localDateTime, ::g::Uno::Time::DateTimeZone* zone, ZonedDateTime** __retval);
void ZonedDateTime__get_Now_fn(ZonedDateTime** __retval);
void ZonedDateTime__get_Offset_fn(ZonedDateTime* __this, ::g::Uno::Time::Offset* __retval);
void ZonedDateTime__get_Second_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__ToInstant_fn(ZonedDateTime* __this, ::g::Uno::Time::Instant* __retval);
void ZonedDateTime__ToString_fn(ZonedDateTime* __this, uString** __retval);
void ZonedDateTime__WithZone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone* targetZone, ZonedDateTime** __retval);
void ZonedDateTime__get_Year_fn(ZonedDateTime* __this, int32_t* __retval);
void ZonedDateTime__get_Zone_fn(ZonedDateTime* __this, ::g::Uno::Time::DateTimeZone** __retval);

struct ZonedDateTime : uObject
{
    ::g::Uno::Time::LocalDateTime _localDateTime;
    uStrong< ::g::Uno::Time::DateTimeZone*> _zone;
    ::g::Uno::Time::Offset _offset;

    void ctor_(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone);
    void ctor_1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar);
    void ctor_2(::g::Uno::Time::LocalDateTime localDateTime, ::g::Uno::Time::DateTimeZone* zone);
    int32_t Day();
    bool Equals2(ZonedDateTime* other);
    int32_t Hour();
    ::g::Uno::Time::Instant Instant();
    ::g::Uno::Time::LocalDateTime LocalDateTime();
    int32_t Minute();
    int32_t Month();
    ::g::Uno::Time::Offset Offset();
    int32_t Second();
    ::g::Uno::Time::Instant ToInstant();
    ZonedDateTime* WithZone(::g::Uno::Time::DateTimeZone* targetZone);
    int32_t Year();
    ::g::Uno::Time::DateTimeZone* Zone();
    static ZonedDateTime* New1(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone);
    static ZonedDateTime* New2(::g::Uno::Time::Instant instant, ::g::Uno::Time::DateTimeZone* zone, ::g::Uno::Time::CalendarSystem* calendar);
    static ZonedDateTime* New3(::g::Uno::Time::LocalDateTime localDateTime, ::g::Uno::Time::DateTimeZone* zone);
    static ZonedDateTime* Now();
};
// }

}}} // ::g::Uno::Time
