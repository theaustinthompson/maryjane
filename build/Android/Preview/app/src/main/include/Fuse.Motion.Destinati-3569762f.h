// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Motion/1.7.2/DestinationMotion.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotionConfig;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public class DestinationMotionConfig :15
// {
uType* DestinationMotionConfig_typeof();
void DestinationMotionConfig__ctor__fn(DestinationMotionConfig* __this);
void DestinationMotionConfig__Create_fn(DestinationMotionConfig* __this, uType* __type, uObject** __retval);
void DestinationMotionConfig__get_Distance_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_Distance_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_Duration_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_Duration_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_DurationExp_fn(DestinationMotionConfig* __this, float* __retval);
void DestinationMotionConfig__set_DurationExp_fn(DestinationMotionConfig* __this, float* value);
void DestinationMotionConfig__get_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing** __retval);
void DestinationMotionConfig__set_Easing_fn(DestinationMotionConfig* __this, ::g::Fuse::Animations::Easing* value);
void DestinationMotionConfig__New1_fn(DestinationMotionConfig** __retval);
void DestinationMotionConfig__get_Type_fn(DestinationMotionConfig* __this, int32_t* __retval);
void DestinationMotionConfig__set_Type_fn(DestinationMotionConfig* __this, int32_t* value);
void DestinationMotionConfig__get_Unit_fn(DestinationMotionConfig* __this, int32_t* __retval);
void DestinationMotionConfig__set_Unit_fn(DestinationMotionConfig* __this, int32_t* value);

struct DestinationMotionConfig : uObject
{
    int32_t _type;
    bool _explicitType;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    float _duration;
    bool _hasDuration;
    float _durationExp;
    int32_t _unit;
    float _distance;
    bool _hasDistance;

    void ctor_();
    uObject* Create(uType* __type);
    float Distance();
    void Distance(float value);
    float Duration();
    void Duration(float value);
    float DurationExp();
    void DurationExp(float value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    int32_t Type();
    void Type(int32_t value);
    int32_t Unit();
    void Unit(int32_t value);
    static DestinationMotionConfig* New1();
};
// }

}}} // ::g::Fuse::Motion
