// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Elements/1.8.1/Element.Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public static class TransformOrigins :46
// {
uClassType* TransformOrigins_typeof();

struct TransformOrigins : uObject
{
    static uSStrong<uObject*> TopLeft_;
    static uSStrong<uObject*>& TopLeft() { return TransformOrigins_typeof()->Init(), TopLeft_; }
    static uSStrong<uObject*> Center_;
    static uSStrong<uObject*>& Center() { return TransformOrigins_typeof()->Init(), Center_; }
    static uSStrong<uObject*> Anchor_;
    static uSStrong<uObject*>& Anchor() { return TransformOrigins_typeof()->Init(), Anchor_; }
    static uSStrong<uObject*> HorizontalBoxCenter_;
    static uSStrong<uObject*>& HorizontalBoxCenter() { return TransformOrigins_typeof()->Init(), HorizontalBoxCenter_; }
    static uSStrong<uObject*> VerticalBoxCenter_;
    static uSStrong<uObject*>& VerticalBoxCenter() { return TransformOrigins_typeof()->Init(), VerticalBoxCenter_; }
};
// }

}}} // ::g::Fuse::Elements
