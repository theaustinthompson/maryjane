// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Models/1.7.4/ModelJavaScript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript__ModelData;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Models{

// private sealed class ModelJavaScript.ModelData :15
// {
uType* ModelJavaScript__ModelData_typeof();
void ModelJavaScript__ModelData__ctor__fn(ModelJavaScript__ModelData* __this);
void ModelJavaScript__ModelData__New1_fn(ModelJavaScript__ModelData** __retval);

struct ModelJavaScript__ModelData : uObject
{
    uStrong<uString*> ModulePath;
    uStrong< ::g::Uno::UX::NameTable*> NameTable;

    void ctor_();
    static ModelJavaScript__ModelData* New1();
};
// }

}}} // ::g::Fuse::Models
