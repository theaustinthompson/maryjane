// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.8.1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.SimpleV-1e1b52a3.h>
namespace g{namespace Fuse{namespace Reactive{struct NamedFunctionCall;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NamedFunctionCall :176
// {
::g::Fuse::Reactive::SimpleVarArgFunction_type* NamedFunctionCall_typeof();
void NamedFunctionCall__ctor_3_fn(NamedFunctionCall* __this, uString* name);
void NamedFunctionCall__get_Name_fn(NamedFunctionCall* __this, uString** __retval);
void NamedFunctionCall__set_Name_fn(NamedFunctionCall* __this, uString* value);
void NamedFunctionCall__New1_fn(uString* name, NamedFunctionCall** __retval);

struct NamedFunctionCall : ::g::Fuse::Reactive::SimpleVarArgFunction
{
    uStrong<uString*> _Name;

    void ctor_3(uString* name);
    uString* Name();
    void Name(uString* value);
    static NamedFunctionCall* New1(uString* name);
};
// }

}}} // ::g::Fuse::Reactive
