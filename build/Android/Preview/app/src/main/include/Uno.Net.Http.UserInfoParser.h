// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.7.1/UriParsers/UserInfoParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UserInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UserInfoParser :6
// {
uType* UserInfoParser_typeof();
void UserInfoParser__ctor__fn(UserInfoParser* __this);
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval);
void UserInfoParser__New1_fn(UserInfoParser** __retval);
void UserInfoParser__Parse_fn(uString* uriString, int32_t* endIdx, int32_t* idx, uString** __retval);

struct UserInfoParser : uObject
{
    void ctor_();
    static bool IsValid(uString* userInfo);
    static UserInfoParser* New1();
    static uString* Parse(uString* uriString, int32_t endIdx, int32_t* idx);
};
// }

}}}} // ::g::Uno::Net::Http
