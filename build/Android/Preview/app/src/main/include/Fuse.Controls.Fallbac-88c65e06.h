// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.2/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.Tex-76761aaa.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct ProperTextTransform;}}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class ProperTextTransform :182
// {
::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof();
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this);
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int32_t* __retval);
void ProperTextTransform__get_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval);
void ProperTextTransform__set_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* value);
void ProperTextTransform__New1_fn(ProperTextTransform** __retval);
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct ProperTextTransform : ::g::Uno::Content::Fonts::TextTransform
{
    uStrong< ::g::Fuse::DrawContext*> DrawContext;
    ::g::Uno::Float4x4 _matrix;

    void ctor_1();
    static ProperTextTransform* New1();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
