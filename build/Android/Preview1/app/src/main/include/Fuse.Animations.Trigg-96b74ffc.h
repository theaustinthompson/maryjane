// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Animations/1.8.1/TriggerAnimation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Animator;}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState;}}}
namespace g{namespace Fuse{namespace Animations{struct Player;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimation;}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class TriggerAnimation :25
// {
uType* TriggerAnimation_typeof();
void TriggerAnimation__ctor__fn(TriggerAnimation* __this);
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval);
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval);
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value);
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int32_t* variant, ::g::Fuse::Visual* elm, uArray** __retval);
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Visual* node, int32_t* variant, ::g::Fuse::Animations::Player** __retval);
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval);
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval);
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value);
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int32_t* variant, double* __retval);
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int32_t* variant, double* __retval);
void TriggerAnimation__get_HasAnimators_fn(TriggerAnimation* __this, bool* __retval);
void TriggerAnimation__get_HasBackward_fn(TriggerAnimation* __this, bool* __retval);
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval);
void TriggerAnimation__New1_fn(TriggerAnimation** __retval);
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this);
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int32_t* __retval);
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int32_t* value);
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int32_t* variant, int32_t* __retval);
void TriggerAnimation__get_StretchDuration_fn(TriggerAnimation* __this, double* __retval);
void TriggerAnimation__set_StretchDuration_fn(TriggerAnimation* __this, double* value);
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value);
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value);
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval);
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value);

struct TriggerAnimation : uObject
{
    uStrong< ::g::Uno::Collections::List*> _animators;
    uStrong<TriggerAnimation*> _backward;
    double _timeMultiplier;
    bool _hasStretchDuration;
    double _stretchDuration;
    double _crossFadeDuration;
    int32_t _playMode;
    uStrong<uDelegate*> TimeChanged1;

    void ctor_();
    uObject* Animators();
    TriggerAnimation* Backward();
    void Backward(TriggerAnimation* value);
    uArray* CreateAnimatorsState(int32_t variant, ::g::Fuse::Visual* elm);
    ::g::Fuse::Animations::Player* CreatePlayer(::g::Fuse::Visual* node, int32_t variant);
    ::g::Fuse::Animations::TriggerAnimationState* CreateState(::g::Fuse::Visual* elm);
    double CrossFadeDuration();
    void CrossFadeDuration(double value);
    double GetAnimatorsDuration(int32_t variant);
    double GetTimeMultiplier(int32_t variant);
    bool HasAnimators();
    bool HasBackward();
    bool HasDirectionVariant();
    void OnTimeChanged();
    int32_t PlayMode();
    void PlayMode(int32_t value);
    int32_t RestrictVariant(int32_t variant);
    double StretchDuration();
    void StretchDuration(double value);
    void add_TimeChanged(uDelegate* value);
    void remove_TimeChanged(uDelegate* value);
    double TimeMultiplier();
    void TimeMultiplier(double value);
    static TriggerAnimation* New1();
};
// }

}}} // ::g::Fuse::Animations
