// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Common/1.8.1/Resources/DisposalPolicy.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract class DisposalPolicy :7
// {
struct DisposalPolicy_type : uType
{
    void(*fp_CanDispose)(::g::Fuse::Resources::DisposalPolicy*, int32_t*, bool*, bool*);
    void(*fp_Clone)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**);
    void(*fp_MarkUsed)(::g::Fuse::Resources::DisposalPolicy*);
};

DisposalPolicy_type* DisposalPolicy_typeof();
void DisposalPolicy__ctor__fn(DisposalPolicy* __this);

struct DisposalPolicy : uObject
{
    void ctor_();
    bool CanDispose(int32_t dr, bool pinned) { bool __retval; return (((DisposalPolicy_type*)__type)->fp_CanDispose)(this, &dr, &pinned, &__retval), __retval; }
    DisposalPolicy* Clone() { DisposalPolicy* __retval; return (((DisposalPolicy_type*)__type)->fp_Clone)(this, &__retval), __retval; }
    void MarkUsed() { (((DisposalPolicy_type*)__type)->fp_MarkUsed)(this); }
};
// }

}}} // ::g::Fuse::Resources
