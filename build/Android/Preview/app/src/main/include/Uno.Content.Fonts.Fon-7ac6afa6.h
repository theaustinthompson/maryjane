// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Content/Fonts/FontFaceHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFaceHelpers;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public static class FontFaceHelpers :15
// {
uClassType* FontFaceHelpers_typeof();
void FontFaceHelpers__RenderSpriteFont_fn(::g::Uno::Content::Fonts::FontFace* font, float* size, uString* charset, ::g::Uno::Content::Fonts::BitmapFont** __retval);

struct FontFaceHelpers : uObject
{
    static ::g::Uno::Content::Fonts::BitmapFont* RenderSpriteFont(::g::Uno::Content::Fonts::FontFace* font, float size, uString* charset);
};
// }

}}}} // ::g::Uno::Content::Fonts
