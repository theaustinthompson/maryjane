// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.IntPtr.h>
#include <Uno.Runtime.InteropSe-4769ead5.h>
#include <Uno.Runtime.InteropSe-e0f0cdcd.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.7.1\Source\Uno\Runtime\InteropServices\GCHandle.uno
// -----------------------------------------------------------------------------------------------------------------

// public struct GCHandle :7
// {
static void GCHandle_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(GCHandle, _Target), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("Alloc", NULL, (void*)GCHandle__Alloc_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("Alloc", NULL, (void*)GCHandle__Alloc1_fn, 0, true, type, 2, uObject_typeof(), ::g::Uno::Runtime::InteropServices::GCHandleType_typeof()),
        new uFunction("Free", NULL, (void*)GCHandle__Free_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("FromIntPtr", NULL, (void*)GCHandle__FromIntPtr_fn, 0, true, type, 1, ::g::Uno::IntPtr_typeof()),
        new uFunction("get_Target", NULL, (void*)GCHandle__get_Target_fn, 0, false, uObject_typeof(), 0),
        new uFunction("ToIntPtr", NULL, (void*)GCHandle__ToIntPtr_fn, 0, true, ::g::Uno::IntPtr_typeof(), 1, type));
}

uStructType* GCHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(GCHandle);
    options.ValueSize = sizeof(GCHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.InteropServices.GCHandle", options);
    type->fp_build_ = GCHandle_build;
    return type;
}

// private extern GCHandle(object target) :11
void GCHandle__ctor__fn(GCHandle* __this, uObject* target)
{
    __this->ctor_(target);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target) :16
void GCHandle__Alloc_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc(target);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) :21
void GCHandle__Alloc1_fn(uObject* target, int32_t* type, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc1(target, *type);
}

// public void Free() :35
void GCHandle__Free_fn(GCHandle* __this)
{
    __this->Free();
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr) :48
void GCHandle__FromIntPtr_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__FromIntPtr(*ptr);
}

// private extern GCHandle New(object target) :11
void GCHandle__New1_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__New1(target);
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr) :69
void GCHandle__op_Explicit1_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__op_Explicit1(*ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle) :70
void GCHandle__op_Explicit2_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__op_Explicit2(*handle);
}

// public generated object get_Target() :9
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(object value) :9
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value)
{
    __this->Target(value);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle) :59
void GCHandle__ToIntPtr_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__ToIntPtr(*handle);
}

// private extern GCHandle(object target) [instance] :11
void GCHandle::ctor_(uObject* target)
{
    Target(target);
}

// public void Free() [instance] :35
void GCHandle::Free()
{
    ::uRelease(Target());
}

// public generated object get_Target() [instance] :9
uObject* GCHandle::Target()
{
    return _Target;
}

// private generated void set_Target(object value) [instance] :9
void GCHandle::Target(uObject* value)
{
    _Target = value;
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target) [static] :16
GCHandle GCHandle__Alloc(uObject* target)
{
    return GCHandle__Alloc1(target, 2);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) [static] :21
GCHandle GCHandle__Alloc1(uObject* target, int32_t type)
{
    ::uRetain(target);
    return GCHandle__New1(target);
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr) [static] :48
GCHandle GCHandle__FromIntPtr(void* ptr)
{
    uObject* obj = (uObject*)ptr;
    return GCHandle__New1(obj);
}

// private extern GCHandle New(object target) [static] :11
GCHandle GCHandle__New1(uObject* target)
{
    GCHandle obj1;
    obj1.ctor_(target);
    return obj1;
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr) [static] :69
GCHandle GCHandle__op_Explicit1(void* ptr)
{
    return GCHandle__FromIntPtr(ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static] :70
void* GCHandle__op_Explicit2(GCHandle handle)
{
    return GCHandle__ToIntPtr(handle);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static] :59
void* GCHandle__ToIntPtr(GCHandle handle)
{
    return handle.Target();
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.7.1\Source\Uno\Runtime\InteropServices\GCHandleType.uno
// ---------------------------------------------------------------------------------------------------------------------

// public enum GCHandleType :6
uEnumType* GCHandleType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Runtime.InteropServices.GCHandleType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 2LL,
        "Pinned", 3LL);
    return type;
}

}}}} // ::g::Uno::Runtime::InteropServices
