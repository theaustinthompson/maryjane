// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.4/AppBase.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct UnhandledExceptionArgs;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public sealed class UnhandledExceptionArgs :20
// {
uType* UnhandledExceptionArgs_typeof();
void UnhandledExceptionArgs__ctor_1_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* e);
void UnhandledExceptionArgs__get_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception** __retval);
void UnhandledExceptionArgs__set_Exception_fn(UnhandledExceptionArgs* __this, ::g::Uno::Exception* value);
void UnhandledExceptionArgs__get_IsHandled_fn(UnhandledExceptionArgs* __this, bool* __retval);
void UnhandledExceptionArgs__set_IsHandled_fn(UnhandledExceptionArgs* __this, bool* value);
void UnhandledExceptionArgs__New2_fn(::g::Uno::Exception* e, UnhandledExceptionArgs** __retval);

struct UnhandledExceptionArgs : ::g::Uno::EventArgs
{
    uStrong< ::g::Uno::Exception*> _Exception;
    bool _IsHandled;

    void ctor_1(::g::Uno::Exception* e);
    ::g::Uno::Exception* Exception();
    void Exception(::g::Uno::Exception* value);
    bool IsHandled();
    void IsHandled(bool value);
    static UnhandledExceptionArgs* New2(::g::Uno::Exception* e);
};
// }

}} // ::g::Fuse
