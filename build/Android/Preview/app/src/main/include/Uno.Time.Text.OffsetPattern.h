// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Time/Text/OffsetPattern.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct FixedFormatPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPattern;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPattern__OffsetBucket;}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class OffsetPattern :3
// {
uType* OffsetPattern_typeof();
void OffsetPattern__ctor__fn(OffsetPattern* __this);
void OffsetPattern__Format_fn(OffsetPattern* __this, ::g::Uno::Time::Offset* value, uString** __retval);
void OffsetPattern__get_GeneralIsoPattern_fn(OffsetPattern** __retval);
void OffsetPattern__GetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval);
void OffsetPattern__GetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval);
void OffsetPattern__GetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval);
void OffsetPattern__GetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* __retval);
void OffsetPattern__New1_fn(OffsetPattern** __retval);
void OffsetPattern__Parse_fn(OffsetPattern* __this, uString* text, ::g::Uno::Time::Text::ParseResult** __retval);
void OffsetPattern__SetHour_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* hour);
void OffsetPattern__SetMinute_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* minute);
void OffsetPattern__SetSecond_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* second);
void OffsetPattern__SetSign_fn(OffsetPattern* __this, OffsetPattern__OffsetBucket* value, int32_t* sign);

struct OffsetPattern : uObject
{
    static uSStrong<OffsetPattern*> General_;
    static uSStrong<OffsetPattern*>& General() { return General_; }
    uStrong< ::g::Uno::Time::Text::FixedFormatPattern*> _generalPattern;

    void ctor_();
    uString* Format(::g::Uno::Time::Offset value);
    int32_t GetHour(OffsetPattern__OffsetBucket* value);
    int32_t GetMinute(OffsetPattern__OffsetBucket* value);
    int32_t GetSecond(OffsetPattern__OffsetBucket* value);
    int32_t GetSign(OffsetPattern__OffsetBucket* value);
    ::g::Uno::Time::Text::ParseResult* Parse(uString* text);
    void SetHour(OffsetPattern__OffsetBucket* value, int32_t hour);
    void SetMinute(OffsetPattern__OffsetBucket* value, int32_t minute);
    void SetSecond(OffsetPattern__OffsetBucket* value, int32_t second);
    void SetSign(OffsetPattern__OffsetBucket* value, int32_t sign);
    static OffsetPattern* New1();
    static OffsetPattern* GeneralIsoPattern();
};
// }

}}}} // ::g::Uno::Time::Text
