// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.7.4/Android/ViewGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ViewGroup;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ViewGroup :7
// {
uType* ViewGroup_typeof();
void ViewGroup__ctor__fn(ViewGroup* __this);
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t* index);
void ViewGroup__Create_fn(::g::Java::Object** __retval);
void ViewGroup__New1_fn(ViewGroup** __retval);
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);

struct ViewGroup : uObject
{
    void ctor_();
    static void AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int32_t index);
    static ::g::Java::Object* Create();
    static ViewGroup* New1();
    static void RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
