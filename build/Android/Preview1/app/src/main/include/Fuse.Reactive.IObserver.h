// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Reactive/1.7.4/IObservable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface IObserver :142
// {
uInterfaceType* IObserver_typeof();

struct IObserver
{
    void(*fp_OnAdd)(uObject*, uObject*);
    void(*fp_OnClear)(uObject*);
    void(*fp_OnFailed)(uObject*, uString*);
    void(*fp_OnInsertAt)(uObject*, int32_t*, uObject*);
    void(*fp_OnNewAll)(uObject*, uObject*);
    void(*fp_OnNewAt)(uObject*, int32_t*, uObject*);
    void(*fp_OnRemoveAt)(uObject*, int32_t*);
    void(*fp_OnSet)(uObject*, uObject*);
    static void OnAdd(const uInterface& __this, uObject* addedValue) { __this.VTable<IObserver>()->fp_OnAdd(__this, addedValue); }
    static void OnClear(const uInterface& __this) { __this.VTable<IObserver>()->fp_OnClear(__this); }
    static void OnFailed(const uInterface& __this, uString* message) { __this.VTable<IObserver>()->fp_OnFailed(__this, message); }
    static void OnInsertAt(const uInterface& __this, int32_t index, uObject* value) { __this.VTable<IObserver>()->fp_OnInsertAt(__this, &index, value); }
    static void OnNewAll(const uInterface& __this, uObject* values) { __this.VTable<IObserver>()->fp_OnNewAll(__this, values); }
    static void OnNewAt(const uInterface& __this, int32_t index, uObject* newValue) { __this.VTable<IObserver>()->fp_OnNewAt(__this, &index, newValue); }
    static void OnRemoveAt(const uInterface& __this, int32_t index) { __this.VTable<IObserver>()->fp_OnRemoveAt(__this, &index); }
    static void OnSet(const uInterface& __this, uObject* newValue) { __this.VTable<IObserver>()->fp_OnSet(__this, newValue); }
};
// }

}}} // ::g::Fuse::Reactive
