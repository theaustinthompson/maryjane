// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Gestures/1.7.2/Tapped.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.CustomPoin-ba20e234.h>
#include <Fuse.Scripting.IScriptEvent.h>
namespace g{namespace Fuse{namespace Gestures{struct DoubleTappedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class DoubleTappedArgs :94
// {
::g::Fuse::VisualEventArgs_type* DoubleTappedArgs_typeof();
void DoubleTappedArgs__ctor_4_fn(DoubleTappedArgs* __this, ::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
void DoubleTappedArgs__New3_fn(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual, DoubleTappedArgs** __retval);

struct DoubleTappedArgs : ::g::Fuse::Input::CustomPointerEventArgs
{
    void ctor_4(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
    static DoubleTappedArgs* New3(::g::Fuse::Input::PointerEventArgs* args, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Gestures
