// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Collections/List.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{template<class T>struct List__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class List<T> :6
// {
struct List_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

List_type* List_typeof();
void List__ctor__fn(List* __this);
void List__ctor_1_fn(List* __this, int32_t* capacity);
void List__Add_fn(List* __this, void* item);
void List__AddRange_fn(List* __this, uObject* items);
void List__BoundsCheck_fn(List* __this, int32_t* index, uString* name);
void List__Clear_fn(List* __this);
void List__Contains_fn(List* __this, void* item, bool* __retval);
void List__get_Count_fn(List* __this, int32_t* __retval);
void List__EnsureCapacity_fn(List* __this);
void List__GetEnumerator_fn(List* __this, uTRef __retval);
void List__GetEnumerator_boxed_fn(List* __this, uObject** __retval);
void List__IndexOf_fn(List* __this, void* item, int32_t* __retval);
void List__Insert_fn(List* __this, int32_t* index, void* item);
void List__get_Item_fn(List* __this, int32_t* index, uTRef __retval);
void List__set_Item_fn(List* __this, int32_t* index, void* value);
void List__New1_fn(uType* __type, List** __retval);
void List__New2_fn(uType* __type, int32_t* capacity, List** __retval);
void List__Remove_fn(List* __this, void* item, bool* __retval);
void List__RemoveAt_fn(List* __this, int32_t* index);
void List__Sort_fn(List* __this, uDelegate* comparer);
void List__ToArray_fn(List* __this, uArray** __retval);

struct List : uObject
{
    uStrong<uArray*> _data;
    int32_t _used;
    int32_t _version;

    void ctor_();
    void ctor_1(int32_t capacity);
    template<class T>
    void Add(T item) { List__Add_fn(this, uConstrain(__type->T(0), item)); }
    void AddRange(uObject* items);
    void BoundsCheck(int32_t index, uString* name);
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return List__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int32_t Count();
    void EnsureCapacity();
    template<class T>
    List__Enumerator<T> GetEnumerator();
    uObject* GetEnumerator_boxed();
    template<class T>
    int32_t IndexOf(T item) { int32_t __retval; return List__IndexOf_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    template<class T>
    void Insert(int32_t index, T item) { List__Insert_fn(this, &index, uConstrain(__type->T(0), item)); }
    template<class T>
    T Item(int32_t index) { T __retval; return List__get_Item_fn(this, &index, &__retval), __retval; }
    template<class T>
    void Item(int32_t index, T value) { List__set_Item_fn(this, &index, uConstrain(__type->T(0), value)); }
    template<class T>
    bool Remove(T item) { bool __retval; return List__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    void RemoveAt(int32_t index);
    void Sort(uDelegate* comparer);
    uArray* ToArray();
    static List* New1(uType* __type);
    static List* New2(uType* __type, int32_t capacity);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.List--251bdc7d.h>

namespace g{
namespace Uno{
namespace Collections{

template<class T>
List__Enumerator<T> List::GetEnumerator() { List__Enumerator<T> __retval; return List__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
