// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action1-1.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.MemoryStream.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.StreamReader.h>
#include <Uno.Long.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Expression-1.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.SelectorRegistry.h>
#include <Uno.UX.SimulatedProperties.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.StreamExtensions.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
#include <Uno.UX.UXAutoClassNam-a65d32ce.h>
#include <Uno.UX.UXAutoNameTabl-28c6abb4.h>
#include <Uno.UX.UXComponentsAttribute.h>
#include <Uno.UX.UXConstructorAttribute.h>
#include <Uno.UX.UXContentAttribute.h>
#include <Uno.UX.UXDataScopeAttribute.h>
#include <Uno.UX.UXExpressionAttribute.h>
#include <Uno.UX.UXFileNameAttribute.h>
#include <Uno.UX.UXFreestandingAttribute.h>
#include <Uno.UX.UXGlobalModuleAttribute.h>
#include <Uno.UX.UXGlobalResour-226240d5.h>
#include <Uno.UX.UXLineNumberAttribute.h>
#include <Uno.UX.UXNameAttribute.h>
#include <Uno.UX.UXNameScopeAttribute.h>
#include <Uno.UX.UXPrimaryAttribute.h>
#include <Uno.UX.UXSourceFileNa-49949224.h>
#include <Uno.UX.UXValueBinding-5a38545d.h>
#include <Uno.UX.UXValueBinding-c53bb7cf.h>
#include <Uno.UX.UXVerbatimAttribute.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[14];
static uType* TYPES[22];

namespace g{
namespace Uno{
namespace UX{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\BundleFileSource.uno
// ----------------------------------------------------------------------------------------------------

// public sealed class BundleFileSource :6
// {
static void BundleFileSource_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::IO::BundleFile_typeof(), offsetof(BundleFileSource, BundleFile), 0);
    type->Reflection.SetFields(1,
        new uField("BundleFile", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BundleFileSource__New1_fn, 0, true, type, 1, ::g::Uno::IO::BundleFile_typeof()));
}

::g::Uno::UX::FileSource_type* BundleFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(BundleFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Uno.UX.BundleFileSource", options);
    type->fp_build_ = BundleFileSource_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))BundleFileSource__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))BundleFileSource__GetHashCode_fn;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))BundleFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))BundleFileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = (void(*)(::g::Uno::UX::FileSource*, uString**))BundleFileSource__ReadAllText_fn;
    return type;
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) :9
void BundleFileSource__ctor_1_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bundleFile)
{
    __this->ctor_1(bundleFile);
}

// public override sealed bool Equals(object o) :35
void BundleFileSource__Equals_fn(BundleFileSource* __this, uObject* o, bool* __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "Equals(object)");
    BundleFileSource* bfs = uAs<BundleFileSource*>(o, __this->__type);

    if (bfs == NULL)
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(uPtr(bfs)->BundleFile), __this->BundleFile), void();
}

// public override sealed int GetHashCode() :44
void BundleFileSource__GetHashCode_fn(BundleFileSource* __this, int32_t* __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->BundleFile)), void();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) :9
void BundleFileSource__New1_fn(::g::Uno::IO::BundleFile* bundleFile, BundleFileSource** __retval)
{
    *__retval = BundleFileSource::New1(bundleFile);
}

// private void OnChanged(Uno.IO.BundleFile bf) :15
void BundleFileSource__OnChanged_fn(BundleFileSource* __this, ::g::Uno::IO::BundleFile* bf)
{
    __this->OnChanged(bf);
}

// public override sealed Uno.IO.Stream OpenRead() :20
void BundleFileSource__OpenRead_fn(BundleFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "OpenRead()");
    return *__retval = uPtr(__this->BundleFile)->OpenRead(), void();
}

// public override sealed byte[] ReadAllBytes() :25
void BundleFileSource__ReadAllBytes_fn(BundleFileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllBytes()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllBytes(), void();
}

// public override sealed string ReadAllText() :30
void BundleFileSource__ReadAllText_fn(BundleFileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.BundleFileSource", "ReadAllText()");
    return *__retval = uPtr(__this->BundleFile)->ReadAllText(), void();
}

// public BundleFileSource(Uno.IO.BundleFile bundleFile) [instance] :9
void BundleFileSource::ctor_1(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.BundleFileSource", ".ctor(Uno.IO.BundleFile)");
    ctor_(uPtr(bundleFile)->SourcePath());
    BundleFile = bundleFile;
    uPtr(BundleFile)->add_Changed(uDelegate::New(::TYPES[0/*Uno.Action<Uno.IO.BundleFile>*/], (void*)BundleFileSource__OnChanged_fn, this));
}

// private void OnChanged(Uno.IO.BundleFile bf) [instance] :15
void BundleFileSource::OnChanged(::g::Uno::IO::BundleFile* bf)
{
    uStackFrame __("Uno.UX.BundleFileSource", "OnChanged(Uno.IO.BundleFile)");
    OnDataChanged();
}

// public BundleFileSource New(Uno.IO.BundleFile bundleFile) [static] :9
BundleFileSource* BundleFileSource::New1(::g::Uno::IO::BundleFile* bundleFile)
{
    BundleFileSource* obj1 = (BundleFileSource*)uNew(BundleFileSource_typeof());
    obj1->ctor_1(bundleFile);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.Triggers\1.8.1\Actions\Set.uno
// ---------------------------------------------------------------------------------------

// public delegate T Expression<T>() :6
uDelegateType* Expression_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.Expression`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\FileSource.uno
// ----------------------------------------------------------------------------------------------

// public abstract class FileSource :6
// {
static void FileSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("File name can't be null");
    ::STRINGS[1] = uString::Const("name");
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileSource, Name), 0,
        ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/], offsetof(FileSource, DataChanged1), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
    type->Reflection.SetFunctions(6,
        new uFunction("add_DataChanged", NULL, (void*)FileSource__add_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]),
        new uFunction("remove_DataChanged", NULL, (void*)FileSource__remove_DataChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]),
        new uFunction("OnDataChanged", NULL, (void*)FileSource__OnDataChanged_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("OpenRead", NULL, NULL, offsetof(FileSource_type, fp_OpenRead), false, ::g::Uno::IO::Stream_typeof(), 0),
        new uFunction("ReadAllBytes", NULL, NULL, offsetof(FileSource_type, fp_ReadAllBytes), false, ::g::Uno::Byte_typeof()->Array(), 0),
        new uFunction("ReadAllText", NULL, NULL, offsetof(FileSource_type, fp_ReadAllText), false, ::g::Uno::String_typeof(), 0));
}

FileSource_type* FileSource_typeof()
{
    static uSStrong<FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileSource);
    options.TypeSize = sizeof(FileSource_type);
    type = (FileSource_type*)uClassType::New("Uno.UX.FileSource", options);
    type->fp_build_ = FileSource_build;
    type->fp_ReadAllBytes = FileSource__ReadAllBytes_fn;
    type->fp_ReadAllText = FileSource__ReadAllText_fn;
    return type;
}

// protected FileSource(string name) :19
void FileSource__ctor__fn(FileSource* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :10
void FileSource__add_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->add_DataChanged(value);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) :10
void FileSource__remove_DataChanged_fn(FileSource* __this, uDelegate* value)
{
    __this->remove_DataChanged(value);
}

// public void OnDataChanged() :12
void FileSource__OnDataChanged_fn(FileSource* __this)
{
    __this->OnDataChanged();
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) :27
void FileSource__op_Implicit_fn(::g::Uno::IO::BundleFile* bundleFile, FileSource** __retval)
{
    *__retval = FileSource::op_Implicit(bundleFile);
}

// public virtual byte[] ReadAllBytes() :34
void FileSource__ReadAllBytes_fn(FileSource* __this, uArray** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllBytes()");
    return *__retval = ::g::Uno::UX::StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader::New1(__this->OpenRead())), void();
}

// public virtual string ReadAllText() :39
void FileSource__ReadAllText_fn(FileSource* __this, uString** __retval)
{
    uStackFrame __("Uno.UX.FileSource", "ReadAllText()");
    return *__retval = ::g::Uno::IO::StreamReader::New1(__this->OpenRead())->ReadToEnd(), void();
}

// protected FileSource(string name) [instance] :19
void FileSource::ctor_(uString* name)
{
    uStackFrame __("Uno.UX.FileSource", ".ctor(string)");

    if (::g::Uno::String::op_Equality(name, NULL))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[0/*"File name c...*/], ::STRINGS[1/*"name"*/]));

    Name = name;
}

// public generated void add_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :10
void FileSource::add_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "add_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public generated void remove_DataChanged(Uno.EventHandler<Uno.EventArgs> value) [instance] :10
void FileSource::remove_DataChanged(uDelegate* value)
{
    uStackFrame __("Uno.UX.FileSource", "remove_DataChanged(Uno.EventHandler<Uno.EventArgs>)");
    DataChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DataChanged1, value), ::TYPES[1/*Uno.EventHandler<Uno.EventArgs>*/]);
}

// public void OnDataChanged() [instance] :12
void FileSource::OnDataChanged()
{
    uStackFrame __("Uno.UX.FileSource", "OnDataChanged()");
    uDelegate* dataChanged = DataChanged1;

    if (::g::Uno::Delegate::op_Inequality(dataChanged, NULL))
        uPtr(dataChanged)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public static implicit operator Uno.UX.FileSource(Uno.IO.BundleFile bundleFile) [static] :27
FileSource* FileSource::op_Implicit(::g::Uno::IO::BundleFile* bundleFile)
{
    uStackFrame __("Uno.UX.FileSource", "op_Implicit(Uno.IO.BundleFile)~Uno.UX.FileSource");
    return ::g::Uno::UX::BundleFileSource::New1(bundleFile);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\PropertyObject.uno
// --------------------------------------------------------------------------------------------------

// public abstract interface IPropertyListener :6
// {
uInterfaceType* IPropertyListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.UX.IPropertyListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnPropertyChanged", NULL, NULL, offsetof(IPropertyListener, fp_OnPropertyChanged), false, uVoid_typeof(), 2, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::UX::Selector_typeof()));
    return type;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\NameTable.uno
// ---------------------------------------------------------------------------------------------

// public sealed class NameTable :5
// {
// static generated NameTable() :5
static void NameTable__cctor__fn(uType* __type)
{
    NameTable::Empty_ = NameTable::New1(NULL, uArray::New(::TYPES[2/*string[]*/], 0));
}

static void NameTable_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[2/*string[]*/], offsetof(NameTable, Entries), 0,
        ::TYPES[3/*Uno.Collections.List<object>*/], offsetof(NameTable, _objects), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL), offsetof(NameTable, _properties), 0,
        uObject_typeof(), offsetof(NameTable, _this), 0,
        type, offsetof(NameTable, ParentTable), 0,
        type, (uintptr_t)&NameTable::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("Empty", 5),
        new uField("Entries", 0),
        new uField("ParentTable", 4));
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)NameTable__New1_fn, 0, true, type, 2, type, ::TYPES[2/*string[]*/]),
        new uFunction("get_Objects", NULL, (void*)NameTable__get_Objects_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL), 0),
        new uFunction("get_Properties", NULL, (void*)NameTable__get_Properties_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL), 0),
        new uFunction("set_Properties", NULL, (void*)NameTable__set_Properties_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL)),
        new uFunction("get_This", NULL, (void*)NameTable__get_This_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_This", NULL, (void*)NameTable__set_This_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* NameTable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NameTable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.NameTable", options);
    type->fp_build_ = NameTable_build;
    type->fp_cctor_ = NameTable__cctor__fn;
    return type;
}

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) :43
void NameTable__ctor__fn(NameTable* __this, NameTable* parentTable, uArray* entries)
{
    __this->ctor_(parentTable, entries);
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) :43
void NameTable__New1_fn(NameTable* parentTable, uArray* entries, NameTable** __retval)
{
    *__retval = NameTable::New1(parentTable, entries);
}

// public Uno.Collections.IList<object> get_Objects() :12
void NameTable__get_Objects_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Objects();
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() :17
void NameTable__get_Properties_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) :18
void NameTable__set_Properties_fn(NameTable* __this, uObject* value)
{
    __this->Properties(value);
}

// public object get_This() :37
void NameTable__get_This_fn(NameTable* __this, uObject** __retval)
{
    *__retval = __this->This();
}

// public void set_This(object value) :38
void NameTable__set_This_fn(NameTable* __this, uObject* value)
{
    __this->This(value);
}

uSStrong<NameTable*> NameTable::Empty_;

// public NameTable(Uno.UX.NameTable parentTable, string[] entries) [instance] :43
void NameTable::ctor_(NameTable* parentTable, uArray* entries)
{
    uStackFrame __("Uno.UX.NameTable", ".ctor(Uno.UX.NameTable,string[])");
    _objects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<object>*/]));
    _properties = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.UX.Property>*/]));
    ParentTable = parentTable;
    Entries = entries;
}

// public Uno.Collections.IList<object> get_Objects() [instance] :12
uObject* NameTable::Objects()
{
    uStackFrame __("Uno.UX.NameTable", "get_Objects()");
    return (uObject*)_objects;
}

// public Uno.Collections.IList<Uno.UX.Property> get_Properties() [instance] :17
uObject* NameTable::Properties()
{
    uStackFrame __("Uno.UX.NameTable", "get_Properties()");
    uObject* ind1;
    ind1 = _properties;
    return (ind1 != NULL) ? ind1 : (uObject*)uPtr(ParentTable)->Properties();
}

// public void set_Properties(Uno.Collections.IList<Uno.UX.Property> value) [instance] :18
void NameTable::Properties(uObject* value)
{
    _properties = value;
}

// public object get_This() [instance] :37
uObject* NameTable::This()
{
    uStackFrame __("Uno.UX.NameTable", "get_This()");
    uObject* ind2;
    ind2 = _this;
    return (ind2 != NULL) ? ind2 : (ParentTable != NULL) ? (uObject*)uPtr(ParentTable)->This() : NULL;
}

// public void set_This(object value) [instance] :38
void NameTable::This(uObject* value)
{
    _this = value;
}

// public NameTable New(Uno.UX.NameTable parentTable, string[] entries) [static] :43
NameTable* NameTable::New1(NameTable* parentTable, uArray* entries)
{
    NameTable* obj3 = (NameTable*)uNew(NameTable_typeof());
    obj3->ctor_(parentTable, entries);
    return obj3;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Property.uno
// --------------------------------------------------------------------------------------------

// public abstract class Property :24
// {
static void Property_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), offsetof(Property, _name), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("AddListener", NULL, (void*)Property__AddListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("GetAsObject", NULL, (void*)Property__GetAsObject1_fn, 0, false, uObject_typeof(), 0),
        new uFunction("get_Object", NULL, NULL, offsetof(Property_type, fp_get_Object), false, ::g::Uno::UX::PropertyObject_typeof(), 0),
        new uFunction("RemoveListener", NULL, (void*)Property__RemoveListener_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetAsObject", NULL, (void*)Property__SetAsObject1_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

Property_type* Property_typeof()
{
    static uSStrong<Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(Property_type);
    type = (Property_type*)uClassType::New("Uno.UX.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Property__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))Property__GetHashCode_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))Property__get_Name_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :32
void Property__ctor_1_fn(Property* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_1(*name);
}

// public void AddListener(Uno.UX.IPropertyListener listener) :37
void Property__AddListener_fn(Property* __this, uObject* listener)
{
    __this->AddListener(listener);
}

// public override sealed bool Equals(object obj) :50
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Property", "Equals(object)");
    Property* p = uAs<Property*>(obj, Property_typeof());

    if (p == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(p)->Object() == __this->Object()) && ::g::Uno::UX::Selector__op_Equality(uPtr(p)->Name(), __this->_name), void();
}

// public object GetAsObject() :62
void Property__GetAsObject1_fn(Property* __this, uObject** __retval)
{
    *__retval = __this->GetAsObject1();
}

// public override sealed int GetHashCode() :57
void Property__GetHashCode_fn(Property* __this, int32_t* __retval)
{
    uStackFrame __("Uno.UX.Property", "GetHashCode()");
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object())) ^ __this->Name().Handle(), void();
}

// public override sealed Uno.UX.Selector get_Name() :30
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = __this->_name, void();
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) :42
void Property__RemoveListener_fn(Property* __this, uObject* listener)
{
    __this->RemoveListener(listener);
}

// public void SetAsObject(object value, Uno.UX.IPropertyListener origin) :63
void Property__SetAsObject1_fn(Property* __this, uObject* value, uObject* origin)
{
    __this->SetAsObject1(value, origin);
}

// protected Property(Uno.UX.Selector name) [instance] :32
void Property::ctor_1(::g::Uno::UX::Selector name)
{
    ctor_();
    _name = name;
}

// public void AddListener(Uno.UX.IPropertyListener listener) [instance] :37
void Property::AddListener(uObject* listener)
{
    uStackFrame __("Uno.UX.Property", "AddListener(Uno.UX.IPropertyListener)");
    uPtr(Object())->AddPropertyListener(listener);
}

// public object GetAsObject() [instance] :62
uObject* Property::GetAsObject1()
{
    uStackFrame __("Uno.UX.Property", "GetAsObject()");
    return GetAsObject(Object());
}

// public void RemoveListener(Uno.UX.IPropertyListener listener) [instance] :42
void Property::RemoveListener(uObject* listener)
{
    uStackFrame __("Uno.UX.Property", "RemoveListener(Uno.UX.IPropertyListener)");
    ::g::Uno::UX::PropertyObject* obj = Object();

    if (obj != NULL)
        uPtr(obj)->RemovePropertyListener(listener);
}

// public void SetAsObject(object value, Uno.UX.IPropertyListener origin) [instance] :63
void Property::SetAsObject1(uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property", "SetAsObject(object,Uno.UX.IPropertyListener)");
    SetAsObject(Object(), value, origin);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Property.uno
// --------------------------------------------------------------------------------------------

// public abstract class Property<T> :66
// {
static void Property1_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(1);
    type->Reflection.SetFunctions(4,
        new uFunction("Get", NULL, (void*)Property1__Get_fn, 0, false, type->T(0), 0),
        new uFunction("Get", NULL, NULL, offsetof(Property1_type, fp_Get1), false, type->T(0), 1, ::g::Uno::UX::PropertyObject_typeof()),
        new uFunction("Set", NULL, (void*)Property1__Set_fn, 0, false, uVoid_typeof(), 2, type->T(0), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Set", NULL, NULL, offsetof(Property1_type, fp_Set1), false, uVoid_typeof(), 3, ::g::Uno::UX::PropertyObject_typeof(), type->T(0), ::g::Uno::UX::IPropertyListener_typeof()));
}

Property1_type* Property1_typeof()
{
    static uSStrong<Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Property1);
    options.TypeSize = sizeof(Property1_type);
    type = (Property1_type*)uClassType::New("Uno.UX.Property`1", options);
    type->fp_build_ = Property1_build;
    type->fp_Get1 = Property1__Get1_fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))Property1__GetAsObject_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))Property1__get_PropertyType_fn;
    type->fp_Set1 = Property1__Set1_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))Property1__SetAsObject_fn;
    return type;
}

// protected Property(Uno.UX.Selector name) :68
void Property1__ctor_2_fn(Property1* __this, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(*name);
}

// public T Get() :75
void Property1__Get_fn(Property1* __this, uTRef __retval)
{
    uStackFrame __("Uno.UX.Property`1", "Get()");
    uT ret1(__this->__type->GetBase(Property1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Property1_typeof())->T(0)->ValueSize));
    return __retval.Store((__this->Get1_ex(__this->Object(), &ret1), ret1)), void();
}

// public virtual T Get(Uno.UX.PropertyObject obj) :72
void Property1__Get1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval)
{
    uStackFrame __("Uno.UX.Property`1", "Get(Uno.UX.PropertyObject)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :78
void Property1__GetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("Uno.UX.Property`1", "GetAsObject(Uno.UX.PropertyObject)");
    uT ret2(__this->__type->GetBase(Property1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Property1_typeof())->T(0)->ValueSize));
    return *__retval = uBoxPtr(__this->__type->GetBase(Property1_typeof())->T(0), (__this->Get1_ex(obj, &ret2), ret2)), void();
}

// public override sealed Uno.Type get_PropertyType() :70
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval)
{
    return *__retval = __this->__type->GetBase(Property1_typeof())->T(0), void();
}

// public void Set(T value, Uno.UX.IPropertyListener origin) :76
void Property1__Set_fn(Property1* __this, void* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property`1", "Set(T,Uno.UX.IPropertyListener)");
    __this->Set1_ex(__this->Object(), value, origin);
}

// public virtual void Set(Uno.UX.PropertyObject obj, T value, Uno.UX.IPropertyListener origin) :73
void Property1__Set1_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property`1", "Set(Uno.UX.PropertyObject,T,Uno.UX.IPropertyListener)");
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object value, Uno.UX.IPropertyListener origin) :83
void Property1__SetAsObject_fn(Property1* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.Property`1", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");

    if ((value == NULL) && ::g::Uno::Type::IsValueType(uPtr(__this->__type->GetBase(Property1_typeof())->T(0))))
        __this->Set1_ex(obj, uT(__this->__type->GetBase(Property1_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(Property1_typeof())->T(0)->ValueSize)), origin);
    else
        __this->Set1_ex(obj, uUnboxAny(__this->__type->GetBase(Property1_typeof())->T(0), value), origin);
}

// protected Property(Uno.UX.Selector name) [instance] :68
void Property1::ctor_2(::g::Uno::UX::Selector name)
{
    ctor_1(name);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Property.uno
// --------------------------------------------------------------------------------------------

// public abstract class PropertyAccessor :15
// {
static void PropertyAccessor_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Property '");
    ::STRINGS[3] = uString::Const("' cannot be read.");
    ::STRINGS[4] = uString::Const("' cannot be written to.");
    type->Reflection.SetFunctions(5,
        new uFunction("GetAsObject", NULL, NULL, offsetof(PropertyAccessor_type, fp_GetAsObject), false, uObject_typeof(), 1, ::g::Uno::UX::PropertyObject_typeof()),
        new uFunction("get_Name", NULL, NULL, offsetof(PropertyAccessor_type, fp_get_Name), false, ::g::Uno::UX::Selector_typeof(), 0),
        new uFunction("get_PropertyType", NULL, NULL, offsetof(PropertyAccessor_type, fp_get_PropertyType), false, ::g::Uno::Type_typeof(), 0),
        new uFunction("SetAsObject", NULL, NULL, offsetof(PropertyAccessor_type, fp_SetAsObject), false, uVoid_typeof(), 3, ::g::Uno::UX::PropertyObject_typeof(), uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_SupportsOriginSetter", NULL, NULL, offsetof(PropertyAccessor_type, fp_get_SupportsOriginSetter), false, ::g::Uno::Bool_typeof(), 0));
}

PropertyAccessor_type* PropertyAccessor_typeof()
{
    static uSStrong<PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(PropertyAccessor);
    options.TypeSize = sizeof(PropertyAccessor_type);
    type = (PropertyAccessor_type*)uClassType::New("Uno.UX.PropertyAccessor", options);
    type->fp_build_ = PropertyAccessor_build;
    type->fp_GetAsObject = PropertyAccessor__GetAsObject_fn;
    type->fp_SetAsObject = PropertyAccessor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = PropertyAccessor__get_SupportsOriginSetter_fn;
    return type;
}

// protected generated PropertyAccessor() :15
void PropertyAccessor__ctor__fn(PropertyAccessor* __this)
{
    __this->ctor_();
}

// public virtual object GetAsObject(Uno.UX.PropertyObject obj) :21
void PropertyAccessor__GetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("Uno.UX.PropertyAccessor", "GetAsObject(Uno.UX.PropertyObject)");
    U_THROW(::g::Uno::NotSupportedException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"Property '"*/], ::g::Uno::UX::Selector__op_Implicit1(__this->Name())), ::STRINGS[3/*"' cannot be...*/])));
}

// public virtual void SetAsObject(Uno.UX.PropertyObject obj, object value, Uno.UX.IPropertyListener origin) :20
void PropertyAccessor__SetAsObject_fn(PropertyAccessor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyAccessor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    U_THROW(::g::Uno::NotSupportedException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[2/*"Property '"*/], ::g::Uno::UX::Selector__op_Implicit1(__this->Name())), ::STRINGS[4/*"' cannot be...*/])));
}

// public virtual bool get_SupportsOriginSetter() :19
void PropertyAccessor__get_SupportsOriginSetter_fn(PropertyAccessor* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected generated PropertyAccessor() [instance] :15
void PropertyAccessor::ctor_()
{
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\PropertyObject.uno
// --------------------------------------------------------------------------------------------------

// public class PropertyObject :11
// {
static void PropertyObject_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::IPropertyListener_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::UX::IPropertyListener_typeof();
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[6/*Uno.Collections.List<Uno.UX.IPropertyListener>*/], offsetof(PropertyObject, _propListeners), 0,
        ::TYPES[8/*Uno.Collections.Dictionary<string, object>*/], offsetof(PropertyObject, _simulatedProps), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("AddPropertyListener", NULL, (void*)PropertyObject__AddPropertyListener_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.UX.IPropertyListener*/]),
        new uFunction("EmulatePropertyChanged", NULL, (void*)PropertyObject__EmulatePropertyChanged_fn, 0, true, uVoid_typeof(), 3, type, ::g::Uno::UX::Selector_typeof(), ::TYPES[7/*Uno.UX.IPropertyListener*/]),
        new uFunction(".ctor", NULL, (void*)PropertyObject__New1_fn, 0, true, type, 0),
        new uFunction("RemovePropertyListener", NULL, (void*)PropertyObject__RemovePropertyListener_fn, 0, false, uVoid_typeof(), 1, ::TYPES[7/*Uno.UX.IPropertyListener*/]));
}

uType* PropertyObject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PropertyObject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.PropertyObject", options);
    type->fp_build_ = PropertyObject_build;
    type->fp_ctor_ = (void*)PropertyObject__New1_fn;
    return type;
}

// public generated PropertyObject() :11
void PropertyObject__ctor__fn(PropertyObject* __this)
{
    __this->ctor_();
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) :16
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->AddPropertyListener(listener);
}

// public static void EmulatePropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel, Uno.UX.IPropertyListener origin) :49
void PropertyObject__EmulatePropertyChanged_fn(PropertyObject* obj, ::g::Uno::UX::Selector* sel, uObject* origin)
{
    PropertyObject::EmulatePropertyChanged(obj, *sel, origin);
}

// internal object GetSimulatedProperty(string name) :73
void PropertyObject__GetSimulatedProperty_fn(PropertyObject* __this, uString* name, uObject** __retval)
{
    *__retval = __this->GetSimulatedProperty(name);
}

// public generated PropertyObject New() :11
void PropertyObject__New1_fn(PropertyObject** __retval)
{
    *__retval = PropertyObject::New1();
}

// protected void OnPropertyChanged(Uno.UX.Selector property) :44
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property)
{
    __this->OnPropertyChanged(*property);
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) :31
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin)
{
    __this->OnPropertyChanged1(*property, origin);
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) :25
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener)
{
    __this->RemovePropertyListener(listener);
}

// internal void SetSimulatedProperty(string name, object value, Uno.UX.IPropertyListener origin) :56
void PropertyObject__SetSimulatedProperty_fn(PropertyObject* __this, uString* name, uObject* value, uObject* origin)
{
    __this->SetSimulatedProperty(name, value, origin);
}

// public generated PropertyObject() [instance] :11
void PropertyObject::ctor_()
{
}

// public void AddPropertyListener(Uno.UX.IPropertyListener listener) [instance] :16
void PropertyObject::AddPropertyListener(uObject* listener)
{
    uStackFrame __("Uno.UX.PropertyObject", "AddPropertyListener(Uno.UX.IPropertyListener)");

    if (_propListeners == NULL)
        _propListeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<Uno.UX.IPropertyListener>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_propListeners), listener);
}

// internal object GetSimulatedProperty(string name) [instance] :73
uObject* PropertyObject::GetSimulatedProperty(uString* name)
{
    uStackFrame __("Uno.UX.PropertyObject", "GetSimulatedProperty(string)");
    bool ret2;

    if (_simulatedProps == NULL)
        return NULL;

    uObject* res;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_simulatedProps), name, (void**)(&res), &ret2), ret2))
        return res;

    return NULL;
}

// protected void OnPropertyChanged(Uno.UX.Selector property) [instance] :44
void PropertyObject::OnPropertyChanged(::g::Uno::UX::Selector property)
{
    uStackFrame __("Uno.UX.PropertyObject", "OnPropertyChanged(Uno.UX.Selector)");
    OnPropertyChanged1(property, uAs<uObject*>(this, ::TYPES[7/*Uno.UX.IPropertyListener*/]));
}

// protected void OnPropertyChanged(Uno.UX.Selector property, Uno.UX.IPropertyListener origin) [instance] :31
void PropertyObject::OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyObject", "OnPropertyChanged(Uno.UX.Selector,Uno.UX.IPropertyListener)");
    uObject* ret3;
    ::g::Uno::UX::Selector property_ = property;

    if (_propListeners != NULL)

        for (int32_t i = 0; i < uPtr(_propListeners)->Count(); i++)
        {
            uObject* listener = (::g::Uno::Collections::List__get_Item_fn(uPtr(_propListeners), uCRef<int32_t>(i), &ret3), ret3);

            if (listener != origin)
                ::g::Uno::UX::IPropertyListener::OnPropertyChanged(uInterface(uPtr(listener), ::TYPES[7/*Uno.UX.IPropertyListener*/]), this, property_);
        }
}

// public void RemovePropertyListener(Uno.UX.IPropertyListener listener) [instance] :25
void PropertyObject::RemovePropertyListener(uObject* listener)
{
    uStackFrame __("Uno.UX.PropertyObject", "RemovePropertyListener(Uno.UX.IPropertyListener)");
    bool ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_propListeners), listener, &ret4);

    if (uPtr(_propListeners)->Count() == 0)
        _propListeners = NULL;
}

// internal void SetSimulatedProperty(string name, object value, Uno.UX.IPropertyListener origin) [instance] :56
void PropertyObject::SetSimulatedProperty(uString* name, uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyObject", "SetSimulatedProperty(string,object,Uno.UX.IPropertyListener)");
    bool ret5;

    if (_simulatedProps == NULL)
        _simulatedProps = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, object>*/]));

    uObject* oldValue;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_simulatedProps), name, (void**)(&oldValue), &ret5), ret5))
    {
        if ((value == NULL) && (oldValue == NULL))
            return;

        if (((value != NULL) && (oldValue != NULL)) && ((value == oldValue) || ::g::Uno::Object::Equals(uPtr(value), oldValue)))
            return;
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_simulatedProps), name, value);
    PropertyObject::EmulatePropertyChanged(this, ::g::Uno::UX::Selector__op_Implicit(name), origin);
}

// public static void EmulatePropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel, Uno.UX.IPropertyListener origin) [static] :49
void PropertyObject::EmulatePropertyChanged(PropertyObject* obj, ::g::Uno::UX::Selector sel, uObject* origin)
{
    uStackFrame __("Uno.UX.PropertyObject", "EmulatePropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector,Uno.UX.IPropertyListener)");
    uPtr(obj)->OnPropertyChanged1(sel, origin);
}

// public generated PropertyObject New() [static] :11
PropertyObject* PropertyObject::New1()
{
    PropertyObject* obj1 = (PropertyObject*)uNew(PropertyObject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Resource.uno
// --------------------------------------------------------------------------------------------

// public sealed class Resource :68
// {
// static generated Resource() :68
static void Resource__cctor__fn(uType* __type)
{
    Resource::_globals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/]));
    Resource::_listeners_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/]));
}

static void Resource_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[11] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[12] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::Collections::List_typeof();
    ::TYPES[3] = ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[13/*Uno.Collections.List`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Resource, _Key), 0,
        uObject_typeof(), offsetof(Resource, _Value), 0,
        ::TYPES[9/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>*/], (uintptr_t)&Resource::_globals_, uFieldFlagsStatic,
        ::TYPES[10/*Uno.Collections.List<Uno.Action<string>>*/], (uintptr_t)&Resource::_listeners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("AddGlobalKeyListener", NULL, (void*)Resource__AddGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction("GetGlobalKey", NULL, (void*)Resource__GetGlobalKey_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("GetGlobalsOfType`1", type->MethodTypes[0], (void*)Resource__GetGlobalsOfType_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL), 0),
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), uObject_typeof()),
        new uFunction("RemoveGlobalKeyListener", NULL, (void*)Resource__RemoveGlobalKeyListener_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL)),
        new uFunction("SetGlobalKey", NULL, (void*)Resource__SetGlobalKey_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TryFindGlobal", NULL, (void*)Resource__TryFindGlobal_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::String_typeof(), ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL), uObject_typeof()->ByRef()),
        new uFunction("get_Value", NULL, (void*)Resource__get_Value_fn, 0, false, uObject_typeof(), 0));
}

uType* Resource_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.Resource", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = Resource_build;
    type->fp_cctor_ = Resource__cctor__fn;
    return type;
}

// public Resource(string key, object value) :74
void Resource__ctor__fn(Resource* __this, uString* key, uObject* value)
{
    __this->ctor_(key, value);
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) :88
void Resource__AddGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::AddGlobalKeyListener(listener);
}

// public static string GetGlobalKey(object obj) :138
void Resource__GetGlobalKey_fn(uObject* obj, uString** __retval)
{
    *__retval = Resource::GetGlobalKey(obj);
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() :150
void Resource__GetGlobalsOfType_fn(uType* __type, uObject** __retval)
{
    *__retval = Resource::GetGlobalsOfType(__type);
}

// public generated string get_Key() :70
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :70
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key, object value) :74
void Resource__New1_fn(uString* key, uObject* value, Resource** __retval)
{
    *__retval = Resource::New1(key, value);
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) :98
void Resource__RemoveGlobalKeyListener_fn(uDelegate* listener)
{
    Resource::RemoveGlobalKeyListener(listener);
}

// public static void SetGlobalKey(object obj, string key) :115
void Resource__SetGlobalKey_fn(uObject* obj, uString* key)
{
    Resource::SetGlobalKey(obj, key);
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) :171
void Resource__TryFindGlobal_fn(uString* key, uDelegate* acceptor, uObject** res, bool* __retval)
{
    *__retval = Resource::TryFindGlobal(key, acceptor, res);
}

// public generated object get_Value() :71
void Resource__get_Value_fn(Resource* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :71
void Resource__set_Value_fn(Resource* __this, uObject* value)
{
    __this->Value(value);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Resource::_globals_;
uSStrong< ::g::Uno::Collections::List*> Resource::_listeners_;

// public Resource(string key, object value) [instance] :74
void Resource::ctor_(uString* key, uObject* value)
{
    Key(key);
    Value(value);
}

// public generated string get_Key() [instance] :70
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :70
void Resource::Key(uString* value)
{
    _Key = value;
}

// public generated object get_Value() [instance] :71
uObject* Resource::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :71
void Resource::Value(uObject* value)
{
    _Value = value;
}

// public static void AddGlobalKeyListener(Uno.Action<string> listener) [static] :88
void Resource::AddGlobalKeyListener(uDelegate* listener)
{
    uStackFrame __("Uno.UX.Resource", "AddGlobalKeyListener(Uno.Action<string>)");
    Resource_typeof()->Init();
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners_);

    {
        try
        {
            {
                ::g::Uno::Collections::List__Add_fn(uPtr(Resource::_listeners_), listener);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
        }
        __after_finally_0:;
    }
}

// public static string GetGlobalKey(object obj) [static] :138
uString* Resource::GetGlobalKey(uObject* obj)
{
    uStackFrame __("Uno.UX.Resource", "GetGlobalKey(object)");
    Resource_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals_);

    {
        try
        {
            {
                ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals_), &ret6), ret6);

                {
                    try
                    {
                        {
                            while (enum4.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]))
                            {
                                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > list = enum4.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);

                                if ((::g::Uno::Collections::List__Contains_fn(uPtr(list.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/])), obj, &ret7), ret7))
                                {
                                    uString* __uno_retval = list.Key(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);
                                    ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
                                    enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                                    return __uno_retval;
                                }
                            }
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                        }
                                                throw __t;
                        goto __after_finally_1;
                    }

                    {
                        enum4.Dispose(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                    }
                    __after_finally_1:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
        }
        __after_finally_2:;
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<T> GetGlobalsOfType<T>() [static] :150
uObject* Resource::GetGlobalsOfType(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.UX.Resource", "GetGlobalsOfType`1()");
    __type->Base->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > ret8;
    uObject* ret9;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]);
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals_);

    {
        try
        {
            {
                ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Resource::_globals_), &ret8), ret8);

                {
                    try
                    {
                        {
                            while (enum1.MoveNext(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]))
                            {
                                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong< ::g::Uno::Collections::List*> > entry = enum1.Current(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                                ::g::Uno::Collections::List* list = entry.Value(::TYPES[12/*Uno.Collections.KeyValuePair<string, Uno.Collections.List<object>>*/]);

                                for (int32_t i = uPtr(list)->Count(); (i--) > 0; )
                                {
                                    uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret9), ret9);

                                    if (uIs(v, __type->U(0)))
                                        ::g::Uno::Collections::List__Add_fn(uPtr(result), uUnboxAny(__type->U(0), v));
                                }
                            }
                        }
                    }

                    catch (const uThrowable& __t)
                    {
                        {
                            enum1.Dispose(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                        }
                                                throw __t;
                        goto __after_finally_3;
                    }

                    {
                        enum1.Dispose(::TYPES[11/*Uno.Collections.Dictionary<string, Uno.Collections.List<object>>.Enumerator*/]);
                    }
                    __after_finally_3:;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
        }
        __after_finally_4:;
    }

    return (uObject*)result;
}

// public Resource New(string key, object value) [static] :74
Resource* Resource::New1(uString* key, uObject* value)
{
    Resource* obj5 = (Resource*)uNew(Resource_typeof());
    obj5->ctor_(key, value);
    return obj5;
}

// public static void RemoveGlobalKeyListener(Uno.Action<string> listener) [static] :98
void Resource::RemoveGlobalKeyListener(uDelegate* listener)
{
    uStackFrame __("Uno.UX.Resource", "RemoveGlobalKeyListener(Uno.Action<string>)");
    Resource_typeof()->Init();
    bool ret10;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners_);

    {
        try
        {
            {
                ::g::Uno::Collections::List__Remove_fn(uPtr(Resource::_listeners_), listener, &ret10);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
        }
        __after_finally_5:;
    }
}

// public static void SetGlobalKey(object obj, string key) [static] :115
void Resource::SetGlobalKey(uObject* obj, uString* key)
{
    uStackFrame __("Uno.UX.Resource", "SetGlobalKey(object,string)");
    Resource_typeof()->Init();
    bool ret11;
    bool ret12;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals_);

    {
        try
        {
            {
                ::g::Uno::Collections::List* objs;

                if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals_), key, (void**)(&objs), &ret11), ret11))
                {
                    objs = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[3/*Uno.Collections.List<object>*/]);
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Resource::_globals_), key, objs);
                }

                if (!(::g::Uno::Collections::List__Contains_fn(uPtr(objs), obj, &ret12), ret12))
                    ::g::Uno::Collections::List__Add_fn(uPtr(objs), obj);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
            }
                        throw __t;
            goto __after_finally_6;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
        }
        __after_finally_6:;
    }

    uArray* listeners = NULL;
    ::g::Uno::Threading::Monitor::Enter(Resource::_listeners_);

    {
        try
        {
            {
                listeners = (uArray*)uPtr(Resource::_listeners_)->ToArray();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
            }
                        throw __t;
            goto __after_finally_7;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_listeners_);
        }
        __after_finally_7:;
    }

    for (int32_t index2 = 0, length3 = uPtr(listeners)->Length(); index2 < length3; ++index2)
    {
        uDelegate* listener = uPtr(listeners)->Strong<uDelegate*>(index2);
        uPtr(listener)->InvokeVoid(key);
    }
}

// public static bool TryFindGlobal(string key, Uno.Predicate<object> acceptor, object& res) [static] :171
bool Resource::TryFindGlobal(uString* key, uDelegate* acceptor, uObject** res)
{
    uStackFrame __("Uno.UX.Resource", "TryFindGlobal(string,Uno.Predicate<object>,object&)");
    Resource_typeof()->Init();
    bool ret13;
    uObject* ret14;
    bool ret15;
    ::g::Uno::Collections::List* list;
    ::g::Uno::Threading::Monitor::Enter(Resource::_globals_);

    {
        try
        {
            {
                if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Resource::_globals_), key, (void**)(&list), &ret13), ret13))

                    for (int32_t i = uPtr(list)->Count(); (i--) > 0; )
                    {
                        uObject* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret14), ret14);

                        if (::g::Uno::Delegate::op_Equality(acceptor, NULL) || (uPtr(acceptor)->Invoke(&ret15, 1, v), ret15))
                        {
                            *res = v;
                            bool __uno_retval = true;
                            ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
                            return __uno_retval;
                        }
                    }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
            }
                        throw __t;
            goto __after_finally_8;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(Resource::_globals_);
        }
        __after_finally_8:;
    }

    *res = NULL;
    return false;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Selector.uno
// --------------------------------------------------------------------------------------------

// public struct Selector :38
// {
static void Selector_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Uno::UX::SelectorRegistry_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Selector, _handle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsNull", NULL, (void*)Selector__get_IsNull_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Selector__New1_fn, 0, true, type, 1, ::TYPES[14/*string*/]));
}

uStructType* Selector_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.Alignment = alignof(Selector);
    options.ValueSize = sizeof(Selector);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Selector", options);
    type->fp_build_ = Selector_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Selector__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Selector__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Selector__ToString_fn;
    return type;
}

// public Selector(string value) :46
void Selector__ctor__fn(Selector* __this, uString* value)
{
    __this->ctor_(value);
}

// public override sealed bool Equals(object obj) :61
void Selector__Equals_fn(Selector* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Selector", "Equals(object)");

    if (uIs(obj, __type))
    {
        Selector sel = uUnbox<Selector>(__type, obj);
        return *__retval = sel._handle == __this->_handle, void();
    }

    uString* s = uAs<uString*>(obj, ::TYPES[14/*string*/]);

    if (::g::Uno::String::op_Inequality(s, NULL))
        return *__retval = __this->Equals(__type, uBox(__type, Selector__New1(s))), void();

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :56
void Selector__GetHashCode_fn(Selector* __this, uType* __type, int32_t* __retval)
{
    return *__retval = __this->_handle, void();
}

// internal int get_Handle() :43
void Selector__get_Handle_fn(Selector* __this, int32_t* __retval)
{
    *__retval = __this->Handle();
}

// public bool get_IsNull() :53
void Selector__get_IsNull_fn(Selector* __this, bool* __retval)
{
    *__retval = __this->IsNull();
}

// public Selector New(string value) :46
void Selector__New1_fn(uString* value, Selector* __retval)
{
    *__retval = Selector__New1(value);
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) :88
void Selector__op_Equality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Equality(*a, *b);
}

// public static implicit operator Uno.UX.Selector(string s) :78
void Selector__op_Implicit_fn(uString* s, Selector* __retval)
{
    *__retval = Selector__op_Implicit(s);
}

// public static implicit operator string(Uno.UX.Selector s) :83
void Selector__op_Implicit1_fn(Selector* s, uString** __retval)
{
    *__retval = Selector__op_Implicit1(*s);
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) :93
void Selector__op_Inequality_fn(Selector* a, Selector* b, bool* __retval)
{
    *__retval = Selector__op_Inequality(*a, *b);
}

// public override sealed string ToString() :98
void Selector__ToString_fn(Selector* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Selector", "ToString()");

    if (__this->_handle == 0)
        return *__retval = NULL, void();

    return *__retval = ::g::Uno::UX::SelectorRegistry::GetValue(__this->_handle), void();
}

// public Selector(string value) [instance] :46
void Selector::ctor_(uString* value)
{
    uStackFrame __("Uno.UX.Selector", ".ctor(string)");
    _handle = ::g::Uno::UX::SelectorRegistry::GetHandle(value);
}

// internal int get_Handle() [instance] :43
int32_t Selector::Handle()
{
    return _handle;
}

// public bool get_IsNull() [instance] :53
bool Selector::IsNull()
{
    return _handle == 0;
}

// public Selector New(string value) [static] :46
Selector Selector__New1(uString* value)
{
    Selector obj1;
    obj1.ctor_(value);
    return obj1;
}

// public static operator ==(Uno.UX.Selector a, Uno.UX.Selector b) [static] :88
bool Selector__op_Equality(Selector a, Selector b)
{
    return a._handle == b._handle;
}

// public static implicit operator Uno.UX.Selector(string s) [static] :78
Selector Selector__op_Implicit(uString* s)
{
    uStackFrame __("Uno.UX.Selector", "op_Implicit(string)~Uno.UX.Selector");
    return Selector__New1(s);
}

// public static implicit operator string(Uno.UX.Selector s) [static] :83
uString* Selector__op_Implicit1(Selector s)
{
    uStackFrame __("Uno.UX.Selector", "op_Implicit(Uno.UX.Selector)~string");
    return s.ToString(Selector_typeof());
}

// public static operator !=(Uno.UX.Selector a, Uno.UX.Selector b) [static] :93
bool Selector__op_Inequality(Selector a, Selector b)
{
    return a._handle != b._handle;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Selector.uno
// --------------------------------------------------------------------------------------------

// internal static class SelectorRegistry :7
// {
// static generated SelectorRegistry() :7
static void SelectorRegistry__cctor__fn(uType* __type)
{
    SelectorRegistry::_mutex_ = ::g::Uno::Object::New();
    SelectorRegistry::_stringToHandle_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<string, int>*/]));
    SelectorRegistry::_handleToString_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<int, string>*/]));
    SelectorRegistry::_counter_ = 1;
}

static void SelectorRegistry_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        uObject_typeof(), (uintptr_t)&SelectorRegistry::_mutex_, uFieldFlagsStatic,
        ::TYPES[15/*Uno.Collections.Dictionary<string, int>*/], (uintptr_t)&SelectorRegistry::_stringToHandle_, uFieldFlagsStatic,
        ::TYPES[16/*Uno.Collections.Dictionary<int, string>*/], (uintptr_t)&SelectorRegistry::_handleToString_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SelectorRegistry::_counter_, uFieldFlagsStatic);
}

uClassType* SelectorRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.SelectorRegistry", options);
    type->fp_build_ = SelectorRegistry_build;
    type->fp_cctor_ = SelectorRegistry__cctor__fn;
    return type;
}

// internal static int GetHandle(string value) :14
void SelectorRegistry__GetHandle_fn(uString* value, int32_t* __retval)
{
    *__retval = SelectorRegistry::GetHandle(value);
}

// public static string GetValue(int handle) :29
void SelectorRegistry__GetValue_fn(int32_t* handle, uString** __retval)
{
    *__retval = SelectorRegistry::GetValue(*handle);
}

uSStrong<uObject*> SelectorRegistry::_mutex_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_stringToHandle_;
uSStrong< ::g::Uno::Collections::Dictionary*> SelectorRegistry::_handleToString_;
int32_t SelectorRegistry::_counter_;

// internal static int GetHandle(string value) [static] :14
int32_t SelectorRegistry::GetHandle(uString* value)
{
    uStackFrame __("Uno.UX.SelectorRegistry", "GetHandle(string)");
    SelectorRegistry_typeof()->Init();
    bool ret1;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex_);

    {
        try
        {
            {
                int32_t handle;

                if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SelectorRegistry::_stringToHandle_), value, &handle, &ret1), ret1))
                {
                    handle = SelectorRegistry::_counter_++;
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_stringToHandle_), value, uCRef<int32_t>(handle));
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(SelectorRegistry::_handleToString_), uCRef<int32_t>(handle), value);
                }

                int32_t __uno_retval = handle;
                ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
            }
                        throw __t;
            goto __after_finally_9;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
        }
        __after_finally_9:;
    }
}

// public static string GetValue(int handle) [static] :29
uString* SelectorRegistry::GetValue(int32_t handle)
{
    uStackFrame __("Uno.UX.SelectorRegistry", "GetValue(int)");
    SelectorRegistry_typeof()->Init();
    uString* ret2;
    ::g::Uno::Threading::Monitor::Enter(SelectorRegistry::_mutex_);

    {
        try
        {
            {
                uString* __uno_retval = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(SelectorRegistry::_handleToString_), uCRef<int32_t>(handle), &ret2), ret2);
                ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
            }
                        throw __t;
            goto __after_finally_10;
        }

        {
            ::g::Uno::Threading::Monitor::Exit(SelectorRegistry::_mutex_);
        }
        __after_finally_10:;
    }
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\PropertyObject.uno
// --------------------------------------------------------------------------------------------------

// public static extern class SimulatedProperties :85
// {
static void SimulatedProperties_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Get", NULL, (void*)SimulatedProperties__Get_fn, 0, true, uObject_typeof(), 2, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Set", NULL, (void*)SimulatedProperties__Set_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

uClassType* SimulatedProperties_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.SimulatedProperties", options);
    type->fp_build_ = SimulatedProperties_build;
    return type;
}

// public static object Get(Uno.UX.PropertyObject obj, string name) :92
void SimulatedProperties__Get_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject** __retval)
{
    *__retval = SimulatedProperties::Get(obj, name);
}

// public static void Set(Uno.UX.PropertyObject obj, string name, object value, Uno.UX.IPropertyListener origin) :87
void SimulatedProperties__Set_fn(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin)
{
    SimulatedProperties::Set(obj, name, value, origin);
}

// public static object Get(Uno.UX.PropertyObject obj, string name) [static] :92
uObject* SimulatedProperties::Get(::g::Uno::UX::PropertyObject* obj, uString* name)
{
    uStackFrame __("Uno.UX.SimulatedProperties", "Get(Uno.UX.PropertyObject,string)");
    return uPtr(obj)->GetSimulatedProperty(name);
}

// public static void Set(Uno.UX.PropertyObject obj, string name, object value, Uno.UX.IPropertyListener origin) [static] :87
void SimulatedProperties::Set(::g::Uno::UX::PropertyObject* obj, uString* name, uObject* value, uObject* origin)
{
    uStackFrame __("Uno.UX.SimulatedProperties", "Set(Uno.UX.PropertyObject,string,object,Uno.UX.IPropertyListener)");
    uPtr(obj)->SetSimulatedProperty(name, value, origin);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Size.uno
// ----------------------------------------------------------------------------------------

// public struct Size :29
// {
static void Size_build(uType* type)
{
    ::STRINGS[5] = uString::Const(" (unspecified unit)");
    ::STRINGS[6] = uString::Const("pt");
    ::STRINGS[7] = uString::Const("px");
    ::STRINGS[8] = uString::Const("%");
    ::STRINGS[9] = uString::Const("(auto)");
    ::STRINGS[10] = uString::Const(" (");
    ::STRINGS[11] = uString::Const(")");
    ::TYPES[17] = ::g::Uno::Float_typeof();
    ::TYPES[18] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[17/*float*/], offsetof(Size, Value), 0,
        ::g::Uno::UX::Unit_typeof(), offsetof(Size, Unit), 0);
    type->Reflection.SetFields(2,
        new uField("Unit", 1),
        new uField("Value", 0));
    type->Reflection.SetFunctions(5,
        new uFunction("get_Auto", NULL, (void*)Size__get_Auto_fn, 0, true, type, 0),
        new uFunction("Combine", NULL, (void*)Size__Combine_fn, 0, true, ::g::Uno::UX::Unit_typeof(), 2, ::g::Uno::UX::Unit_typeof(), ::g::Uno::UX::Unit_typeof()),
        new uFunction("DetermineUnit", NULL, (void*)Size__DetermineUnit_fn, 0, false, ::g::Uno::UX::Unit_typeof(), 0),
        new uFunction("get_IsAuto", NULL, (void*)Size__get_IsAuto_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Size__New1_fn, 0, true, type, 2, ::TYPES[17/*float*/], ::g::Uno::UX::Unit_typeof()));
}

uStructType* Size_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Size);
    options.ValueSize = sizeof(Size);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size", options);
    type->fp_build_ = Size_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Size__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size__ToString_fn;
    return type;
}

// public Size(float value, Uno.UX.Unit unit) :34
void Size__ctor__fn(Size* __this, float* value, int32_t* unit)
{
    __this->ctor_(*value, *unit);
}

// public static Uno.UX.Size get_Auto() :109
void Size__get_Auto_fn(Size* __retval)
{
    *__retval = Size__Auto();
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) :55
void Size__Combine_fn(int32_t* a, int32_t* b, int32_t* __retval)
{
    *__retval = Size::Combine(*a, *b);
}

// public Uno.UX.Unit DetermineUnit() :63
void Size__DetermineUnit_fn(Size* __this, int32_t* __retval)
{
    *__retval = __this->DetermineUnit();
}

// public override sealed bool Equals(object obj) :141
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Size", "Equals(object)");

    if (uIs(obj, __type))
    {
        Size s = uUnbox<Size>(__type, obj);

        if (s.Unit != __this->Unit)
            return *__retval = false, void();

        if (s.Value != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else if (uIs(obj, ::TYPES[17/*float*/]))
    {
        if ((__this->Unit != 2) && (__this->Unit != 1))
            return *__retval = false, void();

        float f = uUnbox<float>(::TYPES[17/*float*/], obj);

        if (f != __this->Value)
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :160
void Size__GetHashCode_fn(Size* __this, uType* __type, int32_t* __retval)
{
    uStackFrame __("Uno.UX.Size", "GetHashCode()");
    float ind7;
    return *__retval = ::g::Uno::Float::GetHashCode((ind7 = __this->Value, ind7), ::TYPES[17/*float*/]), void();
}

// public bool get_IsAuto() :111
void Size__get_IsAuto_fn(Size* __this, bool* __retval)
{
    *__retval = __this->IsAuto();
}

// public Size New(float value, Uno.UX.Unit unit) :34
void Size__New1_fn(float* value, int32_t* unit, Size* __retval)
{
    *__retval = Size__New1(*value, *unit);
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) :69
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Addition(*a, *b);
}

// public static operator /(Uno.UX.Size a, Uno.UX.Size b) :94
void Size__op_Division1_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Division1(*a, *b);
}

// public static operator ==(Uno.UX.Size a, Uno.UX.Size b) :99
void Size__op_Equality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Equality(*a, *b);
}

// public static explicit operator float(Uno.UX.Size s) :50
void Size__op_Explicit1_fn(Size* s, float* __retval)
{
    *__retval = Size__op_Explicit1(*s);
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) :40
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit(*unspecifiedUnits);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) :45
void Size__op_Implicit1_fn(int32_t* unspecifiedUnits, Size* __retval)
{
    *__retval = Size__op_Implicit1(*unspecifiedUnits);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) :104
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval)
{
    *__retval = Size__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size a, float b) :79
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval)
{
    *__retval = Size__op_Multiply(*a, *b);
}

// public static operator *(Uno.UX.Size a, Uno.UX.Size b) :89
void Size__op_Multiply1_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Multiply1(*a, *b);
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) :74
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval)
{
    *__retval = Size__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :128
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Size", "ToString()");
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float ind5;
    int32_t ind6;

    switch (__this->Unit)
    {
        case 1:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind1 = __this->Value, ind1), ::TYPES[17/*float*/]), ::STRINGS[5/*" (unspecifi...*/]), void();
        case 2:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind2 = __this->Value, ind2), ::TYPES[17/*float*/]), ::STRINGS[6/*"pt"*/]), void();
        case 3:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind3 = __this->Value, ind3), ::TYPES[17/*float*/]), ::STRINGS[7/*"px"*/]), void();
        case 4:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind4 = __this->Value, ind4), ::TYPES[17/*float*/]), ::STRINGS[8/*"%"*/]), void();
        case 0:
            return *__retval = ::STRINGS[9/*"(auto)"*/], void();
        default:
            return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString((ind5 = __this->Value, ind5), ::TYPES[17/*float*/]), ::STRINGS[10/*" ("*/]), ::g::Uno::Int::ToString((ind6 = __this->Unit, ind6), ::TYPES[18/*int*/])), ::STRINGS[11/*")"*/]), void();
    }
}

// public Size(float value, Uno.UX.Unit unit) [instance] :34
void Size::ctor_(float value, int32_t unit)
{
    Value = value;
    Unit = unit;
}

// public Uno.UX.Unit DetermineUnit() [instance] :63
int32_t Size::DetermineUnit()
{
    if (Unit == 1)
        return 2;
    else
        return Unit;
}

// public bool get_IsAuto() [instance] :111
bool Size::IsAuto()
{
    return Unit == 0;
}

// public static Uno.UX.Unit Combine(Uno.UX.Unit a, Uno.UX.Unit b) [static] :55
int32_t Size::Combine(int32_t a, int32_t b)
{
    if (a == b)
        return a;

    if (a == 1)
        return b;

    if (b == 1)
        return a;

    return 1;
}

// public Size New(float value, Uno.UX.Unit unit) [static] :34
Size Size__New1(float value, int32_t unit)
{
    Size obj8;
    obj8.ctor_(value, unit);
    return obj8;
}

// public static operator +(Uno.UX.Size a, Uno.UX.Size b) [static] :69
Size Size__op_Addition(Size a, Size b)
{
    return Size__New1(a.Value + b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static operator /(Uno.UX.Size a, Uno.UX.Size b) [static] :94
Size Size__op_Division1(Size a, Size b)
{
    return Size__New1(a.Value / b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static operator ==(Uno.UX.Size a, Uno.UX.Size b) [static] :99
bool Size__op_Equality(Size a, Size b)
{
    return (a.Value == b.Value) && (a.Unit == b.Unit);
}

// public static explicit operator float(Uno.UX.Size s) [static] :50
float Size__op_Explicit1(Size s)
{
    return s.Value;
}

// public static implicit operator Uno.UX.Size(float unspecifiedUnits) [static] :40
Size Size__op_Implicit(float unspecifiedUnits)
{
    return Size__New1(unspecifiedUnits, 1);
}

// public static implicit operator Uno.UX.Size(int unspecifiedUnits) [static] :45
Size Size__op_Implicit1(int32_t unspecifiedUnits)
{
    return Size__New1((float)unspecifiedUnits, 1);
}

// public static operator !=(Uno.UX.Size a, Uno.UX.Size b) [static] :104
bool Size__op_Inequality(Size a, Size b)
{
    return (a.Value != b.Value) || (a.Unit != b.Unit);
}

// public static operator *(Uno.UX.Size a, float b) [static] :79
Size Size__op_Multiply(Size a, float b)
{
    return Size__New1(a.Value * b, a.Unit);
}

// public static operator *(Uno.UX.Size a, Uno.UX.Size b) [static] :89
Size Size__op_Multiply1(Size a, Size b)
{
    return Size__New1(a.Value * b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static operator -(Uno.UX.Size a, Uno.UX.Size b) [static] :74
Size Size__op_Subtraction(Size a, Size b)
{
    return Size__New1(a.Value - b.Value, Size::Combine(a.Unit, b.Unit));
}

// public static Uno.UX.Size get_Auto() [static] :109
Size Size__Auto()
{
    return Size__New1(0.0f, 0);
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Size.uno
// ----------------------------------------------------------------------------------------

// public struct Size2 :178
// {
static void Size2_build(uType* type)
{
    ::STRINGS[12] = uString::Const(", ");
    ::TYPES[19] = ::g::Uno::UX::Size_typeof();
    type->SetFields(0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(Size2, X), 0,
        ::TYPES[19/*Uno.UX.Size*/], offsetof(Size2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Auto", NULL, (void*)Size2__get_Auto_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Size2__New1_fn, 0, true, type, 2, ::TYPES[19/*Uno.UX.Size*/], ::TYPES[19/*Uno.UX.Size*/]));
}

uStructType* Size2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Size2);
    options.ValueSize = sizeof(Size2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UX.Size2", options);
    type->fp_build_ = Size2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Size2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))Size2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Size2__ToString_fn;
    return type;
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) :183
void Size2__ctor__fn(Size2* __this, ::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y)
{
    __this->ctor_(*x, *y);
}

// public static Uno.UX.Size2 get_Auto() :248
void Size2__get_Auto_fn(Size2* __retval)
{
    *__retval = Size2__Auto();
}

// public override sealed bool Equals(object obj) :271
void Size2__Equals_fn(Size2* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.UX.Size2", "Equals(object)");

    if (uIs(obj, __type))
    {
        Size2 s = uUnbox<Size2>(__type, obj);

        if (::g::Uno::UX::Size__op_Inequality(s.X, __this->X))
            return *__retval = false, void();

        if (::g::Uno::UX::Size__op_Inequality(s.Y, __this->Y))
            return *__retval = false, void();

        return *__retval = true, void();
    }
    else
        return *__retval = false, void();
}

// public override sealed int GetHashCode() :283
void Size2__GetHashCode_fn(Size2* __this, uType* __type, int32_t* __retval)
{
    uStackFrame __("Uno.UX.Size2", "GetHashCode()");
    ::g::Uno::UX::Size ind3;
    ::g::Uno::UX::Size ind4;
    return *__retval = (ind3 = __this->X, (&ind3))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]) ^ (ind4 = __this->Y, (&ind4))->GetHashCode(::TYPES[19/*Uno.UX.Size*/]), void();
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) :183
void Size2__New1_fn(::g::Uno::UX::Size* x, ::g::Uno::UX::Size* y, Size2* __retval)
{
    *__retval = Size2__New1(*x, *y);
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) :206
void Size2__op_Addition_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Addition(*a, *b);
}

// public static operator /(Uno.UX.Size2 a, Uno.UX.Size2 b) :231
void Size2__op_Division1_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Division1(*a, *b);
}

// public static operator ==(Uno.UX.Size2 a, Uno.UX.Size2 b) :236
void Size2__op_Equality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Equality(*a, *b);
}

// public static explicit operator float2(Uno.UX.Size2 v) :199
void Size2__op_Explicit1_fn(Size2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Size2__op_Explicit1(*v);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) :189
void Size2__op_Implicit1_fn(::g::Uno::Float2* unspecifiedUnitsVector, Size2* __retval)
{
    *__retval = Size2__op_Implicit1(*unspecifiedUnitsVector);
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) :241
void Size2__op_Inequality_fn(Size2* a, Size2* b, bool* __retval)
{
    *__retval = Size2__op_Inequality(*a, *b);
}

// public static operator *(Uno.UX.Size2 a, float b) :216
void Size2__op_Multiply_fn(Size2* a, float* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply(*a, *b);
}

// public static operator *(Uno.UX.Size2 a, Uno.UX.Size2 b) :226
void Size2__op_Multiply1_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Multiply1(*a, *b);
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) :211
void Size2__op_Subtraction_fn(Size2* a, Size2* b, Size2* __retval)
{
    *__retval = Size2__op_Subtraction(*a, *b);
}

// public override sealed string ToString() :266
void Size2__ToString_fn(Size2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.UX.Size2", "ToString()");
    ::g::Uno::UX::Size ind1;
    ::g::Uno::UX::Size ind2;
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((ind1 = __this->X, (&ind1))->ToString(::TYPES[19/*Uno.UX.Size*/]), ::STRINGS[12/*", "*/]), (ind2 = __this->Y, (&ind2))->ToString(::TYPES[19/*Uno.UX.Size*/])), void();
}

// public Size2(Uno.UX.Size x, Uno.UX.Size y) [instance] :183
void Size2::ctor_(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    X = x;
    Y = y;
}

// public Size2 New(Uno.UX.Size x, Uno.UX.Size y) [static] :183
Size2 Size2__New1(::g::Uno::UX::Size x, ::g::Uno::UX::Size y)
{
    Size2 obj5;
    obj5.ctor_(x, y);
    return obj5;
}

// public static operator +(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :206
Size2 Size2__op_Addition(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Addition(a.X, b.X), ::g::Uno::UX::Size__op_Addition(a.Y, b.Y));
}

// public static operator /(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :231
Size2 Size2__op_Division1(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Division1(a.X, b.X), ::g::Uno::UX::Size__op_Division1(a.Y, b.Y));
}

// public static operator ==(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :236
bool Size2__op_Equality(Size2 a, Size2 b)
{
    return ::g::Uno::UX::Size__op_Equality(a.X, b.X) && ::g::Uno::UX::Size__op_Equality(a.Y, b.Y);
}

// public static explicit operator float2(Uno.UX.Size2 v) [static] :199
::g::Uno::Float2 Size2__op_Explicit1(Size2 v)
{
    ::g::Uno::UX::Size x = v.X;
    ::g::Uno::UX::Size y = v.Y;
    return ::g::Uno::Float2__New2(x.Value, y.Value);
}

// public static implicit operator Uno.UX.Size2(float2 unspecifiedUnitsVector) [static] :189
Size2 Size2__op_Implicit1(::g::Uno::Float2 unspecifiedUnitsVector)
{
    return Size2__New1(::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.X), ::g::Uno::UX::Size__op_Implicit(unspecifiedUnitsVector.Y));
}

// public static operator !=(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :241
bool Size2__op_Inequality(Size2 a, Size2 b)
{
    return ::g::Uno::UX::Size__op_Inequality(a.X, b.X) || ::g::Uno::UX::Size__op_Inequality(a.Y, b.Y);
}

// public static operator *(Uno.UX.Size2 a, float b) [static] :216
Size2 Size2__op_Multiply(Size2 a, float b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Multiply(a.X, b), ::g::Uno::UX::Size__op_Multiply(a.Y, b));
}

// public static operator *(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :226
Size2 Size2__op_Multiply1(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Multiply1(a.X, b.X), ::g::Uno::UX::Size__op_Multiply1(a.Y, b.Y));
}

// public static operator -(Uno.UX.Size2 a, Uno.UX.Size2 b) [static] :211
Size2 Size2__op_Subtraction(Size2 a, Size2 b)
{
    return Size2__New1(::g::Uno::UX::Size__op_Subtraction(a.X, b.X), ::g::Uno::UX::Size__op_Subtraction(a.Y, b.Y));
}

// public static Uno.UX.Size2 get_Auto() [static] :248
Size2 Size2__Auto()
{
    return Size2__New1(::g::Uno::UX::Size__Auto(), ::g::Uno::UX::Size__Auto());
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\FileSource.uno
// ----------------------------------------------------------------------------------------------

// internal static class StreamExtensions :45
// {
static void StreamExtensions_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Bug in Uno compiler, this case should never ever happen.");
    ::TYPES[20] = ::g::Uno::IDisposable_typeof();
    ::TYPES[21] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* StreamExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.UX.StreamExtensions", options);
    type->fp_build_ = StreamExtensions_build;
    return type;
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) :47
void StreamExtensions__ReadAllBytes_fn(::g::Uno::IO::BinaryReader* reader, uArray** __retval)
{
    *__retval = StreamExtensions::ReadAllBytes(reader);
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) :65
void StreamExtensions__ToArray_fn(::g::Uno::IO::MemoryStream* memoryStream, uArray** __retval)
{
    *__retval = StreamExtensions::ToArray(memoryStream);
}

// public static byte[] ReadAllBytes(Uno.IO.BinaryReader reader) [static] :47
uArray* StreamExtensions::ReadAllBytes(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Uno.UX.StreamExtensions", "ReadAllBytes(Uno.IO.BinaryReader)");
    int32_t bufferSize = 4096;
    ::g::Uno::IO::MemoryStream* ms = ::g::Uno::IO::MemoryStream::New1();

    {
        try
        {
            {
                uArray* buffer;

                do
                {
                    buffer = uPtr(reader)->ReadBytes(4096);
                    uPtr(ms)->Write(buffer, 0, uPtr(buffer)->Length());
                }
                while (uPtr(buffer)->Length() == 4096);

                uArray* __uno_retval = StreamExtensions::ToArray(ms);
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[20/*Uno.IDisposable*/]));
                return __uno_retval;
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[20/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_11;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)ms), ::TYPES[20/*Uno.IDisposable*/]));
        }
        __after_finally_11:;
    }

    U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[13/*"Bug in Uno ...*/]));
}

// public static byte[] ToArray(Uno.IO.MemoryStream memoryStream) [static] :65
uArray* StreamExtensions::ToArray(::g::Uno::IO::MemoryStream* memoryStream)
{
    uStackFrame __("Uno.UX.StreamExtensions", "ToArray(Uno.IO.MemoryStream)");
    uArray* buffer = uPtr(memoryStream)->GetBuffer();
    uArray* bytes = uArray::New(::TYPES[21/*byte[]*/], (int32_t)memoryStream->Length());

    for (int32_t i = 0; (int64_t)i < memoryStream->Length(); ++i)
        uPtr(bytes)->Item<uint8_t>(i) = uPtr(buffer)->Item<uint8_t>(i);

    return bytes;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Template.uno
// --------------------------------------------------------------------------------------------

// public abstract class Template :12
// {
static void Template_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Template, _key), 0,
        ::g::Uno::Bool_typeof(), offsetof(Template, _isDefault), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_IsDefault", NULL, (void*)Template__get_IsDefault_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Key", NULL, (void*)Template__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("New", NULL, NULL, offsetof(Template_type, fp_New1), false, uObject_typeof(), 0));
}

Template_type* Template_typeof()
{
    static uSStrong<Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Template);
    options.TypeSize = sizeof(Template_type);
    type = (Template_type*)uClassType::New("Uno.UX.Template", options);
    type->fp_build_ = Template_build;
    return type;
}

// protected Template(string key, bool isDefault) :22
void Template__ctor__fn(Template* __this, uString* key, bool* isDefault)
{
    __this->ctor_(key, *isDefault);
}

// public bool get_IsDefault() :20
void Template__get_IsDefault_fn(Template* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public string get_Key() :16
void Template__get_Key_fn(Template* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// protected Template(string key, bool isDefault) [instance] :22
void Template::ctor_(uString* key, bool isDefault)
{
    _key = key;
    _isDefault = isDefault;
}

// public bool get_IsDefault() [instance] :20
bool Template::IsDefault()
{
    return _isDefault;
}

// public string get_Key() [instance] :16
uString* Template::Key()
{
    return _key;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Size.uno
// ----------------------------------------------------------------------------------------

// public enum Unit :6
uEnumType* Unit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.UX.Unit", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Auto", 0LL,
        "Unspecified", 1LL,
        "Points", 2LL,
        "Pixels", 3LL,
        "Percent", 4LL);
    return type;
}

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\NameTable.uno
// ---------------------------------------------------------------------------------------------

// public sealed class UXAutoClassNameAttribute :53
// {
static void UXAutoClassNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXAutoClassNameAttribute__New1_fn, 0, true, type, 0));
}

uType* UXAutoClassNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXAutoClassNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXAutoClassNameAttribute", options);
    type->fp_build_ = UXAutoClassNameAttribute_build;
    type->fp_ctor_ = (void*)UXAutoClassNameAttribute__New1_fn;
    return type;
}

// public generated UXAutoClassNameAttribute() :53
void UXAutoClassNameAttribute__ctor_1_fn(UXAutoClassNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXAutoClassNameAttribute New() :53
void UXAutoClassNameAttribute__New1_fn(UXAutoClassNameAttribute** __retval)
{
    *__retval = UXAutoClassNameAttribute::New1();
}

// public generated UXAutoClassNameAttribute() [instance] :53
void UXAutoClassNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXAutoClassNameAttribute New() [static] :53
UXAutoClassNameAttribute* UXAutoClassNameAttribute::New1()
{
    UXAutoClassNameAttribute* obj1 = (UXAutoClassNameAttribute*)uNew(UXAutoClassNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\NameTable.uno
// ---------------------------------------------------------------------------------------------

// public sealed class UXAutoNameTableAttribute :51
// {
static void UXAutoNameTableAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXAutoNameTableAttribute__New1_fn, 0, true, type, 0));
}

uType* UXAutoNameTableAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXAutoNameTableAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXAutoNameTableAttribute", options);
    type->fp_build_ = UXAutoNameTableAttribute_build;
    type->fp_ctor_ = (void*)UXAutoNameTableAttribute__New1_fn;
    return type;
}

// public generated UXAutoNameTableAttribute() :51
void UXAutoNameTableAttribute__ctor_1_fn(UXAutoNameTableAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXAutoNameTableAttribute New() :51
void UXAutoNameTableAttribute__New1_fn(UXAutoNameTableAttribute** __retval)
{
    *__retval = UXAutoNameTableAttribute::New1();
}

// public generated UXAutoNameTableAttribute() [instance] :51
void UXAutoNameTableAttribute::ctor_1()
{
    ctor_();
}

// public generated UXAutoNameTableAttribute New() [static] :51
UXAutoNameTableAttribute* UXAutoNameTableAttribute::New1()
{
    UXAutoNameTableAttribute* obj1 = (UXAutoNameTableAttribute*)uNew(UXAutoNameTableAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXComponentsAttribute.uno
// --------------------------------------------------------------------------------------------------------------------

// public sealed class UXComponentsAttribute :7
// {
static void UXComponentsAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXComponentsAttribute__New1_fn, 0, true, type, 0));
}

uType* UXComponentsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXComponentsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXComponentsAttribute", options);
    type->fp_build_ = UXComponentsAttribute_build;
    type->fp_ctor_ = (void*)UXComponentsAttribute__New1_fn;
    return type;
}

// public generated UXComponentsAttribute() :7
void UXComponentsAttribute__ctor_1_fn(UXComponentsAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXComponentsAttribute New() :7
void UXComponentsAttribute__New1_fn(UXComponentsAttribute** __retval)
{
    *__retval = UXComponentsAttribute::New1();
}

// public generated UXComponentsAttribute() [instance] :7
void UXComponentsAttribute::ctor_1()
{
    ctor_();
}

// public generated UXComponentsAttribute New() [static] :7
UXComponentsAttribute* UXComponentsAttribute::New1()
{
    UXComponentsAttribute* obj1 = (UXComponentsAttribute*)uNew(UXComponentsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXConstructorAttribute.uno
// ---------------------------------------------------------------------------------------------------------------------

// public sealed class UXConstructorAttribute :7
// {
static void UXConstructorAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXConstructorAttribute__New1_fn, 0, true, type, 0));
}

uType* UXConstructorAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXConstructorAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXConstructorAttribute", options);
    type->fp_build_ = UXConstructorAttribute_build;
    type->fp_ctor_ = (void*)UXConstructorAttribute__New1_fn;
    return type;
}

// public generated UXConstructorAttribute() :7
void UXConstructorAttribute__ctor_1_fn(UXConstructorAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXConstructorAttribute New() :7
void UXConstructorAttribute__New1_fn(UXConstructorAttribute** __retval)
{
    *__retval = UXConstructorAttribute::New1();
}

// public generated UXConstructorAttribute() [instance] :7
void UXConstructorAttribute::ctor_1()
{
    ctor_();
}

// public generated UXConstructorAttribute New() [static] :7
UXConstructorAttribute* UXConstructorAttribute::New1()
{
    UXConstructorAttribute* obj1 = (UXConstructorAttribute*)uNew(UXConstructorAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXContentAttribute.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class UXContentAttribute :6
// {
static void UXContentAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXContentAttribute__New1_fn, 0, true, type, 0));
}

uType* UXContentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXContentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXContentAttribute", options);
    type->fp_build_ = UXContentAttribute_build;
    type->fp_ctor_ = (void*)UXContentAttribute__New1_fn;
    return type;
}

// public generated UXContentAttribute() :6
void UXContentAttribute__ctor_1_fn(UXContentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXContentAttribute New() :6
void UXContentAttribute__New1_fn(UXContentAttribute** __retval)
{
    *__retval = UXContentAttribute::New1();
}

// public generated UXContentAttribute() [instance] :6
void UXContentAttribute::ctor_1()
{
    ctor_();
}

// public generated UXContentAttribute New() [static] :6
UXContentAttribute* UXContentAttribute::New1()
{
    UXContentAttribute* obj1 = (UXContentAttribute*)uNew(UXContentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXContentAttribute.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class UXDataScopeAttribute :14
// {
static void UXDataScopeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXDataScopeAttribute__New1_fn, 0, true, type, 0));
}

uType* UXDataScopeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXDataScopeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXDataScopeAttribute", options);
    type->fp_build_ = UXDataScopeAttribute_build;
    type->fp_ctor_ = (void*)UXDataScopeAttribute__New1_fn;
    return type;
}

// public generated UXDataScopeAttribute() :14
void UXDataScopeAttribute__ctor_1_fn(UXDataScopeAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXDataScopeAttribute New() :14
void UXDataScopeAttribute__New1_fn(UXDataScopeAttribute** __retval)
{
    *__retval = UXDataScopeAttribute::New1();
}

// public generated UXDataScopeAttribute() [instance] :14
void UXDataScopeAttribute::ctor_1()
{
    ctor_();
}

// public generated UXDataScopeAttribute New() [static] :14
UXDataScopeAttribute* UXDataScopeAttribute::New1()
{
    UXDataScopeAttribute* obj1 = (UXDataScopeAttribute*)uNew(UXDataScopeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Expressions.uno
// -----------------------------------------------------------------------------------------------

// public sealed class UXExpressionAttribute :4
// {
static void UXExpressionAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXExpressionAttribute__New1_fn, 0, true, type, 0));
}

uType* UXExpressionAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXExpressionAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXExpressionAttribute", options);
    type->fp_build_ = UXExpressionAttribute_build;
    type->fp_ctor_ = (void*)UXExpressionAttribute__New1_fn;
    return type;
}

// public generated UXExpressionAttribute() :4
void UXExpressionAttribute__ctor_1_fn(UXExpressionAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXExpressionAttribute New() :4
void UXExpressionAttribute__New1_fn(UXExpressionAttribute** __retval)
{
    *__retval = UXExpressionAttribute::New1();
}

// public generated UXExpressionAttribute() [instance] :4
void UXExpressionAttribute::ctor_1()
{
    ctor_();
}

// public generated UXExpressionAttribute New() [static] :4
UXExpressionAttribute* UXExpressionAttribute::New1()
{
    UXExpressionAttribute* obj1 = (UXExpressionAttribute*)uNew(UXExpressionAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXNameAttribute.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class UXFileNameAttribute :9
// {
static void UXFileNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFileNameAttribute__New1_fn, 0, true, type, 0));
}

uType* UXFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFileNameAttribute", options);
    type->fp_build_ = UXFileNameAttribute_build;
    type->fp_ctor_ = (void*)UXFileNameAttribute__New1_fn;
    return type;
}

// public generated UXFileNameAttribute() :9
void UXFileNameAttribute__ctor_1_fn(UXFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFileNameAttribute New() :9
void UXFileNameAttribute__New1_fn(UXFileNameAttribute** __retval)
{
    *__retval = UXFileNameAttribute::New1();
}

// public generated UXFileNameAttribute() [instance] :9
void UXFileNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXFileNameAttribute New() [static] :9
UXFileNameAttribute* UXFileNameAttribute::New1()
{
    UXFileNameAttribute* obj1 = (UXFileNameAttribute*)uNew(UXFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXFreestanding.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class UXFreestandingAttribute :6
// {
static void UXFreestandingAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXFreestandingAttribute__New1_fn, 0, true, type, 0));
}

uType* UXFreestandingAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXFreestandingAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXFreestandingAttribute", options);
    type->fp_build_ = UXFreestandingAttribute_build;
    type->fp_ctor_ = (void*)UXFreestandingAttribute__New1_fn;
    return type;
}

// public generated UXFreestandingAttribute() :6
void UXFreestandingAttribute__ctor_1_fn(UXFreestandingAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXFreestandingAttribute New() :6
void UXFreestandingAttribute__New1_fn(UXFreestandingAttribute** __retval)
{
    *__retval = UXFreestandingAttribute::New1();
}

// public generated UXFreestandingAttribute() [instance] :6
void UXFreestandingAttribute::ctor_1()
{
    ctor_();
}

// public generated UXFreestandingAttribute New() [static] :6
UXFreestandingAttribute* UXFreestandingAttribute::New1()
{
    UXFreestandingAttribute* obj1 = (UXFreestandingAttribute*)uNew(UXFreestandingAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXGlobalResourceAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------

// public sealed class UXGlobalModuleAttribute :17
// {
static void UXGlobalModuleAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXGlobalModuleAttribute__New1_fn, 0, true, type, 0));
}

uType* UXGlobalModuleAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXGlobalModuleAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalModuleAttribute", options);
    type->fp_build_ = UXGlobalModuleAttribute_build;
    type->fp_ctor_ = (void*)UXGlobalModuleAttribute__New1_fn;
    return type;
}

// public UXGlobalModuleAttribute() :19
void UXGlobalModuleAttribute__ctor_1_fn(UXGlobalModuleAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalModuleAttribute New() :19
void UXGlobalModuleAttribute__New1_fn(UXGlobalModuleAttribute** __retval)
{
    *__retval = UXGlobalModuleAttribute::New1();
}

// public UXGlobalModuleAttribute() [instance] :19
void UXGlobalModuleAttribute::ctor_1()
{
    ctor_();
}

// public UXGlobalModuleAttribute New() [static] :19
UXGlobalModuleAttribute* UXGlobalModuleAttribute::New1()
{
    UXGlobalModuleAttribute* obj1 = (UXGlobalModuleAttribute*)uNew(UXGlobalModuleAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXGlobalResourceAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------

// public sealed class UXGlobalResourceAttribute :5
// {
static void UXGlobalResourceAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(UXGlobalResourceAttribute, Alias), 0);
    type->Reflection.SetFields(1,
        new uField("Alias", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)UXGlobalResourceAttribute__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uType* UXGlobalResourceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UXGlobalResourceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXGlobalResourceAttribute", options);
    type->fp_build_ = UXGlobalResourceAttribute_build;
    type->fp_ctor_ = (void*)UXGlobalResourceAttribute__New1_fn;
    return type;
}

// public UXGlobalResourceAttribute() :14
void UXGlobalResourceAttribute__ctor_1_fn(UXGlobalResourceAttribute* __this)
{
    __this->ctor_1();
}

// public UXGlobalResourceAttribute(string alias) :9
void UXGlobalResourceAttribute__ctor_2_fn(UXGlobalResourceAttribute* __this, uString* alias)
{
    __this->ctor_2(alias);
}

// public UXGlobalResourceAttribute New() :14
void UXGlobalResourceAttribute__New1_fn(UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New1();
}

// public UXGlobalResourceAttribute New(string alias) :9
void UXGlobalResourceAttribute__New2_fn(uString* alias, UXGlobalResourceAttribute** __retval)
{
    *__retval = UXGlobalResourceAttribute::New2(alias);
}

// public UXGlobalResourceAttribute() [instance] :14
void UXGlobalResourceAttribute::ctor_1()
{
    ctor_();
}

// public UXGlobalResourceAttribute(string alias) [instance] :9
void UXGlobalResourceAttribute::ctor_2(uString* alias)
{
    ctor_();
    Alias = alias;
}

// public UXGlobalResourceAttribute New() [static] :14
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New1()
{
    UXGlobalResourceAttribute* obj2 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj2->ctor_1();
    return obj2;
}

// public UXGlobalResourceAttribute New(string alias) [static] :9
UXGlobalResourceAttribute* UXGlobalResourceAttribute::New2(uString* alias)
{
    UXGlobalResourceAttribute* obj1 = (UXGlobalResourceAttribute*)uNew(UXGlobalResourceAttribute_typeof());
    obj1->ctor_2(alias);
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXLineNumberAttribute.uno
// --------------------------------------------------------------------------------------------------------------------

// public sealed class UXLineNumberAttribute :3
// {
static void UXLineNumberAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXLineNumberAttribute__New1_fn, 0, true, type, 0));
}

uType* UXLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXLineNumberAttribute", options);
    type->fp_build_ = UXLineNumberAttribute_build;
    type->fp_ctor_ = (void*)UXLineNumberAttribute__New1_fn;
    return type;
}

// public generated UXLineNumberAttribute() :3
void UXLineNumberAttribute__ctor_1_fn(UXLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXLineNumberAttribute New() :3
void UXLineNumberAttribute__New1_fn(UXLineNumberAttribute** __retval)
{
    *__retval = UXLineNumberAttribute::New1();
}

// public generated UXLineNumberAttribute() [instance] :3
void UXLineNumberAttribute::ctor_1()
{
    ctor_();
}

// public generated UXLineNumberAttribute New() [static] :3
UXLineNumberAttribute* UXLineNumberAttribute::New1()
{
    UXLineNumberAttribute* obj1 = (UXLineNumberAttribute*)uNew(UXLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXNameAttribute.uno
// --------------------------------------------------------------------------------------------------------------

// public sealed class UXNameAttribute :4
// {
static void UXNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXNameAttribute__New1_fn, 0, true, type, 0));
}

uType* UXNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXNameAttribute", options);
    type->fp_build_ = UXNameAttribute_build;
    type->fp_ctor_ = (void*)UXNameAttribute__New1_fn;
    return type;
}

// public generated UXNameAttribute() :4
void UXNameAttribute__ctor_1_fn(UXNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXNameAttribute New() :4
void UXNameAttribute__New1_fn(UXNameAttribute** __retval)
{
    *__retval = UXNameAttribute::New1();
}

// public generated UXNameAttribute() [instance] :4
void UXNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXNameAttribute New() [static] :4
UXNameAttribute* UXNameAttribute::New1()
{
    UXNameAttribute* obj1 = (UXNameAttribute*)uNew(UXNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXContentAttribute.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class UXNameScopeAttribute :22
// {
static void UXNameScopeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXNameScopeAttribute__New1_fn, 0, true, type, 0));
}

uType* UXNameScopeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXNameScopeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXNameScopeAttribute", options);
    type->fp_build_ = UXNameScopeAttribute_build;
    type->fp_ctor_ = (void*)UXNameScopeAttribute__New1_fn;
    return type;
}

// public generated UXNameScopeAttribute() :22
void UXNameScopeAttribute__ctor_1_fn(UXNameScopeAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXNameScopeAttribute New() :22
void UXNameScopeAttribute__New1_fn(UXNameScopeAttribute** __retval)
{
    *__retval = UXNameScopeAttribute::New1();
}

// public generated UXNameScopeAttribute() [instance] :22
void UXNameScopeAttribute::ctor_1()
{
    ctor_();
}

// public generated UXNameScopeAttribute New() [static] :22
UXNameScopeAttribute* UXNameScopeAttribute::New1()
{
    UXNameScopeAttribute* obj1 = (UXNameScopeAttribute*)uNew(UXNameScopeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXPrimaryAttribute.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class UXPrimaryAttribute :7
// {
static void UXPrimaryAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXPrimaryAttribute__New1_fn, 0, true, type, 0));
}

uType* UXPrimaryAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXPrimaryAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXPrimaryAttribute", options);
    type->fp_build_ = UXPrimaryAttribute_build;
    type->fp_ctor_ = (void*)UXPrimaryAttribute__New1_fn;
    return type;
}

// public generated UXPrimaryAttribute() :7
void UXPrimaryAttribute__ctor_1_fn(UXPrimaryAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXPrimaryAttribute New() :7
void UXPrimaryAttribute__New1_fn(UXPrimaryAttribute** __retval)
{
    *__retval = UXPrimaryAttribute::New1();
}

// public generated UXPrimaryAttribute() [instance] :7
void UXPrimaryAttribute::ctor_1()
{
    ctor_();
}

// public generated UXPrimaryAttribute New() [static] :7
UXPrimaryAttribute* UXPrimaryAttribute::New1()
{
    UXPrimaryAttribute* obj1 = (UXPrimaryAttribute*)uNew(UXPrimaryAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXSourceFileNameAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------

// public sealed class UXSourceFileNameAttribute :3
// {
static void UXSourceFileNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXSourceFileNameAttribute__New1_fn, 0, true, type, 0));
}

uType* UXSourceFileNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXSourceFileNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXSourceFileNameAttribute", options);
    type->fp_build_ = UXSourceFileNameAttribute_build;
    type->fp_ctor_ = (void*)UXSourceFileNameAttribute__New1_fn;
    return type;
}

// public generated UXSourceFileNameAttribute() :3
void UXSourceFileNameAttribute__ctor_1_fn(UXSourceFileNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXSourceFileNameAttribute New() :3
void UXSourceFileNameAttribute__New1_fn(UXSourceFileNameAttribute** __retval)
{
    *__retval = UXSourceFileNameAttribute::New1();
}

// public generated UXSourceFileNameAttribute() [instance] :3
void UXSourceFileNameAttribute::ctor_1()
{
    ctor_();
}

// public generated UXSourceFileNameAttribute New() [static] :3
UXSourceFileNameAttribute* UXSourceFileNameAttribute::New1()
{
    UXSourceFileNameAttribute* obj1 = (UXSourceFileNameAttribute*)uNew(UXSourceFileNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXValueBindingArgumentAttribute.uno
// ------------------------------------------------------------------------------------------------------------------------------

// public sealed class UXValueBindingArgumentAttribute :5
// {
static void UXValueBindingArgumentAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingArgumentAttribute__New1_fn, 0, true, type, 0));
}

uType* UXValueBindingArgumentAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXValueBindingArgumentAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingArgumentAttribute", options);
    type->fp_build_ = UXValueBindingArgumentAttribute_build;
    type->fp_ctor_ = (void*)UXValueBindingArgumentAttribute__New1_fn;
    return type;
}

// public generated UXValueBindingArgumentAttribute() :5
void UXValueBindingArgumentAttribute__ctor_1_fn(UXValueBindingArgumentAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingArgumentAttribute New() :5
void UXValueBindingArgumentAttribute__New1_fn(UXValueBindingArgumentAttribute** __retval)
{
    *__retval = UXValueBindingArgumentAttribute::New1();
}

// public generated UXValueBindingArgumentAttribute() [instance] :5
void UXValueBindingArgumentAttribute::ctor_1()
{
    ctor_();
}

// public generated UXValueBindingArgumentAttribute New() [static] :5
UXValueBindingArgumentAttribute* UXValueBindingArgumentAttribute::New1()
{
    UXValueBindingArgumentAttribute* obj1 = (UXValueBindingArgumentAttribute*)uNew(UXValueBindingArgumentAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXValueBindingTargetAttribute.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public sealed class UXValueBindingTargetAttribute :5
// {
static void UXValueBindingTargetAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXValueBindingTargetAttribute__New1_fn, 0, true, type, 0));
}

uType* UXValueBindingTargetAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXValueBindingTargetAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXValueBindingTargetAttribute", options);
    type->fp_build_ = UXValueBindingTargetAttribute_build;
    type->fp_ctor_ = (void*)UXValueBindingTargetAttribute__New1_fn;
    return type;
}

// public generated UXValueBindingTargetAttribute() :5
void UXValueBindingTargetAttribute__ctor_1_fn(UXValueBindingTargetAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXValueBindingTargetAttribute New() :5
void UXValueBindingTargetAttribute__New1_fn(UXValueBindingTargetAttribute** __retval)
{
    *__retval = UXValueBindingTargetAttribute::New1();
}

// public generated UXValueBindingTargetAttribute() [instance] :5
void UXValueBindingTargetAttribute::ctor_1()
{
    ctor_();
}

// public generated UXValueBindingTargetAttribute New() [static] :5
UXValueBindingTargetAttribute* UXValueBindingTargetAttribute::New1()
{
    UXValueBindingTargetAttribute* obj1 = (UXValueBindingTargetAttribute*)uNew(UXValueBindingTargetAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Attributes\UXContentAttribute.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed class UXVerbatimAttribute :8
// {
static void UXVerbatimAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UXVerbatimAttribute__New1_fn, 0, true, type, 0));
}

uType* UXVerbatimAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UXVerbatimAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.UXVerbatimAttribute", options);
    type->fp_build_ = UXVerbatimAttribute_build;
    type->fp_ctor_ = (void*)UXVerbatimAttribute__New1_fn;
    return type;
}

// public generated UXVerbatimAttribute() :8
void UXVerbatimAttribute__ctor_1_fn(UXVerbatimAttribute* __this)
{
    __this->ctor_1();
}

// public generated UXVerbatimAttribute New() :8
void UXVerbatimAttribute__New1_fn(UXVerbatimAttribute** __retval)
{
    *__retval = UXVerbatimAttribute::New1();
}

// public generated UXVerbatimAttribute() [instance] :8
void UXVerbatimAttribute::ctor_1()
{
    ctor_();
}

// public generated UXVerbatimAttribute New() [static] :8
UXVerbatimAttribute* UXVerbatimAttribute::New1()
{
    UXVerbatimAttribute* obj1 = (UXVerbatimAttribute*)uNew(UXVerbatimAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Property.uno
// --------------------------------------------------------------------------------------------

// public class ValueChangedArgs<T> :3
// {
static void ValueChangedArgs_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)ValueChangedArgs__New2_fn, 0, true, type, 1, type->T(0)),
        new uFunction("get_Value", NULL, (void*)ValueChangedArgs__get_Value_fn, 0, false, type->T(0), 0));
}

uType* ValueChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ValueChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.UX.ValueChangedArgs`1", options);
    type->fp_build_ = ValueChangedArgs_build;
    return type;
}

// public ValueChangedArgs(T value) :7
void ValueChangedArgs__ctor_1_fn(ValueChangedArgs* __this, void* value)
{
    __this->ctor_();
    ValueChangedArgs__set_Value_fn(__this, value);
}

// public ValueChangedArgs New(T value) :7
void ValueChangedArgs__New2_fn(uType* __type, void* value, ValueChangedArgs** __retval)
{
    ValueChangedArgs* obj1 = (ValueChangedArgs*)uNew(__type);
    ValueChangedArgs__ctor_1_fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated T get_Value() :5
void ValueChangedArgs__get_Value_fn(ValueChangedArgs* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :5
void ValueChangedArgs__set_Value_fn(ValueChangedArgs* __this, void* value)
{
    __this->_Value() = value;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\UnoCore\1.8.0\Source\Uno\UX\Property.uno
// --------------------------------------------------------------------------------------------

// public delegate void ValueChangedHandler<T>(object sender, Uno.UX.ValueChangedArgs<T> args) :13
uDelegateType* ValueChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.UX.ValueChangedHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(type->T(0), NULL));
    return type;
}

}}} // ::g::Uno::UX
