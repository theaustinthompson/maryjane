// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/Fuse.Models/1.7.4/ModelJavaScript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IPreviewStateSaver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.ISiblingDataProvider.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.ValueFo-a26c06f.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript;}}}
namespace g{namespace Fuse{namespace Models{struct ModelJavaScript__ModelData;}}}
namespace g{namespace Fuse{struct PreviewStateData;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}

namespace g{
namespace Fuse{
namespace Models{

// public sealed class ModelJavaScript :13
// {
struct ModelJavaScript_type : ::g::Fuse::Reactive::JavaScript_type
{
    ::g::Fuse::IPreviewStateSaver interface10;
};

ModelJavaScript_type* ModelJavaScript_typeof();
void ModelJavaScript__ctor_4_fn(ModelJavaScript* __this, ::g::Uno::UX::NameTable* nt, uString* modulePath, uString* previewStateId);
void ModelJavaScript__Complete_fn(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v);
void ModelJavaScript__CreateFromPreviewState_fn(::g::Fuse::Visual* where, uString* modulePath, ModelJavaScript** __retval);
void ModelJavaScript__Dispose_fn(ModelJavaScript* __this);
void ModelJavaScript__FuseIPreviewStateSaverSave_fn(ModelJavaScript* __this, ::g::Fuse::PreviewStateData* data);
void ModelJavaScript__New3_fn(::g::Uno::UX::NameTable* nt, uString* modulePath, uString* previewStateId, ModelJavaScript** __retval);
void ModelJavaScript__OnRooted_fn(ModelJavaScript* __this);
void ModelJavaScript__OnUnrooted_fn(ModelJavaScript* __this);
void ModelJavaScript__SetAppModel_fn(uObject* rootVisualProvider, uString* modulePath);
void ModelJavaScript__SetModel_fn(::g::Fuse::Visual* v, uString* modulePath);
void ModelJavaScript__SetModelNameTable_fn(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt);
void ModelJavaScript__SetupModel_fn(ModelJavaScript* __this);

struct ModelJavaScript : ::g::Fuse::Reactive::JavaScript
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _modelHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _modelHandle() { return ModelJavaScript_typeof()->Init(), _modelHandle_; }
    uStrong<uString*> _previewStateModelId;
    uStrong<uString*> _modulePath;

    void ctor_4(::g::Uno::UX::NameTable* nt, uString* modulePath, uString* previewStateId);
    void Dispose();
    void SetupModel();
    static void Complete(ModelJavaScript__ModelData* md, ::g::Fuse::Visual* v);
    static ModelJavaScript* CreateFromPreviewState(::g::Fuse::Visual* where, uString* modulePath);
    static ModelJavaScript* New3(::g::Uno::UX::NameTable* nt, uString* modulePath, uString* previewStateId);
    static void SetAppModel(uObject* rootVisualProvider, uString* modulePath);
    static void SetModel(::g::Fuse::Visual* v, uString* modulePath);
    static void SetModelNameTable(::g::Fuse::Visual* v, ::g::Uno::UX::NameTable* nt);
};
// }

}}} // ::g::Fuse::Models
