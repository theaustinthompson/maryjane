// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Time/Calendars/WeekYearCalculator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct WeekYearCalculator;}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// internal sealed class WeekYearCalculator :3
// {
uType* WeekYearCalculator_typeof();
void WeekYearCalculator__ctor__fn(WeekYearCalculator* __this, ::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int32_t* minDaysInFirstWeek1);
void WeekYearCalculator__New1_fn(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int32_t* minDaysInFirstWeek1, WeekYearCalculator** __retval);

struct WeekYearCalculator : uObject
{
    uStrong< ::g::Uno::Time::Calendars::YearMonthDayCalculator*> yearMonthDayCalculator;
    int32_t minDaysInFirstWeek;

    void ctor_(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int32_t minDaysInFirstWeek1);
    static WeekYearCalculator* New1(::g::Uno::Time::Calendars::YearMonthDayCalculator* yearMonthDayCalculator1, int32_t minDaysInFirstWeek1);
};
// }

}}}} // ::g::Uno::Time::Calendars
