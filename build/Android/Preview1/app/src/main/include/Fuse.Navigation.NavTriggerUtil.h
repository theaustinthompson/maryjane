// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.8.1/NavigationAnimations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Navigation{struct NavTriggerUtil;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal static class NavTriggerUtil :9
// {
uClassType* NavTriggerUtil_typeof();
void NavTriggerUtil__CrossesZero_fn(double* a, double* b, bool* __retval);
void NavTriggerUtil__Opposite_fn(int32_t* v, int32_t* __retval);

struct NavTriggerUtil : uObject
{
    static bool CrossesZero(double a, double b);
    static int32_t Opposite(int32_t v);
};
// }

}}} // ::g::Fuse::Navigation
