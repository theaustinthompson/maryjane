// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Experimental.Http/1.7.2/HttpResponseHeader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Experimental{
namespace Http{

// public sealed class HttpResponseHeader :7
// {
uType* HttpResponseHeader_typeof();
void HttpResponseHeader__ctor__fn(HttpResponseHeader* __this);
void HttpResponseHeader__get_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary** __retval);
void HttpResponseHeader__set_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary* value);
void HttpResponseHeader__New1_fn(HttpResponseHeader** __retval);
void HttpResponseHeader__get_ReasonPhrase_fn(HttpResponseHeader* __this, uString** __retval);
void HttpResponseHeader__set_ReasonPhrase_fn(HttpResponseHeader* __this, uString* value);
void HttpResponseHeader__get_StatusCode_fn(HttpResponseHeader* __this, int32_t* __retval);
void HttpResponseHeader__set_StatusCode_fn(HttpResponseHeader* __this, int32_t* value);

struct HttpResponseHeader : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _Headers;
    uStrong<uString*> _ReasonPhrase;
    int32_t _StatusCode;

    void ctor_();
    ::g::Uno::Collections::Dictionary* Headers();
    void Headers(::g::Uno::Collections::Dictionary* value);
    uString* ReasonPhrase();
    void ReasonPhrase(uString* value);
    int32_t StatusCode();
    void StatusCode(int32_t value);
    static HttpResponseHeader* New1();
};
// }

}}} // ::g::Experimental::Http
