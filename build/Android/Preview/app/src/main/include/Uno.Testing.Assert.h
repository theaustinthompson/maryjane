// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Uno.Testing/1.7.1/Assert.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Testing{struct Assert;}}}

namespace g{
namespace Uno{
namespace Testing{

// public partial static class Assert :8
// {
uClassType* Assert_typeof();
void Assert__Fail_fn(uString* message, uString* filePath, int32_t* lineNumber, uString* memberName);
void Assert__ReportFailure_fn(uString* filePath, int32_t* lineNumber, uString* memberName, uString* expected, uString* actual);

struct Assert : uObject
{
    static int32_t maxStringLength_;
    static int32_t& maxStringLength() { return Assert_typeof()->Init(), maxStringLength_; }

    static void Fail(uString* message, uString* filePath, int32_t lineNumber, uString* memberName);
    static void ReportFailure(uString* filePath, int32_t lineNumber, uString* memberName, uString* expected, uString* actual);
};
// }

}}} // ::g::Uno::Testing
