// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.8.1/Router.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Router__GetHistoryAt;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPageRoute;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class Router.GetHistoryAt :734
// {
uType* Router__GetHistoryAt_typeof();
void Router__GetHistoryAt__ctor__fn(Router__GetHistoryAt* __this);
void Router__GetHistoryAt__HistoryAction_fn(Router__GetHistoryAt* __this, ::g::Uno::Collections::List* stack, bool* __retval);
void Router__GetHistoryAt__New1_fn(Router__GetHistoryAt** __retval);

struct Router__GetHistoryAt : uObject
{
    int32_t At;
    uStrong< ::g::Fuse::Navigation::RouterPageRoute*> Result;

    void ctor_();
    bool HistoryAction(::g::Uno::Collections::List* stack);
    static Router__GetHistoryAt* New1();
};
// }

}}} // ::g::Fuse::Navigation
