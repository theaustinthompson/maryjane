// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.7.4/DataFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DataFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataFunction :21
// {
::g::Fuse::Reactive::Expression_type* DataFunction_typeof();
void DataFunction__ctor_1_fn(DataFunction* __this);
void DataFunction__New1_fn(DataFunction** __retval);
void DataFunction__Subscribe_fn(DataFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void DataFunction__ToString_fn(DataFunction* __this, uString** __retval);

struct DataFunction : ::g::Fuse::Reactive::Expression
{
    void ctor_1();
    static DataFunction* New1();
};
// }

}}} // ::g::Fuse::Reactive
