// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DashedSolidColor.h>
#include <_root.FuseCommon_bundle.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNav-4d426250.h>
#include <_root.FuseControlsNav-a8c01cdb.h>
#include <_root.FuseControlsNav-bfeb1093.h>
#include <_root.FuseControlsPan-43d43d7e.h>
#include <_root.FuseControlsPri-3832896e.h>
#include <_root.FuseControlsPri-38e137c8.h>
#include <_root.FuseControlsPri-3bbae333.h>
#include <_root.FuseControlsPri-5e35c2db.h>
#include <_root.FuseControlsPri-7b4ecfe6.h>
#include <_root.FuseControlsPri-8507d6ea.h>
#include <_root.FuseControlsPri-accbb5bd.h>
#include <_root.FuseControlsPri-ca138e33.h>
#include <_root.FuseControlsPri-ce42971.h>
#include <_root.FuseControlsPri-d52a5a11.h>
#include <_root.FuseControlsPri-d9ada289.h>
#include <_root.FuseControlsPri-e9d2ee5b.h>
#include <_root.FuseControlsScr-48813899.h>
#include <_root.FuseControlsScr-f1bcb258.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrim-c6713933.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseModels_bundle.h>
#include <_root.FuseNodes_bundle.h>
#include <_root.FusePreviewCore_bundle.h>
#include <_root.FusePreviewCore-22d2a19b.h>
#include <_root.FusePreviewCore-3869462.h>
#include <_root.FusePreviewCore-48f3c3a4.h>
#include <_root.FusePreviewCore-57dc9f76.h>
#include <_root.FusePreviewCore-7bcb4b34.h>
#include <_root.FusePreviewCore-88c27b76.h>
#include <_root.FusePreviewCore-905fe83.h>
#include <_root.FusePreviewCore-ba2bbbe4.h>
#include <_root.FuseScriptingJa-49e3cee5.h>
#include <_root.FuseText_bundle.h>
#include <_root.UnoCore_bundle.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileString.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Outracks.Simulator.Cl-1b215019.h>
#include <Outracks.Simulator.Cl-b47ea6ce.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-6e9df330.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[178];
static uType* TYPES[18];

namespace g{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\DashedBrush.uno
// -------------------------------------------------------------------------------------------

// public sealed class DashedSolidColor :9
// {
// static generated DashedSolidColor() :9
static void DashedSolidColor__cctor_1_fn(uType* __type)
{
    DashedSolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Color"*/]);
    DashedSolidColor::_dashSizeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"DashSize"*/]);
}

static void DashedSolidColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("DashSize");
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(DashedSolidColor, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(DashedSolidColor, _dashSize), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DashedSolidColor::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DashedSolidColor::_dashSizeName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Color", NULL, (void*)DashedSolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)DashedSolidColor__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_DashSize", NULL, (void*)DashedSolidColor__get_DashSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DashSize", NULL, (void*)DashedSolidColor__set_DashSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)DashedSolidColor__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)DashedSolidColor__New3_fn, 0, true, type, 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetColor", NULL, (void*)DashedSolidColor__SetColor1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Drawing::Brush_type* DashedSolidColor_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(DashedSolidColor);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("DashedSolidColor", options);
    type->fp_build_ = DashedSolidColor_build;
    type->fp_ctor_ = (void*)DashedSolidColor__New2_fn;
    type->fp_cctor_ = DashedSolidColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DashedSolidColor__get_IsCompletelyTransparent_fn;
    return type;
}

// public DashedSolidColor() :87
void DashedSolidColor__ctor_3_fn(DashedSolidColor* __this)
{
    __this->ctor_3();
}

// public DashedSolidColor(float4 color) :92
void DashedSolidColor__ctor_4_fn(DashedSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color() :18
void DashedSolidColor__get_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :19
void DashedSolidColor__set_Color_fn(DashedSolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_DashSize() :32
void DashedSolidColor__get_DashSize_fn(DashedSolidColor* __this, float* __retval)
{
    *__retval = __this->DashSize();
}

// public void set_DashSize(float value) :33
void DashedSolidColor__set_DashSize_fn(DashedSolidColor* __this, float* value)
{
    __this->DashSize(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :58
void DashedSolidColor__get_IsCompletelyTransparent_fn(DashedSolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public DashedSolidColor New() :87
void DashedSolidColor__New2_fn(DashedSolidColor** __retval)
{
    *__retval = DashedSolidColor::New2();
}

// public DashedSolidColor New(float4 color) :92
void DashedSolidColor__New3_fn(::g::Uno::Float4* color, DashedSolidColor** __retval)
{
    *__retval = DashedSolidColor::New3(*color);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) :43
void DashedSolidColor__SetColor1_fn(DashedSolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector DashedSolidColor::_colorName_;
::g::Uno::UX::Selector DashedSolidColor::_dashSizeName_;

// public DashedSolidColor() [instance] :87
void DashedSolidColor::ctor_3()
{
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public DashedSolidColor(float4 color) [instance] :92
void DashedSolidColor::ctor_4(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :18
::g::Uno::Float4 DashedSolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :19
void DashedSolidColor::Color(::g::Uno::Float4 value)
{
    uStackFrame __("DashedSolidColor", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(DashedSolidColor::_colorName_);
    }
}

// public float get_DashSize() [instance] :32
float DashedSolidColor::DashSize()
{
    return _dashSize;
}

// public void set_DashSize(float value) [instance] :33
void DashedSolidColor::DashSize(float value)
{
    uStackFrame __("DashedSolidColor", "set_DashSize(float)");

    if (_dashSize != value)
    {
        _dashSize = value;
        OnPropertyChanged(DashedSolidColor::_dashSizeName_);
    }
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance] :43
void DashedSolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    uStackFrame __("DashedSolidColor", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(DashedSolidColor::_colorName_, origin);
    }
}

// public DashedSolidColor New() [static] :87
DashedSolidColor* DashedSolidColor::New2()
{
    DashedSolidColor* obj1 = (DashedSolidColor*)uNew(DashedSolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public DashedSolidColor New(float4 color) [static] :92
DashedSolidColor* DashedSolidColor::New3(::g::Uno::Float4 color)
{
    DashedSolidColor* obj2 = (DashedSolidColor*)uNew(DashedSolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Common\1.8.1\.uno\package
// ----------------------------------------------------------------------------------

// public static generated class FuseCommon_bundle :0
// {
// static FuseCommon_bundle() :0
static void FuseCommon_bundle__cctor__fn(uType* __type)
{
    FuseCommon_bundle::Blitter23d242c5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[2/*"uniform mat...*/], ::STRINGS[3/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/]));
    FuseCommon_bundle::Blitter8f469d0c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[7/*"uniform mat...*/], ::STRINGS[8/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"f"*/]));
}

static void FuseCommon_bundle_build(uType* type)
{
    ::STRINGS[2] = uString::Const("uniform mat4 b;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_Position = b * vec4(a, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[3] = uString::Const("uniform vec4 c;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = c;\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[7] = uString::Const("uniform mat4 b;\r\n"
        "uniform mat3 c;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    e = (c * vec3(a, 1.0)).xy;\r\n"
        "    gl_Position = b * vec4(a, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[8] = uString::Const("uniform vec4 d;\r\n"
        "\r\n"
        "uniform sampler2D f;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(f, e) * d;\r\n"
        "}\r\n"
        "");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[10] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseCommon_bundle::Blitter23d242c5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseCommon_bundle::Blitter8f469d0c_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Blitter23d242c5", 0),
        new uField("Blitter8f469d0c", 1));
}

uClassType* FuseCommon_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCommon_bundle", options);
    type->fp_build_ = FuseCommon_bundle_build;
    type->fp_cctor_ = FuseCommon_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCommon_bundle::Blitter23d242c5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCommon_bundle::Blitter8f469d0c_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls\1.8.1\.uno\package
// ------------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle170ae5e6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[11/*"uniform mat...*/], ::STRINGS[12/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[18/*"l"*/]));
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[19/*"uniform mat...*/], ::STRINGS[20/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[21/*"uniform mat...*/], ::STRINGS[3/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[30/*"t"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[11] = uString::Const("uniform mat4 g, b;\r\n"
        "uniform vec2 c, d, i;\r\n"
        "uniform vec4 h;\r\n"
        "uniform float j;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying float k;\r\n"
        "\r\n"
        "float m(vec2 n, vec2 o, vec2 p, float q){\r\n"
        "    vec2 r = (n * c) - o;\r\n"
        "    float s = dot(r, p) / q;\r\n"
        "    return (s - d.x) / d.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, h.xy, i, j);\r\n"
        "    gl_Position = b * (g * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[12] = uString::Const("uniform float e, f;\r\n"
        "\r\n"
        "uniform sampler2D l;\r\n"
        "\r\n"
        "varying float k;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(l, vec2(k, 0.5)) * e) * f;\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[14] = uString::Const("g");
    ::STRINGS[15] = uString::Const("h");
    ::STRINGS[16] = uString::Const("i");
    ::STRINGS[17] = uString::Const("j");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[19] = uString::Const("uniform mat4 i, b;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 j;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    j = false ? vec2(a.x, float(1) - a.y) : a;\r\n"
        "    gl_Position = b * (i * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[20] = uString::Const("uniform vec2 c, d;\r\n"
        "uniform float e, g, h;\r\n"
        "uniform vec4 f;\r\n"
        "\r\n"
        "varying vec2 j;\r\n"
        "\r\n"
        "float k(vec2 n, vec2 o){\r\n"
        "    vec2 p = abs(n) - o;\r\n"
        "    return min(max(p.x, p.y), 0.0) + length(max(p, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 l(vec2 n, vec2 o){\r\n"
        "    return mod(n, o) - (0.5 * o);\r\n"
        "}\r\n"
        "\r\n"
        "float m(vec2 n){\r\n"
        "    vec2 o = d.xy / e;\r\n"
        "    ivec2 p = ivec2(o);\r\n"
        "\r\n"
        "    if (mod(float(p.x), float(2)) == float(0))\r\n"
        "        ++p.x;\r\n"
        "\r\n"
        "    if (mod(float(p.y), float(2)) == float(0))\r\n"
        "        ++p.y;\r\n"
        "\r\n"
        "    o = d.xy / vec2(p);\r\n"
        "    float q = k(l(n, o * float(2)) + vec2(e), vec2(e));\r\n"
        "    return -floor(q);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), f, clamp(m(j.xy * c), 0.0, 1.0)) * g) * h;\r\n"
        "}\r\n"
        "");
    ::STRINGS[21] = uString::Const("uniform mat4 d, b;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[3] = uString::Const("uniform vec4 c;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = c;\r\n"
        "}\r\n"
        "");
    ::STRINGS[22] = uString::Const("uniform mat4 q, d;\r\n"
        "uniform vec2 e, f, g, h, i, k, j;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 r, s;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 u = ((((e * (false ? vec2(a.x, float(1) - a.y) : a)) - f) / g) * h) + i;\r\n"
        "    r = k + (u * j);\r\n"
        "    s = u;\r\n"
        "    gl_Position = d * (q * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[23] = uString::Const("uniform vec2 m, l;\r\n"
        "uniform vec4 n;\r\n"
        "uniform float o, p;\r\n"
        "\r\n"
        "uniform sampler2D t;\r\n"
        "\r\n"
        "varying vec2 r, s;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 u = (c ? vec4(float(0)) : texture2D(t, b ? (m + (fract(r) * l)) : s)) * n;\r\n"
        "    gl_FragColor = (vec4(u.xyz * u.w, u.w) * o) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[26] = uString::Const("n");
    ::STRINGS[27] = uString::Const("o");
    ::STRINGS[28] = uString::Const("p");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[30] = uString::Const("t");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle170ae5e6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("SolidRectangle170ae5e6", 0),
        new uField("SolidRectangle2f148815", 1),
        new uField("SolidRectangle7463714b", 2),
        new uField("SolidRectangled1bbfcb0", 3));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle170ae5e6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.8.1\.uno\ux14\Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :19
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[1/*Fuse.Controls.Panel*/], offsetof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :22
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :24
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :22
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :25
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :22
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :22
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.8.1\.uno\ux14\Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :1
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :4
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :6
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :4
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :7
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :4
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :4
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\1.8.1\.uno\ux14\Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseElementsElement_HitTestMode_Property :10
// {
static void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseElementsElement_HitTestMode_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :13
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__ctor_3_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.HitTestMode Get(Uno.UX.PropertyObject obj) :15
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Get1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseElementsElement_HitTestMode_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->HitTestMode(), void();
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :13
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseElementsElement_HitTestMode_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_Object_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.HitTestMode v, Uno.UX.IPropertyListener origin) :16
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Set1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseElementsElement_HitTestMode_Property", "Set(Uno.UX.PropertyObject,Fuse.Elements.HitTestMode,Uno.UX.IPropertyListener)");
    int32_t v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->SetHitTestMode(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :13
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :13
FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* obj1 = (FuseControlsNavigation_FuseElementsElement_HitTestMode_Property*)uNew(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\1.8.1\.uno\ux14\Fuse.Controls.Panels.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPanels_FuseElementsElement_Padding_Property :1
// {
static void FuseControlsPanels_FuseElementsElement_Padding_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsPanels_FuseElementsElement_Padding_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPanels_FuseElementsElement_Padding_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPanels_FuseElementsElement_Padding_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPanels_FuseElementsElement_Padding_Property", options);
    type->fp_build_ = FuseControlsPanels_FuseElementsElement_Padding_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPanels_FuseElementsElement_Padding_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPanels_FuseElementsElement_Padding_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPanels_FuseElementsElement_Padding_Property__Set1_fn;
    return type;
}

// public FuseControlsPanels_FuseElementsElement_Padding_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :4
void FuseControlsPanels_FuseElementsElement_Padding_Property__ctor_3_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :6
void FuseControlsPanels_FuseElementsElement_Padding_Property__Get1_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPanels_FuseElementsElement_Padding_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Padding(), void();
}

// public FuseControlsPanels_FuseElementsElement_Padding_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :4
void FuseControlsPanels_FuseElementsElement_Padding_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPanels_FuseElementsElement_Padding_Property** __retval)
{
    *__retval = FuseControlsPanels_FuseElementsElement_Padding_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void FuseControlsPanels_FuseElementsElement_Padding_Property__get_Object_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :7
void FuseControlsPanels_FuseElementsElement_Padding_Property__Set1_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPanels_FuseElementsElement_Padding_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Padding(v_);
}

// public FuseControlsPanels_FuseElementsElement_Padding_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :4
void FuseControlsPanels_FuseElementsElement_Padding_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPanels_FuseElementsElement_Padding_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :4
FuseControlsPanels_FuseElementsElement_Padding_Property* FuseControlsPanels_FuseElementsElement_Padding_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPanels_FuseElementsElement_Padding_Property* obj1 = (FuseControlsPanels_FuseElementsElement_Padding_Property*)uNew(FuseControlsPanels_FuseElementsElement_Padding_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text :1
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :1
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Text");
    ::TYPES[4] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[4/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[4/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;
::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance] :1
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static] :1
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value :11
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :11
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[32] = uString::Const("Value");
    ::TYPES[7] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[7/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[7/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;
::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance] :11
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static] :11
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :47
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :50
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :52
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :50
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsShape_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :51
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :53
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(v);
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :50
void FuseControlsPrimitives_FuseControlsShape_Fill_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :50
FuseControlsPrimitives_FuseControlsShape_Fill_Property* FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsShape_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsShape_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :30
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :35
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :34
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :36
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :33
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :33
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :21
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :26
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :25
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :27
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :28
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :24
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :24
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :97
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.SolidColor*/], offsetof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :100
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :102
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[9/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :100
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :101
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :103
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[9/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :104
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :100
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :100
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :55
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :58
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :60
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :58
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :61
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Brush(v);
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :58
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :58
FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Brush_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :79
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :82
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :84
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :82
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :83
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :85
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :86
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :82
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :82
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :63
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :66
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :68
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :66
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :67
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :69
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :66
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :66
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :71
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :74
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :76
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :74
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :75
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :77
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Size(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :74
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :74
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :38
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :43
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :42
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :44
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :45
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :41
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :41
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\1.8.1\.uno\ux14\Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :88
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Gestures.SwipeGesture*/], offsetof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :91
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :93
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :91
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :92
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :94
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :95
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :91
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :91
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\1.8.1\.uno\ux14\Fuse.Controls.ScrollView.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView :1
// {
// static generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :1
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[33] = uString::Const("KeepFocusInView");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;
::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance] :1
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static] :1
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\1.8.1\.uno\ux14\Fuse.Controls.ScrollView.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :10
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Triggers.WhileBool*/], offsetof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :15
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[14/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :16
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[14/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :13
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :13
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\1.8.1\.uno\package
// ------------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform flo...*/], ::STRINGS[35/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[29/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"uniform mat...*/], ::STRINGS[37/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[15/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\r\n"
        "uniform mat4 i, j;\r\n"
        "uniform vec2 o;\r\n"
        "\r\n"
        "attribute vec3 a, b;\r\n"
        "\r\n"
        "varying vec2 p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\r\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[35] = uString::Const("uniform samplerExternalOES q;\r\n"
        "\r\n"
        "varying vec2 p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[14] = uString::Const("g");
    ::STRINGS[15] = uString::Const("h");
    ::STRINGS[16] = uString::Const("i");
    ::STRINGS[17] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[26] = uString::Const("n");
    ::STRINGS[27] = uString::Const("o");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[36] = uString::Const("uniform mat4 f, c;\r\n"
        "uniform vec2 d, e;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "vec2 i(vec2 j){\r\n"
        "    vec2 k = j.xy;\r\n"
        "\r\n"
        "    if (b == 1)\r\n"
        "        return vec2(k.y, 1.0 - k.x);\r\n"
        "    else if (b == 2)\r\n"
        "        return vec2(1.0 - k.x, 1.0 - k.y);\r\n"
        "    else if (b == 3)\r\n"
        "        return vec2(1.0 - k.y, k.x);\r\n"
        "    else\r\n"
        "        return k;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    g = i((a * d) + e);\r\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[37] = uString::Const("uniform samplerExternalOES h;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\r\n"
        "}\r\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangleda875692", 0),
        new uField("VideoDrawElement5c829975", 1));
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement5c829975_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Drawing\1.8.1\.uno\package
// -----------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"attribute v...*/], ::STRINGS[39/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 h;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    h = a;\r\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[39] = uString::Const("uniform float e[b], f;\r\n"
        "uniform vec4 g[c];\r\n"
        "\r\n"
        "varying vec2 h;\r\n"
        "\r\n"
        "float i(float k, float l, float m){\r\n"
        "    return clamp((m - k) / (l - k), 0.0, 1.0);\r\n"
        "}\r\n"
        "\r\n"
        "vec4 j(vec2 k){\r\n"
        "    float l = e[0] + (f * k.x);\r\n"
        "    vec4 m = vec4(g[0].xyz * g[0].w, g[0].w);\r\n"
        "\r\n"
        "    for (int n = 0; n < (b - 1); n++)\r\n"
        "    {\r\n"
        "        float o = e[n];\r\n"
        "        float p = e[n + 1];\r\n"
        "        vec4 q = g[n + 1];\r\n"
        "        m = mix(m, vec4(q.xyz * q.w, q.w), d ? smoothstep(o, p, l) : i(o, p, l));\r\n"
        "    }\r\n"
        "\r\n"
        "    return m;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = j(h);\r\n"
        "}\r\n"
        "");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[14] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawable479fd075", 0));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\1.8.1\.uno\package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle012b044f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform flo...*/], ::STRINGS[41/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[42/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle0f9e7404_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform flo...*/], ::STRINGS[44/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[45/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle0f9e7409_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform flo...*/], ::STRINGS[47/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[49/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle0f9e740a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform flo...*/], ::STRINGS[50/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[49/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle1666aa55_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform flo...*/], ::STRINGS[52/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2e704b9c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[53/*"uniform flo...*/], ::STRINGS[54/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 22, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[55/*"y"*/]));
    FuseDrawingPrimitives_bundle::Circle39b04c1c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform flo...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle39b04c1e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform flo...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle39b04c1f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[56/*"uniform flo...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle42b21980_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform flo...*/], ::STRINGS[62/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle5bb592c2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[63/*"uniform flo...*/], ::STRINGS[64/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle5e838fb4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[65/*"uniform flo...*/], ::STRINGS[66/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[29/*"q"*/]));
    FuseDrawingPrimitives_bundle::Circle60575c7b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform flo...*/], ::STRINGS[68/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle73bf34d2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform flo...*/], ::STRINGS[70/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[73/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle73bf35ba_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform flo...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlea1047bf8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform flo...*/], ::STRINGS[76/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleb90e1dc2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform flo...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[42/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlebdafe7e0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[67/*"uniform flo...*/], ::STRINGS[78/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circled117c037_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform flo...*/], ::STRINGS[79/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[73/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circled117c11f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform flo...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circled2eb8cb7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform flo...*/], ::STRINGS[83/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee5598e1b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform flo...*/], ::STRINGS[85/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1d38_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform flo...*/], ::STRINGS[86/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1df8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform flo...*/], ::STRINGS[88/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1dfa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[90/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1dfb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform flo...*/], ::STRINGS[91/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[92/*"uniform flo...*/], ::STRINGS[93/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[94/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[96/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[55/*"y"*/], ::STRINGS[97/*"z"*/], ::STRINGS[98/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circlef7ec1ed7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[99/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[55/*"y"*/], ::STRINGS[97/*"z"*/], ::STRINGS[98/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circlefe5d075d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[103/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangle26472755_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectangle538c6e5c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[106/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectangle565a6cfd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[108/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[71/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c9a26db_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[72/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[114/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[72/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform flo...*/], ::STRINGS[116/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform flo...*/], ::STRINGS[117/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[119/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[55/*"y"*/], ::STRINGS[97/*"z"*/], ::STRINGS[120/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[121/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[55/*"y"*/], ::STRINGS[97/*"z"*/], ::STRINGS[120/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[124/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform flo...*/], ::STRINGS[126/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb3b2f694_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[125/*"uniform flo...*/], ::STRINGS[127/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[128/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[71/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangled46c7a4a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform flo...*/], ::STRINGS[130/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangleec761c79_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform flo...*/], ::STRINGS[131/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglef633e2b5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[132/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[29/*"q"*/], ::STRINGS[48/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[30/*"t"*/], ::STRINGS[42/*"u"*/], ::STRINGS[71/*"v"*/], ::STRINGS[49/*"w"*/], ::STRINGS[72/*"x"*/], ::STRINGS[103/*"D"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[40] = uString::Const("uniform float b, n, g;\r\n"
        "uniform vec2 c, e, f, m;\r\n"
        "uniform mat4 d;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying float r;\r\n"
        "varying vec2 s, t;\r\n"
        "\r\n"
        "float v(vec2 w, vec2 x, vec2 y, float z){\r\n"
        "    vec2 A = (w * e) - x;\r\n"
        "    float B = dot(A, y) / z;\r\n"
        "    return (B - f.x) / f.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 w = a * b;\r\n"
        "    vec2 x = w + c;\r\n"
        "    r = v(x / e, l.xy, m, n);\r\n"
        "    s = w * g;\r\n"
        "    t = w;\r\n"
        "    gl_Position = d * vec4(x, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[41] = uString::Const("uniform float h, i, j, k;\r\n"
        "uniform vec2 o, p, q;\r\n"
        "\r\n"
        "uniform sampler2D u;\r\n"
        "\r\n"
        "varying float r;\r\n"
        "varying vec2 s, t;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(u, vec2(r, 0.5)) * (clamp(0.5 - ((((length(s) - 1.0) * h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(t, o), max(dot(t, p), dot(t, q))) * i) * j), float(0), float(1)))) * k;\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[14] = uString::Const("g");
    ::STRINGS[15] = uString::Const("h");
    ::STRINGS[16] = uString::Const("i");
    ::STRINGS[17] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[26] = uString::Const("n");
    ::STRINGS[27] = uString::Const("o");
    ::STRINGS[28] = uString::Const("p");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[42] = uString::Const("u");
    ::STRINGS[43] = uString::Const("uniform float b, p, g;\r\n"
        "uniform vec2 c, e, f, o;\r\n"
        "uniform mat4 d;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying float q;\r\n"
        "varying vec2 r;\r\n"
        "\r\n"
        "float t(vec2 u, vec2 v, vec2 w, float x){\r\n"
        "    vec2 y = (u * e) - v;\r\n"
        "    float z = dot(y, w) / x;\r\n"
        "    return (z - f.x) / f.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 u = a * b;\r\n"
        "    vec2 v = u + c;\r\n"
        "    q = t(v / e, n.xy, o, p);\r\n"
        "    r = u * g;\r\n"
        "    gl_Position = d * vec4(v, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[44] = uString::Const("uniform float h, i, j, k, l, m;\r\n"
        "\r\n"
        "uniform sampler2D s;\r\n"
        "\r\n"
        "varying float q;\r\n"
        "varying vec2 r;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((abs(((length(r) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * float(1))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[45] = uString::Const("s");
    ::STRINGS[46] = uString::Const("uniform float b, p, g;\r\n"
        "uniform vec2 c, e, f, o;\r\n"
        "uniform mat4 d;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying float t;\r\n"
        "varying vec2 u, v;\r\n"
        "\r\n"
        "float x(vec2 y, vec2 z, vec2 A, float B){\r\n"
        "    vec2 C = (y * e) - z;\r\n"
        "    float D = dot(C, A) / B;\r\n"
        "    return (D - f.x) / f.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 y = a * b;\r\n"
        "    vec2 z = y + c;\r\n"
        "    t = x(z / e, n.xy, o, p);\r\n"
        "    u = y * g;\r\n"
        "    v = y;\r\n"
        "    gl_Position = d * vec4(z, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[47] = uString::Const("uniform float h, i, j, k, l, m;\r\n"
        "uniform vec2 q, r, s;\r\n"
        "\r\n"
        "uniform sampler2D w;\r\n"
        "\r\n"
        "varying float t;\r\n"
        "varying vec2 u, v;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(w, vec2(t, 0.5)) * (clamp(0.5 - (((abs(((length(u) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(v, q), max(dot(v, r), dot(v, s))) * k) * l), float(0), float(1)))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[48] = uString::Const("r");
    ::STRINGS[49] = uString::Const("w");
    ::STRINGS[50] = uString::Const("uniform float h, i, j, k, l, m;\r\n"
        "uniform vec2 q, r, s;\r\n"
        "\r\n"
        "uniform sampler2D w;\r\n"
        "\r\n"
        "varying float t;\r\n"
        "varying vec2 u, v;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(w, vec2(t, 0.5)) * (clamp(0.5 - (((abs(((length(u) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(v, q), min(dot(v, r), dot(v, s))) * k) * l), float(0), float(1)))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[51] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 m, n;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 o = a * b;\r\n"
        "    m = o * e;\r\n"
        "    n = o;\r\n"
        "    gl_Position = d * vec4(o + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[52] = uString::Const("uniform float f, g, h;\r\n"
        "uniform vec2 j, k, l;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 m, n;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(m) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((min(dot(n, j), min(dot(n, k), dot(n, l))) * g) * h), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[53] = uString::Const("uniform float d, q;\r\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\r\n"
        "uniform mat4 f;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 v, w, x;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 z = a * d;\r\n"
        "    vec2 A = z + e;\r\n"
        "    vec2 B = ((((g * (A / g)) - h) / i) * j) + k;\r\n"
        "    v = m + (B * l);\r\n"
        "    w = B;\r\n"
        "    x = z * q;\r\n"
        "    gl_Position = f * vec4(A, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[54] = uString::Const("uniform vec2 o, n;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u;\r\n"
        "\r\n"
        "uniform sampler2D y;\r\n"
        "\r\n"
        "varying vec2 v, w, x;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 z = (c ? vec4(float(0)) : texture2D(y, b ? (o + (fract(v) * n)) : w)) * p;\r\n"
        "    gl_FragColor = (vec4(z.xyz * z.w, z.w) * (clamp(0.5 - ((((length(x) - 1.0) * r) * s) * t), float(0), float(1)) * float(1))) * u;\r\n"
        "}\r\n"
        "");
    ::STRINGS[30] = uString::Const("t");
    ::STRINGS[55] = uString::Const("y");
    ::STRINGS[56] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 q = a * b;\r\n"
        "    o = q * e;\r\n"
        "    p = q;\r\n"
        "    gl_Position = d * vec4(q + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[57] = uString::Const("uniform float f, g, h, i, j;\r\n"
        "uniform vec2 l, m, n;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(o) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(p, l), min(dot(p, m), dot(p, n))) * i) * j), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[58] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 l;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 m = a * b;\r\n"
        "    l = m * e;\r\n"
        "    gl_Position = d * vec4(m + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[59] = uString::Const("uniform float f, g, h, i, j;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 l;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(l) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[60] = uString::Const("uniform float f, g, h, i, j;\r\n"
        "uniform vec2 l, m, n;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(o) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(p, l), max(dot(p, m), dot(p, n))) * i) * j), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[61] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 r = a * b;\r\n"
        "    p = r * e;\r\n"
        "    q = r;\r\n"
        "    gl_Position = d * vec4(r + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[62] = uString::Const("uniform float f, g, h, i, j, l;\r\n"
        "uniform vec2 m, n, o;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(p) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(q, m), max(dot(q, n), dot(q, o))) * i) * j), float(0), float(1)))) * l;\r\n"
        "}\r\n"
        "");
    ::STRINGS[63] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 k;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 l = a * b;\r\n"
        "    k = l * e;\r\n"
        "    gl_Position = d * vec4(l + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[64] = uString::Const("uniform float f, g, h, j;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 k;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(k) - 1.0) * f) * g) * h), float(0), float(1)) * float(1))) * j;\r\n"
        "}\r\n"
        "");
    ::STRINGS[65] = uString::Const("uniform float b, n, g;\r\n"
        "uniform vec2 c, e, f, m;\r\n"
        "uniform mat4 d;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying float o;\r\n"
        "varying vec2 p;\r\n"
        "\r\n"
        "float r(vec2 s, vec2 t, vec2 u, float v){\r\n"
        "    vec2 w = (s * e) - t;\r\n"
        "    float x = dot(w, u) / v;\r\n"
        "    return (x - f.x) / f.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 s = a * b;\r\n"
        "    vec2 t = s + c;\r\n"
        "    o = r(t / e, l.xy, m, n);\r\n"
        "    p = s * g;\r\n"
        "    gl_Position = d * vec4(t, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[66] = uString::Const("uniform float h, i, j, k;\r\n"
        "\r\n"
        "uniform sampler2D q;\r\n"
        "\r\n"
        "varying float o;\r\n"
        "varying vec2 p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(q, vec2(o, 0.5)) * (clamp(0.5 - ((((length(p) - 1.0) * h) * i) * j), float(0), float(1)) * float(1))) * k;\r\n"
        "}\r\n"
        "");
    ::STRINGS[67] = uString::Const("uniform float b, i;\r\n"
        "uniform vec2 c, e;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 q, r, s;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 w = a * b;\r\n"
        "    vec2 x = w + c;\r\n"
        "    q = x / e;\r\n"
        "    r = w * i;\r\n"
        "    s = w;\r\n"
        "    gl_Position = d * vec4(x, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[68] = uString::Const("uniform vec2 f, e, n, o, p;\r\n"
        "uniform float g, j, k, l, m;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 q, r, s;\r\n"
        "\r\n"
        "float t(vec2 w, vec2 x){\r\n"
        "    vec2 y = abs(w) - x;\r\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 u(vec2 w, vec2 x){\r\n"
        "    return mod(w, x) - (0.5 * x);\r\n"
        "}\r\n"
        "\r\n"
        "float v(vec2 w){\r\n"
        "    vec2 x = e.xy / g;\r\n"
        "    ivec2 y = ivec2(x);\r\n"
        "\r\n"
        "    if (mod(float(y.x), float(2)) == float(0))\r\n"
        "        ++y.x;\r\n"
        "\r\n"
        "    if (mod(float(y.y), float(2)) == float(0))\r\n"
        "        ++y.y;\r\n"
        "\r\n"
        "    x = e.xy / vec2(y);\r\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(z);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(q.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(r) - 1.0) * j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(s, n), max(dot(s, o), dot(s, p))) * k) * l), float(0), float(1)))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[69] = uString::Const("uniform float d, q;\r\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\r\n"
        "uniform mat4 f;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 y, z, A, B;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 D = a * d;\r\n"
        "    vec2 E = D + e;\r\n"
        "    vec2 F = ((((g * (E / g)) - h) / i) * j) + k;\r\n"
        "    y = m + (F * l);\r\n"
        "    z = F;\r\n"
        "    A = D * q;\r\n"
        "    B = D;\r\n"
        "    gl_Position = f * vec4(E, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[70] = uString::Const("uniform vec2 o, n, v, w, x;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u;\r\n"
        "\r\n"
        "uniform sampler2D C;\r\n"
        "\r\n"
        "varying vec2 y, z, A, B;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(y) * n)) : z)) * p;\r\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - ((((length(A) - 1.0) * r) * s) * t), float(0), float(1)) * clamp(0.5 - ((min(dot(B, v), min(dot(B, w), dot(B, x))) * s) * t), float(0), float(1)))) * u;\r\n"
        "}\r\n"
        "");
    ::STRINGS[71] = uString::Const("v");
    ::STRINGS[72] = uString::Const("x");
    ::STRINGS[73] = uString::Const("C");
    ::STRINGS[74] = uString::Const("uniform float f, g, h;\r\n"
        "uniform vec2 j, k, l;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 m, n;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(m) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((max(dot(n, j), max(dot(n, k), dot(n, l))) * g) * h), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 p = a * b;\r\n"
        "    n = p * e;\r\n"
        "    o = p;\r\n"
        "    gl_Position = d * vec4(p + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[76] = uString::Const("uniform float f, g, h, j;\r\n"
        "uniform vec2 k, l, m;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(n) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((min(dot(o, k), min(dot(o, l), dot(o, m))) * g) * h), float(0), float(1)))) * j;\r\n"
        "}\r\n"
        "");
    ::STRINGS[77] = uString::Const("uniform float h, i, j, k;\r\n"
        "uniform vec2 o, p, q;\r\n"
        "\r\n"
        "uniform sampler2D u;\r\n"
        "\r\n"
        "varying float r;\r\n"
        "varying vec2 s, t;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(u, vec2(r, 0.5)) * (clamp(0.5 - ((((length(s) - 1.0) * h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(t, o), min(dot(t, p), dot(t, q))) * i) * j), float(0), float(1)))) * k;\r\n"
        "}\r\n"
        "");
    ::STRINGS[78] = uString::Const("uniform vec2 f, e, n, o, p;\r\n"
        "uniform float g, j, k, l, m;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 q, r, s;\r\n"
        "\r\n"
        "float t(vec2 w, vec2 x){\r\n"
        "    vec2 y = abs(w) - x;\r\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 u(vec2 w, vec2 x){\r\n"
        "    return mod(w, x) - (0.5 * x);\r\n"
        "}\r\n"
        "\r\n"
        "float v(vec2 w){\r\n"
        "    vec2 x = e.xy / g;\r\n"
        "    ivec2 y = ivec2(x);\r\n"
        "\r\n"
        "    if (mod(float(y.x), float(2)) == float(0))\r\n"
        "        ++y.x;\r\n"
        "\r\n"
        "    if (mod(float(y.y), float(2)) == float(0))\r\n"
        "        ++y.y;\r\n"
        "\r\n"
        "    x = e.xy / vec2(y);\r\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(z);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(q.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(r) - 1.0) * j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(s, n), min(dot(s, o), dot(s, p))) * k) * l), float(0), float(1)))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[79] = uString::Const("uniform vec2 o, n, v, w, x;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u;\r\n"
        "\r\n"
        "uniform sampler2D C;\r\n"
        "\r\n"
        "varying vec2 y, z, A, B;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(y) * n)) : z)) * p;\r\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - ((((length(A) - 1.0) * r) * s) * t), float(0), float(1)) * clamp(0.5 - ((max(dot(B, v), max(dot(B, w), dot(B, x))) * s) * t), float(0), float(1)))) * u;\r\n"
        "}\r\n"
        "");
    ::STRINGS[80] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 j;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 k = a * b;\r\n"
        "    j = k * e;\r\n"
        "    gl_Position = d * vec4(k + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[81] = uString::Const("uniform float f, g, h;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 j;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(j) - 1.0) * f) * g) * h), float(0), float(1)) * float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[82] = uString::Const("uniform float b, i;\r\n"
        "uniform vec2 c, e;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 s = a * b;\r\n"
        "    vec2 t = s + c;\r\n"
        "    n = t / e;\r\n"
        "    o = s * i;\r\n"
        "    gl_Position = d * vec4(t, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[83] = uString::Const("uniform vec2 f, e;\r\n"
        "uniform float g, j, k, l, m;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "float p(vec2 s, vec2 t){\r\n"
        "    vec2 u = abs(s) - t;\r\n"
        "    return min(max(u.x, u.y), 0.0) + length(max(u, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 q(vec2 s, vec2 t){\r\n"
        "    return mod(s, t) - (0.5 * t);\r\n"
        "}\r\n"
        "\r\n"
        "float r(vec2 s){\r\n"
        "    vec2 t = e.xy / g;\r\n"
        "    ivec2 u = ivec2(t);\r\n"
        "\r\n"
        "    if (mod(float(u.x), float(2)) == float(0))\r\n"
        "        ++u.x;\r\n"
        "\r\n"
        "    if (mod(float(u.y), float(2)) == float(0))\r\n"
        "        ++u.y;\r\n"
        "\r\n"
        "    t = e.xy / vec2(u);\r\n"
        "    float v = p(q(s, t * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(v);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(r(n.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(o) - 1.0) * j) * k) * l), float(0), float(1)) * float(1))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[84] = uString::Const("uniform float b, e;\r\n"
        "uniform vec2 c;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 m;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 n = a * b;\r\n"
        "    m = n * e;\r\n"
        "    gl_Position = d * vec4(n + c, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[85] = uString::Const("uniform float f, g, h, i, j, l;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 m;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(m) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * float(1))) * l;\r\n"
        "}\r\n"
        "");
    ::STRINGS[86] = uString::Const("uniform float f, g, h, i, j, l;\r\n"
        "uniform vec2 m, n, o;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(p) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(q, m), min(dot(q, n), dot(q, o))) * i) * j), float(0), float(1)))) * l;\r\n"
        "}\r\n"
        "");
    ::STRINGS[87] = uString::Const("uniform float b, i;\r\n"
        "uniform vec2 c, e;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 s, t, u;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 y = a * b;\r\n"
        "    vec2 z = y + c;\r\n"
        "    s = z / e;\r\n"
        "    t = y * i;\r\n"
        "    u = y;\r\n"
        "    gl_Position = d * vec4(z, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[88] = uString::Const("uniform vec2 f, e, p, q, r;\r\n"
        "uniform float g, j, k, l, m, n, o;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 s, t, u;\r\n"
        "\r\n"
        "float v(vec2 y, vec2 z){\r\n"
        "    vec2 A = abs(y) - z;\r\n"
        "    return min(max(A.x, A.y), 0.0) + length(max(A, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 w(vec2 y, vec2 z){\r\n"
        "    return mod(y, z) - (0.5 * z);\r\n"
        "}\r\n"
        "\r\n"
        "float x(vec2 y){\r\n"
        "    vec2 z = e.xy / g;\r\n"
        "    ivec2 A = ivec2(z);\r\n"
        "\r\n"
        "    if (mod(float(A.x), float(2)) == float(0))\r\n"
        "        ++A.x;\r\n"
        "\r\n"
        "    if (mod(float(A.y), float(2)) == float(0))\r\n"
        "        ++A.y;\r\n"
        "\r\n"
        "    z = e.xy / vec2(A);\r\n"
        "    float B = v(w(y, z * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(B);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(x(s.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(t) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(u, p), min(dot(u, q), dot(u, r))) * m) * n), float(0), float(1)))) * o;\r\n"
        "}\r\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float b, i;\r\n"
        "uniform vec2 c, e;\r\n"
        "uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 u = a * b;\r\n"
        "    vec2 v = u + c;\r\n"
        "    p = v / e;\r\n"
        "    q = u * i;\r\n"
        "    gl_Position = d * vec4(v, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[90] = uString::Const("uniform vec2 f, e;\r\n"
        "uniform float g, j, k, l, m, n, o;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "float r(vec2 u, vec2 v){\r\n"
        "    vec2 w = abs(u) - v;\r\n"
        "    return min(max(w.x, w.y), 0.0) + length(max(w, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 s(vec2 u, vec2 v){\r\n"
        "    return mod(u, v) - (0.5 * v);\r\n"
        "}\r\n"
        "\r\n"
        "float t(vec2 u){\r\n"
        "    vec2 v = e.xy / g;\r\n"
        "    ivec2 w = ivec2(v);\r\n"
        "\r\n"
        "    if (mod(float(w.x), float(2)) == float(0))\r\n"
        "        ++w.x;\r\n"
        "\r\n"
        "    if (mod(float(w.y), float(2)) == float(0))\r\n"
        "        ++w.y;\r\n"
        "\r\n"
        "    v = e.xy / vec2(w);\r\n"
        "    float x = r(s(u, v * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(x);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(t(p.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(q) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * float(1))) * o;\r\n"
        "}\r\n"
        "");
    ::STRINGS[91] = uString::Const("uniform vec2 f, e, p, q, r;\r\n"
        "uniform float g, j, k, l, m, n, o;\r\n"
        "uniform vec4 h;\r\n"
        "\r\n"
        "varying vec2 s, t, u;\r\n"
        "\r\n"
        "float v(vec2 y, vec2 z){\r\n"
        "    vec2 A = abs(y) - z;\r\n"
        "    return min(max(A.x, A.y), 0.0) + length(max(A, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 w(vec2 y, vec2 z){\r\n"
        "    return mod(y, z) - (0.5 * z);\r\n"
        "}\r\n"
        "\r\n"
        "float x(vec2 y){\r\n"
        "    vec2 z = e.xy / g;\r\n"
        "    ivec2 A = ivec2(z);\r\n"
        "\r\n"
        "    if (mod(float(A.x), float(2)) == float(0))\r\n"
        "        ++A.x;\r\n"
        "\r\n"
        "    if (mod(float(A.y), float(2)) == float(0))\r\n"
        "        ++A.y;\r\n"
        "\r\n"
        "    z = e.xy / vec2(A);\r\n"
        "    float B = v(w(y, z * float(2)) + vec2(g), vec2(g));\r\n"
        "    return -floor(B);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(x(s.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(t) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(u, p), max(dot(u, q), dot(u, r))) * m) * n), float(0), float(1)))) * o;\r\n"
        "}\r\n"
        "");
    ::STRINGS[92] = uString::Const("uniform float d, q;\r\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\r\n"
        "uniform mat4 f;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 x, y, z;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 B = a * d;\r\n"
        "    vec2 C = B + e;\r\n"
        "    vec2 D = ((((g * (C / g)) - h) / i) * j) + k;\r\n"
        "    x = m + (D * l);\r\n"
        "    y = D;\r\n"
        "    z = B * q;\r\n"
        "    gl_Position = f * vec4(C, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[93] = uString::Const("uniform vec2 o, n;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u, v, w;\r\n"
        "\r\n"
        "uniform sampler2D A;\r\n"
        "\r\n"
        "varying vec2 x, y, z;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\r\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((abs(((length(z) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * float(1))) * w;\r\n"
        "}\r\n"
        "");
    ::STRINGS[94] = uString::Const("A");
    ::STRINGS[95] = uString::Const("uniform float d, q;\r\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\r\n"
        "uniform mat4 f;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 A, B, C, D;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 F = a * d;\r\n"
        "    vec2 G = F + e;\r\n"
        "    vec2 H = ((((g * (G / g)) - h) / i) * j) + k;\r\n"
        "    A = m + (H * l);\r\n"
        "    B = H;\r\n"
        "    C = F * q;\r\n"
        "    D = F;\r\n"
        "    gl_Position = f * vec4(G, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[96] = uString::Const("uniform vec2 o, n, x, y, z;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u, v, w;\r\n"
        "\r\n"
        "uniform sampler2D E;\r\n"
        "\r\n"
        "varying vec2 A, B, C, D;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 F = (c ? vec4(float(0)) : texture2D(E, b ? (o + (fract(A) * n)) : B)) * p;\r\n"
        "    gl_FragColor = (vec4(F.xyz * F.w, F.w) * (clamp(0.5 - (((abs(((length(C) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * clamp(0.5 - ((min(dot(D, x), min(dot(D, y), dot(D, z))) * u) * v), float(0), float(1)))) * w;\r\n"
        "}\r\n"
        "");
    ::STRINGS[97] = uString::Const("z");
    ::STRINGS[98] = uString::Const("E");
    ::STRINGS[99] = uString::Const("uniform vec2 o, n, x, y, z;\r\n"
        "uniform vec4 p;\r\n"
        "uniform float r, s, t, u, v, w;\r\n"
        "\r\n"
        "uniform sampler2D E;\r\n"
        "\r\n"
        "varying vec2 A, B, C, D;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 F = (c ? vec4(float(0)) : texture2D(E, b ? (o + (fract(A) * n)) : B)) * p;\r\n"
        "    gl_FragColor = (vec4(F.xyz * F.w, F.w) * (clamp(0.5 - (((abs(((length(C) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * clamp(0.5 - ((max(dot(D, x), max(dot(D, y), dot(D, z))) * u) * v), float(0), float(1)))) * w;\r\n"
        "}\r\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float f, g, h, j;\r\n"
        "uniform vec2 k, l, m;\r\n"
        "uniform vec4 i;\r\n"
        "\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(n) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((max(dot(o, k), max(dot(o, l), dot(o, m))) * g) * h), float(0), float(1)))) * j;\r\n"
        "}\r\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float g[d], t;\r\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\r\n"
        "uniform mat4 i;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float y;\r\n"
        "varying vec2 z, A, B, C;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 E = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\r\n"
        "    vec2 F = ((((j * (E / j)) - k) / l) * m) + n;\r\n"
        "    y = g[int(c)];\r\n"
        "    z = p + (F * o);\r\n"
        "    A = F;\r\n"
        "    B = E * t;\r\n"
        "    C = (vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h) * t;\r\n"
        "    gl_Position = i * vec4(E, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[102] = uString::Const("uniform vec2 r, q;\r\n"
        "uniform vec4 s;\r\n"
        "uniform float u, v, w, x;\r\n"
        "\r\n"
        "uniform sampler2D D;\r\n"
        "\r\n"
        "varying float y;\r\n"
        "varying vec2 z, A, B, C;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\r\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * clamp(0.5 - ((((distance(B, C) * u) - y) * v) * w), float(0), float(1))) * x;\r\n"
        "}\r\n"
        "");
    ::STRINGS[103] = uString::Const("D");
    ::STRINGS[104] = uString::Const("uniform float e[d], l;\r\n"
        "uniform vec2 f, h;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float q;\r\n"
        "varying vec2 r, s, t;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    q = e[int(c)];\r\n"
        "    r = x / h;\r\n"
        "    s = x * l;\r\n"
        "    t = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * l;\r\n"
        "    gl_Position = g * vec4(x, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[105] = uString::Const("uniform vec2 i, h;\r\n"
        "uniform float j, m, n, o, p;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying float q;\r\n"
        "varying vec2 r, s, t;\r\n"
        "\r\n"
        "float u(vec2 x, vec2 y){\r\n"
        "    vec2 z = abs(x) - y;\r\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 v(vec2 x, vec2 y){\r\n"
        "    return mod(x, y) - (0.5 * y);\r\n"
        "}\r\n"
        "\r\n"
        "float w(vec2 x){\r\n"
        "    vec2 y = h.xy / j;\r\n"
        "    ivec2 z = ivec2(y);\r\n"
        "\r\n"
        "    if (mod(float(z.x), float(2)) == float(0))\r\n"
        "        ++z.x;\r\n"
        "\r\n"
        "    if (mod(float(z.y), float(2)) == float(0))\r\n"
        "        ++z.y;\r\n"
        "\r\n"
        "    y = h.xy / vec2(z);\r\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\r\n"
        "    return -floor(A);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float x = clamp(0.5 - ((((distance(s, t) * m) - q) * n) * o), float(0), float(1));\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[106] = uString::Const("uniform vec2 i, h;\r\n"
        "uniform float j, m, n, o, p;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying float q;\r\n"
        "varying vec2 r, s, t;\r\n"
        "\r\n"
        "float u(vec2 x, vec2 y){\r\n"
        "    vec2 z = abs(x) - y;\r\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 v(vec2 x, vec2 y){\r\n"
        "    return mod(x, y) - (0.5 * y);\r\n"
        "}\r\n"
        "\r\n"
        "float w(vec2 x){\r\n"
        "    vec2 y = h.xy / j;\r\n"
        "    ivec2 z = ivec2(y);\r\n"
        "\r\n"
        "    if (mod(float(z.x), float(2)) == float(0))\r\n"
        "        ++z.x;\r\n"
        "\r\n"
        "    if (mod(float(z.y), float(2)) == float(0))\r\n"
        "        ++z.y;\r\n"
        "\r\n"
        "    y = h.xy / vec2(z);\r\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\r\n"
        "    return -floor(A);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * clamp(0.5 - ((((distance(s, t) * m) - q) * n) * o), float(0), float(1))) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float e[d], q, j;\r\n"
        "uniform vec2 f, h, i, p;\r\n"
        "uniform mat4 g;\r\n"
        "uniform vec4 o;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float r, s;\r\n"
        "varying vec2 t, u;\r\n"
        "\r\n"
        "float w(vec2 x, vec2 y, vec2 z, float A){\r\n"
        "    vec2 B = (x * h) - y;\r\n"
        "    float C = dot(B, z) / A;\r\n"
        "    return (C - i.x) / i.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    r = e[int(c)];\r\n"
        "    s = w(x / h, o.xy, p, q);\r\n"
        "    t = x * j;\r\n"
        "    u = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * j;\r\n"
        "    gl_Position = g * vec4(x, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float k, l, m, n;\r\n"
        "\r\n"
        "uniform sampler2D v;\r\n"
        "\r\n"
        "varying float r, s;\r\n"
        "varying vec2 t, u;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float x = clamp(0.5 - ((((distance(t, u) * k) - r) * l) * m), float(0), float(1));\r\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * n;\r\n"
        "}\r\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float e[d], h;\r\n"
        "uniform vec2 f;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float o;\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    o = e[int(c)];\r\n"
        "    p = r * h;\r\n"
        "    q = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\r\n"
        "    gl_Position = g * vec4(r, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float i, j, k, l, m;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "varying float o;\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = n * clamp(0.5 - (((abs(((distance(p, q) * i) - o) - j) - k) * l) * m), float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float i, j, k, l, m;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "varying float o;\r\n"
        "varying vec2 p, q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float r = clamp(0.5 - (((abs(((distance(p, q) * i) - o) - j) - k) * l) * m), float(0), float(1));\r\n"
        "    gl_FragColor = n * (((r * r) * r) * ((r * ((r * float(6)) - float(15))) + float(10)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float e[d], s, j;\r\n"
        "uniform vec2 f, h, i, r;\r\n"
        "uniform mat4 g;\r\n"
        "uniform vec4 q;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float t, u;\r\n"
        "varying vec2 v, w;\r\n"
        "\r\n"
        "float y(vec2 z, vec2 A, vec2 B, float C){\r\n"
        "    vec2 D = (z * h) - A;\r\n"
        "    float E = dot(D, B) / C;\r\n"
        "    return (E - i.x) / i.y;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 z = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    t = e[int(c)];\r\n"
        "    u = y(z / h, q.xy, r, s);\r\n"
        "    v = z * j;\r\n"
        "    w = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * j;\r\n"
        "    gl_Position = g * vec4(z, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[113] = uString::Const("uniform float k, l, m, n, o, p;\r\n"
        "\r\n"
        "uniform sampler2D x;\r\n"
        "\r\n"
        "varying float t, u;\r\n"
        "varying vec2 v, w;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(x, vec2(u, 0.5)) * clamp(0.5 - (((abs(((distance(v, w) * k) - t) - l) - m) * n) * o), float(0), float(1))) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[114] = uString::Const("uniform float k, l, m, n, o, p;\r\n"
        "\r\n"
        "uniform sampler2D x;\r\n"
        "\r\n"
        "varying float t, u;\r\n"
        "varying vec2 v, w;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float z = clamp(0.5 - (((abs(((distance(v, w) * k) - t) - l) - m) * n) * o), float(0), float(1));\r\n"
        "    gl_FragColor = (texture2D(x, vec2(u, 0.5)) * (((z * z) * z) * ((z * ((z * float(6)) - float(15))) + float(10)))) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[115] = uString::Const("uniform float e[d], l;\r\n"
        "uniform vec2 f, h;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float s;\r\n"
        "varying vec2 t, u, v;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 z = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    s = e[int(c)];\r\n"
        "    t = z / h;\r\n"
        "    u = z * l;\r\n"
        "    v = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * l;\r\n"
        "    gl_Position = g * vec4(z, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[116] = uString::Const("uniform vec2 i, h;\r\n"
        "uniform float j, m, n, o, p, q, r;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying float s;\r\n"
        "varying vec2 t, u, v;\r\n"
        "\r\n"
        "float w(vec2 z, vec2 A){\r\n"
        "    vec2 B = abs(z) - A;\r\n"
        "    return min(max(B.x, B.y), 0.0) + length(max(B, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 x(vec2 z, vec2 A){\r\n"
        "    return mod(z, A) - (0.5 * A);\r\n"
        "}\r\n"
        "\r\n"
        "float y(vec2 z){\r\n"
        "    vec2 A = h.xy / j;\r\n"
        "    ivec2 B = ivec2(A);\r\n"
        "\r\n"
        "    if (mod(float(B.x), float(2)) == float(0))\r\n"
        "        ++B.x;\r\n"
        "\r\n"
        "    if (mod(float(B.y), float(2)) == float(0))\r\n"
        "        ++B.y;\r\n"
        "\r\n"
        "    A = h.xy / vec2(B);\r\n"
        "    float C = w(x(z, A * float(2)) + vec2(j), vec2(j));\r\n"
        "    return -floor(C);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float z = clamp(0.5 - (((abs(((distance(u, v) * m) - s) - n) - o) * p) * q), float(0), float(1));\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(y(t.xy * i), 0.0, 1.0)) * (((z * z) * z) * ((z * ((z * float(6)) - float(15))) + float(10)))) * r;\r\n"
        "}\r\n"
        "");
    ::STRINGS[117] = uString::Const("uniform vec2 i, h;\r\n"
        "uniform float j, m, n, o, p, q, r;\r\n"
        "uniform vec4 k;\r\n"
        "\r\n"
        "varying float s;\r\n"
        "varying vec2 t, u, v;\r\n"
        "\r\n"
        "float w(vec2 z, vec2 A){\r\n"
        "    vec2 B = abs(z) - A;\r\n"
        "    return min(max(B.x, B.y), 0.0) + length(max(B, 0.0));\r\n"
        "}\r\n"
        "\r\n"
        "vec2 x(vec2 z, vec2 A){\r\n"
        "    return mod(z, A) - (0.5 * A);\r\n"
        "}\r\n"
        "\r\n"
        "float y(vec2 z){\r\n"
        "    vec2 A = h.xy / j;\r\n"
        "    ivec2 B = ivec2(A);\r\n"
        "\r\n"
        "    if (mod(float(B.x), float(2)) == float(0))\r\n"
        "        ++B.x;\r\n"
        "\r\n"
        "    if (mod(float(B.y), float(2)) == float(0))\r\n"
        "        ++B.y;\r\n"
        "\r\n"
        "    A = h.xy / vec2(B);\r\n"
        "    float C = w(x(z, A * float(2)) + vec2(j), vec2(j));\r\n"
        "    return -floor(C);\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(y(t.xy * i), 0.0, 1.0)) * clamp(0.5 - (((abs(((distance(u, v) * m) - s) - n) - o) * p) * q), float(0), float(1))) * r;\r\n"
        "}\r\n"
        "");
    ::STRINGS[118] = uString::Const("uniform float g[d], t;\r\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\r\n"
        "uniform mat4 i;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float A;\r\n"
        "varying vec2 B, C, D, E;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 G = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\r\n"
        "    vec2 H = ((((j * (G / j)) - k) / l) * m) + n;\r\n"
        "    A = g[int(c)];\r\n"
        "    B = p + (H * o);\r\n"
        "    C = H;\r\n"
        "    D = G * t;\r\n"
        "    E = (vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h) * t;\r\n"
        "    gl_Position = i * vec4(G, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[119] = uString::Const("uniform vec2 r, q;\r\n"
        "uniform vec4 s;\r\n"
        "uniform float u, v, w, x, y, z;\r\n"
        "\r\n"
        "uniform sampler2D F;\r\n"
        "\r\n"
        "varying float A;\r\n"
        "varying vec2 B, C, D, E;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 G = (f ? vec4(float(0)) : texture2D(F, e ? (r + (fract(B) * q)) : C)) * s;\r\n"
        "    float H = clamp(0.5 - (((abs(((distance(D, E) * u) - A) - v) - w) * x) * y), float(0), float(1));\r\n"
        "    gl_FragColor = (vec4(G.xyz * G.w, G.w) * (((H * H) * H) * ((H * ((H * float(6)) - float(15))) + float(10)))) * z;\r\n"
        "}\r\n"
        "");
    ::STRINGS[120] = uString::Const("F");
    ::STRINGS[121] = uString::Const("uniform vec2 r, q;\r\n"
        "uniform vec4 s;\r\n"
        "uniform float u, v, w, x, y, z;\r\n"
        "\r\n"
        "uniform sampler2D F;\r\n"
        "\r\n"
        "varying float A;\r\n"
        "varying vec2 B, C, D, E;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 G = (f ? vec4(float(0)) : texture2D(F, e ? (r + (fract(B) * q)) : C)) * s;\r\n"
        "    gl_FragColor = (vec4(G.xyz * G.w, G.w) * clamp(0.5 - (((abs(((distance(D, E) * u) - A) - v) - w) * x) * y), float(0), float(1))) * z;\r\n"
        "}\r\n"
        "");
    ::STRINGS[122] = uString::Const("uniform float e[d], h;\r\n"
        "uniform vec2 f;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float p;\r\n"
        "varying vec2 q, r;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    p = e[int(c)];\r\n"
        "    q = s * h;\r\n"
        "    r = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\r\n"
        "    gl_Position = g * vec4(s, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float i, j, k, l, m, o;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "varying float p;\r\n"
        "varying vec2 q, r;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (n * clamp(0.5 - (((abs(((distance(q, r) * i) - p) - j) - k) * l) * m), float(0), float(1))) * o;\r\n"
        "}\r\n"
        "");
    ::STRINGS[124] = uString::Const("uniform float i, j, k, l, m, o;\r\n"
        "uniform vec4 n;\r\n"
        "\r\n"
        "varying float p;\r\n"
        "varying vec2 q, r;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float s = clamp(0.5 - (((abs(((distance(q, r) * i) - p) - j) - k) * l) * m), float(0), float(1));\r\n"
        "    gl_FragColor = (n * (((s * s) * s) * ((s * ((s * float(6)) - float(15))) + float(10)))) * o;\r\n"
        "}\r\n"
        "");
    ::STRINGS[125] = uString::Const("uniform float e[d], h;\r\n"
        "uniform vec2 f;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float n;\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    n = e[int(c)];\r\n"
        "    o = q * h;\r\n"
        "    p = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\r\n"
        "    gl_Position = g * vec4(q, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[126] = uString::Const("uniform float i, j, k, m;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "varying float n;\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float q = clamp(0.5 - ((((distance(o, p) * i) - n) * j) * k), float(0), float(1));\r\n"
        "    gl_FragColor = (l * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10)))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[127] = uString::Const("uniform float i, j, k, m;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "varying float n;\r\n"
        "varying vec2 o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (l * clamp(0.5 - ((((distance(o, p) * i) - n) * j) * k), float(0), float(1))) * m;\r\n"
        "}\r\n"
        "");
    ::STRINGS[128] = uString::Const("uniform float k, l, m, n;\r\n"
        "\r\n"
        "uniform sampler2D v;\r\n"
        "\r\n"
        "varying float r, s;\r\n"
        "varying vec2 t, u;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * clamp(0.5 - ((((distance(t, u) * k) - r) * l) * m), float(0), float(1))) * n;\r\n"
        "}\r\n"
        "");
    ::STRINGS[129] = uString::Const("uniform float e[d], h;\r\n"
        "uniform vec2 f;\r\n"
        "uniform mat4 g;\r\n"
        "\r\n"
        "attribute vec4 a, b;\r\n"
        "attribute float c;\r\n"
        "\r\n"
        "varying float m;\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\r\n"
        "    m = e[int(c)];\r\n"
        "    n = p * h;\r\n"
        "    o = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\r\n"
        "    gl_Position = g * vec4(p, 0., 1.);\r\n"
        "}\r\n"
        "");
    ::STRINGS[130] = uString::Const("uniform float i, j, k;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "varying float m;\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = l * clamp(0.5 - ((((distance(n, o) * i) - m) * j) * k), float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[131] = uString::Const("uniform float i, j, k;\r\n"
        "uniform vec4 l;\r\n"
        "\r\n"
        "varying float m;\r\n"
        "varying vec2 n, o;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    float p = clamp(0.5 - ((((distance(n, o) * i) - m) * j) * k), float(0), float(1));\r\n"
        "    gl_FragColor = l * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[132] = uString::Const("uniform vec2 r, q;\r\n"
        "uniform vec4 s;\r\n"
        "uniform float u, v, w, x;\r\n"
        "\r\n"
        "uniform sampler2D D;\r\n"
        "\r\n"
        "varying float y;\r\n"
        "varying vec2 z, A, B, C;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\r\n"
        "    float F = clamp(0.5 - ((((distance(B, C) * u) - y) * v) * w), float(0), float(1));\r\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * (((F * F) * F) * ((F * ((F * float(6)) - float(15))) + float(10)))) * x;\r\n"
        "}\r\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle012b044f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e7404_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e7409_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0f9e740a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle1666aa55_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle2e704b9c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle39b04c1c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle39b04c1e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle39b04c1f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle42b21980_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle5bb592c2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle5e838fb4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle60575c7b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle73bf34d2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle73bf35ba_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlea1047bf8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleb90e1dc2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlebdafe7e0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled117c037_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled117c11f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled2eb8cb7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlee5598e1b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1d38_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1df8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1dfa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1dfb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef7ec1ed7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlefe5d075d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle26472755_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle538c6e5c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle565a6cfd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7c9a26db_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleb3b2f694_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangled46c7a4a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleec761c79_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglef633e2b5_, uFieldFlagsStatic);
    type->Reflection.SetFields(50,
        new uField("Circle012b044f", 0),
        new uField("Circle0f9e7404", 1),
        new uField("Circle0f9e7409", 2),
        new uField("Circle0f9e740a", 3),
        new uField("Circle1666aa55", 4),
        new uField("Circle2e704b9c", 5),
        new uField("Circle39b04c1c", 6),
        new uField("Circle39b04c1e", 7),
        new uField("Circle39b04c1f", 8),
        new uField("Circle42b21980", 9),
        new uField("Circle5bb592c2", 10),
        new uField("Circle5e838fb4", 11),
        new uField("Circle60575c7b", 12),
        new uField("Circle73bf34d2", 13),
        new uField("Circle73bf35ba", 14),
        new uField("Circlea1047bf8", 15),
        new uField("Circleb90e1dc2", 16),
        new uField("Circlebdafe7e0", 17),
        new uField("Circled117c037", 18),
        new uField("Circled117c11f", 19),
        new uField("Circled2eb8cb7", 20),
        new uField("Circlee5598e1b", 21),
        new uField("Circlef7ec1d38", 22),
        new uField("Circlef7ec1df8", 23),
        new uField("Circlef7ec1dfa", 24),
        new uField("Circlef7ec1dfb", 25),
        new uField("Circlef7ec1ed4", 26),
        new uField("Circlef7ec1ed6", 27),
        new uField("Circlef7ec1ed7", 28),
        new uField("Circlefe5d075d", 29),
        new uField("Rectangle0e3d84e4", 30),
        new uField("Rectangle26472755", 31),
        new uField("Rectangle538c6e5c", 32),
        new uField("Rectangle565a6cfd", 33),
        new uField("Rectangle7c9a26db", 34),
        new uField("Rectangle7c9a26dc", 35),
        new uField("Rectangle7fa93ce4", 36),
        new uField("Rectanglea858f3bc", 37),
        new uField("Rectanglea858f4fc", 38),
        new uField("Rectanglea858f503", 39),
        new uField("Rectanglea858f53c", 40),
        new uField("Rectanglea858f53f", 41),
        new uField("Rectanglea858f57b", 42),
        new uField("Rectanglea858f57c", 43),
        new uField("Rectangleb0e4f93d", 44),
        new uField("Rectangleb3b2f694", 45),
        new uField("Rectanglec8ee9d37", 46),
        new uField("Rectangled46c7a4a", 47),
        new uField("Rectangleec761c79", 48),
        new uField("Rectanglef633e2b5", 49));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 50;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle012b044f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e7404_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e7409_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0f9e740a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle1666aa55_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2e704b9c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle39b04c1c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle39b04c1e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle39b04c1f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle42b21980_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5bb592c2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5e838fb4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60575c7b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle73bf34d2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle73bf35ba_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlea1047bf8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleb90e1dc2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebdafe7e0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled117c037_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled117c11f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled2eb8cb7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee5598e1b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1d38_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1df8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1dfa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1dfb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef7ec1ed7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlefe5d075d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle0e3d84e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle26472755_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle538c6e5c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle565a6cfd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c9a26db_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c9a26dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb0e4f93d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb3b2f694_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglec8ee9d37_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangled46c7a4a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleec761c79_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglef633e2b5_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Effects\1.8.1\.uno\package
// -----------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform mat...*/], ::STRINGS[134/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[15/*"h"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform mat...*/], ::STRINGS[136/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[10/*"f"*/]));
    FuseEffects_bundle::Duotone26eb7e3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform mat...*/], ::STRINGS[137/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[15/*"h"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"attribute v...*/], ::STRINGS[139/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[4/*"a"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[15/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"attribute v...*/], ::STRINGS[141/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[4/*"a"*/], ::STRINGS[6/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"uniform vec...*/], ::STRINGS[143/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[30/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[144/*"uniform vec...*/], ::STRINGS[145/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[25/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[147/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[29/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[148/*"uniform mat...*/], ::STRINGS[149/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[148/*"uniform mat...*/], ::STRINGS[150/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[148/*"uniform mat...*/], ::STRINGS[151/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[133] = uString::Const("uniform mat4 f, b;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\r\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[134] = uString::Const("uniform vec3 e;\r\n"
        "uniform float c, d;\r\n"
        "\r\n"
        "uniform sampler2D h;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[15] = uString::Const("h");
    ::STRINGS[135] = uString::Const("uniform mat4 d, b;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\r\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[136] = uString::Const("uniform float c;\r\n"
        "\r\n"
        "uniform sampler2D f;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 g = texture2D(f, e);\r\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\r\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\r\n"
        "}\r\n"
        "");
    ::STRINGS[137] = uString::Const("uniform vec3 c, d;\r\n"
        "uniform float e;\r\n"
        "\r\n"
        "uniform sampler2D h;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 i = texture2D(h, g);\r\n"
        "    vec4 j = vec4(i.xyz / max(i.w, 1e-05), i.w);\r\n"
        "    gl_FragColor = vec4(mix(j.xyz, mix(c, d, sqrt(dot(j.xyz * j.xyz, vec3(0.299, 0.587, 0.114)))).xyz, e), j.w);\r\n"
        "}\r\n"
        "");
    ::STRINGS[138] = uString::Const("attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\r\n"
        "    g = (j.xy * 0.5) + 0.5;\r\n"
        "    gl_Position = vec4(j, float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[139] = uString::Const("uniform float e[b];\r\n"
        "uniform vec2 f[d];\r\n"
        "\r\n"
        "uniform sampler2D h;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "vec4 i(vec2 j){\r\n"
        "    vec4 k = texture2D(h, j) * e[0];\r\n"
        "\r\n"
        "    for (int l = 0; l < c; ++l)\r\n"
        "    {\r\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\r\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\r\n"
        "    }\r\n"
        "\r\n"
        "    return k;\r\n"
        "}\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = i(g);\r\n"
        "}\r\n"
        "");
    ::STRINGS[140] = uString::Const("attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 b;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\r\n"
        "    b = (d.xy * 0.5) + 0.5;\r\n"
        "    gl_Position = vec4(d, float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[141] = uString::Const("uniform sampler2D c;\r\n"
        "\r\n"
        "varying vec2 b;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(c, b);\r\n"
        "}\r\n"
        "");
    ::STRINGS[142] = uString::Const("uniform vec2 c, e, f, h, i, j;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\r\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\r\n"
        "    k = v;\r\n"
        "    l = v + c;\r\n"
        "    m = v - c;\r\n"
        "    n = v + e;\r\n"
        "    o = v - e;\r\n"
        "    p = v + f;\r\n"
        "    q = v + h;\r\n"
        "    r = v + i;\r\n"
        "    s = v + j;\r\n"
        "    gl_Position = vec4(u, float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[143] = uString::Const("uniform float b, d, g;\r\n"
        "\r\n"
        "uniform sampler2D t;\r\n"
        "\r\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\r\n"
        "}\r\n"
        "");
    ::STRINGS[14] = uString::Const("g");
    ::STRINGS[16] = uString::Const("i");
    ::STRINGS[17] = uString::Const("j");
    ::STRINGS[30] = uString::Const("t");
    ::STRINGS[144] = uString::Const("uniform vec2 c, e, f, g;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 h, i, j, k, l;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\r\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\r\n"
        "    h = o;\r\n"
        "    i = o + c;\r\n"
        "    j = o + e;\r\n"
        "    k = o + f;\r\n"
        "    l = o + g;\r\n"
        "    gl_Position = vec4(n, float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[145] = uString::Const("uniform float b, d;\r\n"
        "\r\n"
        "uniform sampler2D m;\r\n"
        "\r\n"
        "varying vec2 h, i, j, k, l;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\r\n"
        "}\r\n"
        "");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[146] = uString::Const("uniform mat4 m, b;\r\n"
        "uniform vec2 g, h;\r\n"
        "uniform mat2 i;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 n, o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\r\n"
        "    vec2 s = (r * g) + h;\r\n"
        "    n = r;\r\n"
        "    o = i * s;\r\n"
        "    p = s;\r\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[147] = uString::Const("uniform float c, d, e, f, k, l;\r\n"
        "uniform mat2 j;\r\n"
        "\r\n"
        "uniform sampler2D q;\r\n"
        "\r\n"
        "varying vec2 n, o, p;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 r = texture2D(q, n);\r\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[29] = uString::Const("q");
    ::STRINGS[148] = uString::Const("uniform mat4 e, b;\r\n"
        "uniform vec2 c, d;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 f, g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\r\n"
        "    f = j;\r\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\r\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\r\n"
        "}\r\n"
        "");
    ::STRINGS[149] = uString::Const("uniform sampler2D h, i;\r\n"
        "\r\n"
        "varying vec2 f, g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\r\n"
        "}\r\n"
        "");
    ::STRINGS[150] = uString::Const("uniform sampler2D h, i;\r\n"
        "\r\n"
        "varying vec2 f, g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 j = texture2D(i, g);\r\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\r\n"
        "}\r\n"
        "");
    ::STRINGS[151] = uString::Const("uniform sampler2D h, i;\r\n"
        "\r\n"
        "varying vec2 f, g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\r\n"
        "}\r\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Duotone26eb7e3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
    type->Reflection.SetFields(11,
        new uField("Blitter6e650d31", 0),
        new uField("Desaturate88bb7f94", 1),
        new uField("Duotone26eb7e3c", 2),
        new uField("EffectHelpers52052d40", 3),
        new uField("EffectHelpers9b892494", 4),
        new uField("EffectHelpersd8c2e3e5", 5),
        new uField("EffectHelperse7e608d1", 6),
        new uField("Halftone3c4c510c", 7),
        new uField("Mask0da73af7", 8),
        new uField("Mask6affc65c", 9),
        new uField("Maskb04eaf92", 10));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Duotone26eb7e3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Elements\1.8.1\.uno\package
// ------------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform mat...*/], ::STRINGS[153/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[10/*"f"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform vec...*/], ::STRINGS[155/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[13/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[156/*"uniform flo...*/], ::STRINGS[157/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[14/*"g"*/], ::STRINGS[15/*"h"*/], ::STRINGS[16/*"i"*/], ::STRINGS[17/*"j"*/], ::STRINGS[24/*"k"*/], ::STRINGS[18/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[26/*"n"*/], ::STRINGS[27/*"o"*/], ::STRINGS[28/*"p"*/], ::STRINGS[48/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[152] = uString::Const("uniform mat4 c;\r\n"
        "\r\n"
        "attribute vec3 a;\r\n"
        "attribute vec2 b;\r\n"
        "\r\n"
        "varying float d;\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    d = a.z;\r\n"
        "    e = vec2(b.x, 1.0 - b.y);\r\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[153] = uString::Const("uniform sampler2D f;\r\n"
        "\r\n"
        "varying float d;\r\n"
        "varying vec2 e;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(f, e) * d;\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[154] = uString::Const("uniform vec2 b, c;\r\n"
        "\r\n"
        "attribute vec2 a;\r\n"
        "\r\n"
        "varying vec2 d;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    d = (a * b) / c;\r\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[155] = uString::Const("uniform sampler2D e;\r\n"
        "\r\n"
        "varying vec2 d;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(e, fract(d));\r\n"
        "}\r\n"
        "");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[156] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\r\n"
        "uniform mat4 i, j;\r\n"
        "uniform vec2 o;\r\n"
        "\r\n"
        "attribute vec3 a, b;\r\n"
        "\r\n"
        "varying vec2 q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\r\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\r\n"
        "}\r\n"
        "");
    ::STRINGS[157] = uString::Const("uniform vec4 p;\r\n"
        "\r\n"
        "uniform sampler2D r;\r\n"
        "\r\n"
        "varying vec2 q;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = texture2D(r, q) * p;\r\n"
        "}\r\n"
        "");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[14] = uString::Const("g");
    ::STRINGS[15] = uString::Const("h");
    ::STRINGS[16] = uString::Const("i");
    ::STRINGS[17] = uString::Const("j");
    ::STRINGS[24] = uString::Const("k");
    ::STRINGS[18] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[26] = uString::Const("n");
    ::STRINGS[27] = uString::Const("o");
    ::STRINGS[28] = uString::Const("p");
    ::STRINGS[48] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("ElementBatchd43eeb4e", 0),
        new uField("RepeatBaker447c61dc", 1),
        new uField("Scale9Rectangle720ad3ad", 2));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker447c61dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Models\1.8.1\.uno\package
// ----------------------------------------------------------------------------------

// public static generated class FuseModels_bundle :0
// {
// static FuseModels_bundle() :0
static void FuseModels_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    FuseModels_bundle::zonec3815532_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[158/*"Fuse.Models"*/]))->GetFile(::STRINGS[159/*"zone-8fb8d8...*/]);
}

static void FuseModels_bundle_build(uType* type)
{
    ::STRINGS[158] = uString::Const("Fuse.Models");
    ::STRINGS[159] = uString::Const("zone-8fb8d898.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseModels_bundle::zonec3815532_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("zonec3815532", 0));
}

uClassType* FuseModels_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseModels_bundle", options);
    type->fp_build_ = FuseModels_bundle_build;
    type->fp_cctor_ = FuseModels_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseModels_bundle::zonec3815532_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Nodes\1.8.1\.uno\package
// ---------------------------------------------------------------------------------

// public static generated class FuseNodes_bundle :0
// {
// static FuseNodes_bundle() :0
static void FuseNodes_bundle__cctor__fn(uType* __type)
{
    FuseNodes_bundle::DrawRectVisualizer5cbb2c45_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[160/*"uniform mat...*/], ::STRINGS[161/*"varying vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[160] = uString::Const("uniform mat4 c;\r\n"
        "\r\n"
        "attribute vec4 a;\r\n"
        "attribute vec2 b;\r\n"
        "\r\n"
        "varying vec4 d;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    d = vec4(b, float(0), 0.2);\r\n"
        "    gl_Position = c * a;\r\n"
        "}\r\n"
        "");
    ::STRINGS[161] = uString::Const("varying vec4 d;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = d;\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseNodes_bundle::DrawRectVisualizer5cbb2c45_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("DrawRectVisualizer5cbb2c45", 0));
}

uClassType* FuseNodes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseNodes_bundle", options);
    type->fp_build_ = FuseNodes_bundle_build;
    type->fp_cctor_ = FuseNodes_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawRectVisualizer5cbb2c45_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header :1
// {
// static generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() :1
static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__cctor__fn(uType* __type)
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1();
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[162/*"Header"*/]);
}

static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_build(uType* type)
{
    ::STRINGS[162] = uString::Const("Header");
    ::TYPES[15] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", options);
    type->fp_build_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_build;
    type->fp_ctor_ = (void*)FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__New1_fn;
    type->fp_cctor_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() :1
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[15/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Header(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_, void();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header New() :1
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header** __retval)
{
    *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[15/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetHeader(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::Singleton_;
::g::Uno::UX::Selector FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::_name_;

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header() [instance] :1
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::ctor_1()
{
    ctor_();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header New() [static] :1
FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header::New1()
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header* obj1 = (FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header*)uNew(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Header_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message :11
// {
// static generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() :11
static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__cctor__fn(uType* __type)
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1();
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[163/*"Message"*/]);
}

static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_build(uType* type)
{
    ::STRINGS[163] = uString::Const("Message");
    ::TYPES[15] = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", options);
    type->fp_build_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_build;
    type->fp_ctor_ = (void*)FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__New1_fn;
    type->fp_cctor_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() :11
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[15/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->Message(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_, void();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message New() :11
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message** __retval)
{
    *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen*>(obj, ::TYPES[15/*Outracks.Simulator.Client.Dialogs.LoadingScreen*/]))->SetMessage(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::Singleton_;
::g::Uno::UX::Selector FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::_name_;

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message() [instance] :11
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::ctor_1()
{
    ctor_();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message New() [static] :11
FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message::New1()
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message* obj1 = (FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message*)uNew(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_LoadingScreen_Message_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body :31
// {
// static generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() :31
static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__cctor__fn(uType* __type)
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1();
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[164/*"Body"*/]);
}

static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_build(uType* type)
{
    ::STRINGS[164] = uString::Const("Body");
    ::TYPES[16] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", options);
    type->fp_build_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_build;
    type->fp_ctor_ = (void*)FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__New1_fn;
    type->fp_cctor_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() :31
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Body(), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_, void();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body New() :31
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body** __retval)
{
    *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetBody(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::Singleton_;
::g::Uno::UX::Selector FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::_name_;

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body() [instance] :31
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::ctor_1()
{
    ctor_();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body New() [static] :31
FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body::New1()
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body* obj1 = (FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body*)uNew(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Body_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details :41
// {
// static generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() :41
static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__cctor__fn(uType* __type)
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1();
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[165/*"Details"*/]);
}

static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_build(uType* type)
{
    ::STRINGS[165] = uString::Const("Details");
    ::TYPES[16] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", options);
    type->fp_build_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_build;
    type->fp_ctor_ = (void*)FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__New1_fn;
    type->fp_cctor_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() :41
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :47
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Details(), void();
}

// public override sealed Uno.UX.Selector get_Name() :44
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_, void();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details New() :41
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details** __retval)
{
    *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1();
}

// public override sealed Uno.Type get_PropertyType() :46
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :48
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetDetails(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :49
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::Singleton_;
::g::Uno::UX::Selector FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::_name_;

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details() [instance] :41
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::ctor_1()
{
    ctor_();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details New() [static] :41
FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details::New1()
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details* obj1 = (FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details*)uNew(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Details_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header :21
// {
// static generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() :21
static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__cctor__fn(uType* __type)
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1();
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[162/*"Header"*/]);
}

static void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_build(uType* type)
{
    ::STRINGS[162] = uString::Const("Header");
    ::TYPES[16] = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", options);
    type->fp_build_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_build;
    type->fp_ctor_ = (void*)FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__New1_fn;
    type->fp_cctor_ = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() :21
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__ctor_1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__GetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->Header(), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_Name_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_, void();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header New() :21
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__New1_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header** __retval)
{
    *__retval = FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_PropertyType_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__SetAsObject_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::Client::Dialogs::ModalDialog*>(obj, ::TYPES[16/*Outracks.Simulator.Client.Dialogs.ModalDialog*/]))->SetHeader(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header__get_SupportsOriginSetter_fn(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::Singleton_;
::g::Uno::UX::Selector FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::_name_;

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header() [instance] :21
void FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::ctor_1()
{
    ctor_();
}

// public generated FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header New() [static] :21
FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header::New1()
{
    FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header* obj1 = (FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header*)uNew(FusePreviewCore_accessor_Outracks_Simulator_Client_Dialogs_ModalDialog_Header_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\package
// ----------------------------------------------------------------------------------------

// public static generated class FusePreviewCore_bundle :0
// {
// static FusePreviewCore_bundle() :0
static void FusePreviewCore_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    FusePreviewCore_bundle::fight86c8dd97_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[166/*"Fuse.Previe...*/]))->GetFile(::STRINGS[167/*"fight-15374...*/]);
}

static void FusePreviewCore_bundle_build(uType* type)
{
    ::STRINGS[166] = uString::Const("Fuse.Preview.Core");
    ::STRINGS[167] = uString::Const("fight-1537455b.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FusePreviewCore_bundle::fight86c8dd97_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fight86c8dd97", 0));
}

uClassType* FusePreviewCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FusePreviewCore_bundle", options);
    type->fp_build_ = FusePreviewCore_bundle_build;
    type->fp_cctor_ = FusePreviewCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FusePreviewCore_bundle::fight86c8dd97_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_FuseControlsTextControl_Value_Property :60
// {
static void FusePreviewCore_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Controls.TextControl*/], offsetof(FusePreviewCore_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FusePreviewCore_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FusePreviewCore_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FusePreviewCore_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FusePreviewCore_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FusePreviewCore_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FusePreviewCore_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FusePreviewCore_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :63
void FusePreviewCore_FuseControlsTextControl_Value_Property__ctor_3_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :65
void FusePreviewCore_FuseControlsTextControl_Value_Property__Get1_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("FusePreviewCore_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FusePreviewCore_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :63
void FusePreviewCore_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FusePreviewCore_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FusePreviewCore_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :64
void FusePreviewCore_FuseControlsTextControl_Value_Property__get_Object_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :66
void FusePreviewCore_FuseControlsTextControl_Value_Property__Set1_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :67
void FusePreviewCore_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FusePreviewCore_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FusePreviewCore_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :63
void FusePreviewCore_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FusePreviewCore_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :63
FusePreviewCore_FuseControlsTextControl_Value_Property* FusePreviewCore_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FusePreviewCore_FuseControlsTextControl_Value_Property* obj1 = (FusePreviewCore_FuseControlsTextControl_Value_Property*)uNew(FusePreviewCore_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_FuseElementsElement_Opacity_Property :51
// {
static void FusePreviewCore_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FusePreviewCore_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FusePreviewCore_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FusePreviewCore_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FusePreviewCore_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FusePreviewCore_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FusePreviewCore_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FusePreviewCore_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FusePreviewCore_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FusePreviewCore_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :54
void FusePreviewCore_FuseElementsElement_Opacity_Property__ctor_3_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :56
void FusePreviewCore_FuseElementsElement_Opacity_Property__Get1_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FusePreviewCore_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FusePreviewCore_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :54
void FusePreviewCore_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FusePreviewCore_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FusePreviewCore_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :55
void FusePreviewCore_FuseElementsElement_Opacity_Property__get_Object_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :57
void FusePreviewCore_FuseElementsElement_Opacity_Property__Set1_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :58
void FusePreviewCore_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FusePreviewCore_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FusePreviewCore_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :54
void FusePreviewCore_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FusePreviewCore_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :54
FusePreviewCore_FuseElementsElement_Opacity_Property* FusePreviewCore_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FusePreviewCore_FuseElementsElement_Opacity_Property* obj1 = (FusePreviewCore_FuseElementsElement_Opacity_Property*)uNew(FusePreviewCore_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Preview.Core\0.1.0\.uno\ux14\Fuse.Preview.Core.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------------------

// internal sealed class FusePreviewCore_FuseTriggersWhileString_Value_Property :69
// {
static void FusePreviewCore_FuseTriggersWhileString_Value_Property_build(uType* type)
{
    ::TYPES[17] = ::g::Fuse::Triggers::WhileString_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[17/*Fuse.Triggers.WhileString*/], offsetof(FusePreviewCore_FuseTriggersWhileString_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FusePreviewCore_FuseTriggersWhileString_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FusePreviewCore_FuseTriggersWhileString_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FusePreviewCore_FuseTriggersWhileString_Value_Property", options);
    type->fp_build_ = FusePreviewCore_FuseTriggersWhileString_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FusePreviewCore_FuseTriggersWhileString_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FusePreviewCore_FuseTriggersWhileString_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FusePreviewCore_FuseTriggersWhileString_Value_Property__Set1_fn;
    return type;
}

// public FusePreviewCore_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :72
void FusePreviewCore_FuseTriggersWhileString_Value_Property__ctor_3_fn(FusePreviewCore_FuseTriggersWhileString_Value_Property* __this, ::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :74
void FusePreviewCore_FuseTriggersWhileString_Value_Property__Get1_fn(FusePreviewCore_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("FusePreviewCore_FuseTriggersWhileString_Value_Property", "Get(Uno.UX.PropertyObject)");
    uString* ret2;
    return *__retval = (::g::Fuse::Triggers::WhileValue__get_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[17/*Fuse.Triggers.WhileString*/])), &ret2), ret2), void();
}

// public FusePreviewCore_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) :72
void FusePreviewCore_FuseTriggersWhileString_Value_Property__New1_fn(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector* name, FusePreviewCore_FuseTriggersWhileString_Value_Property** __retval)
{
    *__retval = FusePreviewCore_FuseTriggersWhileString_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :73
void FusePreviewCore_FuseTriggersWhileString_Value_Property__get_Object_fn(FusePreviewCore_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :75
void FusePreviewCore_FuseTriggersWhileString_Value_Property__Set1_fn(FusePreviewCore_FuseTriggersWhileString_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("FusePreviewCore_FuseTriggersWhileString_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    ::g::Fuse::Triggers::WhileValue__set_Value_fn(uPtr(uCast< ::g::Fuse::Triggers::WhileString*>(obj, ::TYPES[17/*Fuse.Triggers.WhileString*/])), v);
}

// public FusePreviewCore_FuseTriggersWhileString_Value_Property(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [instance] :72
void FusePreviewCore_FuseTriggersWhileString_Value_Property::ctor_3(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FusePreviewCore_FuseTriggersWhileString_Value_Property New(Fuse.Triggers.WhileString obj, Uno.UX.Selector name) [static] :72
FusePreviewCore_FuseTriggersWhileString_Value_Property* FusePreviewCore_FuseTriggersWhileString_Value_Property::New1(::g::Fuse::Triggers::WhileString* obj, ::g::Uno::UX::Selector name)
{
    FusePreviewCore_FuseTriggersWhileString_Value_Property* obj1 = (FusePreviewCore_FuseTriggersWhileString_Value_Property*)uNew(FusePreviewCore_FuseTriggersWhileString_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Scripting.JavaScript\1.8.1\.uno\package
// ------------------------------------------------------------------------------------------------

// public static generated class FuseScriptingJavaScript_bundle :0
// {
// static FuseScriptingJavaScript_bundle() :0
static void FuseScriptingJavaScript_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    FuseScriptingJavaScript_bundle::Diagnosticsc4c4898b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[168/*"Fuse.Script...*/]))->GetFile(::STRINGS[169/*"diagnostics...*/]);
    FuseScriptingJavaScript_bundle::es6promisemin7457eb6c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[168/*"Fuse.Script...*/]))->GetFile(::STRINGS[170/*"es6-promise...*/]);
    FuseScriptingJavaScript_bundle::Observable5f9ac822_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[168/*"Fuse.Script...*/]))->GetFile(::STRINGS[171/*"observable-...*/]);
    FuseScriptingJavaScript_bundle::setTimeoutff7a8124_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[168/*"Fuse.Script...*/]))->GetFile(::STRINGS[172/*"settimeout-...*/]);
    FuseScriptingJavaScript_bundle::TreeObservable7be76da6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[168/*"Fuse.Script...*/]))->GetFile(::STRINGS[173/*"treeobserva...*/]);
}

static void FuseScriptingJavaScript_bundle_build(uType* type)
{
    ::STRINGS[168] = uString::Const("Fuse.Scripting.JavaScript");
    ::STRINGS[169] = uString::Const("diagnostics-46013124.js");
    ::STRINGS[170] = uString::Const("es6-promise.min-a3069df9.js");
    ::STRINGS[171] = uString::Const("observable-de799b21.js");
    ::STRINGS[172] = uString::Const("settimeout-2838aff1.js");
    ::STRINGS[173] = uString::Const("treeobservable-cf8dbe0b.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::Diagnosticsc4c4898b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::es6promisemin7457eb6c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::Observable5f9ac822_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::setTimeoutff7a8124_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::TreeObservable7be76da6_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("Diagnosticsc4c4898b", 0),
        new uField("es6promisemin7457eb6c", 1),
        new uField("Observable5f9ac822", 2),
        new uField("setTimeoutff7a8124", 3),
        new uField("TreeObservable7be76da6", 4));
}

uClassType* FuseScriptingJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseScriptingJavaScript_bundle", options);
    type->fp_build_ = FuseScriptingJavaScript_bundle_build;
    type->fp_cctor_ = FuseScriptingJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::Diagnosticsc4c4898b_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::es6promisemin7457eb6c_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::Observable5f9ac822_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::setTimeoutff7a8124_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::TreeObservable7be76da6_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Text\1.8.1\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseText_bundle :0
// {
// static FuseText_bundle() :0
static void FuseText_bundle__cctor__fn(uType* __type)
{
    FuseText_bundle::Renderer0b7f7722_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[174/*"uniform mat...*/], ::STRINGS[175/*"uniform vec...*/], 1, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[6/*"c"*/], ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[9/*"d"*/], ::STRINGS[13/*"e"*/], ::STRINGS[10/*"f"*/], ::STRINGS[15/*"h"*/]));
}

static void FuseText_bundle_build(uType* type)
{
    ::STRINGS[174] = uString::Const("uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a, b;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    g = b;\r\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[175] = uString::Const("uniform vec4 e;\r\n"
        "uniform float f;\r\n"
        "\r\n"
        "uniform sampler2D h;\r\n"
        "\r\n"
        "varying vec2 g;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    vec4 i = texture2D(h, g);\r\n"
        "    gl_FragColor = c ? (e * vec4(i.x)) : (i * f);\r\n"
        "}\r\n"
        "");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[13] = uString::Const("e");
    ::STRINGS[10] = uString::Const("f");
    ::STRINGS[15] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseText_bundle::Renderer0b7f7722_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Renderer0b7f7722", 0));
}

uClassType* FuseText_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseText_bundle", options);
    type->fp_build_ = FuseText_bundle_build;
    type->fp_cctor_ = FuseText_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseText_bundle::Renderer0b7f7722_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\.uno\package
// ------------------------------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SpriteFontShader901b6a86_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[176/*"uniform mat...*/], ::STRINGS[177/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[4/*"a"*/], ::STRINGS[5/*"b"*/], ::STRINGS[6/*"c"*/], ::STRINGS[9/*"d"*/], ::STRINGS[14/*"g"*/]));
}

static void UnoCore_bundle_build(uType* type)
{
    ::STRINGS[176] = uString::Const("uniform mat4 d;\r\n"
        "\r\n"
        "attribute vec2 a, c;\r\n"
        "attribute vec4 b;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "varying vec4 f;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    e = c;\r\n"
        "    f = b;\r\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\r\n"
        "}\r\n"
        "");
    ::STRINGS[177] = uString::Const("uniform sampler2D g;\r\n"
        "\r\n"
        "varying vec2 e;\r\n"
        "varying vec4 f;\r\n"
        "\r\n"
        "void main()\r\n"
        "{\r\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\r\n"
        "}\r\n"
        "");
    ::STRINGS[4] = uString::Const("a");
    ::STRINGS[5] = uString::Const("b");
    ::STRINGS[6] = uString::Const("c");
    ::STRINGS[9] = uString::Const("d");
    ::STRINGS[14] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&UnoCore_bundle::SpriteFontShader901b6a86_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("SpriteFontShader901b6a86", 0));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_build_ = UnoCore_bundle_build;
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShader901b6a86_;
// }

} // ::g
