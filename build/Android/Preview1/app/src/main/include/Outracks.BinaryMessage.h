// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Common/BinaryMessage.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{struct BinaryMessage;}}
namespace g{namespace System{namespace IO{struct BinaryReader;}}}
namespace g{namespace System{namespace IO{struct BinaryWriter;}}}

namespace g{
namespace Outracks{

// public static class BinaryMessage :45
// {
uClassType* BinaryMessage_typeof();
void BinaryMessage__Compose_fn(uString* type, uDelegate* write, uObject** __retval);
void BinaryMessage__ReadFrom_fn(::g::System::IO::BinaryReader* reader, uObject** __retval);
void BinaryMessage__WriteTo_fn(uObject* message, ::g::System::IO::BinaryWriter* writer);

struct BinaryMessage : uObject
{
    static uObject* Compose(uString* type, uDelegate* write);
    static uObject* ReadFrom(::g::System::IO::BinaryReader* reader);
    static void WriteTo(uObject* message, ::g::System::IO::BinaryWriter* writer);
};
// }

}} // ::g::Outracks
