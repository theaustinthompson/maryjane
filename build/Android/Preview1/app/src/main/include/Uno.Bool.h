// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Bool.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public intrinsic struct Bool :11
// {
uStructType* Bool_typeof();
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval);
void Bool__GetHashCode_fn(bool* __this, uType* __type, int32_t* __retval);
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval);

struct Bool
{
    static bool Equals(bool __this, uType* __type, uObject* o) { bool __retval; return Bool__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(bool __this, uType* __type) { int32_t __retval; return Bool__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(bool __this, uType* __type) { uString* __retval; return Bool__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
