// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Designer/1.7.4/Attributes.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct PriorityAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class PriorityAttribute :35
// {
uType* PriorityAttribute_typeof();
void PriorityAttribute__ctor_1_fn(PriorityAttribute* __this, int32_t* Priority1);
void PriorityAttribute__New1_fn(int32_t* Priority1, PriorityAttribute** __retval);

struct PriorityAttribute : ::g::Uno::Attribute
{
    int32_t Priority;

    void ctor_1(int32_t Priority1);
    static PriorityAttribute* New1(int32_t Priority1);
};
// }

}}} // ::g::Fuse::Designer
