// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.7.2/MathFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryFl-dfc153fb.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Sign;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Sign :375
// {
::g::Fuse::Reactive::UnaryOperator_type* Sign_typeof();
void Sign__ctor_5_fn(Sign* __this, ::g::Fuse::Reactive::Expression* operand);
void Sign__New1_fn(::g::Fuse::Reactive::Expression* operand, Sign** __retval);

struct Sign : ::g::Fuse::Reactive::UnaryFloatOperator
{
    void ctor_5(::g::Fuse::Reactive::Expression* operand);
    static Sign* New1(::g::Fuse::Reactive::Expression* operand);
};
// }

}}} // ::g::Fuse::Reactive
