// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.4/TextControls/FuseTextRenderer/CacheState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FuseTex-2d99832d.h>
#include <Fuse.Controls.FuseTex-7f6678da.h>
#include <Fuse.Controls.FuseTex-a0313cf6.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct LogicalRunsCached;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct MeasurementsCached;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal sealed class MeasurementsCached :237
// {
::g::Fuse::Controls::FuseTextRenderer::CacheState_type* MeasurementsCached_typeof();
void MeasurementsCached__ctor_1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements);
void MeasurementsCached__GetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void MeasurementsCached__GetRenderer1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval);
void MeasurementsCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, MeasurementsCached** __retval);
void MeasurementsCached__TryGetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval);

struct MeasurementsCached : ::g::Fuse::Controls::FuseTextRenderer::CacheState
{
    uStrong< ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached*> _previousState;
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData _data;
    uStrong< ::g::Uno::Collections::List*> _wrappedRuns;
    ::g::Fuse::Controls::FuseTextRenderer::Tolerances _tolerances;
    ::g::Uno::Float2 _measurements;

    void ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements);
    static MeasurementsCached* New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements);
};
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
