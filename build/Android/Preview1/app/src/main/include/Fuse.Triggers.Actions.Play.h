// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.7.4/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-baf069a8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Play;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public class Play :213
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Play_typeof();
void Play__ctor_3_fn(Play* __this);
void Play__New2_fn(Play** __retval);
void Play__Perform_fn(Play* __this, ::g::Fuse::Node* target);

struct Play : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    void ctor_3();
    static Play* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions