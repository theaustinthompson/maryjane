// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Text/1.8.1/LineBreaks.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}
namespace g{namespace Fuse{namespace Text{struct LineBreaks;}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal static class LineBreaks :5
// {
uClassType* LineBreaks_typeof();
void LineBreaks__Get_fn(::g::Fuse::Text::Substring* text, ::g::Fuse::Text::Implementation::BitArray** __retval);

struct LineBreaks : uObject
{
    static ::g::Fuse::Text::Implementation::BitArray* Get(::g::Fuse::Text::Substring* text);
};
// }

}}} // ::g::Fuse::Text
