// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/MobileBootstrapping.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct MobileBootstrapping;}}

namespace g{
namespace Fuse{

// internal sealed extern class MobileBootstrapping :6
// {
uType* MobileBootstrapping_typeof();
void MobileBootstrapping__ctor__fn(MobileBootstrapping* __this);
void MobileBootstrapping__Init_fn();
void MobileBootstrapping__New1_fn(MobileBootstrapping** __retval);
void MobileBootstrapping__OnEnterForeground_fn(int32_t* state);
void MobileBootstrapping__OnEnterInteractive_fn(int32_t* state);
void MobileBootstrapping__OnExitInteractive_fn(int32_t* state);
void MobileBootstrapping__OnStarted_fn(int32_t* state);
void MobileBootstrapping__OnTerminating_fn(int32_t* state);

struct MobileBootstrapping : uObject
{
    static bool _isInited_;
    static bool& _isInited() { return _isInited_; }

    void ctor_();
    static void Init();
    static MobileBootstrapping* New1();
    static void OnEnterForeground(int32_t state);
    static void OnEnterInteractive(int32_t state);
    static void OnExitInteractive(int32_t state);
    static void OnStarted(int32_t state);
    static void OnTerminating(int32_t state);
};
// }

}} // ::g::Fuse
