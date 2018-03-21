// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Graphics/DeviceBuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public abstract class DeviceBuffer :7
// {
struct DeviceBuffer_type : uType
{
    ::g::Uno::IDisposable interface0;
};

DeviceBuffer_type* DeviceBuffer_typeof();
void DeviceBuffer__ctor__fn(DeviceBuffer* __this, int32_t* usage);
void DeviceBuffer__Dispose_fn(DeviceBuffer* __this);
void DeviceBuffer__get_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* __retval);
void DeviceBuffer__set_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* value);
void DeviceBuffer__get_GLBufferTarget_fn(DeviceBuffer* __this, int32_t* __retval);
void DeviceBuffer__set_GLBufferTarget_fn(DeviceBuffer* __this, int32_t* value);
void DeviceBuffer__GLInit_fn(DeviceBuffer* __this, int32_t* target);
void DeviceBuffer__GLInit1_fn(DeviceBuffer* __this, int32_t* target, uArray* data);
void DeviceBuffer__GLInit3_fn(DeviceBuffer* __this, int32_t* target, ::g::Uno::Buffer* data);
void DeviceBuffer__get_IsDisposed_fn(DeviceBuffer* __this, bool* __retval);
void DeviceBuffer__set_IsDisposed_fn(DeviceBuffer* __this, bool* value);
void DeviceBuffer__get_SizeInBytes_fn(DeviceBuffer* __this, int32_t* __retval);
void DeviceBuffer__set_SizeInBytes_fn(DeviceBuffer* __this, int32_t* value);
void DeviceBuffer__Update_fn(DeviceBuffer* __this, uArray* data);
void DeviceBuffer__Update1_fn(DeviceBuffer* __this, ::g::Uno::Buffer* data);
void DeviceBuffer__get_Usage_fn(DeviceBuffer* __this, int32_t* __retval);
void DeviceBuffer__set_Usage_fn(DeviceBuffer* __this, int32_t* value);

struct DeviceBuffer : uObject
{
    uint32_t _GLBufferHandle;
    int32_t _GLBufferTarget;
    bool _IsDisposed;
    int32_t _SizeInBytes;
    int32_t _Usage;

    void ctor_(int32_t usage);
    void Dispose();
    uint32_t GLBufferHandle();
    void GLBufferHandle(uint32_t value);
    int32_t GLBufferTarget();
    void GLBufferTarget(int32_t value);
    void GLInit(int32_t target);
    void GLInit1(int32_t target, uArray* data);
    void GLInit3(int32_t target, ::g::Uno::Buffer* data);
    bool IsDisposed();
    void IsDisposed(bool value);
    int32_t SizeInBytes();
    void SizeInBytes(int32_t value);
    void Update(uArray* data);
    void Update1(::g::Uno::Buffer* data);
    int32_t Usage();
    void Usage(int32_t value);
};
// }

}}} // ::g::Uno::Graphics
