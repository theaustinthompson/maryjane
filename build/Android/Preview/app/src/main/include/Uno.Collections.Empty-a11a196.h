// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Collections/1.0.1/extensions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerable;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class EmptyEnumerable<T> :5
// {
struct EmptyEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

EmptyEnumerable_type* EmptyEnumerable_typeof();
void EmptyEnumerable__ctor__fn(EmptyEnumerable* __this);
void EmptyEnumerable__GetEnumerator_fn(EmptyEnumerable* __this, uObject** __retval);
void EmptyEnumerable__New1_fn(uType* __type, EmptyEnumerable** __retval);

struct EmptyEnumerable : uObject
{
    void ctor_();
    uObject* GetEnumerator();
    static EmptyEnumerable* New1(uType* __type);
};
// }

}}} // ::g::Uno::Collections
