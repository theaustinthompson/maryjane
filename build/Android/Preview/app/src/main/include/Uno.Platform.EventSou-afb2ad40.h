// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Platform/EventSources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace EventSources{struct InterAppInvoke;}}}}

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// public static class InterAppInvoke :7
// {
uClassType* InterAppInvoke_typeof();
void InterAppInvoke__DispatchDelayedUri_fn(int32_t* state);
void InterAppInvoke__OnReceivedURI_fn(uString* Uri);
void InterAppInvoke__add_ReceivedURI_fn(uDelegate* value);
void InterAppInvoke__remove_ReceivedURI_fn(uDelegate* value);

struct InterAppInvoke : uObject
{
    static uSStrong<uString*> DelayedUri_;
    static uSStrong<uString*>& DelayedUri() { return InterAppInvoke_typeof()->Init(), DelayedUri_; }
    static uSStrong<uDelegate*> ReceivedURI1_;
    static uSStrong<uDelegate*>& ReceivedURI1() { return InterAppInvoke_typeof()->Init(), ReceivedURI1_; }

    static void DispatchDelayedUri(int32_t state);
    static void OnReceivedURI(uString* Uri);
    static void add_ReceivedURI(uDelegate* value);
    static void remove_ReceivedURI(uDelegate* value);
};
// }

}}}} // ::g::Uno::Platform::EventSources
