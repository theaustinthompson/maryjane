// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.8.1/Internal/MiniList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList;}}}
namespace g{namespace Fuse{namespace Internal{struct MiniList__Enumerator;}}}
namespace g{namespace Fuse{namespace Internal{struct ObjectList;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct MiniList<T> :25
// {
struct MiniList_type : uStructType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

MiniList_type* MiniList_typeof();
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value);
void MiniList__get_AsList_fn(MiniList* __this, uType* __type, ::g::Fuse::Internal::ObjectList** __retval);
void MiniList__Clear_fn(MiniList* __this, uType* __type);
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int32_t* __retval);
void MiniList__GetEnumerator_fn(MiniList* __this, uType* __type, uObject** __retval);
void MiniList__GetEnumeratorVersionedStruct_fn(MiniList* __this, uType* __type, MiniList__Enumerator* __retval);
void MiniList__Insert_fn(MiniList* __this, uType* __type, int32_t* index, uObject* value);
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int32_t* index, uObject** __retval);
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval);
void MiniList__RemoveAt_fn(MiniList* __this, uType* __type, int32_t* index);

struct MiniList
{
    uStrong<uObject*> _list;
    int32_t _mode;

    void Add(uType* __type, uObject* value);
    ::g::Fuse::Internal::ObjectList* AsList(uType* __type);
    void Clear(uType* __type);
    bool Contains(uType* __type, uObject* value);
    int32_t Count(uType* __type);
    uObject* GetEnumerator(uType* __type);
    MiniList__Enumerator GetEnumeratorVersionedStruct(uType* __type);
    void Insert(uType* __type, int32_t index, uObject* value);
    uObject* Item(uType* __type, int32_t index);
    bool Remove(uType* __type, uObject* value);
    void RemoveAt(uType* __type, int32_t index);
};
// }

}}} // ::g::Fuse::Internal
