// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-90b493fe.h>
#include <Android.com.fuse.Expe-9d584358.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action4-4.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-5d778620.h>
#include <Uno.Exception.h>
#include <Uno.GC.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Http.HttpDefa-b19f5e55.h>
#include <Uno.Net.Http.HttpMess-1d2e0b2f.h>
#include <Uno.Net.Http.HttpMess-2de79056.h>
#include <Uno.Net.Http.HttpMess-56ba8d01.h>
#include <Uno.Net.Http.HttpMess-8a5feb56.h>
#include <Uno.Net.Http.HttpMessageCache.h>
#include <Uno.Net.Http.HttpMess-b09aa232.h>
#include <Uno.Net.Http.HttpMess-db3b7805.h>
#include <Uno.Net.Http.HttpRequestState.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.Net.Http.HttpStat-138f9460.h>
#include <Uno.Net.Http.Implemen-5e623127.h>
#include <Uno.Net.Http.Implemen-c964dca9.h>
#include <Uno.Net.Http.InvalidR-d0abcd6.h>
#include <Uno.Net.Http.InvalidS-7f541f1c.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[44];
static uType* TYPES[3];

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure :138
// {
static void HttpMessageHandlerRequest__DispatchClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _arg), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :144
void HttpMessageHandlerRequest__DispatchClosure__ctor__fn(HttpMessageHandlerRequest__DispatchClosure* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    __this->ctor_(*state, action, arg);
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) :144
void HttpMessageHandlerRequest__DispatchClosure__New1_fn(int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg, HttpMessageHandlerRequest__DispatchClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__DispatchClosure::New1(*state, action, arg);
}

// public void Run() :151
void HttpMessageHandlerRequest__DispatchClosure__Run_fn(HttpMessageHandlerRequest__DispatchClosure* __this)
{
    __this->Run();
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [instance] :144
void HttpMessageHandlerRequest__DispatchClosure::ctor_(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    _action = action;
    _arg = arg;
    _state = state;
}

// public void Run() [instance] :151
void HttpMessageHandlerRequest__DispatchClosure::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure", "Run()");

    if (uPtr(_arg)->IsComplete())
        return;

    uPtr(_arg)->State(_state);
    uPtr(_action)->InvokeVoid(_arg);
    uPtr(_arg)->CompleteRequest();
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> action, Uno.Net.Http.HttpMessageHandlerRequest arg) [static] :144
HttpMessageHandlerRequest__DispatchClosure* HttpMessageHandlerRequest__DispatchClosure::New1(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg)
{
    HttpMessageHandlerRequest__DispatchClosure* obj1 = (HttpMessageHandlerRequest__DispatchClosure*)uNew(HttpMessageHandlerRequest__DispatchClosure_typeof());
    obj1->ctor_(state, action, arg);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.DispatchClosure<TArg1> :161
// {
static void HttpMessageHandlerRequest__DispatchClosure1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), type->T(0), NULL), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _arg0), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__DispatchClosure1, _state), 0);
}

uType* HttpMessageHandlerRequest__DispatchClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__DispatchClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", options);
    type->fp_build_ = HttpMessageHandlerRequest__DispatchClosure1_build;
    return type;
}

// public DispatchClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :168
void HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(HttpMessageHandlerRequest__DispatchClosure1* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1)
{
    int32_t state_ = *state;
    __this->_action = action;
    __this->_arg0 = arg0;
    __this->_arg1() = arg1;
    __this->_state = state_;
}

// public DispatchClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, TArg1> action, Uno.Net.Http.HttpMessageHandlerRequest arg0, TArg1 arg1) :168
void HttpMessageHandlerRequest__DispatchClosure1__New1_fn(uType* __type, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* arg0, void* arg1, HttpMessageHandlerRequest__DispatchClosure1** __retval)
{
    int32_t state_ = *state;
    HttpMessageHandlerRequest__DispatchClosure1* obj1 = (HttpMessageHandlerRequest__DispatchClosure1*)uNew(__type);
    HttpMessageHandlerRequest__DispatchClosure1__ctor__fn(obj1, uCRef<int32_t>(state_), action, arg0, arg1);
    return *__retval = obj1, void();
}

// public void Run() :176
void HttpMessageHandlerRequest__DispatchClosure1__Run_fn(HttpMessageHandlerRequest__DispatchClosure1* __this)
{
    __this->Run();
}

// public void Run() [instance] :176
void HttpMessageHandlerRequest__DispatchClosure1::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure`1", "Run()");

    if (uPtr(_arg0)->IsComplete())
        return;

    uPtr(_arg0)->State(_state);
    uPtr(_action)->Invoke(2, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_arg0, (void*)_arg1());
    uPtr(_arg0)->CompleteRequest();
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpDefaultDispatcher.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class HttpDefaultDispatcher :6
// {
static void HttpDefaultDispatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpDefaultDispatcher_type, interface0));
}

HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof()
{
    static uSStrong<HttpDefaultDispatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpDefaultDispatcher);
    options.TypeSize = sizeof(HttpDefaultDispatcher_type);
    type = (HttpDefaultDispatcher_type*)uClassType::New("Uno.Net.Http.HttpDefaultDispatcher", options);
    type->fp_build_ = HttpDefaultDispatcher_build;
    type->fp_ctor_ = (void*)HttpDefaultDispatcher__New1_fn;
    type->interface0.fp_Invoke = (void(*)(uObject*, uDelegate*))HttpDefaultDispatcher__Invoke_fn;
    return type;
}

// public HttpDefaultDispatcher() :8
void HttpDefaultDispatcher__ctor__fn(HttpDefaultDispatcher* __this)
{
    __this->ctor_();
}

// public void Invoke(Uno.Action action) :13
void HttpDefaultDispatcher__Invoke_fn(HttpDefaultDispatcher* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public HttpDefaultDispatcher New() :8
void HttpDefaultDispatcher__New1_fn(HttpDefaultDispatcher** __retval)
{
    *__retval = HttpDefaultDispatcher::New1();
}

// public HttpDefaultDispatcher() [instance] :8
void HttpDefaultDispatcher::ctor_()
{
}

// public void Invoke(Uno.Action action) [instance] :13
void HttpDefaultDispatcher::Invoke(uDelegate* action)
{
    uStackFrame __("Uno.Net.Http.HttpDefaultDispatcher", "Invoke(Uno.Action)");
    uPtr(action)->InvokeVoid();
}

// public HttpDefaultDispatcher New() [static] :8
HttpDefaultDispatcher* HttpDefaultDispatcher::New1()
{
    HttpDefaultDispatcher* obj1 = (HttpDefaultDispatcher*)uNew(HttpDefaultDispatcher_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageCache.uno
// -------------------------------------------------------------------------------------------

// public static class HttpMessageCache :3
// {
// static HttpMessageCache() :34
static void HttpMessageCache__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[0/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));
}

static void HttpMessageCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Uno.Net.Http.HttpMessageCache: Changes to IsCacheEnabled are ignored after initialization.");
    ::STRINGS[1] = uString::Const("C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Net.Http/1.8.0/HttpMessageCache.uno");
    ::TYPES[0] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isInitialized_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&HttpMessageCache::_isCacheDisabled_, uFieldFlagsStatic,
        ::g::Uno::Long_typeof(), (uintptr_t)&HttpMessageCache::_maxCacheSizeInBytes_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Init", NULL, (void*)HttpMessageCache__Init_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_IsCacheEnabled", NULL, (void*)HttpMessageCache__get_IsCacheEnabled_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsCacheEnabled", NULL, (void*)HttpMessageCache__set_IsCacheEnabled_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

uClassType* HttpMessageCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageCache", options);
    type->fp_build_ = HttpMessageCache_build;
    type->fp_cctor_ = HttpMessageCache__cctor__fn;
    return type;
}

// public static void Init() :45
void HttpMessageCache__Init_fn()
{
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() :11
void HttpMessageCache__get_IsCacheEnabled_fn(bool* __retval)
{
    *__retval = HttpMessageCache::IsCacheEnabled();
}

// public static void set_IsCacheEnabled(bool value) :12
void HttpMessageCache__set_IsCacheEnabled_fn(bool* value)
{
    HttpMessageCache::IsCacheEnabled(*value);
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state) :40
void HttpMessageCache__OnApplicationStarted_fn(int32_t* state)
{
    HttpMessageCache::OnApplicationStarted(*state);
}

bool HttpMessageCache::_isInitialized_;
bool HttpMessageCache::_isCacheDisabled_;
int64_t HttpMessageCache::_maxCacheSizeInBytes_;

// public static void Init() [static] :45
void HttpMessageCache::Init()
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "Init()");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        return;

    HttpMessageCache::_isInitialized_ = true;
    ::g::Uno::Platform::CoreApp::remove_Started(uDelegate::New(::TYPES[0/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)HttpMessageCache__OnApplicationStarted_fn));

    if (!HttpMessageCache::IsCacheEnabled())
        return;

    int64_t cacheSize = (HttpMessageCache::_maxCacheSizeInBytes_ != 0LL) ? HttpMessageCache::_maxCacheSizeInBytes_ : 20971520LL;
    ::g::Android::com::fuse::ExperimentalHttp::HttpRequest::InstallCache((uObject*)::g::Android::Base::JNI::GetWrappedActivityObject(), cacheSize);
}

// private static void OnApplicationStarted(Uno.Platform.ApplicationState state) [static] :40
void HttpMessageCache::OnApplicationStarted(int32_t state)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "OnApplicationStarted(Uno.Platform.ApplicationState)");
    HttpMessageCache_typeof()->Init();
    HttpMessageCache::Init();
}

// public static bool get_IsCacheEnabled() [static] :11
bool HttpMessageCache::IsCacheEnabled()
{
    HttpMessageCache_typeof()->Init();
    return !HttpMessageCache::_isCacheDisabled_;
}

// public static void set_IsCacheEnabled(bool value) [static] :12
void HttpMessageCache::IsCacheEnabled(bool value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageCache", "set_IsCacheEnabled(bool)");
    HttpMessageCache_typeof()->Init();

    if (HttpMessageCache::_isInitialized_)
        ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[0/*"Uno.Net.Htt...*/], 0, ::STRINGS[1/*"C:/Users/bo...*/], 15);
    else
        HttpMessageCache::_isCacheDisabled_ = !value;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandler.uno
// ---------------------------------------------------------------------------------------------

// public sealed class HttpMessageHandler :8
// {
static void HttpMessageHandler_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Net::Http::HttpMessageCache_typeof(),
        HttpMessageHandler__StaticData_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandler_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL), offsetof(HttpMessageHandler, _pendingRequests), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandler, _defaultDispatcher), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AbortPendingRequests", NULL, (void*)HttpMessageHandler__AbortPendingRequests_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("CreateRequest", NULL, (void*)HttpMessageHandler__CreateRequest1_fn, 0, false, ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Threading::IDispatcher_typeof()),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandler__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)HttpMessageHandler__New1_fn, 0, true, type, 0));
}

HttpMessageHandler_type* HttpMessageHandler_typeof()
{
    static uSStrong<HttpMessageHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(HttpMessageHandler);
    options.TypeSize = sizeof(HttpMessageHandler_type);
    type = (HttpMessageHandler_type*)uClassType::New("Uno.Net.Http.HttpMessageHandler", options);
    type->fp_build_ = HttpMessageHandler_build;
    type->fp_ctor_ = (void*)HttpMessageHandler__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandler__Dispose_fn;
    return type;
}

// public HttpMessageHandler() :51
void HttpMessageHandler__ctor__fn(HttpMessageHandler* __this)
{
    __this->ctor_();
}

// public void AbortPendingRequests() :71
void HttpMessageHandler__AbortPendingRequests_fn(HttpMessageHandler* __this)
{
    __this->AbortPendingRequests();
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) :102
void HttpMessageHandler__CompleteRequest_fn(HttpMessageHandler* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    __this->CompleteRequest(request);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url) :78
void HttpMessageHandler__CreateRequest_fn(HttpMessageHandler* __this, uString* method, uString* url, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest(method, url);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) :83
void HttpMessageHandler__CreateRequest1_fn(HttpMessageHandler* __this, uString* method, uString* url, uObject* dispatcher, ::g::Uno::Net::Http::HttpMessageHandlerRequest** __retval)
{
    *__retval = __this->CreateRequest1(method, url, dispatcher);
}

// public void Dispose() :62
void HttpMessageHandler__Dispose_fn(HttpMessageHandler* __this)
{
    __this->Dispose();
}

// public HttpMessageHandler New() :51
void HttpMessageHandler__New1_fn(HttpMessageHandler** __retval)
{
    *__retval = HttpMessageHandler::New1();
}

// public HttpMessageHandler() [instance] :51
void HttpMessageHandler::ctor_()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", ".ctor()");
    ::g::Uno::Net::Http::HttpMessageCache::Init();
    _pendingRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)));
    _defaultDispatcher = (uObject*)::g::Uno::Net::Http::HttpDefaultDispatcher::New1();
}

// public void AbortPendingRequests() [instance] :71
void HttpMessageHandler::AbortPendingRequests()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "AbortPendingRequests()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret4), ret4);

    {
        try
        {
            {
                while (enum2.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)))
                {
                    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum2.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));

                    if (request != NULL)
                        uPtr(request)->Abort();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum2.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
        }
        __after_finally_0:;
    }
}

// internal void CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest request) [instance] :102
void HttpMessageHandler::CompleteRequest(::g::Uno::Net::Http::HttpMessageHandlerRequest* request)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CompleteRequest(Uno.Net.Http.HttpMessageHandlerRequest)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret5;

    for (int32_t i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), &ret5), ret5) == request)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), NULL);
            HttpMessageHandler__StaticData::DecrementPendingRequests();
            break;
        }
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url) [instance] :78
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest(uString* method, uString* url)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string)");
    return CreateRequest1(method, url, _defaultDispatcher);
}

// public Uno.Net.Http.HttpMessageHandlerRequest CreateRequest(string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :83
::g::Uno::Net::Http::HttpMessageHandlerRequest* HttpMessageHandler::CreateRequest1(uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "CreateRequest(string,string,Uno.Threading.IDispatcher)");
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* ret6;
    HttpMessageHandler__StaticData::IncrementPendingRequests();
    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = ::g::Uno::Net::Http::HttpMessageHandlerRequest::New1(this, method, url, dispatcher);

    for (int32_t i = 0; i < uPtr(_pendingRequests)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), &ret6), ret6) == NULL)
        {
            ::g::Uno::Collections::List__set_Item_fn(uPtr(_pendingRequests), uCRef<int32_t>(i), request);
            return request;
        }

    ::g::Uno::Collections::List__Add_fn(uPtr(_pendingRequests), request);
    return request;
}

// public void Dispose() [instance] :62
void HttpMessageHandler::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandler", "Dispose()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > ret7;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_pendingRequests), &ret7), ret7);

    {
        try
        {
            {
                while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL)))
                {
                    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));

                    if (request != NULL)
                        uPtr(request)->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), NULL));
        }
        __after_finally_1:;
    }

    _pendingRequests = NULL;
}

// public HttpMessageHandler New() [static] :51
HttpMessageHandler* HttpMessageHandler::New1()
{
    HttpMessageHandler* obj3 = (HttpMessageHandler*)uNew(HttpMessageHandler_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class HttpMessageHandlerRequest :8
// {
// ~HttpMessageHandlerRequest() :65
static void HttpMessageHandlerRequest__Finalize_fn(HttpMessageHandlerRequest* __this)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Finalize()");

    if (__this->_httpRequest == NULL)
        return;

    __this->Dispose();
}

static void HttpMessageHandlerRequest_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(HttpMessageHandlerRequest_type, interface0));
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), offsetof(HttpMessageHandlerRequest, _httpMessageHandler), 0,
        ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof(), offsetof(HttpMessageHandlerRequest, _httpRequest), 0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(HttpMessageHandlerRequest, _dispatcher), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _method), 0,
        ::g::Uno::String_typeof(), offsetof(HttpMessageHandlerRequest, _url), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest, _state), 0,
        ::g::Uno::Net::Http::HttpResponseType_typeof(), offsetof(HttpMessageHandlerRequest, _responseType), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(HttpMessageHandlerRequest, _optionalPayloadCache), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Aborted1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Done1), 0,
        ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Error1), 0,
        ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(HttpMessageHandlerRequest, Progress1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, StateChanged1), 0,
        ::g::Uno::Action1_typeof()->MakeType(type, NULL), offsetof(HttpMessageHandlerRequest, Timeout1), 0);
    type->Reflection.SetFunctions(30,
        new uFunction("Abort", NULL, (void*)HttpMessageHandlerRequest__Abort_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Aborted", NULL, (void*)HttpMessageHandlerRequest__add_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Aborted", NULL, (void*)HttpMessageHandlerRequest__remove_Aborted_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("Dispose", NULL, (void*)HttpMessageHandlerRequest__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_Done", NULL, (void*)HttpMessageHandlerRequest__add_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Done", NULL, (void*)HttpMessageHandlerRequest__remove_Done_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("EnableCache", NULL, (void*)HttpMessageHandlerRequest__EnableCache_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("add_Error", NULL, (void*)HttpMessageHandlerRequest__add_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL)),
        new uFunction("remove_Error", NULL, (void*)HttpMessageHandlerRequest__remove_Error_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::String_typeof(), NULL)),
        new uFunction("GetResponseContentByteArray", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentByteArray_fn, 0, false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("GetResponseContentString", NULL, (void*)HttpMessageHandlerRequest__GetResponseContentString_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseHeader", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeader_fn, 0, false, ::g::Uno::String_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetResponseHeaders", NULL, (void*)HttpMessageHandlerRequest__GetResponseHeaders_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("GetResponseStatus", NULL, (void*)HttpMessageHandlerRequest__GetResponseStatus_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__get_HttpResponseType_fn, 0, false, ::g::Uno::Net::Http::HttpResponseType_typeof(), 0),
        new uFunction("set_HttpResponseType", NULL, (void*)HttpMessageHandlerRequest__set_HttpResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("get_Method", NULL, (void*)HttpMessageHandlerRequest__get_Method_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("add_Progress", NULL, (void*)HttpMessageHandlerRequest__add_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL)),
        new uFunction("remove_Progress", NULL, (void*)HttpMessageHandlerRequest__remove_Progress_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action4_typeof()->MakeType(type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL)),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()),
        new uFunction("SendAsync", NULL, (void*)HttpMessageHandlerRequest__SendAsync2_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetHeader", NULL, (void*)HttpMessageHandlerRequest__SetHeader_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("SetResponseType", NULL, (void*)HttpMessageHandlerRequest__SetResponseType_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Net::Http::HttpResponseType_typeof()),
        new uFunction("SetTimeout", NULL, (void*)HttpMessageHandlerRequest__SetTimeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_State", NULL, (void*)HttpMessageHandlerRequest__get_State_fn, 0, false, ::g::Uno::Net::Http::HttpRequestState_typeof(), 0),
        new uFunction("add_StateChanged", NULL, (void*)HttpMessageHandlerRequest__add_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_StateChanged", NULL, (void*)HttpMessageHandlerRequest__remove_StateChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("add_Timeout", NULL, (void*)HttpMessageHandlerRequest__add_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)),
        new uFunction("remove_Timeout", NULL, (void*)HttpMessageHandlerRequest__remove_Timeout_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(type, NULL)));
}

HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof()
{
    static uSStrong<HttpMessageHandlerRequest_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest);
    options.TypeSize = sizeof(HttpMessageHandlerRequest_type);
    type = (HttpMessageHandlerRequest_type*)uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest", options);
    type->fp_build_ = HttpMessageHandlerRequest_build;
    type->fp_Finalize = (void(*)(uObject*))HttpMessageHandlerRequest__Finalize_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))HttpMessageHandlerRequest__Dispose_fn;
    return type;
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :22
void HttpMessageHandlerRequest__ctor__fn(HttpMessageHandlerRequest* __this, ::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    __this->ctor_(handler, method, url, dispatcher);
}

// public void Abort() :373
void HttpMessageHandlerRequest__Abort_fn(HttpMessageHandlerRequest* __this)
{
    __this->Abort();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :131
void HttpMessageHandlerRequest__add_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Aborted(value);
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :131
void HttpMessageHandlerRequest__remove_Aborted_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Aborted(value);
}

// private void CheckDisposed() :73
void HttpMessageHandlerRequest__CheckDisposed_fn(HttpMessageHandlerRequest* __this)
{
    __this->CheckDisposed();
}

// internal void CompleteRequest() :90
void HttpMessageHandlerRequest__CompleteRequest_fn(HttpMessageHandlerRequest* __this)
{
    __this->CompleteRequest();
}

// public void Dispose() :79
void HttpMessageHandlerRequest__Dispose_fn(HttpMessageHandlerRequest* __this)
{
    __this->Dispose();
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :134
void HttpMessageHandlerRequest__add_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Done(value);
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :134
void HttpMessageHandlerRequest__remove_Done_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Done(value);
}

// public void EnableCache(bool enableCache) :264
void HttpMessageHandlerRequest__EnableCache_fn(HttpMessageHandlerRequest* __this, bool* enableCache)
{
    __this->EnableCache(*enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :132
void HttpMessageHandlerRequest__add_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) :132
void HttpMessageHandlerRequest__remove_Error_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// private void FireSetHeadersReceived() :252
void HttpMessageHandlerRequest__FireSetHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->FireSetHeadersReceived();
}

// public byte[] GetResponseContentByteArray() :435
void HttpMessageHandlerRequest__GetResponseContentByteArray_fn(HttpMessageHandlerRequest* __this, uArray** __retval)
{
    *__retval = __this->GetResponseContentByteArray();
}

// public string GetResponseContentString() :421
void HttpMessageHandlerRequest__GetResponseContentString_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseContentString();
}

// public string GetResponseHeader(string name) :398
void HttpMessageHandlerRequest__GetResponseHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString** __retval)
{
    *__retval = __this->GetResponseHeader(name);
}

// public string GetResponseHeaders() :409
void HttpMessageHandlerRequest__GetResponseHeaders_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->GetResponseHeaders();
}

// public int GetResponseStatus() :387
void HttpMessageHandlerRequest__GetResponseStatus_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->GetResponseStatus();
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() :101
void HttpMessageHandlerRequest__get_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->HttpResponseType();
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) :102
void HttpMessageHandlerRequest__set_HttpResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* value)
{
    __this->HttpResponseType(*value);
}

// private bool IsComplete() :215
void HttpMessageHandlerRequest__IsComplete_fn(HttpMessageHandlerRequest* __this, bool* __retval)
{
    *__retval = __this->IsComplete();
}

// private static bool IsHeaderValid(string name, string value) :450
void HttpMessageHandlerRequest__IsHeaderValid_fn(uString* name, uString* value, bool* __retval)
{
    *__retval = HttpMessageHandlerRequest::IsHeaderValid(name, value);
}

// public string get_Method() :96
void HttpMessageHandlerRequest__get_Method_fn(HttpMessageHandlerRequest* __this, uString** __retval)
{
    *__retval = __this->Method();
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) :22
void HttpMessageHandlerRequest__New1_fn(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher, HttpMessageHandlerRequest** __retval)
{
    *__retval = HttpMessageHandlerRequest::New1(handler, method, url, dispatcher);
}

// internal void OnAborted() :220
void HttpMessageHandlerRequest__OnAborted_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnAborted();
}

// internal void OnDone() :241
void HttpMessageHandlerRequest__OnDone_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnDone();
}

// internal void OnError(string platformspesificErrorMessage) :227
void HttpMessageHandlerRequest__OnError_fn(HttpMessageHandlerRequest* __this, uString* platformspesificErrorMessage)
{
    __this->OnError(platformspesificErrorMessage);
}

// internal void OnHeadersReceived() :248
void HttpMessageHandlerRequest__OnHeadersReceived_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnHeadersReceived();
}

// internal void OnProgress(int current, int total, bool hasTotal) :257
void HttpMessageHandlerRequest__OnProgress_fn(HttpMessageHandlerRequest* __this, int32_t* current, int32_t* total, bool* hasTotal)
{
    __this->OnProgress(*current, *total, *hasTotal);
}

// internal void OnStateChanged() :118
void HttpMessageHandlerRequest__OnStateChanged_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnStateChanged();
}

// internal void OnTimeout() :234
void HttpMessageHandlerRequest__OnTimeout_fn(HttpMessageHandlerRequest* __this)
{
    __this->OnTimeout();
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :136
void HttpMessageHandlerRequest__add_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Progress(value);
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) :136
void HttpMessageHandlerRequest__remove_Progress_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Progress(value);
}

// public void SendAsync() :360
void HttpMessageHandlerRequest__SendAsync_fn(HttpMessageHandlerRequest* __this)
{
    __this->SendAsync();
}

// public void SendAsync(byte[] data) :314
void HttpMessageHandlerRequest__SendAsync1_fn(HttpMessageHandlerRequest* __this, uArray* data)
{
    __this->SendAsync1(data);
}

// public void SendAsync(string data) :342
void HttpMessageHandlerRequest__SendAsync2_fn(HttpMessageHandlerRequest* __this, uString* data)
{
    __this->SendAsync2(data);
}

// public void SetHeader(string name, string value) :276
void HttpMessageHandlerRequest__SetHeader_fn(HttpMessageHandlerRequest* __this, uString* name, uString* value)
{
    __this->SetHeader(name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) :299
void HttpMessageHandlerRequest__SetResponseType_fn(HttpMessageHandlerRequest* __this, int32_t* responseType)
{
    __this->SetResponseType(*responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) :289
void HttpMessageHandlerRequest__SetTimeout_fn(HttpMessageHandlerRequest* __this, int32_t* timeoutInMilliseconds)
{
    __this->SetTimeout(*timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() :107
void HttpMessageHandlerRequest__get_State_fn(HttpMessageHandlerRequest* __this, int32_t* __retval)
{
    *__retval = __this->State();
}

// private void set_State(Uno.Net.Http.HttpRequestState value) :108
void HttpMessageHandlerRequest__set_State_fn(HttpMessageHandlerRequest* __this, int32_t* value)
{
    __this->State(*value);
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :135
void HttpMessageHandlerRequest__add_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_StateChanged(value);
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :135
void HttpMessageHandlerRequest__remove_StateChanged_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_StateChanged(value);
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :133
void HttpMessageHandlerRequest__add_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->add_Timeout(value);
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) :133
void HttpMessageHandlerRequest__remove_Timeout_fn(HttpMessageHandlerRequest* __this, uDelegate* value)
{
    __this->remove_Timeout(value);
}

// internal HttpMessageHandlerRequest(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [instance] :22
void HttpMessageHandlerRequest::ctor_(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", ".ctor(Uno.Net.Http.HttpMessageHandler,string,string,Uno.Threading.IDispatcher)");

    if (handler == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("handler")));

    if (::g::Uno::String::op_Equality(method, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("method")));

    if (::g::Uno::String::op_Equality(url, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("url")));

    if (dispatcher == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("dispatcher")));

    method = ::g::Uno::String::ToUpper(uPtr(method));
    _httpRequest = (uObject*)::g::Uno::Net::Http::Implementation::AndroidHttpRequest::New3(this, method, url);
    _httpMessageHandler = handler;
    _method = method;
    _url = url;
    _dispatcher = dispatcher;
    State(1);
}

// public void Abort() [instance] :373
void HttpMessageHandlerRequest::Abort()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Abort()");
    CheckDisposed();

    if (State() >= 5)
        return;

    ::g::Uno::Net::Http::Implementation::IHttpRequest::Abort(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnAborted();
}

// public generated void add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :131
void HttpMessageHandlerRequest::add_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :131
void HttpMessageHandlerRequest::remove_Aborted(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Aborted(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Aborted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Aborted1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private void CheckDisposed() [instance] :73
void HttpMessageHandlerRequest::CheckDisposed()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CheckDisposed()");

    if (_httpRequest == NULL)
        U_THROW(::g::Uno::ObjectDisposedException::New4(uString::Const("HttpMessageHandlerRequest")));
}

// internal void CompleteRequest() [instance] :90
void HttpMessageHandlerRequest::CompleteRequest()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "CompleteRequest()");
    uPtr(_httpMessageHandler)->CompleteRequest(this);
    _httpMessageHandler = NULL;
}

// public void Dispose() [instance] :79
void HttpMessageHandlerRequest::Dispose()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_httpRequest), ::g::Uno::IDisposable_typeof()));
    _httpRequest = NULL;
    _optionalPayloadCache = NULL;
    ::g::Uno::GC::SuppressFinalize(this);
}

// public generated void add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :134
void HttpMessageHandlerRequest::add_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :134
void HttpMessageHandlerRequest::remove_Done(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Done(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Done1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Done1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public void EnableCache(bool enableCache) [instance] :264
void HttpMessageHandlerRequest::EnableCache(bool enableCache)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "EnableCache(bool)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::EnableCache(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), enableCache);
}

// public generated void add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :132
void HttpMessageHandlerRequest::add_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// public generated void remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string> value) [instance] :132
void HttpMessageHandlerRequest::remove_Error(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Error(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>)");
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::g::Uno::Action2_typeof()->MakeType(__type, ::g::Uno::String_typeof(), NULL));
}

// private void FireSetHeadersReceived() [instance] :252
void HttpMessageHandlerRequest::FireSetHeadersReceived()
{
    State(3);
}

// public byte[] GetResponseContentByteArray() [instance] :435
uArray* HttpMessageHandlerRequest::GetResponseContentByteArray()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentByteArray()");
    uArray* ind2;
    CheckDisposed();

    if (HttpResponseType() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uArray::New(::g::Uno::Byte_typeof()->Array(), 0);

    ind2 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentByteArray(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind2 != NULL) ? ind2 : uArray::New(::g::Uno::Byte_typeof()->Array(), 0);
}

// public string GetResponseContentString() [instance] :421
uString* HttpMessageHandlerRequest::GetResponseContentString()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseContentString()");
    uString* ind1;
    CheckDisposed();

    if (HttpResponseType() != 0)
        U_THROW(::g::Uno::Net::Http::InvalidResponseTypeException::New4());

    if ((State() < 4) || (State() > 5))
        return uString::Const("");

    ind1 = ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseContentString(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    return (ind1 != NULL) ? ind1 : uString::Const("");
}

// public string GetResponseHeader(string name) [instance] :398
uString* HttpMessageHandlerRequest::GetResponseHeader(uString* name)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeader(string)");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name);
}

// public string GetResponseHeaders() [instance] :409
uString* HttpMessageHandlerRequest::GetResponseHeaders()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseHeaders()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return uString::Const("");

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseHeaders(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public int GetResponseStatus() [instance] :387
int32_t HttpMessageHandlerRequest::GetResponseStatus()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "GetResponseStatus()");
    CheckDisposed();

    if ((State() < 3) || (State() > 5))
        return 0;

    return ::g::Uno::Net::Http::Implementation::IHttpRequest::GetResponseStatus(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
}

// public Uno.Net.Http.HttpResponseType get_HttpResponseType() [instance] :101
int32_t HttpMessageHandlerRequest::HttpResponseType()
{
    return _responseType;
}

// public void set_HttpResponseType(Uno.Net.Http.HttpResponseType value) [instance] :102
void HttpMessageHandlerRequest::HttpResponseType(int32_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_HttpResponseType(Uno.Net.Http.HttpResponseType)");
    SetResponseType(value);
}

// private bool IsComplete() [instance] :215
bool HttpMessageHandlerRequest::IsComplete()
{
    return State() >= 5;
}

// public string get_Method() [instance] :96
uString* HttpMessageHandlerRequest::Method()
{
    return _method;
}

// internal void OnAborted() [instance] :220
void HttpMessageHandlerRequest::OnAborted()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnAborted()");
    uDelegate* handler = Aborted1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(6, handler, this)));
}

// internal void OnDone() [instance] :241
void HttpMessageHandlerRequest::OnDone()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnDone()");
    uDelegate* handler = Done1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(5, handler, this)));
}

// internal void OnError(string platformspesificErrorMessage) [instance] :227
void HttpMessageHandlerRequest::OnError(uString* platformspesificErrorMessage)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnError(string)");
    HttpMessageHandlerRequest__DispatchClosure1* ret4;
    uDelegate* handler = Error1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure1__Run_fn, (HttpMessageHandlerRequest__DispatchClosure1__New1_fn(HttpMessageHandlerRequest__DispatchClosure1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), uCRef<int32_t>(7), handler, this, platformspesificErrorMessage, &ret4), ret4)));
}

// internal void OnHeadersReceived() [instance] :248
void HttpMessageHandlerRequest::OnHeadersReceived()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnHeadersReceived()");
    ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__FireSetHeadersReceived_fn, this));
}

// internal void OnProgress(int current, int total, bool hasTotal) [instance] :257
void HttpMessageHandlerRequest::OnProgress(int32_t current, int32_t total, bool hasTotal)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnProgress(int,int,bool)");
    uDelegate* handler = Progress1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__ProgressClosure__Run_fn, HttpMessageHandlerRequest__ProgressClosure::New1(4, handler, this, current, total, hasTotal)));
}

// internal void OnStateChanged() [instance] :118
void HttpMessageHandlerRequest::OnStateChanged()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnStateChanged()");

    if (State() > 5)
        return;

    uDelegate* handler = StateChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(this);
}

// internal void OnTimeout() [instance] :234
void HttpMessageHandlerRequest::OnTimeout()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "OnTimeout()");
    uDelegate* handler = Timeout1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(_dispatcher), ::g::Uno::Threading::IDispatcher_typeof()), uDelegate::New(::g::Uno::Action_typeof(), (void*)HttpMessageHandlerRequest__DispatchClosure__Run_fn, HttpMessageHandlerRequest__DispatchClosure::New1(8, handler, this)));
}

// public generated void add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :136
void HttpMessageHandlerRequest::add_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public generated void remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> value) [instance] :136
void HttpMessageHandlerRequest::remove_Progress(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Progress(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool>)");
    Progress1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Progress1, value), ::g::Uno::Action4_typeof()->MakeType(__type, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL));
}

// public void SendAsync() [instance] :360
void HttpMessageHandlerRequest::SendAsync()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync()");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;
    ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    OnStateChanged();
}

// public void SendAsync(byte[] data) [instance] :314
void HttpMessageHandlerRequest::SendAsync1(uArray* data)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync(byte[])");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || (data == NULL)) || (uPtr(data)->Length() == 0))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
    {
        _optionalPayloadCache = data;
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync1(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);
    }

    OnStateChanged();
}

// public void SendAsync(string data) [instance] :342
void HttpMessageHandlerRequest::SendAsync2(uString* data)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SendAsync(string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _state = 2;

    if (((::g::Uno::String::op_Equality(Method(), uString::Const("GET")) || ::g::Uno::String::op_Equality(Method(), uString::Const("HEAD"))) || ::g::Uno::String::op_Equality(data, NULL)) || ::g::Uno::String::op_Equality(data, uString::Const("")))
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()));
    else
        ::g::Uno::Net::Http::Implementation::IHttpRequest::SendAsync2(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), data);

    OnStateChanged();
}

// public void SetHeader(string name, string value) [instance] :276
void HttpMessageHandlerRequest::SetHeader(uString* name, uString* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetHeader(string,string)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    if (!HttpMessageHandlerRequest::IsHeaderValid(name, value))
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Not allowed to set header \""), name), uString::Const("\" on this target."))));

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetHeader(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), name, value);
}

// public void SetResponseType(Uno.Net.Http.HttpResponseType responseType) [instance] :299
void HttpMessageHandlerRequest::SetResponseType(int32_t responseType)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetResponseType(Uno.Net.Http.HttpResponseType)");
    CheckDisposed();

    if (State() >= 4)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    _responseType = responseType;
    uPtr(uAs< ::g::Uno::Net::Http::Implementation::AndroidHttpRequest*>(_httpRequest, ::g::Uno::Net::Http::Implementation::AndroidHttpRequest_typeof()))->SetResponseType1(responseType);
}

// public void SetTimeout(int timeoutInMilliseconds) [instance] :289
void HttpMessageHandlerRequest::SetTimeout(int32_t timeoutInMilliseconds)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "SetTimeout(int)");
    CheckDisposed();

    if (State() != 1)
        U_THROW(::g::Uno::Net::Http::InvalidStateException::New4());

    ::g::Uno::Net::Http::Implementation::IHttpRequest::SetTimeout(uInterface(uPtr(_httpRequest), ::g::Uno::Net::Http::Implementation::IHttpRequest_typeof()), timeoutInMilliseconds);
}

// public Uno.Net.Http.HttpRequestState get_State() [instance] :107
int32_t HttpMessageHandlerRequest::State()
{
    return _state;
}

// private void set_State(Uno.Net.Http.HttpRequestState value) [instance] :108
void HttpMessageHandlerRequest::State(int32_t value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "set_State(Uno.Net.Http.HttpRequestState)");

    if (_state == value)
        return;

    _state = value;
    OnStateChanged();
}

// public generated void add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :135
void HttpMessageHandlerRequest::add_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :135
void HttpMessageHandlerRequest::remove_StateChanged(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_StateChanged(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    StateChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(StateChanged1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :133
void HttpMessageHandlerRequest::add_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "add_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// public generated void remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest> value) [instance] :133
void HttpMessageHandlerRequest::remove_Timeout(uDelegate* value)
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest", "remove_Timeout(Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>)");
    Timeout1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Timeout1, value), ::g::Uno::Action1_typeof()->MakeType(__type, NULL));
}

// private static bool IsHeaderValid(string name, string value) [static] :450
bool HttpMessageHandlerRequest::IsHeaderValid(uString* name, uString* value)
{
    return true;
}

// internal HttpMessageHandlerRequest New(Uno.Net.Http.HttpMessageHandler handler, string method, string url, Uno.Threading.IDispatcher dispatcher) [static] :22
HttpMessageHandlerRequest* HttpMessageHandlerRequest::New1(::g::Uno::Net::Http::HttpMessageHandler* handler, uString* method, uString* url, uObject* dispatcher)
{
    HttpMessageHandlerRequest* obj3 = (HttpMessageHandlerRequest*)uNew(HttpMessageHandlerRequest_typeof());
    obj3->ctor_(handler, method, url, dispatcher);
    return obj3;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpRequestState.uno
// -------------------------------------------------------------------------------------------

// public enum HttpRequestState :3
uEnumType* HttpRequestState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpRequestState", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Opened", 1LL,
        "Sent", 2LL,
        "HeadersReceived", 3LL,
        "Loading", 4LL,
        "Done", 5LL,
        "Aborted", 6LL,
        "Errored", 7LL,
        "TimedOut", 8LL,
        "Unsent", 0LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpResponseType.uno
// -------------------------------------------------------------------------------------------

// public enum HttpResponseType :3
uEnumType* HttpResponseType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Net.Http.HttpResponseType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", -1LL,
        "String", 0LL,
        "ByteArray", 1LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpStatusReasonPhrase.uno
// -------------------------------------------------------------------------------------------------

// public static class HttpStatusReasonPhrase :5
// {
// static generated HttpStatusReasonPhrase() :5
static void HttpStatusReasonPhrase__cctor__fn(uType* __type)
{
    ::g::Uno::Collections::Dictionary* collection5;
    ::g::Uno::Collections::Dictionary* collection4;
    ::g::Uno::Collections::Dictionary* collection3;
    ::g::Uno::Collections::Dictionary* collection2;
    ::g::Uno::Collections::Dictionary* collection1;
    HttpStatusReasonPhrase::Informational_ = (uObject*)(collection5 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int32_t>(100), ::STRINGS[2/*"Continue"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection5), uCRef<int32_t>(101), ::STRINGS[3/*"Switching P...*/]), collection5);
    HttpStatusReasonPhrase::Success_ = (uObject*)(collection4 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(200), ::STRINGS[4/*"OK"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(201), ::STRINGS[5/*"Created"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(202), ::STRINGS[6/*"Accepted"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(203), ::STRINGS[7/*"Non-Authori...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(204), ::STRINGS[8/*"No Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(205), ::STRINGS[9/*"Reset Content"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection4), uCRef<int32_t>(206), ::STRINGS[10/*"Partial Con...*/]), collection4);
    HttpStatusReasonPhrase::Redirection_ = (uObject*)(collection3 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(300), ::STRINGS[11/*"Multiple Ch...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(301), ::STRINGS[12/*"Moved Perma...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(302), ::STRINGS[13/*"Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(303), ::STRINGS[14/*"See Other"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(304), ::STRINGS[15/*"Not Modified"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(305), ::STRINGS[16/*"Use Proxy"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection3), uCRef<int32_t>(307), ::STRINGS[17/*"Temporary R...*/]), collection3);
    HttpStatusReasonPhrase::ClientErrors_ = (uObject*)(collection2 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(400), ::STRINGS[18/*"Bad Request"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(401), ::STRINGS[19/*"Unauthorized"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(402), ::STRINGS[20/*"Payment Req...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(403), ::STRINGS[21/*"Forbidden"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(404), ::STRINGS[22/*"Not Found"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(405), ::STRINGS[23/*"Method Not ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(406), ::STRINGS[24/*"Not Accepta...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(407), ::STRINGS[25/*"Proxy Authe...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(408), ::STRINGS[26/*"Request Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(409), ::STRINGS[27/*"Conflict"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(410), ::STRINGS[28/*"Gone"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(411), ::STRINGS[29/*"Length Requ...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(412), ::STRINGS[30/*"Preconditio...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(413), ::STRINGS[31/*"Request Ent...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(414), ::STRINGS[32/*"Request-URI...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(415), ::STRINGS[33/*"Unsupported...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(416), ::STRINGS[34/*"Requested r...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection2), uCRef<int32_t>(417), ::STRINGS[35/*"Expectation...*/]), collection2);
    HttpStatusReasonPhrase::ServerErrors_ = (uObject*)(collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, string>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(500), ::STRINGS[36/*"Internal Se...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(501), ::STRINGS[37/*"Not Impleme...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(502), ::STRINGS[38/*"Bad Gateway"*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(503), ::STRINGS[39/*"Service Una...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(504), ::STRINGS[40/*"Gateway Tim...*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), uCRef<int32_t>(505), ::STRINGS[41/*"HTTP Versio...*/]), collection1);
}

static void HttpStatusReasonPhrase_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Continue");
    ::STRINGS[3] = uString::Const("Switching Protocols");
    ::STRINGS[4] = uString::Const("OK");
    ::STRINGS[5] = uString::Const("Created");
    ::STRINGS[6] = uString::Const("Accepted");
    ::STRINGS[7] = uString::Const("Non-Authoritative Information");
    ::STRINGS[8] = uString::Const("No Content");
    ::STRINGS[9] = uString::Const("Reset Content");
    ::STRINGS[10] = uString::Const("Partial Content");
    ::STRINGS[11] = uString::Const("Multiple Choices");
    ::STRINGS[12] = uString::Const("Moved Permanently");
    ::STRINGS[13] = uString::Const("Found");
    ::STRINGS[14] = uString::Const("See Other");
    ::STRINGS[15] = uString::Const("Not Modified");
    ::STRINGS[16] = uString::Const("Use Proxy");
    ::STRINGS[17] = uString::Const("Temporary Redirect");
    ::STRINGS[18] = uString::Const("Bad Request");
    ::STRINGS[19] = uString::Const("Unauthorized");
    ::STRINGS[20] = uString::Const("Payment Required");
    ::STRINGS[21] = uString::Const("Forbidden");
    ::STRINGS[22] = uString::Const("Not Found");
    ::STRINGS[23] = uString::Const("Method Not Allowed");
    ::STRINGS[24] = uString::Const("Not Acceptable");
    ::STRINGS[25] = uString::Const("Proxy Authentication Required");
    ::STRINGS[26] = uString::Const("Request Time-out");
    ::STRINGS[27] = uString::Const("Conflict");
    ::STRINGS[28] = uString::Const("Gone");
    ::STRINGS[29] = uString::Const("Length Required");
    ::STRINGS[30] = uString::Const("Precondition Failed");
    ::STRINGS[31] = uString::Const("Request Entity Too Large");
    ::STRINGS[32] = uString::Const("Request-URI Too Large");
    ::STRINGS[33] = uString::Const("Unsupported Media Type");
    ::STRINGS[34] = uString::Const("Requested range not satisfiable");
    ::STRINGS[35] = uString::Const("Expectation Failed");
    ::STRINGS[36] = uString::Const("Internal Server Error");
    ::STRINGS[37] = uString::Const("Not Implemented");
    ::STRINGS[38] = uString::Const("Bad Gateway");
    ::STRINGS[39] = uString::Const("Service Unavailable");
    ::STRINGS[40] = uString::Const("Gateway Time-out");
    ::STRINGS[41] = uString::Const("HTTP Version not supported");
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IDictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Informational_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Success_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::Redirection_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ClientErrors_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/], (uintptr_t)&HttpStatusReasonPhrase::ServerErrors_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("ClientErrors", 3),
        new uField("Informational", 0),
        new uField("Redirection", 2),
        new uField("ServerErrors", 4),
        new uField("Success", 1));
    type->Reflection.SetFunctions(1,
        new uFunction("GetFromStatusCode", NULL, (void*)HttpStatusReasonPhrase__GetFromStatusCode_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Uno::Int_typeof()));
}

uClassType* HttpStatusReasonPhrase_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpStatusReasonPhrase", options);
    type->fp_build_ = HttpStatusReasonPhrase_build;
    type->fp_cctor_ = HttpStatusReasonPhrase__cctor__fn;
    return type;
}

// public static string GetFromStatusCode(int statusCode) :72
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int32_t* statusCode, uString** __retval)
{
    *__retval = HttpStatusReasonPhrase::GetFromStatusCode(*statusCode);
}

uSStrong<uObject*> HttpStatusReasonPhrase::Informational_;
uSStrong<uObject*> HttpStatusReasonPhrase::Success_;
uSStrong<uObject*> HttpStatusReasonPhrase::Redirection_;
uSStrong<uObject*> HttpStatusReasonPhrase::ClientErrors_;
uSStrong<uObject*> HttpStatusReasonPhrase::ServerErrors_;

// public static string GetFromStatusCode(int statusCode) [static] :72
uString* HttpStatusReasonPhrase::GetFromStatusCode(int32_t statusCode)
{
    uStackFrame __("Uno.Net.Http.HttpStatusReasonPhrase", "GetFromStatusCode(int)");
    HttpStatusReasonPhrase_typeof()->Init();
    bool ret6;
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    uString* description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Informational_), ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret6), ret6))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Success_), ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret7), ret7))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::Redirection_), ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret8), ret8))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ClientErrors_), ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret9), ret9))
        return description;

    if ((::g::Uno::Collections::IDictionary::TryGetValue_ex(uInterface(uPtr(HttpStatusReasonPhrase::ServerErrors_), ::TYPES[2/*Uno.Collections.IDictionary<int, string>*/]), uCRef<int32_t>(statusCode), (void**)(&description), &ret10), ret10))
        return description;

    return NULL;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class InvalidResponseTypeException :496
// {
static void InvalidResponseTypeException_build(uType* type)
{
    ::STRINGS[42] = uString::Const("Response type is invalid.");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvalidResponseTypeException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* InvalidResponseTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidResponseTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidResponseTypeException", options);
    type->fp_build_ = InvalidResponseTypeException_build;
    type->fp_ctor_ = (void*)InvalidResponseTypeException__New4_fn;
    return type;
}

// public InvalidResponseTypeException() :498
void InvalidResponseTypeException__ctor_3_fn(InvalidResponseTypeException* __this)
{
    __this->ctor_3();
}

// public InvalidResponseTypeException New() :498
void InvalidResponseTypeException__New4_fn(InvalidResponseTypeException** __retval)
{
    *__retval = InvalidResponseTypeException::New4();
}

// public InvalidResponseTypeException() [instance] :498
void InvalidResponseTypeException::ctor_3()
{
    ctor_1(::STRINGS[42/*"Response ty...*/]);
}

// public InvalidResponseTypeException New() [static] :498
InvalidResponseTypeException* InvalidResponseTypeException::New4()
{
    InvalidResponseTypeException* obj1 = (InvalidResponseTypeException*)uNew(InvalidResponseTypeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class InvalidStateException :502
// {
static void InvalidStateException_build(uType* type)
{
    ::STRINGS[43] = uString::Const("The object is in an invalid state.");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidStateException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidStateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidStateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Net.Http.InvalidStateException", options);
    type->fp_build_ = InvalidStateException_build;
    type->fp_ctor_ = (void*)InvalidStateException__New4_fn;
    return type;
}

// public InvalidStateException() :504
void InvalidStateException__ctor_3_fn(InvalidStateException* __this)
{
    __this->ctor_3();
}

// public InvalidStateException(string message) :507
void InvalidStateException__ctor_4_fn(InvalidStateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidStateException New() :504
void InvalidStateException__New4_fn(InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New4();
}

// public InvalidStateException New(string message) :507
void InvalidStateException__New5_fn(uString* message, InvalidStateException** __retval)
{
    *__retval = InvalidStateException::New5(message);
}

// public InvalidStateException() [instance] :504
void InvalidStateException::ctor_3()
{
    ctor_1(::STRINGS[43/*"The object ...*/]);
}

// public InvalidStateException(string message) [instance] :507
void InvalidStateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidStateException New() [static] :504
InvalidStateException* InvalidStateException::New4()
{
    InvalidStateException* obj1 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidStateException New(string message) [static] :507
InvalidStateException* InvalidStateException::New5(uString* message)
{
    InvalidStateException* obj2 = (InvalidStateException*)uNew(InvalidStateException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandlerRequest.uno
// ----------------------------------------------------------------------------------------------------

// private sealed class HttpMessageHandlerRequest.ProgressClosure :186
// {
static void HttpMessageHandlerRequest__ProgressClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action4_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), NULL), offsetof(HttpMessageHandlerRequest__ProgressClosure, _action), 0,
        ::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), offsetof(HttpMessageHandlerRequest__ProgressClosure, _request), 0,
        ::g::Uno::Int_typeof(), offsetof(HttpMessageHandlerRequest__ProgressClosure, _current), 0,
        ::g::Uno::Int_typeof(), offsetof(HttpMessageHandlerRequest__ProgressClosure, _total), 0,
        ::g::Uno::Bool_typeof(), offsetof(HttpMessageHandlerRequest__ProgressClosure, _hasTotal), 0,
        ::g::Uno::Net::Http::HttpRequestState_typeof(), offsetof(HttpMessageHandlerRequest__ProgressClosure, _state), 0);
}

uType* HttpMessageHandlerRequest__ProgressClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(HttpMessageHandlerRequest__ProgressClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", options);
    type->fp_build_ = HttpMessageHandlerRequest__ProgressClosure_build;
    return type;
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :195
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t* current, int32_t* total, bool* hasTotal)
{
    __this->ctor_(*state, action, request, *current, *total, *hasTotal);
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) :195
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int32_t* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t* current, int32_t* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval)
{
    *__retval = HttpMessageHandlerRequest__ProgressClosure::New1(*state, action, request, *current, *total, *hasTotal);
}

// public void Run() :205
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this)
{
    __this->Run();
}

// public ProgressClosure(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [instance] :195
void HttpMessageHandlerRequest__ProgressClosure::ctor_(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t current, int32_t total, bool hasTotal)
{
    _action = action;
    _request = request;
    _current = current;
    _total = total;
    _hasTotal = hasTotal;
    _state = state;
}

// public void Run() [instance] :205
void HttpMessageHandlerRequest__ProgressClosure::Run()
{
    uStackFrame __("Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure", "Run()");

    if (uPtr(_request)->IsComplete())
        return;

    uPtr(_request)->State(_state);
    uPtr(_action)->Invoke(4, (::g::Uno::Net::Http::HttpMessageHandlerRequest*)_request, uCRef<int32_t>(_current), uCRef<int32_t>(_total), uCRef(_hasTotal));
}

// public ProgressClosure New(Uno.Net.Http.HttpRequestState state, Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, int, int, bool> action, Uno.Net.Http.HttpMessageHandlerRequest request, int current, int total, bool hasTotal) [static] :195
HttpMessageHandlerRequest__ProgressClosure* HttpMessageHandlerRequest__ProgressClosure::New1(int32_t state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int32_t current, int32_t total, bool hasTotal)
{
    HttpMessageHandlerRequest__ProgressClosure* obj1 = (HttpMessageHandlerRequest__ProgressClosure*)uNew(HttpMessageHandlerRequest__ProgressClosure_typeof());
    obj1->ctor_(state, action, request, current, total, hasTotal);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Uno.Net.Http\1.8.0\HttpMessageHandler.uno
// ---------------------------------------------------------------------------------------------

// internal static class HttpMessageHandler.StaticData :10
// {
// static generated StaticData() :10
static void HttpMessageHandler__StaticData__cctor__fn(uType* __type)
{
    HttpMessageHandler__StaticData::_syncLock_ = ::g::Uno::Object::New();
}

static void HttpMessageHandler__StaticData_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), (uintptr_t)&HttpMessageHandler__StaticData::_syncLock_, uFieldFlagsStatic);
}

uClassType* HttpMessageHandler__StaticData_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Net.Http.HttpMessageHandler.StaticData", options);
    type->fp_build_ = HttpMessageHandler__StaticData_build;
    type->fp_cctor_ = HttpMessageHandler__StaticData__cctor__fn;
    return type;
}

// internal static void DecrementPendingRequests() :27
void HttpMessageHandler__StaticData__DecrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::DecrementPendingRequests();
}

// internal static void IncrementPendingRequests() :15
void HttpMessageHandler__StaticData__IncrementPendingRequests_fn()
{
    HttpMessageHandler__StaticData::IncrementPendingRequests();
}

uSStrong<uObject*> HttpMessageHandler__StaticData::_syncLock_;

// internal static void DecrementPendingRequests() [static] :27
void HttpMessageHandler__StaticData::DecrementPendingRequests()
{
    HttpMessageHandler__StaticData_typeof()->Init();
}

// internal static void IncrementPendingRequests() [static] :15
void HttpMessageHandler__StaticData::IncrementPendingRequests()
{
    HttpMessageHandler__StaticData_typeof()->Init();
}
// }

}}}} // ::g::Uno::Net::Http
