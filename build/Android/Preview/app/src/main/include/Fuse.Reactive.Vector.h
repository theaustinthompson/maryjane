// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.7.2/VectorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.SimpleV-1e1b52a3.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct Vector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Vector :11
// {
::g::Fuse::Reactive::SimpleVarArgFunction_type* Vector_typeof();
void Vector__ctor_3_fn(Vector* __this);
void Vector__New1_fn(Vector** __retval);
void Vector__OnNewArguments_fn(Vector* __this, uArray* args, uObject* listener);
void Vector__ToString_fn(Vector* __this, uString** __retval);

struct Vector : ::g::Fuse::Reactive::SimpleVarArgFunction
{
    void ctor_3();
    static Vector* New1();
};
// }

}}} // ::g::Fuse::Reactive
