// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.7.2/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-baf069a8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PlayTo;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PlayTo :281
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();
void PlayTo__ctor_3_fn(PlayTo* __this);
void PlayTo__New2_fn(PlayTo** __retval);
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target);
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval);
void PlayTo__set_Progress_fn(PlayTo* __this, double* value);

struct PlayTo : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    double _Progress;

    void ctor_3();
    double Progress();
    void Progress(double value);
    static PlayTo* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
