// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Controls.Primitives/1.7.2/TextControls/FallbackTextRenderer/WordWrapper.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapperWord;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class WordWrapperWord :6
// {
uType* WordWrapperWord_typeof();
void WordWrapperWord__ctor__fn(WordWrapperWord* __this, uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth);
void WordWrapperWord__get_EndIndex_fn(WordWrapperWord* __this, int32_t* __retval);
void WordWrapperWord__New1_fn(uString* contents, uString* whitespace, int32_t* startIndex, float* contentsWidth, float* totalContentsWidth, WordWrapperWord** __retval);

struct WordWrapperWord : uObject
{
    uStrong<uString*> Contents;
    uStrong<uString*> Whitespace;
    uStrong<uString*> TotalContents;
    int32_t StartIndex;
    float ContentsWidth;
    float TotalContentsWidth;

    void ctor_(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth);
    int32_t EndIndex();
    static WordWrapperWord* New1(uString* contents, uString* whitespace, int32_t startIndex, float contentsWidth, float totalContentsWidth);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
