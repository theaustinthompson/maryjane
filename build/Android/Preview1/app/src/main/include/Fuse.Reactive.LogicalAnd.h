// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.7.4/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct LogicalAnd;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class LogicalAnd :206
// {
::g::Fuse::Reactive::BinaryOperator_type* LogicalAnd_typeof();
void LogicalAnd__ctor_6_fn(LogicalAnd* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
void LogicalAnd__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalAnd** __retval);
void LogicalAnd__TryCompute1_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct LogicalAnd : ::g::Fuse::Reactive::InfixOperator
{
    void ctor_6(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
    static LogicalAnd* New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right);
};
// }

}}} // ::g::Fuse::Reactive
