// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.2/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{

// public abstract interface Node.ISubtreeDataProvider :21
// {
uInterfaceType* Node__ISubtreeDataProvider_typeof();

struct Node__ISubtreeDataProvider
{
    void(*fp_TryGetDataProvider)(uObject*, ::g::Fuse::Node*, int32_t*, uObject**, int32_t*);
    static int32_t TryGetDataProvider(const uInterface& __this, ::g::Fuse::Node* child, int32_t type, uObject** provider) { int32_t __retval; return __this.VTable<Node__ISubtreeDataProvider>()->fp_TryGetDataProvider(__this, child, &type, provider, &__retval), __retval; }
};
// }

}} // ::g::Fuse
