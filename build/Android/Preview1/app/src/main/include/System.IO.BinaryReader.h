// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/MissingStuff.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace System{
namespace IO{

// public sealed class BinaryReader :30
// {
struct BinaryReader_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryReader_type* BinaryReader_typeof();
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream);
void BinaryReader__Dispose_fn(BinaryReader* __this);
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval);
void BinaryReader__ReadBoolean_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* length, uArray** __retval);
void BinaryReader__ReadChar_fn(BinaryReader* __this, char16_t* __retval);
void BinaryReader__ReadDouble_fn(BinaryReader* __this, double* __retval);
void BinaryReader__ReadInt32_fn(BinaryReader* __this, int32_t* __retval);
void BinaryReader__ReadString_fn(BinaryReader* __this, uString** __retval);

struct BinaryReader : uObject
{
    uStrong< ::g::Uno::IO::BinaryReader*> _reader;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    bool ReadBoolean();
    uArray* ReadBytes(int32_t length);
    char16_t ReadChar();
    double ReadDouble();
    int32_t ReadInt32();
    uString* ReadString();
    static BinaryReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::System::IO
