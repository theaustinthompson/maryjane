// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Collections/IDictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IDictionary<TKey, TValue> :6
// {
uInterfaceType* IDictionary_typeof();

struct IDictionary
{
    void(*fp_Add)(uObject*, void*, void*);
    void(*fp_ContainsKey)(uObject*, void*, bool*);
    void(*fp_get_Item)(uObject*, void*, uTRef);
    void(*fp_set_Item)(uObject*, void*, void*);
    void(*fp_get_Keys)(uObject*, uObject**);
    void(*fp_Remove)(uObject*, void*, bool*);
    void(*fp_TryGetValue)(uObject*, void*, uTRef, bool*);
    void(*fp_get_Values)(uObject*, uObject**);
    template<class TKey, class TValue>
    static void Add(const uInterface& __this, TKey key, TValue value) { __this.VTable<IDictionary>()->fp_Add(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(1), value)); }
    static void Add_ex(const uInterface& __this, void* key, void* value) { __this.VTable<IDictionary>()->fp_Add(__this, key, value); }
    template<class TKey>
    static bool ContainsKey(const uInterface& __this, TKey key) { bool __retval; return __this.VTable<IDictionary>()->fp_ContainsKey(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), &__retval), __retval; }
    static void ContainsKey_ex(const uInterface& __this, void* key, bool* __retval) { __this.VTable<IDictionary>()->fp_ContainsKey(__this, key, __retval); }
    template<class TKey, class TValue>
    static TValue Item(const uInterface& __this, TKey key) { TValue __retval; return __this.VTable<IDictionary>()->fp_get_Item(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), &__retval), __retval; }
    static void get_Item_ex(const uInterface& __this, void* key, uTRef __retval) { __this.VTable<IDictionary>()->fp_get_Item(__this, key, __retval); }
    template<class TKey, class TValue>
    static void Item(const uInterface& __this, TKey key, TValue value) { __this.VTable<IDictionary>()->fp_set_Item(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(1), value)); }
    static void set_Item_ex(const uInterface& __this, void* key, void* value) { __this.VTable<IDictionary>()->fp_set_Item(__this, key, value); }
    static uObject* Keys(const uInterface& __this) { uObject* __retval; return __this.VTable<IDictionary>()->fp_get_Keys(__this, &__retval), __retval; }
    template<class TKey>
    static bool Remove(const uInterface& __this, TKey key) { bool __retval; return __this.VTable<IDictionary>()->fp_Remove(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), &__retval), __retval; }
    static void Remove_ex(const uInterface& __this, void* key, bool* __retval) { __this.VTable<IDictionary>()->fp_Remove(__this, key, __retval); }
    template<class TKey, class TValue>
    static bool TryGetValue(const uInterface& __this, TKey key, TValue* value) { bool __retval; return __this.VTable<IDictionary>()->fp_TryGetValue(__this, uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(0), key), uConstrain(__this->__type->GetBase(IDictionary_typeof())->T(1), value), &__retval), __retval; }
    static void TryGetValue_ex(const uInterface& __this, void* key, uTRef value, bool* __retval) { __this.VTable<IDictionary>()->fp_TryGetValue(__this, key, value, __retval); }
    static uObject* Values(const uInterface& __this) { uObject* __retval; return __this.VTable<IDictionary>()->fp_get_Values(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
