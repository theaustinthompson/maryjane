// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Odd;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Odd :67
// {
::g::Fuse::Reactive::UnaryOperator_type* Odd_typeof();
void Odd__ctor_4_fn(Odd* __this, ::g::Fuse::Reactive::Expression* operand);
void Odd__New1_fn(::g::Fuse::Reactive::Expression* operand, Odd** __retval);
void Odd__TryCompute1_fn(Odd* __this, uObject* operand, uObject** result, bool* __retval);

struct Odd : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* operand);
    static Odd* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
