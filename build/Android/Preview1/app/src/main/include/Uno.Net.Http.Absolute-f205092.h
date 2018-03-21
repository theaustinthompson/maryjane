// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.7.1/UriParsers/AbsolutePathParser.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct AbsolutePathParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class AbsolutePathParser :6
// {
uType* AbsolutePathParser_typeof();
void AbsolutePathParser__ctor__fn(AbsolutePathParser* __this);
void AbsolutePathParser__New1_fn(AbsolutePathParser** __retval);
void AbsolutePathParser__Parse_fn(uString* uriString, int32_t* idx, int32_t* endIdx, int32_t* startPartIdx, uString** __retval);

struct AbsolutePathParser : uObject
{
    void ctor_();
    static AbsolutePathParser* New1();
    static uString* Parse(uString* uriString, int32_t idx, int32_t endIdx, int32_t* startPartIdx);
};
// }

}}}} // ::g::Uno::Net::Http
