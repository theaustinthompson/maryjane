// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.4/TextControls/FallbackTextRenderer/RectExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct RectExtensions;}}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal static class RectExtensions :5
// {
uClassType* RectExtensions_typeof();
void RectExtensions__MoveRectInsideRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);
void RectExtensions__MoveRectToContainRect_fn(::g::Uno::Rect* a, ::g::Uno::Rect* b, ::g::Uno::Rect* __retval);

struct RectExtensions : uObject
{
    static ::g::Uno::Rect MoveRectInsideRect(::g::Uno::Rect a, ::g::Uno::Rect b);
    static ::g::Uno::Rect MoveRectToContainRect(::g::Uno::Rect a, ::g::Uno::Rect b);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
