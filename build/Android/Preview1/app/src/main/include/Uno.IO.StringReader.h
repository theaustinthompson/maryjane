// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/IO/StringReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextReader.h>
namespace g{namespace Uno{namespace IO{struct StringReader;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StringReader :6
// {
::g::Uno::IO::TextReader_type* StringReader_typeof();
void StringReader__ctor_1_fn(StringReader* __this, uString* text);
void StringReader__Dispose1_fn(StringReader* __this, bool* disposing);
void StringReader__New1_fn(uString* text, StringReader** __retval);
void StringReader__Peek_fn(StringReader* __this, int32_t* __retval);
void StringReader__Read_fn(StringReader* __this, int32_t* __retval);
void StringReader__Read1_fn(StringReader* __this, uArray* buffer, int32_t* index, int32_t* count, int32_t* __retval);

struct StringReader : ::g::Uno::IO::TextReader
{
    uStrong<uString*> _string;
    int32_t _index;
    int32_t _length;

    void ctor_1(uString* text);
    static StringReader* New1(uString* text);
};
// }

}}} // ::g::Uno::IO
