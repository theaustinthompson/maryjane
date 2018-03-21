// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls/1.7.4/Viewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.IViewport.h>
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
namespace g{namespace Fuse{namespace Elements{struct Viewport;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class Viewport :47
// {
struct Viewport_type : ::g::Fuse::Elements::Element_type
{
    ::g::Fuse::IViewport interface17;
    ::g::Fuse::IRenderViewport interface18;
    ::g::Fuse::ICommonViewport interface19;
};

Viewport_type* Viewport_typeof();
void Viewport__ctor_4_fn(Viewport* __this);
void Viewport__ArrangePaddingBox_fn(Viewport* __this, ::g::Fuse::LayoutParams* lp);
void Viewport__CalcAreChildrenFlat_fn(Viewport* __this, bool* __retval);
void Viewport__CalcRenderBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__get_CullFace_fn(Viewport* __this, int32_t* __retval);
void Viewport__set_CullFace_fn(Viewport* __this, int32_t* value);
void Viewport__DrawWithChildren_fn(Viewport* __this, ::g::Fuse::DrawContext* dc);
void Viewport__get_Frustum_fn(Viewport* __this, uObject** __retval);
void Viewport__set_Frustum_fn(Viewport* __this, uObject* value);
void Viewport__get_FrustumViewport_fn(Viewport* __this, ::g::Fuse::FrustumViewport** __retval);
void Viewport__FuseICommonViewportget_PixelSize_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__FuseICommonViewportget_PixelsPerPoint_fn(Viewport* __this, float* __retval);
void Viewport__FuseICommonViewportget_Size_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__FuseICommonViewportget_ViewTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__FuseIRenderViewportget_ProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__FuseIRenderViewportget_ViewOrigin_fn(Viewport* __this, ::g::Uno::Float3* __retval);
void Viewport__FuseIRenderViewportget_ViewProjectionTransform_fn(Viewport* __this, ::g::Uno::Float4x4* __retval);
void Viewport__FuseIRenderViewportget_ViewRange_fn(Viewport* __this, ::g::Uno::Float2* __retval);
void Viewport__get_HasCullFace_fn(Viewport* __this, bool* __retval);
void Viewport__get_HitTestChildrenBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds** __retval);
void Viewport__get_HitTestTransform_fn(Viewport* __this, int32_t* __retval);
void Viewport__InvalidateFrustum_fn(Viewport* __this);
void Viewport__get_IsDisabled_fn(Viewport* __this, bool* __retval);
void Viewport__get_IsRoot_fn(Viewport* __this, bool* __retval);
void Viewport__get_Mode_fn(Viewport* __this, int32_t* __retval);
void Viewport__set_Mode_fn(Viewport* __this, int32_t* value);
void Viewport__ModifyBounds_fn(Viewport* __this, ::g::Fuse::VisualBounds* vb, ::g::Fuse::VisualBounds** __retval);
void Viewport__New2_fn(Viewport** __retval);
void Viewport__OnPlaced_fn(Viewport* __this, uObject* s, uObject* a);
void Viewport__OnRooted_fn(Viewport* __this);
void Viewport__OnUnrooted_fn(Viewport* __this);
void Viewport__get_ParentWorldTransformInternal_fn(Viewport* __this, ::g::Fuse::FastMatrix** __retval);
void Viewport__get_Perspective_fn(Viewport* __this, float* __retval);
void Viewport__set_Perspective_fn(Viewport* __this, float* value);
void Viewport__get_PerspectiveRelativeTo_fn(Viewport* __this, int32_t* __retval);
void Viewport__set_PerspectiveRelativeTo_fn(Viewport* __this, int32_t* value);
void Viewport__PointToWorldRay_fn(Viewport* __this, ::g::Uno::Float2* pointPos, ::g::Fuse::Ray* __retval);
void Viewport__get_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual** __retval);
void Viewport__set_RootVisual_fn(Viewport* __this, ::g::Fuse::Visual* value);
void Viewport__UpdateFrustum_fn(Viewport* __this);
void Viewport__UpdatePerspective_fn(Viewport* __this);
void Viewport__WorldToLocalRay_fn(Viewport* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct Viewport : ::g::Fuse::Elements::Element
{
    int32_t _mode;
    int32_t _cullFace;
    bool _hasCullFace;
    bool _frustumDirty;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    uStrong<uObject*> _frustum;
    bool _usePerspective;
    float _perspective;
    int32_t _perspectiveRelativeTo;

    void ctor_4();
    int32_t CullFace();
    void CullFace(int32_t value);
    uObject* Frustum();
    void Frustum(uObject* value);
    ::g::Fuse::FrustumViewport* FrustumViewport();
    bool HasCullFace();
    void InvalidateFrustum();
    bool IsDisabled();
    bool IsRoot();
    int32_t Mode();
    void Mode(int32_t value);
    ::g::Fuse::VisualBounds* ModifyBounds(::g::Fuse::VisualBounds* vb);
    void OnPlaced(uObject* s, uObject* a);
    float Perspective();
    void Perspective(float value);
    int32_t PerspectiveRelativeTo();
    void PerspectiveRelativeTo(int32_t value);
    ::g::Fuse::Ray PointToWorldRay(::g::Uno::Float2 pointPos);
    ::g::Fuse::Visual* RootVisual();
    void RootVisual(::g::Fuse::Visual* value);
    void UpdateFrustum();
    void UpdatePerspective();
    ::g::Fuse::Ray WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
    static Viewport* New2();
};
// }

}}} // ::g::Fuse::Elements
