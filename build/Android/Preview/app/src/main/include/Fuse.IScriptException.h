// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.8.1/Diagnostics.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IScriptException :101
// {
uInterfaceType* IScriptException_typeof();

struct IScriptException
{
    void(*fp_get_FileName)(uObject*, uString**);
    void(*fp_get_LineNumber)(uObject*, int32_t*);
    static uString* FileName(const uInterface& __this) { uString* __retval; return __this.VTable<IScriptException>()->fp_get_FileName(__this, &__retval), __retval; }
    static int32_t LineNumber(const uInterface& __this) { int32_t __retval; return __this.VTable<IScriptException>()->fp_get_LineNumber(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
