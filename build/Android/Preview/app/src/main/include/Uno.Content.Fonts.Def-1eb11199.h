// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Content/Fonts/DefaultTextTransform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.Tex-76761aaa.h>
#include <Uno.Float4x4.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct DefaultTextTransform;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class DefaultTextTransform :6
// {
::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof();
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this);
void DefaultTextTransform__get_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval);
void DefaultTextTransform__set_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* value);
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval);
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct DefaultTextTransform : ::g::Uno::Content::Fonts::TextTransform
{
    ::g::Uno::Float4x4 _matrix;

    void ctor_1();
    static DefaultTextTransform* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
