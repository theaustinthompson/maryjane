// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.7.2/Layouts/Layout.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layouts;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public static class Layouts :226
// {
uClassType* Layouts_typeof();

struct Layouts : uObject
{
    static uSStrong< ::g::Fuse::Layouts::Layout*> Default_;
    static uSStrong< ::g::Fuse::Layouts::Layout*>& Default() { return Layouts_typeof()->Init(), Default_; }
};
// }

}}} // ::g::Fuse::Layouts
