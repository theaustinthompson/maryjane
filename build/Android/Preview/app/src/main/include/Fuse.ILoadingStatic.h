// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.7.2/Resources/ILoading.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct ILoadingStatic;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// internal static class ILoadingStatic :14
// {
uClassType* ILoadingStatic_typeof();

struct ILoadingStatic : uObject
{
    static ::g::Uno::UX::Selector IsLoadingName_;
    static ::g::Uno::UX::Selector& IsLoadingName() { return ILoadingStatic_typeof()->Init(), IsLoadingName_; }
};
// }

}} // ::g::Fuse
