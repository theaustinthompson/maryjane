// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.7.4/DataToResource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResource :33
// {
::g::Fuse::Reactive::Expression_type* DataToResource_typeof();
void DataToResource__ctor_1_fn(DataToResource* __this, ::g::Fuse::Reactive::Expression* data);
void DataToResource__New1_fn(::g::Fuse::Reactive::Expression* data, DataToResource** __retval);
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval);

struct DataToResource : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _data;

    void ctor_1(::g::Fuse::Reactive::Expression* data);
    static DataToResource* New1(::g::Fuse::Reactive::Expression* data);
};
// }

}}} // ::g::Fuse::Reactive
