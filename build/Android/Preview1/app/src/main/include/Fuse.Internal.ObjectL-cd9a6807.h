// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.7.4/Internal/ObjectList.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct ObjectList__Node;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct ObjectList<T>.Node :15
// {
uStructType* ObjectList__Node_typeof();
void ObjectList__Node__Clear_fn(ObjectList__Node* __this, uType* __type);

struct ObjectList__Node
{
    uStrong<uObject*> Value;
    int32_t Next;
    int32_t Prev;
    int8_t AddVersion;
    int8_t RemoveVersion;
    int32_t Ordered;

    void Clear(uType* __type);
};
// }

}}} // ::g::Fuse::Internal
