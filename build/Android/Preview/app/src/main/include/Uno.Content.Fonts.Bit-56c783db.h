// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Content/Fonts/BitmapFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont__CharPair;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public struct BitmapFont.CharPair :18
// {
uStructType* BitmapFont__CharPair_typeof();
void BitmapFont__CharPair__ctor__fn(BitmapFont__CharPair* __this, char16_t* left, char16_t* right);
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int32_t* __retval);
void BitmapFont__CharPair__New1_fn(char16_t* left, char16_t* right, BitmapFont__CharPair* __retval);

struct BitmapFont__CharPair
{
    char16_t Left;
    char16_t Right;

    void ctor_(char16_t left, char16_t right);
    int32_t GetHashCode(uType* __type) { int32_t __retval; return BitmapFont__CharPair__GetHashCode_fn(this, __type, &__retval), __retval; }
};

BitmapFont__CharPair BitmapFont__CharPair__New1(char16_t left, char16_t right);
// }

}}}} // ::g::Uno::Content::Fonts
