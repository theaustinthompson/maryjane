// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.8.1/Shapes/Curve.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.SegmentedShape.h>
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
namespace g{namespace Fuse{namespace Controls{struct Curve;}}}
namespace g{namespace Fuse{namespace Controls{struct CurvePoint;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegment;}}}
namespace g{namespace Fuse{namespace Drawing{struct LineSegments;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Curve :242
// {
::g::Fuse::Controls::SegmentedShape_type* Curve_typeof();
void Curve__ctor_8_fn(Curve* __this);
void Curve__get_Bias_fn(Curve* __this, float* __retval);
void Curve__set_Bias_fn(Curve* __this, float* value);
void Curve__CalcShapeExtents_fn(Curve* __this, ::g::Uno::Rect* __retval);
void Curve__get_Close_fn(Curve* __this, int32_t* __retval);
void Curve__set_Close_fn(Curve* __this, int32_t* value);
void Curve__get_Continuity_fn(Curve* __this, float* __retval);
void Curve__set_Continuity_fn(Curve* __this, float* value);
void Curve__get_Extrude_fn(Curve* __this, int32_t* __retval);
void Curve__set_Extrude_fn(Curve* __this, int32_t* value);
void Curve__ExtrudePoint_fn(Curve* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* __retval);
void Curve__get_ExtrudeTo_fn(Curve* __this, float* __retval);
void Curve__set_ExtrudeTo_fn(Curve* __this, float* value);
void Curve__GetSegments_fn(Curve* __this, uObject** __retval);
void Curve__InvalidateSurfacePath_fn(Curve* __this);
void Curve__New3_fn(Curve** __retval);
void Curve__OnChildAdded_fn(Curve* __this, ::g::Fuse::Node* elm);
void Curve__OnChildRemoved_fn(Curve* __this, ::g::Fuse::Node* elm);
void Curve__OnRooted_fn(Curve* __this);
void Curve__OnUnrooted_fn(Curve* __this);
void Curve__ResetLines_fn(Curve* __this);
void Curve__get_Style_fn(Curve* __this, int32_t* __retval);
void Curve__set_Style_fn(Curve* __this, int32_t* value);
void Curve__get_Tension_fn(Curve* __this, float* __retval);
void Curve__set_Tension_fn(Curve* __this, float* value);
void Curve__UnoUXIPropertyListenerOnPropertyChanged_fn(Curve* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Curve__WrapPointsIndex_fn(Curve* __this, int32_t* a, int32_t* __retval);

struct Curve : ::g::Fuse::Controls::SegmentedShape
{
    uStrong< ::g::Uno::Collections::List*> _points;
    float _tension;
    float _bias;
    float _continuity;
    int32_t _style;
    int32_t _close;
    int32_t _extrude;
    float _extrudeTo;
    uStrong< ::g::Fuse::Drawing::LineSegments*> _segments1;

    void ctor_8();
    float Bias();
    void Bias(float value);
    int32_t Close();
    void Close(int32_t value);
    float Continuity();
    void Continuity(float value);
    int32_t Extrude();
    void Extrude(int32_t value);
    ::g::Uno::Float2 ExtrudePoint(::g::Uno::Float2 pt);
    float ExtrudeTo();
    void ExtrudeTo(float value);
    void ResetLines();
    int32_t Style();
    void Style(int32_t value);
    float Tension();
    void Tension(float value);
    int32_t WrapPointsIndex(int32_t a);
    static Curve* New3();
};
// }

}}} // ::g::Fuse::Controls
