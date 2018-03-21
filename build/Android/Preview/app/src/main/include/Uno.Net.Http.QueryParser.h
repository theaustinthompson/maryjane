// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.7.1/UriParsers/QueryParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct QueryParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class QueryParser :6
// {
uType* QueryParser_typeof();
void QueryParser__ctor__fn(QueryParser* __this);
void QueryParser__New1_fn(QueryParser** __retval);
void QueryParser__Parse_fn(uString* uriString, uString* scheme, int32_t* idx, int32_t* startPartIdx, uString** __retval);

struct QueryParser : uObject
{
    void ctor_();
    static QueryParser* New1();
    static uString* Parse(uString* uriString, uString* scheme, int32_t idx, int32_t* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
