// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Runtime/Implementation/Internal/ArrayEnumerable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayList;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class ArrayList<T> :62
// {
struct ArrayList_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ArrayList_type* ArrayList_typeof();
void ArrayList__ctor__fn(ArrayList* __this, uArray* source);
void ArrayList__Add_fn(ArrayList* __this, void* item);
void ArrayList__Clear_fn(ArrayList* __this);
void ArrayList__Contains_fn(ArrayList* __this, void* item, bool* __retval);
void ArrayList__get_Count_fn(ArrayList* __this, int32_t* __retval);
void ArrayList__GetEnumerator_fn(ArrayList* __this, uObject** __retval);
void ArrayList__Insert_fn(ArrayList* __this, int32_t* index, void* item);
void ArrayList__get_Item_fn(ArrayList* __this, int32_t* index, uTRef __retval);
void ArrayList__set_Item_fn(ArrayList* __this, int32_t* index, void* value);
void ArrayList__New1_fn(uType* __type, uArray* source, ArrayList** __retval);
void ArrayList__Remove_fn(ArrayList* __this, void* item, bool* __retval);
void ArrayList__RemoveAt_fn(ArrayList* __this, int32_t* index);

struct ArrayList : uObject
{
    uStrong<uArray*> _source;

    void ctor_(uArray* source);
    template<class T>
    void Add(T item) { ArrayList__Add_fn(this, uConstrain(__type->T(0), item)); }
    void Clear();
    template<class T>
    bool Contains(T item) { bool __retval; return ArrayList__Contains_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    int32_t Count();
    uObject* GetEnumerator();
    template<class T>
    void Insert(int32_t index, T item) { ArrayList__Insert_fn(this, &index, uConstrain(__type->T(0), item)); }
    template<class T>
    T Item(int32_t index) { T __retval; return ArrayList__get_Item_fn(this, &index, &__retval), __retval; }
    template<class T>
    void Item(int32_t index, T value) { ArrayList__set_Item_fn(this, &index, uConstrain(__type->T(0), value)); }
    template<class T>
    bool Remove(T item) { bool __retval; return ArrayList__Remove_fn(this, uConstrain(__type->T(0), item), &__retval), __retval; }
    void RemoveAt(int32_t index);
    static ArrayList* New1(uType* __type, uArray* source);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
