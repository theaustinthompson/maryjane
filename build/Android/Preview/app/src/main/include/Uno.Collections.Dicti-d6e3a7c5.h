// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Source/Uno/Collections/Dictionary.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection;}}}
namespace g{namespace Uno{namespace Collections{template<class TValue>struct Dictionary__ValueCollection__Enumerator;}}}

namespace g{
namespace Uno{
namespace Collections{

// public sealed class Dictionary<TKey, TValue>.ValueCollection :168
// {
struct Dictionary__ValueCollection_type : uType
{
    ::g::Uno::Collections::ICollection interface0;
    ::g::Uno::Collections::IEnumerable interface1;
};

Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof();
void Dictionary__ValueCollection__ctor__fn(Dictionary__ValueCollection* __this, ::g::Uno::Collections::Dictionary* source);
void Dictionary__ValueCollection__get_Count_fn(Dictionary__ValueCollection* __this, int32_t* __retval);
void Dictionary__ValueCollection__GetEnumerator_fn(Dictionary__ValueCollection* __this, uTRef __retval);
void Dictionary__ValueCollection__GetEnumerator_boxed_fn(Dictionary__ValueCollection* __this, uObject** __retval);
void Dictionary__ValueCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__ValueCollection** __retval);
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn(Dictionary__ValueCollection* __this, void* item);
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn(Dictionary__ValueCollection* __this);
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval);
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval);

struct Dictionary__ValueCollection : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _source;

    void ctor_(::g::Uno::Collections::Dictionary* source);
    int32_t Count();
    template<class TValue>
    Dictionary__ValueCollection__Enumerator<TValue> GetEnumerator();
    uObject* GetEnumerator_boxed();
    static Dictionary__ValueCollection* New1(uType* __type, ::g::Uno::Collections::Dictionary* source);
};

}}} // ::g::Uno::Collections

#include <Uno.Collections.Dicti-98f6bc43.h>

namespace g{
namespace Uno{
namespace Collections{

template<class TValue>
Dictionary__ValueCollection__Enumerator<TValue> Dictionary__ValueCollection::GetEnumerator() { Dictionary__ValueCollection__Enumerator<TValue> __retval; return Dictionary__ValueCollection__GetEnumerator_fn(this, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
