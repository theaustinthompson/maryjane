// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Data.Json/1.8.0/Source/JsonWriter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Data{namespace Json{struct JsonWriter;}}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Uno{
namespace Data{
namespace Json{

// public static class JsonWriter :5
// {
uClassType* JsonWriter_typeof();
void JsonWriter__EscapeString1_fn(uString* str, ::g::Uno::Text::StringBuilder* sb);
void JsonWriter__QuoteString_fn(uString* str, uString** __retval);

struct JsonWriter : uObject
{
    static void EscapeString1(uString* str, ::g::Uno::Text::StringBuilder* sb);
    static uString* QuoteString(uString* str);
};
// }

}}}} // ::g::Uno::Data::Json
