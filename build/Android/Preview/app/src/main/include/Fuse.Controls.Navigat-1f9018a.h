// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Navigation/1.7.2/Navigator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Navigator.NavPage :463
// {
uType* Navigator__NavPage_typeof();
void Navigator__NavPage__ctor__fn(Navigator__NavPage* __this);
void Navigator__NavPage__New1_fn(Navigator__NavPage** __retval);

struct Navigator__NavPage : uObject
{
    uStrong< ::g::Fuse::Visual*> Visual;
    uStrong< ::g::Fuse::Navigation::RouterPage*> RouterPage;

    void ctor_();
    static Navigator__NavPage* New1();
};
// }

}}} // ::g::Fuse::Controls
