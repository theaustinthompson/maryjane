// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace System{
namespace IO{

// public sealed class BinaryWriter :9
// {
struct BinaryWriter_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryWriter_type* BinaryWriter_typeof();
void BinaryWriter__ctor__fn(BinaryWriter* __this, ::g::Uno::IO::Stream* stream);
void BinaryWriter__Dispose_fn(BinaryWriter* __this);
void BinaryWriter__New1_fn(::g::Uno::IO::Stream* stream, BinaryWriter** __retval);
void BinaryWriter__Write_fn(BinaryWriter* __this, bool* value);
void BinaryWriter__Write1_fn(BinaryWriter* __this, uArray* bytes);
void BinaryWriter__Write2_fn(BinaryWriter* __this, char16_t* value);
void BinaryWriter__Write3_fn(BinaryWriter* __this, double* value);
void BinaryWriter__Write5_fn(BinaryWriter* __this, int32_t* value);
void BinaryWriter__Write6_fn(BinaryWriter* __this, uString* value);

struct BinaryWriter : uObject
{
    uStrong< ::g::Uno::IO::BinaryWriter*> _writer;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    void Write(bool value);
    void Write1(uArray* bytes);
    void Write2(char16_t value);
    void Write3(double value);
    void Write5(int32_t value);
    void Write6(uString* value);
    static BinaryWriter* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::System::IO
