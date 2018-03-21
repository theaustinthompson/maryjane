// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.7.1/UriParsers/HashParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HashParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class HashParser :6
// {
uType* HashParser_typeof();
void HashParser__ctor__fn(HashParser* __this);
void HashParser__New1_fn(HashParser** __retval);
void HashParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* startPartIdx, uString** __retval);

struct HashParser : uObject
{
    void ctor_();
    static HashParser* New1();
    static uString* Parse(uString* uriString, int32_t idx, int32_t* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
