// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Preview.Core/0.1.0/Reflection/NativeReflection.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// internal abstract interface IEvent :88
// {
uInterfaceType* IEvent_typeof();

struct IEvent
{
    void(*fp_get_AddMethod)(uObject*, uObject**);
    void(*fp_get_DeclaringType)(uObject*, uType**);
    void(*fp_get_RemoveMethod)(uObject*, uObject**);
    static uObject* AddMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IEvent>()->fp_get_AddMethod(__this, &__retval), __retval; }
    static uType* DeclaringType(const uInterface& __this) { uType* __retval; return __this.VTable<IEvent>()->fp_get_DeclaringType(__this, &__retval), __retval; }
    static uObject* RemoveMethod(const uInterface& __this) { uObject* __retval; return __this.VTable<IEvent>()->fp_get_RemoveMethod(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Outracks::Simulator::Client
