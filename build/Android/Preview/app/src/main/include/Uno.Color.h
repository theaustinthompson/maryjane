// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Color.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct Color;}}
namespace g{namespace Uno{struct Float3x3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public static class Color :9
// {
uClassType* Color_typeof();
void Color__FromArgb_fn(uint32_t* argb, ::g::Uno::Float4* __retval);
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval);
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval);
void Color__Parse_fn(uString* str, ::g::Uno::Float4* __retval);
void Color__ToArgb_fn(::g::Uno::Float4* rgba, uint32_t* __retval);
void Color__ToArgb1_fn(::g::Uno::Int4* rgba, uint32_t* __retval);
void Color__ToInt4_fn(::g::Uno::Float4* rgba, ::g::Uno::Int4* __retval);
void Color__TryParse_fn(uString* str, ::g::Uno::Float4* color, bool* __retval);
void Color__TryParseHexByte_fn(char16_t* ch1, char16_t* ch2, int32_t* result, bool* __retval);
void Color__TryParseHexDigit_fn(char16_t* ch, int32_t* result, bool* __retval);
void Color__TryParseHexNibble_fn(char16_t* ch, int32_t* result, bool* __retval);
void Color__TryParseHexString_fn(uString* hex, ::g::Uno::Int4* result, bool* __retval);

struct Color : uObject
{
    static ::g::Uno::Float3x3 ToYCbCrMat_;
    static ::g::Uno::Float3x3& ToYCbCrMat() { return Color_typeof()->Init(), ToYCbCrMat_; }
    static ::g::Uno::Float3x3 ToYCbCrMatInv_;
    static ::g::Uno::Float3x3& ToYCbCrMatInv() { return Color_typeof()->Init(), ToYCbCrMatInv_; }

    static ::g::Uno::Float4 FromArgb(uint32_t argb);
    static ::g::Uno::Float4 FromInt4(::g::Uno::Int4 rgba);
    static ::g::Uno::Float4 FromRgba(uint32_t rgba);
    static ::g::Uno::Float4 Parse(uString* str);
    static uint32_t ToArgb(::g::Uno::Float4 rgba);
    static uint32_t ToArgb1(::g::Uno::Int4 rgba);
    static ::g::Uno::Int4 ToInt4(::g::Uno::Float4 rgba);
    static bool TryParse(uString* str, ::g::Uno::Float4* color);
    static bool TryParseHexByte(char16_t ch1, char16_t ch2, int32_t* result);
    static bool TryParseHexDigit(char16_t ch, int32_t* result);
    static bool TryParseHexNibble(char16_t ch, int32_t* result);
    static bool TryParseHexString(uString* hex, ::g::Uno::Int4* result);
};
// }

}} // ::g::Uno
