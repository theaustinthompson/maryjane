// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/Input/Gesture.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct GesturePriorityConfig;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface IGesture :50
// {
uInterfaceType* IGesture_typeof();

struct IGesture
{
    void(*fp_OnCaptureChanged)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*);
    void(*fp_OnLostCapture)(uObject*, bool*);
    void(*fp_OnPointerMoved)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*);
    void(*fp_OnPointerPressed)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*);
    void(*fp_OnPointerReleased)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*);
    void(*fp_get_Priority)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*);
    static void OnCaptureChanged(const uInterface& __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t howNew, int32_t howPrev) { __this.VTable<IGesture>()->fp_OnCaptureChanged(__this, args, &howNew, &howPrev); }
    static void OnLostCapture(const uInterface& __this, bool forced) { __this.VTable<IGesture>()->fp_OnLostCapture(__this, &forced); }
    static int32_t OnPointerMoved(const uInterface& __this, ::g::Fuse::Input::PointerMovedArgs* args) { int32_t __retval; return __this.VTable<IGesture>()->fp_OnPointerMoved(__this, args, &__retval), __retval; }
    static int32_t OnPointerPressed(const uInterface& __this, ::g::Fuse::Input::PointerPressedArgs* args) { int32_t __retval; return __this.VTable<IGesture>()->fp_OnPointerPressed(__this, args, &__retval), __retval; }
    static int32_t OnPointerReleased(const uInterface& __this, ::g::Fuse::Input::PointerReleasedArgs* args) { int32_t __retval; return __this.VTable<IGesture>()->fp_OnPointerReleased(__this, args, &__retval), __retval; }
    static ::g::Fuse::Input::GesturePriorityConfig Priority(const uInterface& __this);
};

}}} // ::g::Fuse::Input

#include <Fuse.Input.GesturePri-ad5d864e.h>

namespace g{
namespace Fuse{
namespace Input{

inline ::g::Fuse::Input::GesturePriorityConfig IGesture::Priority(const uInterface& __this) { ::g::Fuse::Input::GesturePriorityConfig __retval; return __this.VTable<IGesture>()->fp_get_Priority(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Input
