// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/IReflection.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct TypeNotFound;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class TypeNotFound :20
// {
::g::Uno::Exception_type* TypeNotFound_typeof();
void TypeNotFound__ctor_3_fn(TypeNotFound* __this, uString* type);
void TypeNotFound__New4_fn(uString* type, TypeNotFound** __retval);

struct TypeNotFound : ::g::Uno::Exception
{
    uStrong<uString*> Type;

    void ctor_3(uString* type);
    static TypeNotFound* New4(uString* type);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
