// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.8.1/PreviewState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PreviewState;}}
namespace g{namespace Fuse{struct PreviewStateData;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{

// internal sealed class PreviewState :8
// {
uType* PreviewState_typeof();
void PreviewState__ctor__fn(PreviewState* __this);
void PreviewState__AddSaver_fn(PreviewState* __this, uObject* saver);
void PreviewState__get_Current_fn(PreviewState* __this, ::g::Fuse::PreviewStateData** __retval);
void PreviewState__Find_fn(::g::Fuse::Node* n, PreviewState** __retval);
void PreviewState__New1_fn(PreviewState** __retval);
void PreviewState__RemoveSaver_fn(PreviewState* __this, uObject* saver);
void PreviewState__Save_fn(PreviewState* __this, ::g::Fuse::PreviewStateData** __retval);
void PreviewState__SetState_fn(PreviewState* __this, ::g::Fuse::PreviewStateData* data);

struct PreviewState : uObject
{
    uStrong< ::g::Fuse::PreviewStateData*> _current;
    uStrong< ::g::Uno::Collections::List*> _savers;

    void ctor_();
    void AddSaver(uObject* saver);
    ::g::Fuse::PreviewStateData* Current();
    void RemoveSaver(uObject* saver);
    ::g::Fuse::PreviewStateData* Save();
    void SetState(::g::Fuse::PreviewStateData* data);
    static PreviewState* Find(::g::Fuse::Node* n);
    static PreviewState* New1();
};
// }

}} // ::g::Fuse
