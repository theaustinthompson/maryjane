// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.7.2/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryF-177abc0d.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Pow;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Pow :383
// {
::g::Fuse::Reactive::BinaryOperator_type* Pow_typeof();
void Pow__ctor_5_fn(Pow* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void Pow__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Pow** __retval);

struct Pow : ::g::Fuse::Reactive::BinaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static Pow* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
