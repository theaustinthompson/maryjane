// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.8.1/Shapes/Star.Surface.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Star;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Star :8
// {
::g::Fuse::Controls::Shape_type* Star_typeof();
void Star__ctor_7_fn(Star* __this);
void Star__CreateSurfacePath_fn(Star* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Star__New3_fn(Star** __retval);
void Star__get_Points_fn(Star* __this, int32_t* __retval);
void Star__set_Points_fn(Star* __this, int32_t* value);
void Star__get_Ratio_fn(Star* __this, float* __retval);
void Star__set_Ratio_fn(Star* __this, float* value);
void Star__get_RotationDegrees_fn(Star* __this, float* __retval);
void Star__set_RotationDegrees_fn(Star* __this, float* value);
void Star__get_RotationRadians_fn(Star* __this, float* __retval);
void Star__get_RoundRatio_fn(Star* __this, float* __retval);
void Star__set_RoundRatio_fn(Star* __this, float* value);

struct Star : ::g::Fuse::Controls::Shape
{
    int32_t _points;
    float _ratio;
    float _roundRatio;
    float _degrees;

    void ctor_7();
    int32_t Points();
    void Points(int32_t value);
    float Ratio();
    void Ratio(float value);
    float RotationDegrees();
    void RotationDegrees(float value);
    float RotationRadians();
    float RoundRatio();
    void RoundRatio(float value);
    static Star* New3();
};
// }

}}} // ::g::Fuse::Controls
