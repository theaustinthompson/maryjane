// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.7.2/RouterPage.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPageRoute;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class RouterPageRoute :145
// {
uType* RouterPageRoute_typeof();
void RouterPageRoute__ctor__fn(RouterPageRoute* __this, ::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub);
void RouterPageRoute__Append_fn(RouterPageRoute* __this, RouterPageRoute* subRoute, RouterPageRoute** __retval);
void RouterPageRoute__Convert_fn(::g::Fuse::Navigation::Route* r, RouterPageRoute** __retval);
void RouterPageRoute__Format_fn(RouterPageRoute* __this, uString** __retval);
void RouterPageRoute__New1_fn(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub, RouterPageRoute** __retval);
void RouterPageRoute__SubDepth_fn(RouterPageRoute* __this, int32_t* count, RouterPageRoute** __retval);
void RouterPageRoute__ToRoute_fn(RouterPageRoute* __this, ::g::Fuse::Navigation::Route** __retval);
void RouterPageRoute__Up_fn(RouterPageRoute* __this, RouterPageRoute** __retval);

struct RouterPageRoute : uObject
{
    uStrong< ::g::Fuse::Navigation::RouterPage*> RouterPage;
    uStrong<RouterPageRoute*> SubRoute;

    void ctor_(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub);
    RouterPageRoute* Append(RouterPageRoute* subRoute);
    uString* Format();
    RouterPageRoute* SubDepth(int32_t count);
    ::g::Fuse::Navigation::Route* ToRoute();
    RouterPageRoute* Up();
    static RouterPageRoute* Convert(::g::Fuse::Navigation::Route* r);
    static RouterPageRoute* New1(::g::Fuse::Navigation::RouterPage* routerPage, RouterPageRoute* sub);
};
// }

}}} // ::g::Fuse::Navigation
