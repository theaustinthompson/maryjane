// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.8.1/Shapes/RegularPolygon.Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct RegularPolygon;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class RegularPolygon :8
// {
::g::Fuse::Controls::Shape_type* RegularPolygon_typeof();
void RegularPolygon__ctor_7_fn(RegularPolygon* __this);
void RegularPolygon__CreateSurfacePath_fn(RegularPolygon* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void RegularPolygon__New3_fn(RegularPolygon** __retval);
void RegularPolygon__get_Sides_fn(RegularPolygon* __this, int32_t* __retval);
void RegularPolygon__set_Sides_fn(RegularPolygon* __this, int32_t* value);

struct RegularPolygon : ::g::Fuse::Controls::Shape
{
    int32_t _sides;

    void ctor_7();
    int32_t Sides();
    void Sides(int32_t value);
    static RegularPolygon* New3();
};
// }

}}} // ::g::Fuse::Controls
