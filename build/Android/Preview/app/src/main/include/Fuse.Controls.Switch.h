// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.2/ToggleControls/Switch.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.-ba5282a0.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Switch;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Switch :22
// {
::g::Fuse::Controls::ToggleControl_type* Switch_typeof();
void Switch__ctor_8_fn(Switch* __this);
void Switch__InitializeUX_fn(Switch* __this);
void Switch__New5_fn(Switch** __retval);

struct Switch : ::g::Fuse::Controls::ToggleControl
{
    void ctor_8();
    void InitializeUX();
    static Switch* New5();
};
// }

}}} // ::g::Fuse::Controls
