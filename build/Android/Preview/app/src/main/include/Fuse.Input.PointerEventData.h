// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.7.2/Input/PointerEventArgs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class PointerEventData :6
// {
uType* PointerEventData_typeof();
void PointerEventData__ctor__fn(PointerEventData* __this);
void PointerEventData__New1_fn(PointerEventData** __retval);

struct PointerEventData : uObject
{
    int32_t PointIndex;
    ::g::Uno::Float2 WindowPoint;
    ::g::Uno::Float2 WheelDelta;
    int32_t WheelDeltaMode;
    bool IsPrimary;
    int32_t PointerType;
    double Timestamp;

    void ctor_();
    static PointerEventData* New1();
};
// }

}}} // ::g::Fuse::Input
