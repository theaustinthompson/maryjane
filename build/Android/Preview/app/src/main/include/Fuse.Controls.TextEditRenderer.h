// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.2/TextControls/MobileTextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextEditRenderer;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class TextEditRenderer :219
// {
uType* TextEditRenderer_typeof();
void TextEditRenderer__ctor__fn(TextEditRenderer* __this);
void TextEditRenderer__CopyState_fn(::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle, bool* updateTextAlignment, bool* isMultiline, int32_t* width, int32_t* height);
void TextEditRenderer__CreateTextEdit_fn(::g::Java::Object** __retval);
void TextEditRenderer__Draw_fn(TextEditRenderer* __this, uObject* renderer, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density, bool* updateTextAlignment, bool* isMultiline);
void TextEditRenderer__New1_fn(TextEditRenderer** __retval);
void TextEditRenderer__NewRenderer_fn(::g::Fuse::Controls::TextEdit* textEdit, bool* isMultiline, uObject** __retval);

struct TextEditRenderer : uObject
{
    static uSStrong<TextEditRenderer*> Instance_;
    static uSStrong<TextEditRenderer*>& Instance() { return TextEditRenderer_typeof()->Init(), Instance_; }
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _renderView;

    void ctor_();
    void Draw(uObject* renderer, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density, bool updateTextAlignment, bool isMultiline);
    static void CopyState(::g::Java::Object* sourceHandle, ::g::Java::Object* targetHandle, bool updateTextAlignment, bool isMultiline, int32_t width, int32_t height);
    static ::g::Java::Object* CreateTextEdit();
    static TextEditRenderer* New1();
    static uObject* NewRenderer(::g::Fuse::Controls::TextEdit* textEdit, bool isMultiline);
};
// }

}}} // ::g::Fuse::Controls
