// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.7.1/HttpMessageCache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageCache;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public static class HttpMessageCache :3
// {
uClassType* HttpMessageCache_typeof();
void HttpMessageCache__Init_fn();
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval);
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value);
void HttpMessageCache__OnApplicationStarted_fn(int32_t* state);

struct HttpMessageCache : uObject
{
    static bool _isInitialized_;
    static bool& _isInitialized() { return HttpMessageCache_typeof()->Init(), _isInitialized_; }
    static bool _isCacheDisabled_;
    static bool& _isCacheDisabled() { return HttpMessageCache_typeof()->Init(), _isCacheDisabled_; }
    static int64_t _maxCacheSizeInBytes_;
    static int64_t& _maxCacheSizeInBytes() { return HttpMessageCache_typeof()->Init(), _maxCacheSizeInBytes_; }

    static void Init();
    static void OnApplicationStarted(int32_t state);
    static bool IsCacheEnabled();
    static void IsCacheEnabled(bool value);
};
// }

}}}} // ::g::Uno::Net::Http
