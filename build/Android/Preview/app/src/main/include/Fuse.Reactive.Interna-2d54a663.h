// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive.Bindings/1.7.2/Internal/PatchList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace Internal{struct PatchItem;}}}}
namespace g{namespace Fuse{namespace Reactive{namespace Internal{struct PatchList;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace Internal{

// internal sealed class PatchList :38
// {
uType* PatchList_typeof();
void PatchList__ctor__fn(PatchList* __this);
void PatchList__Format_fn(uObject* list, uString** __retval);
void PatchList__New1_fn(PatchList** __retval);
void PatchList__Patch_fn(uType* __type, uObject* from, uObject* to, int32_t* algo, void* emptyKey, ::g::Uno::Collections::List** __retval);
void PatchList__PatchRemoveAll_fn(uType* __type, uObject* from, uObject* to, ::g::Uno::Collections::List** __retval);

struct PatchList : uObject
{
    void ctor_();
    static uString* Format(uObject* list);
    static PatchList* New1();
    template<class T>
    static ::g::Uno::Collections::List* Patch(uType* __type, uObject* from, uObject* to, int32_t algo, T emptyKey) { ::g::Uno::Collections::List* __retval; return PatchList__Patch_fn(__type, from, to, &algo, uConstrain(__type->U(0), emptyKey), &__retval), __retval; }
    static ::g::Uno::Collections::List* PatchRemoveAll(uType* __type, uObject* from, uObject* to);
};
// }

}}}} // ::g::Fuse::Reactive::Internal
