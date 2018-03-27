// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBlendEquation.h>
#include <OpenGL.GLBlendingFactor.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLCullFaceMode.h>
#include <OpenGL.GLDataType.h>
#include <OpenGL.GLDepthFunction.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferAttachment.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferStatus.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLFrontFaceDirection.h>
#include <OpenGL.GLIndexType.h>
#include <OpenGL.GLInteger4Name.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLPrimitiveType.h>
#include <OpenGL.GLProgramHandle.h>
#include <OpenGL.GLProgramParameter.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLRenderbufferStorage.h>
#include <OpenGL.GLRenderbufferTarget.h>
#include <OpenGL.GLShaderHandle.h>
#include <OpenGL.GLShaderParameter.h>
#include <OpenGL.GLShaderType.h>
#include <OpenGL.GLStringName.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int4.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uType* TYPES[1];

namespace g{
namespace OpenGL{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GL.uno
// --------------------------------------------------------------------------------------

// public static extern class GL :12
// {
static void GL_build(uType* type)
{
    type->Reflection.SetFunctions(78,
        new uFunction("ActiveTexture", NULL, (void*)GL__ActiveTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureUnit_typeof()),
        new uFunction("AttachShader", NULL, (void*)GL__AttachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("BindBuffer", NULL, (void*)GL__BindBuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLBufferTarget_typeof(), ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("BindFramebuffer", NULL, (void*)GL__BindFramebuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("BindRenderbuffer", NULL, (void*)GL__BindRenderbuffer_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("BindTexture", NULL, (void*)GL__BindTexture_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("BlendFuncSeparate", NULL, (void*)GL__BlendFuncSeparate_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof(), ::g::OpenGL::GLBlendingFactor_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferData", NULL, (void*)GL__BufferData2_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Buffer_typeof(), ::g::OpenGL::GLBufferUsage_typeof()),
        new uFunction("BufferSubData", NULL, (void*)GL__BufferSubData_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("BufferSubData", NULL, (void*)GL__BufferSubData1_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLBufferTarget_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("CheckFramebufferStatus", NULL, (void*)GL__CheckFramebufferStatus_fn, 0, true, ::g::OpenGL::GLFramebufferStatus_typeof(), 1, ::g::OpenGL::GLFramebufferTarget_typeof()),
        new uFunction("Clear", NULL, (void*)GL__Clear_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLClearBufferMask_typeof()),
        new uFunction("ClearColor", NULL, (void*)GL__ClearColor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("ClearDepth", NULL, (void*)GL__ClearDepth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("ColorMask", NULL, (void*)GL__ColorMask_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("CompileShader", NULL, (void*)GL__CompileShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("CreateBuffer", NULL, (void*)GL__CreateBuffer_fn, 0, true, ::g::OpenGL::GLBufferHandle_typeof(), 0),
        new uFunction("CreateFramebuffer", NULL, (void*)GL__CreateFramebuffer_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("CreateProgram", NULL, (void*)GL__CreateProgram_fn, 0, true, ::g::OpenGL::GLProgramHandle_typeof(), 0),
        new uFunction("CreateRenderbuffer", NULL, (void*)GL__CreateRenderbuffer_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("CreateShader", NULL, (void*)GL__CreateShader_fn, 0, true, ::g::OpenGL::GLShaderHandle_typeof(), 1, ::g::OpenGL::GLShaderType_typeof()),
        new uFunction("CreateTexture", NULL, (void*)GL__CreateTexture_fn, 0, true, ::g::OpenGL::GLTextureHandle_typeof(), 0),
        new uFunction("CullFace", NULL, (void*)GL__CullFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLCullFaceMode_typeof()),
        new uFunction("DeleteBuffer", NULL, (void*)GL__DeleteBuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLBufferHandle_typeof()),
        new uFunction("DeleteFramebuffer", NULL, (void*)GL__DeleteFramebuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFramebufferHandle_typeof()),
        new uFunction("DeleteProgram", NULL, (void*)GL__DeleteProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("DeleteRenderbuffer", NULL, (void*)GL__DeleteRenderbuffer_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("DeleteShader", NULL, (void*)GL__DeleteShader_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("DeleteTexture", NULL, (void*)GL__DeleteTexture_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureHandle_typeof()),
        new uFunction("DepthFunc", NULL, (void*)GL__DepthFunc_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLDepthFunction_typeof()),
        new uFunction("DepthMask", NULL, (void*)GL__DepthMask_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("DetachShader", NULL, (void*)GL__DetachShader_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("Disable", NULL, (void*)GL__Disable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("DisableVertexAttribArray", NULL, (void*)GL__DisableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("DrawArrays", NULL, (void*)GL__DrawArrays_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("DrawElements", NULL, (void*)GL__DrawElements_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLPrimitiveType_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLIndexType_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Enable", NULL, (void*)GL__Enable_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLEnableCap_typeof()),
        new uFunction("EnableVertexAttribArray", NULL, (void*)GL__EnableVertexAttribArray_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Finish", NULL, (void*)GL__Finish_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("FramebufferRenderbuffer", NULL, (void*)GL__FramebufferRenderbuffer_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferHandle_typeof()),
        new uFunction("FramebufferTexture2D", NULL, (void*)GL__FramebufferTexture2D_fn, 0, true, uVoid_typeof(), 5, ::g::OpenGL::GLFramebufferTarget_typeof(), ::g::OpenGL::GLFramebufferAttachment_typeof(), ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureHandle_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("FrontFace", NULL, (void*)GL__FrontFace_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLFrontFaceDirection_typeof()),
        new uFunction("GenerateMipmap", NULL, (void*)GL__GenerateMipmap_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLTextureTarget_typeof()),
        new uFunction("GetAttribLocation", NULL, (void*)GL__GetAttribLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("GetError", NULL, (void*)GL__GetError_fn, 0, true, ::g::OpenGL::GLError_typeof(), 0),
        new uFunction("GetFramebufferBinding", NULL, (void*)GL__GetFramebufferBinding_fn, 0, true, ::g::OpenGL::GLFramebufferHandle_typeof(), 0),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger_fn, 0, true, ::g::Uno::Int4_typeof(), 1, ::g::OpenGL::GLInteger4Name_typeof()),
        new uFunction("GetInteger", NULL, (void*)GL__GetInteger1_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::OpenGL::GLIntegerName_typeof()),
        new uFunction("GetProgramInfoLog", NULL, (void*)GL__GetProgramInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("GetProgramParameter", NULL, (void*)GL__GetProgramParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::OpenGL::GLProgramParameter_typeof()),
        new uFunction("GetRenderbufferBinding", NULL, (void*)GL__GetRenderbufferBinding_fn, 0, true, ::g::OpenGL::GLRenderbufferHandle_typeof(), 0),
        new uFunction("GetShaderInfoLog", NULL, (void*)GL__GetShaderInfoLog_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLShaderHandle_typeof()),
        new uFunction("GetShaderParameter", NULL, (void*)GL__GetShaderParameter_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::OpenGL::GLShaderParameter_typeof()),
        new uFunction("GetString", NULL, (void*)GL__GetString_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::OpenGL::GLStringName_typeof()),
        new uFunction("GetUniformLocation", NULL, (void*)GL__GetUniformLocation_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::OpenGL::GLProgramHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LineWidth", NULL, (void*)GL__LineWidth_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("LinkProgram", NULL, (void*)GL__LinkProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("RenderbufferStorage", NULL, (void*)GL__RenderbufferStorage_fn, 0, true, uVoid_typeof(), 4, ::g::OpenGL::GLRenderbufferTarget_typeof(), ::g::OpenGL::GLRenderbufferStorage_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Scissor", NULL, (void*)GL__Scissor_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ShaderSource", NULL, (void*)GL__ShaderSource_fn, 0, true, uVoid_typeof(), 2, ::g::OpenGL::GLShaderHandle_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TexImage2D", NULL, (void*)GL__TexImage2D_fn, 0, true, uVoid_typeof(), 9, ::g::OpenGL::GLTextureTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::OpenGL::GLPixelType_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("TexImage2D", NULL, (void*)GL__TexImage2D1_fn, 0, true, uVoid_typeof(), 9, ::g::OpenGL::GLTextureTarget_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLPixelFormat_typeof(), ::g::OpenGL::GLPixelType_typeof(), ::g::Uno::Buffer_typeof()),
        new uFunction("TexParameter", NULL, (void*)GL__TexParameter_fn, 0, true, uVoid_typeof(), 3, ::g::OpenGL::GLTextureTarget_typeof(), ::g::OpenGL::GLTextureParameterName_typeof(), ::g::OpenGL::GLTextureParameterValue_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform1_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform11_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof()->Array()),
        new uFunction("Uniform1", NULL, (void*)GL__Uniform12_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform2_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Uniform2", NULL, (void*)GL__Uniform21_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof()->Array()),
        new uFunction("Uniform3", NULL, (void*)GL__Uniform3_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform4_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction("Uniform4", NULL, (void*)GL__Uniform41_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()->Array()),
        new uFunction("UniformMatrix2", NULL, (void*)GL__UniformMatrix2_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float2x2_typeof()),
        new uFunction("UniformMatrix3", NULL, (void*)GL__UniformMatrix3_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float3x3_typeof()),
        new uFunction("UniformMatrix4", NULL, (void*)GL__UniformMatrix4_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("UseProgram", NULL, (void*)GL__UseProgram_fn, 0, true, uVoid_typeof(), 1, ::g::OpenGL::GLProgramHandle_typeof()),
        new uFunction("VertexAttribPointer", NULL, (void*)GL__VertexAttribPointer_fn, 0, true, uVoid_typeof(), 6, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::OpenGL::GLDataType_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Viewport", NULL, (void*)GL__Viewport_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uClassType* GL_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OpenGL.GL", options);
    type->fp_build_ = GL_build;
    return type;
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) :933
void GL__ActiveTexture_fn(int32_t* texture)
{
    GL::ActiveTexture(*texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1139
void GL__AttachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::AttachShader(*program, *shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) :532
void GL__BindBuffer_fn(int32_t* target, uint32_t* buffer)
{
    GL::BindBuffer(*target, *buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) :697
void GL__BindFramebuffer_fn(int32_t* target, uint32_t* fb)
{
    GL::BindFramebuffer(*target, *fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) :833
void GL__BindRenderbuffer_fn(int32_t* target, uint32_t* renderbuffer)
{
    GL::BindRenderbuffer(*target, *renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) :951
void GL__BindTexture_fn(int32_t* target, uint32_t* texture)
{
    GL::BindTexture(*target, *texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) :351
void GL__BlendFuncSeparate_fn(int32_t* srcRGB, int32_t* dstRGB, int32_t* srcAlpha, int32_t* dstAlpha)
{
    GL::BlendFuncSeparate(*srcRGB, *dstRGB, *srcAlpha, *dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, byte[] data, OpenGL.GLBufferUsage usage) :570
void GL__BufferData_fn(int32_t* target, uArray* data, int32_t* usage)
{
    GL::BufferData(*target, data, *usage);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) :591
void GL__BufferData2_fn(int32_t* target, ::g::Uno::Buffer* data, int32_t* usage)
{
    GL::BufferData2(*target, data, *usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, byte[] data) :612
void GL__BufferSubData_fn(int32_t* target, int32_t* offset, uArray* data)
{
    GL::BufferSubData(*target, *offset, data);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) :633
void GL__BufferSubData1_fn(int32_t* target, int32_t* offset, ::g::Uno::Buffer* data)
{
    GL::BufferSubData1(*target, *offset, data);
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) :715
void GL__CheckFramebufferStatus_fn(int32_t* target, int32_t* __retval)
{
    *__retval = GL::CheckFramebufferStatus(*target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) :194
void GL__Clear_fn(int32_t* mask)
{
    GL::Clear(*mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) :212
void GL__ClearColor_fn(float* red, float* green, float* blue, float* alpha)
{
    GL::ClearColor(*red, *green, *blue, *alpha);
}

// public static void ClearDepth(float depth) :230
void GL__ClearDepth_fn(float* depth)
{
    GL::ClearDepth(*depth);
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) :253
void GL__ColorMask_fn(bool* red, bool* green, bool* blue, bool* alpha)
{
    GL::ColorMask(*red, *green, *blue, *alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) :1175
void GL__CompileShader_fn(uint32_t* shader)
{
    GL::CompileShader(*shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() :653
void GL__CreateBuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateBuffer();
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() :733
void GL__CreateFramebuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateFramebuffer();
}

// public static OpenGL.GLProgramHandle CreateProgram() :1193
void GL__CreateProgram_fn(uint32_t* __retval)
{
    *__retval = GL::CreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() :851
void GL__CreateRenderbuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateRenderbuffer();
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) :1211
void GL__CreateShader_fn(int32_t* type, uint32_t* __retval)
{
    *__retval = GL::CreateShader(*type);
}

// public static OpenGL.GLTextureHandle CreateTexture() :972
void GL__CreateTexture_fn(uint32_t* __retval)
{
    *__retval = GL::CreateTexture();
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) :396
void GL__CullFace_fn(int32_t* mode)
{
    GL::CullFace(*mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) :673
void GL__DeleteBuffer_fn(uint32_t* buffer)
{
    GL::DeleteBuffer(*buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) :753
void GL__DeleteFramebuffer_fn(uint32_t* fb)
{
    GL::DeleteFramebuffer(*fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) :1229
void GL__DeleteProgram_fn(uint32_t* program)
{
    GL::DeleteProgram(*program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) :871
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer)
{
    GL::DeleteRenderbuffer(*renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) :1247
void GL__DeleteShader_fn(uint32_t* shader)
{
    GL::DeleteShader(*shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) :992
void GL__DeleteTexture_fn(uint32_t* texture)
{
    GL::DeleteTexture(*texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) :369
void GL__DepthFunc_fn(int32_t* func)
{
    GL::DepthFunc(*func);
}

// public static void DepthMask(bool flag) :271
void GL__DepthMask_fn(bool* flag)
{
    GL::DepthMask(*flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1265
void GL__DetachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::DetachShader(*program, *shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) :59
void GL__Disable_fn(int32_t* cap)
{
    GL::Disable(*cap);
}

// public static void DisableVertexAttribArray(int index) :1499
void GL__DisableVertexAttribArray_fn(int32_t* index)
{
    GL::DisableVertexAttribArray(*index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) :2018
void GL__DrawArrays_fn(int32_t* mode, int32_t* first, int32_t* count)
{
    GL::DrawArrays(*mode, *first, *count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) :2036
void GL__DrawElements_fn(int32_t* mode, int32_t* count, int32_t* type, int32_t* offset)
{
    GL::DrawElements(*mode, *count, *type, *offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) :77
void GL__Enable_fn(int32_t* cap)
{
    GL::Enable(*cap);
}

// public static void EnableVertexAttribArray(int index) :1517
void GL__EnableVertexAttribArray_fn(int32_t* index)
{
    GL::EnableVertexAttribArray(*index);
}

// public static void Finish() :95
void GL__Finish_fn()
{
    GL::Finish();
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) :789
void GL__FramebufferRenderbuffer_fn(int32_t* target, int32_t* attachment, int32_t* renderbuffertarget, uint32_t* renderbuffer)
{
    GL::FramebufferRenderbuffer(*target, *attachment, *renderbuffertarget, *renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) :771
void GL__FramebufferTexture2D_fn(int32_t* target, int32_t* attachment, int32_t* textarget, uint32_t* texture, int32_t* level)
{
    GL::FramebufferTexture2D(*target, *attachment, *textarget, *texture, *level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) :414
void GL__FrontFace_fn(int32_t* mode)
{
    GL::FrontFace(*mode);
}

// public static void GenerateMipmap(OpenGL.GLTextureTarget target) :1010
void GL__GenerateMipmap_fn(int32_t* target)
{
    GL::GenerateMipmap(*target);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) :1538
void GL__GetAttribLocation_fn(uint32_t* program, uString* name, int32_t* __retval)
{
    *__retval = GL::GetAttribLocation(*program, name);
}

// public static OpenGL.GLError GetError() :132
void GL__GetError_fn(int32_t* __retval)
{
    *__retval = GL::GetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() :810
void GL__GetFramebufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetFramebufferBinding();
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) :36
void GL__GetInteger_fn(int32_t* name, ::g::Uno::Int4* __retval)
{
    *__retval = GL::GetInteger(*name);
}

// public static int GetInteger(OpenGL.GLIntegerName name) :16
void GL__GetInteger1_fn(int32_t* name, int32_t* __retval)
{
    *__retval = GL::GetInteger1(*name);
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) :1305
void GL__GetProgramInfoLog_fn(uint32_t* program, uString** __retval)
{
    *__retval = GL::GetProgramInfoLog(*program);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) :1285
void GL__GetProgramParameter_fn(uint32_t* program, int32_t* pname, int32_t* __retval)
{
    *__retval = GL::GetProgramParameter(*program, *pname);
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() :910
void GL__GetRenderbufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetRenderbufferBinding();
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) :1347
void GL__GetShaderInfoLog_fn(uint32_t* shader, uString** __retval)
{
    *__retval = GL::GetShaderInfoLog(*shader);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) :1327
void GL__GetShaderParameter_fn(uint32_t* shader, int32_t* pname, int32_t* __retval)
{
    *__retval = GL::GetShaderParameter(*shader, *pname);
}

// public static string GetString(OpenGL.GLStringName name) :150
void GL__GetString_fn(int32_t* name, uString** __retval)
{
    *__retval = GL::GetString(*name);
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) :1558
void GL__GetUniformLocation_fn(uint32_t* program, uString* name, int32_t* __retval)
{
    *__retval = GL::GetUniformLocation(*program, name);
}

// public static void LineWidth(float width) :432
void GL__LineWidth_fn(float* width)
{
    GL::LineWidth(*width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) :1373
void GL__LinkProgram_fn(uint32_t* program)
{
    GL::LinkProgram(*program);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) :892
void GL__RenderbufferStorage_fn(int32_t* target, int32_t* internalFormat, int32_t* width, int32_t* height)
{
    GL::RenderbufferStorage(*target, *internalFormat, *width, *height);
}

// public static void Scissor(int x, int y, int width, int height) :493
void GL__Scissor_fn(int32_t* x, int32_t* y, int32_t* width, int32_t* height)
{
    GL::Scissor(*x, *y, *width, *height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) :1391
void GL__ShaderSource_fn(uint32_t* shader, uString* source)
{
    GL::ShaderSource(*shader, source);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, byte[] data) :1032
void GL__TexImage2D_fn(int32_t* target, int32_t* level, int32_t* internalFormat, int32_t* width, int32_t* height, int32_t* border, int32_t* format, int32_t* type, uArray* data)
{
    GL::TexImage2D(*target, *level, *internalFormat, *width, *height, *border, *format, *type, data);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) :1065
void GL__TexImage2D1_fn(int32_t* target, int32_t* level, int32_t* internalFormat, int32_t* width, int32_t* height, int32_t* border, int32_t* format, int32_t* type, ::g::Uno::Buffer* data)
{
    GL::TexImage2D1(*target, *level, *internalFormat, *width, *height, *border, *format, *type, data);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) :1116
void GL__TexParameter_fn(int32_t* target, int32_t* pname, int32_t* param)
{
    GL::TexParameter(*target, *pname, *param);
}

// public static void Uniform1(int location, float value) :1655
void GL__Uniform1_fn(int32_t* location, float* value)
{
    GL::Uniform1(*location, *value);
}

// public static void Uniform1(int location, float[] value) :1864
void GL__Uniform11_fn(int32_t* location, uArray* value)
{
    GL::Uniform11(*location, value);
}

// public static void Uniform1(int location, int value) :1579
void GL__Uniform12_fn(int32_t* location, int32_t* value)
{
    GL::Uniform12(*location, *value);
}

// public static void Uniform2(int location, float2 value) :1674
void GL__Uniform2_fn(int32_t* location, ::g::Uno::Float2* value)
{
    GL::Uniform2(*location, *value);
}

// public static void Uniform2(int location, float2[] value) :1883
void GL__Uniform21_fn(int32_t* location, uArray* value)
{
    GL::Uniform21(*location, value);
}

// public static void Uniform3(int location, float3 value) :1693
void GL__Uniform3_fn(int32_t* location, ::g::Uno::Float3* value)
{
    GL::Uniform3(*location, *value);
}

// public static void Uniform4(int location, float4 value) :1712
void GL__Uniform4_fn(int32_t* location, ::g::Uno::Float4* value)
{
    GL::Uniform4(*location, *value);
}

// public static void Uniform4(int location, float4[] value) :1921
void GL__Uniform41_fn(int32_t* location, uArray* value)
{
    GL::Uniform41(*location, value);
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) :1731
void GL__UniformMatrix2_fn(int32_t* location, bool* transpose, ::g::Uno::Float2x2* value)
{
    GL::UniformMatrix2(*location, *transpose, *value);
}

// public static void UniformMatrix3(int location, bool transpose, float3x3 value) :1750
void GL__UniformMatrix3_fn(int32_t* location, bool* transpose, ::g::Uno::Float3x3* value)
{
    GL::UniformMatrix3(*location, *transpose, *value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) :1769
void GL__UniformMatrix4_fn(int32_t* location, bool* transpose, ::g::Uno::Float4x4* value)
{
    GL::UniformMatrix4(*location, *transpose, *value);
}

// public static void UseProgram(OpenGL.GLProgramHandle program) :1427
void GL__UseProgram_fn(uint32_t* program)
{
    GL::UseProgram(*program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) :1998
void GL__VertexAttribPointer_fn(int32_t* index, int32_t* size, int32_t* type, bool* normalized, int32_t* stride, int32_t* offset)
{
    GL::VertexAttribPointer(*index, *size, *type, *normalized, *stride, *offset);
}

// public static void Viewport(int x, int y, int width, int height) :511
void GL__Viewport_fn(int32_t* x, int32_t* y, int32_t* width, int32_t* height)
{
    GL::Viewport(*x, *y, *width, *height);
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) [static] :933
void GL::ActiveTexture(int32_t texture)
{
    glActiveTexture(texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1139
void GL::AttachShader(uint32_t program, uint32_t shader)
{
    glAttachShader(program, shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) [static] :532
void GL::BindBuffer(int32_t target, uint32_t buffer)
{
    glBindBuffer(target, buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) [static] :697
void GL::BindFramebuffer(int32_t target, uint32_t fb)
{
    glBindFramebuffer(target, fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) [static] :833
void GL::BindRenderbuffer(int32_t target, uint32_t renderbuffer)
{
    glBindRenderbuffer(target, renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) [static] :951
void GL::BindTexture(int32_t target, uint32_t texture)
{
    glBindTexture(target, texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) [static] :351
void GL::BlendFuncSeparate(int32_t srcRGB, int32_t dstRGB, int32_t srcAlpha, int32_t dstAlpha)
{
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, byte[] data, OpenGL.GLBufferUsage usage) [static] :570
void GL::BufferData(int32_t target, uArray* data, int32_t usage)
{
    glBufferData(target, data->Length(), data->Ptr(), usage);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) [static] :591
void GL::BufferData2(int32_t target, ::g::Uno::Buffer* data, int32_t usage)
{
    glBufferData(target, U_BUFFER_SIZE(data), U_BUFFER_PTR(data), usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, byte[] data) [static] :612
void GL::BufferSubData(int32_t target, int32_t offset, uArray* data)
{
    glBufferSubData(target, offset, data->Length(), data->Ptr());
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) [static] :633
void GL::BufferSubData1(int32_t target, int32_t offset, ::g::Uno::Buffer* data)
{
    glBufferSubData(target, offset, U_BUFFER_SIZE(data), U_BUFFER_PTR(data));
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) [static] :715
int32_t GL::CheckFramebufferStatus(int32_t target)
{
    return glCheckFramebufferStatus(target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) [static] :194
void GL::Clear(int32_t mask)
{
    glClear(mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) [static] :212
void GL::ClearColor(float red, float green, float blue, float alpha)
{
    glClearColor(red, green, blue, alpha);
}

// public static void ClearDepth(float depth) [static] :230
void GL::ClearDepth(float depth)
{
    #ifdef U_GL_DESKTOP
                    glClearDepth((double)depth);
    #else
                    glClearDepthf(depth);
    #endif
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) [static] :253
void GL::ColorMask(bool red, bool green, bool blue, bool alpha)
{
    glColorMask(red, green, blue, alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) [static] :1175
void GL::CompileShader(uint32_t shader)
{
    glCompileShader(shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() [static] :653
uint32_t GL::CreateBuffer()
{
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() [static] :733
uint32_t GL::CreateFramebuffer()
{
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLProgramHandle CreateProgram() [static] :1193
uint32_t GL::CreateProgram()
{
    return glCreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() [static] :851
uint32_t GL::CreateRenderbuffer()
{
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) [static] :1211
uint32_t GL::CreateShader(int32_t type)
{
    return glCreateShader(type);
}

// public static OpenGL.GLTextureHandle CreateTexture() [static] :972
uint32_t GL::CreateTexture()
{
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) [static] :396
void GL::CullFace(int32_t mode)
{
    glCullFace(mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) [static] :673
void GL::DeleteBuffer(uint32_t buffer)
{
    glDeleteBuffers(1, &buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) [static] :753
void GL::DeleteFramebuffer(uint32_t fb)
{
    glDeleteFramebuffers(1, &fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) [static] :1229
void GL::DeleteProgram(uint32_t program)
{
    glDeleteProgram(program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) [static] :871
void GL::DeleteRenderbuffer(uint32_t renderbuffer)
{
    glDeleteRenderbuffers(1, &renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) [static] :1247
void GL::DeleteShader(uint32_t shader)
{
    glDeleteShader(shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) [static] :992
void GL::DeleteTexture(uint32_t texture)
{
    glDeleteTextures(1, &texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) [static] :369
void GL::DepthFunc(int32_t func)
{
    glDepthFunc(func);
}

// public static void DepthMask(bool flag) [static] :271
void GL::DepthMask(bool flag)
{
    glDepthMask(flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1265
void GL::DetachShader(uint32_t program, uint32_t shader)
{
    glDetachShader(program, shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) [static] :59
void GL::Disable(int32_t cap)
{
    glDisable(cap);
}

// public static void DisableVertexAttribArray(int index) [static] :1499
void GL::DisableVertexAttribArray(int32_t index)
{
    glDisableVertexAttribArray(index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) [static] :2018
void GL::DrawArrays(int32_t mode, int32_t first, int32_t count)
{
    glDrawArrays(mode, first, count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) [static] :2036
void GL::DrawElements(int32_t mode, int32_t count, int32_t type, int32_t offset)
{
    glDrawElements(mode, count, type, (const GLvoid*)(size_t)offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) [static] :77
void GL::Enable(int32_t cap)
{
    glEnable(cap);
}

// public static void EnableVertexAttribArray(int index) [static] :1517
void GL::EnableVertexAttribArray(int32_t index)
{
    glEnableVertexAttribArray(index);
}

// public static void Finish() [static] :95
void GL::Finish()
{
    glFinish();
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) [static] :789
void GL::FramebufferRenderbuffer(int32_t target, int32_t attachment, int32_t renderbuffertarget, uint32_t renderbuffer)
{
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) [static] :771
void GL::FramebufferTexture2D(int32_t target, int32_t attachment, int32_t textarget, uint32_t texture, int32_t level)
{
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) [static] :414
void GL::FrontFace(int32_t mode)
{
    glFrontFace(mode);
}

// public static void GenerateMipmap(OpenGL.GLTextureTarget target) [static] :1010
void GL::GenerateMipmap(int32_t target)
{
    glGenerateMipmap(target);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) [static] :1538
int32_t GL::GetAttribLocation(uint32_t program, uString* name)
{
    return glGetAttribLocation(program, uCString(name).Ptr);
}

// public static OpenGL.GLError GetError() [static] :132
int32_t GL::GetError()
{
    return glGetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() [static] :810
uint32_t GL::GetFramebufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) [static] :36
::g::Uno::Int4 GL::GetInteger(int32_t name)
{
    ::g::Uno::Int4 result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static int GetInteger(OpenGL.GLIntegerName name) [static] :16
int32_t GL::GetInteger1(int32_t name)
{
    int result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) [static] :1305
uString* GL::GetProgramInfoLog(uint32_t program)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(program, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) [static] :1285
int32_t GL::GetProgramParameter(uint32_t program, int32_t pname)
{
    GLint result;
    glGetProgramiv(program, pname, &result);
    return result;
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() [static] :910
uint32_t GL::GetRenderbufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) [static] :1347
uString* GL::GetShaderInfoLog(uint32_t shader)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(shader, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) [static] :1327
int32_t GL::GetShaderParameter(uint32_t shader, int32_t pname)
{
    GLint result;
    glGetShaderiv(shader, pname, &result);
    return result;
}

// public static string GetString(OpenGL.GLStringName name) [static] :150
uString* GL::GetString(int32_t name)
{
    const char* str = (const char*)glGetString(name);
    if (!str) str = "";
    return uString::Utf8(str);
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) [static] :1558
int32_t GL::GetUniformLocation(uint32_t program, uString* name)
{
    return glGetUniformLocation(program, uCString(name).Ptr);
}

// public static void LineWidth(float width) [static] :432
void GL::LineWidth(float width)
{
    glLineWidth(width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) [static] :1373
void GL::LinkProgram(uint32_t program)
{
    glLinkProgram(program);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) [static] :892
void GL::RenderbufferStorage(int32_t target, int32_t internalFormat, int32_t width, int32_t height)
{
    glRenderbufferStorage(target, internalFormat, width, height);
}

// public static void Scissor(int x, int y, int width, int height) [static] :493
void GL::Scissor(int32_t x, int32_t y, int32_t width, int32_t height)
{
    glScissor(x, y, width, height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) [static] :1391
void GL::ShaderSource(uint32_t shader, uString* source)
{
    uCString cstr(source);
    
    const char* code[] =
    {
    #ifdef U_GL_DESKTOP
        "#version 120\n",
    #else
        "",
    #endif
        cstr.Ptr
    };
    
    GLint len[] =
    {
        (GLint)strlen(code[0]),
        (GLint)cstr.Length
    };
    
    glShaderSource(shader, 2, code, len);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, byte[] data) [static] :1032
void GL::TexImage2D(int32_t target, int32_t level, int32_t internalFormat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, uArray* data)
{
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data ? data->Ptr() : NULL);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) [static] :1065
void GL::TexImage2D1(int32_t target, int32_t level, int32_t internalFormat, int32_t width, int32_t height, int32_t border, int32_t format, int32_t type, ::g::Uno::Buffer* data)
{
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data ? U_BUFFER_PTR(data) : NULL);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) [static] :1116
void GL::TexParameter(int32_t target, int32_t pname, int32_t param)
{
    glTexParameteri(target, pname, param);
}

// public static void Uniform1(int location, float value) [static] :1655
void GL::Uniform1(int32_t location, float value)
{
    glUniform1f(location, value);
}

// public static void Uniform1(int location, float[] value) [static] :1864
void GL::Uniform11(int32_t location, uArray* value)
{
    glUniform1fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform1(int location, int value) [static] :1579
void GL::Uniform12(int32_t location, int32_t value)
{
    glUniform1i(location, value);
}

// public static void Uniform2(int location, float2 value) [static] :1674
void GL::Uniform2(int32_t location, ::g::Uno::Float2 value)
{
    glUniform2fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform2(int location, float2[] value) [static] :1883
void GL::Uniform21(int32_t location, uArray* value)
{
    glUniform2fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform3(int location, float3 value) [static] :1693
void GL::Uniform3(int32_t location, ::g::Uno::Float3 value)
{
    glUniform3fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4 value) [static] :1712
void GL::Uniform4(int32_t location, ::g::Uno::Float4 value)
{
    glUniform4fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4[] value) [static] :1921
void GL::Uniform41(int32_t location, uArray* value)
{
    glUniform4fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) [static] :1731
void GL::UniformMatrix2(int32_t location, bool transpose, ::g::Uno::Float2x2 value)
{
    glUniformMatrix2fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UniformMatrix3(int location, bool transpose, float3x3 value) [static] :1750
void GL::UniformMatrix3(int32_t location, bool transpose, ::g::Uno::Float3x3 value)
{
    glUniformMatrix3fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) [static] :1769
void GL::UniformMatrix4(int32_t location, bool transpose, ::g::Uno::Float4x4 value)
{
    glUniformMatrix4fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UseProgram(OpenGL.GLProgramHandle program) [static] :1427
void GL::UseProgram(uint32_t program)
{
    glUseProgram(program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) [static] :1998
void GL::VertexAttribPointer(int32_t index, int32_t size, int32_t type, bool normalized, int32_t stride, int32_t offset)
{
    glVertexAttribPointer(index, size, type, normalized, stride, (const GLvoid*)(size_t)offset);
}

// public static void Viewport(int x, int y, int width, int height) [static] :511
void GL::Viewport(int32_t x, int32_t y, int32_t width, int32_t height)
{
    glViewport(x, y, width, height);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLBlendEquation :216
uEnumType* GLBlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendEquation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "FuncAdd", 32774LL,
        "FuncSubtract", 32778LL,
        "FuncReverseSubtract", 32779LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLBlendingFactor :224
uEnumType* GLBlendingFactor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendingFactor", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcColor", 768LL,
        "OneMinusSrcColor", 769LL,
        "SrcAlpha", 770LL,
        "OneMinusSrcAlpha", 771LL,
        "DstAlpha", 772LL,
        "OneMinusDstAlpha", 773LL,
        "DstColor", 774LL,
        "OneMinusDstColor", 775LL,
        "SrcAlphaSaturate", 776LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLBufferHandle.uno
// --------------------------------------------------------------------------------------------------

// public extern struct GLBufferHandle :11
// {
static void GLBufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLBufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLBufferHandle", options);
    type->fp_build_ = GLBufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLBufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLBufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLBufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLBufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLBufferHandle::Zero_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLBufferTarget :38
uEnumType* GLBufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferTarget", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ArrayBuffer", 34962LL,
        "ElementArrayBuffer", 34963LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLBufferUsage :45
uEnumType* GLBufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "StreamDraw", 35040LL,
        "StaticDraw", 35044LL,
        "DynamicDraw", 35048LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLClearBufferMask :281
uEnumType* GLClearBufferMask_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLClearBufferMask", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DepthBufferBit", 256LL,
        "StencilBufferBit", 1024LL,
        "ColorBufferBit", 16384LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLCullFaceMode :126
uEnumType* GLCullFaceMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLCullFaceMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1028LL,
        "Back", 1029LL,
        "FrontAndBack", 1032LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLDataType :154
uEnumType* GLDataType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDataType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLDepthFunction :113
uEnumType* GLDepthFunction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDepthFunction", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Never", 512LL,
        "Less", 513LL,
        "Equal", 514LL,
        "Lequal", 515LL,
        "Greater", 516LL,
        "Notequal", 517LL,
        "Gequal", 518LL,
        "Always", 519LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLEnableCap :104
uEnumType* GLEnableCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLEnableCap", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Blend", 3042LL,
        "DepthTest", 2929LL,
        "CullFace", 2884LL,
        "ScissorTest", 3089LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLError :260
uEnumType* GLError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLError", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidEnum", 1280LL,
        "InvalidValue", 1281LL,
        "InvalidOperation", 1282LL,
        "OutOfMemory", 1285LL,
        "InvalidFramebufferOperation", 1286LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLFramebufferAttachment :240
uEnumType* GLFramebufferAttachment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferAttachment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ColorAttachment0", 36064LL,
        "DepthAttachment", 36096LL,
        "StencilAttachment", 36128LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLFramebufferHandle.uno
// -------------------------------------------------------------------------------------------------------

// public extern struct GLFramebufferHandle :11
// {
static void GLFramebufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLFramebufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLFramebufferHandle", options);
    type->fp_build_ = GLFramebufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLFramebufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLFramebufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLFramebufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLFramebufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) :45
void GLFramebufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLFramebufferHandle::op_Inequality(*left, *right);
}

uint32_t GLFramebufferHandle::Zero_;

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) [static] :45
bool GLFramebufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLFramebufferStatus :271
uEnumType* GLFramebufferStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferStatus", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "FramebufferComplete", 36053LL,
        "FramebufferIncompleteAttachment", 36054LL,
        "FramebufferIncompleteMissingAttachment", 36055LL,
        "FramebufferIncompleteDimensions", 36057LL,
        "FramebufferUnsupported", 36061LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLFramebufferTarget :248
uEnumType* GLFramebufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Framebuffer", 36160LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLFrontFaceDirection :135
uEnumType* GLFrontFaceDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFrontFaceDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Cw", 2304LL,
        "Ccw", 2305LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLIndexType :166
uEnumType* GLIndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIndexType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UnsignedByte", 5121LL,
        "UnsignedShort", 5123LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLInteger4Name :13
uEnumType* GLInteger4Name_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLInteger4Name", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ScissorBox", 3088LL,
        "Viewport", 2978LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLIntegerName :7
uEnumType* GLIntegerName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIntegerName", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "MaxTextureSize", 3379LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLPixelFormat :173
uEnumType* GLPixelFormat_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelFormat", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "DepthComponent", 6402LL,
        "Alpha", 6406LL,
        "Bgr", 32992LL,
        "Bgra", 32993LL,
        "Red", 6403LL,
        "Rg", 33319LL,
        "Rgb", 6407LL,
        "Rgba", 6408LL,
        "Luminance", 6409LL,
        "LuminanceAlpha", 6410LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLPixelType :188
uEnumType* GLPixelType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelType", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL,
        "UnsignedShort4444", 32819LL,
        "UnsignedShort5551", 32820LL,
        "UnsignedShort565", 33635LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLPrimitiveType :142
uEnumType* GLPrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPrimitiveType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Points", 0LL,
        "Lines", 1LL,
        "LineLoop", 2LL,
        "LineStrip", 3LL,
        "Triangles", 4LL,
        "TriangleStrip", 5LL,
        "TriangleFan", 6LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLProgramHandle.uno
// ---------------------------------------------------------------------------------------------------

// public extern struct GLProgramHandle :11
// {
static void GLProgramHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLProgramHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLProgramHandle", options);
    type->fp_build_ = GLProgramHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLProgramHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLProgramHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLProgramHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLProgramHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLProgramHandle::Zero_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLProgramParameter :297
uEnumType* GLProgramParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLProgramParameter", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "DeleteStatus", 35712LL,
        "LinkStatus", 35714LL,
        "AttachedShaders", 35717LL,
        "ActiveUniforms", 35718LL,
        "ActiveAttributes", 35721LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLRenderbufferHandle.uno
// --------------------------------------------------------------------------------------------------------

// public extern struct GLRenderbufferHandle :11
// {
static void GLRenderbufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLRenderbufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLRenderbufferHandle", options);
    type->fp_build_ = GLRenderbufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLRenderbufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLRenderbufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLRenderbufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLRenderbufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) :45
void GLRenderbufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLRenderbufferHandle::op_Inequality(*left, *right);
}

uint32_t GLRenderbufferHandle::Zero_;

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) [static] :45
bool GLRenderbufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLRenderbufferStorage :210
uEnumType* GLRenderbufferStorage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferStorage", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "DepthComponent16", 33189LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLRenderbufferTarget :254
uEnumType* GLRenderbufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Renderbuffer", 36161LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLShaderHandle.uno
// --------------------------------------------------------------------------------------------------

// public extern struct GLShaderHandle :11
// {
static void GLShaderHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLShaderHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLShaderHandle", options);
    type->fp_build_ = GLShaderHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLShaderHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLShaderHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLShaderHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLShaderHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLShaderHandle::Zero_;
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLShaderParameter :289
uEnumType* GLShaderParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderParameter", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ShaderType", 35663LL,
        "DeleteStatus", 35712LL,
        "CompileStatus", 35713LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLShaderType :20
uEnumType* GLShaderType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "FragmentShader", 35632LL,
        "VertexShader", 35633LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLStringName :307
uEnumType* GLStringName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLStringName", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Vendor", 7936LL,
        "Renderer", 7937LL,
        "Version", 7938LL,
        "Extensions", 7939LL,
        "ShadingLanguageVersion", 35724LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLTextureHandle.uno
// ---------------------------------------------------------------------------------------------------

// public extern struct GLTextureHandle :11
// {
static void GLTextureHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLTextureHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLTextureHandle", options);
    type->fp_build_ = GLTextureHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLTextureHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))GLTextureHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :59
void GLTextureHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :53
void GLTextureHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int32_t* __retval)
{
    int32_t ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) :23
void GLTextureHandle__op_Explicit2_fn(uint32_t* handle, int32_t* __retval)
{
    *__retval = GLTextureHandle::op_Explicit2(*handle);
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) :45
void GLTextureHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLTextureHandle::op_Inequality(*left, *right);
}

uint32_t GLTextureHandle::Zero_;

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) [static] :23
int32_t GLTextureHandle::op_Explicit2(uint32_t handle)
{
    return handle;
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) [static] :45
bool GLTextureHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLTextureParameterName :80
uEnumType* GLTextureParameterName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterName", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "WrapS", 10242LL,
        "WrapT", 10243LL,
        "MagFilter", 10240LL,
        "MinFilter", 10241LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLTextureParameterValue :89
uEnumType* GLTextureParameterValue_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterValue", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Repeat", 10497LL,
        "ClampToEdge", 33071LL,
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLTextureTarget :66
uEnumType* GLTextureTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureTarget", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Texture2D", 3553LL,
        "TextureCubeMap", 34067LL,
        "TextureCubeMapPositiveX", 34069LL,
        "TextureCubeMapNegativeX", 34070LL,
        "TextureCubeMapPositiveY", 34071LL,
        "TextureCubeMapNegativeY", 34072LL,
        "TextureCubeMapPositiveZ", 34073LL,
        "TextureCubeMapNegativeZ", 34074LL,
        "TextureExternalOES", 36197LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\OpenGL\GLEnums.uno
// -------------------------------------------------------------------------------------------

// public extern enum GLTextureUnit :53
uEnumType* GLTextureUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureUnit", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Texture0", 33984LL,
        "Texture1", 33985LL,
        "Texture2", 33986LL,
        "Texture3", 33987LL,
        "Texture4", 33988LL,
        "Texture5", 33989LL,
        "Texture6", 33990LL,
        "Texture7", 33991LL);
    return type;
}

}} // ::g::OpenGL
