// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Panels/1.7.4/StackPanel.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class StackPanel :30
// {
::g::Fuse::Controls::Panel_type* StackPanel_typeof();
void StackPanel__ctor_7_fn(StackPanel* __this);
void StackPanel__get_ContentAlignment_fn(StackPanel* __this, int32_t* __retval);
void StackPanel__set_ContentAlignment_fn(StackPanel* __this, int32_t* value);
void StackPanel__get_ItemSpacing_fn(StackPanel* __this, float* __retval);
void StackPanel__set_ItemSpacing_fn(StackPanel* __this, float* value);
void StackPanel__get_Mode_fn(StackPanel* __this, int32_t* __retval);
void StackPanel__set_Mode_fn(StackPanel* __this, int32_t* value);
void StackPanel__New4_fn(StackPanel** __retval);
void StackPanel__get_Orientation_fn(StackPanel* __this, int32_t* __retval);
void StackPanel__set_Orientation_fn(StackPanel* __this, int32_t* value);

struct StackPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::StackLayout*> _stackLayout;

    void ctor_7();
    int32_t ContentAlignment();
    void ContentAlignment(int32_t value);
    float ItemSpacing();
    void ItemSpacing(float value);
    int32_t Mode();
    void Mode(int32_t value);
    int32_t Orientation();
    void Orientation(int32_t value);
    static StackPanel* New4();
};
// }

}}} // ::g::Fuse::Controls
