// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.8.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewExtensions;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewExtensions :160
// {
uClassType* ViewExtensions_typeof();
void ViewExtensions__GetNativeHandle_fn(uObject* view, ::g::Java::Object** __retval);

struct ViewExtensions : uObject
{
    static ::g::Java::Object* GetNativeHandle(uObject* view);
};
// }

}}}} // ::g::Fuse::Controls::Native
