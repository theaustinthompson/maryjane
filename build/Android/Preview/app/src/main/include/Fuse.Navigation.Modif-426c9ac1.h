// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.8.1/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.Route-a9d98f4f.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct ModifyRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class ModifyRouteCommand :149
// {
::g::Fuse::Navigation::RouteModificationCommand_type* ModifyRouteCommand_typeof();
void ModifyRouteCommand__ctor_3_fn(ModifyRouteCommand* __this);
void ModifyRouteCommand__New1_fn(ModifyRouteCommand** __retval);
void ModifyRouteCommand__ProcessArguments_fn(ModifyRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct ModifyRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
    void ctor_3();
    static ModifyRouteCommand* New1();
};
// }

}}} // ::g::Fuse::Navigation
