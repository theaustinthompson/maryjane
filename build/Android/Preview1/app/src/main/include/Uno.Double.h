// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Double.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Double :11
// {
uStructType* Double_typeof();
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval);
void Double__GetHashCode_fn(double* __this, uType* __type, int32_t* __retval);
void Double__IsInfinity_fn(double* d, bool* __retval);
void Double__IsNegativeInfinity_fn(double* d, bool* __retval);
void Double__IsPositiveInfinity_fn(double* d, bool* __retval);
void Double__Parse_fn(uString* str, double* __retval);
void Double__ToString_fn(double* __this, uType* __type, uString** __retval);
void Double__TryParse_fn(uString* str, double* result, bool* __retval);

struct Double
{
    static bool Equals(double __this, uType* __type, uObject* o) { bool __retval; return Double__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(double __this, uType* __type) { int32_t __retval; return Double__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(double __this, uType* __type) { uString* __retval; return Double__ToString_fn(&__this, __type, &__retval), __retval; }
    static bool IsInfinity(double d);
    static bool IsNegativeInfinity(double d);
    static bool IsPositiveInfinity(double d);
    static double Parse(uString* str);
    static bool TryParse(uString* str, double* result);
};
// }

}} // ::g::Uno
