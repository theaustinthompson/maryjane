// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.4/Shapes/Path.Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.SegmentedShape.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.LineSegment.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Path;}}}
namespace g{namespace Fuse{namespace Controls{struct Path__Positioning;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Path :8
// {
::g::Fuse::Controls::SegmentedShape_type* Path_typeof();
void Path__ctor_8_fn(Path* __this);
void Path__CalcNaturalExtents_fn(Path* __this, ::g::Uno::Rect* __retval);
void Path__CalcPositioning_fn(Path* __this, Path__Positioning* __retval);
void Path__CalcShapeExtents_fn(Path* __this, ::g::Uno::Rect* __retval);
void Path__get_ContentAlignment_fn(Path* __this, int32_t* __retval);
void Path__set_ContentAlignment_fn(Path* __this, int32_t* value);
void Path__get_Data_fn(Path* __this, uString** __retval);
void Path__set_Data_fn(Path* __this, uString* value);
void Path__get_Extents_fn(Path* __this, ::g::Uno::Float4* __retval);
void Path__set_Extents_fn(Path* __this, ::g::Uno::Float4* value);
void Path__get_FillRule_fn(Path* __this, int32_t* __retval);
void Path__set_FillRule_fn(Path* __this, int32_t* value);
void Path__get_FitMode_fn(Path* __this, int32_t* __retval);
void Path__set_FitMode_fn(Path* __this, int32_t* value);
void Path__GetContentSize_fn(Path* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Path__GetDesiredContentSize_fn(Path* __this, ::g::Uno::Float2* __retval);
void Path__GetSegments_fn(Path* __this, uObject** __retval);
void Path__InvalidateSurfacePath_fn(Path* __this);
void Path__New3_fn(Path** __retval);
void Path__OnShapeLayoutChanged_fn(Path* __this);
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval);
void Path__get_StretchDirection_fn(Path* __this, int32_t* __retval);
void Path__set_StretchDirection_fn(Path* __this, int32_t* value);
void Path__get_StretchMode_fn(Path* __this, int32_t* __retval);
void Path__set_StretchMode_fn(Path* __this, int32_t* value);

struct Path : ::g::Fuse::Controls::SegmentedShape
{
    uStrong< ::g::Uno::Collections::List*> _segments1;
    uStrong<uString*> _data;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;
    int32_t _fillRule;
    int32_t _fitMode;
    ::g::Uno::Float4 _extents;

    void ctor_8();
    ::g::Uno::Rect CalcNaturalExtents();
    Path__Positioning CalcPositioning();
    int32_t ContentAlignment();
    void ContentAlignment(int32_t value);
    uString* Data();
    void Data(uString* value);
    ::g::Uno::Float4 Extents();
    void Extents(::g::Uno::Float4 value);
    int32_t FillRule();
    void FillRule(int32_t value);
    int32_t FitMode();
    void FitMode(int32_t value);
    ::g::Uno::Float2 GetDesiredContentSize();
    void OnShapeLayoutChanged();
    ::g::Fuse::Internal::SizingContainer* Sizing();
    int32_t StretchDirection();
    void StretchDirection(int32_t value);
    int32_t StretchMode();
    void StretchMode(int32_t value);
    static Path* New3();
};
// }

}}} // ::g::Fuse::Controls
