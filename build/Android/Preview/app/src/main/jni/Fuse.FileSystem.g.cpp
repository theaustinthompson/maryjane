// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.FileSystem.AndroidPaths.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.FileSystem.FileS-986283eb.h>
#include <Fuse.FileSystem.FileS-b6b9d9ff.h>
#include <Fuse.FileSystem.FileS-cd2526b.h>
#include <Fuse.FileSystem.Nothing.h>
#include <Fuse.FileSystem.PathTools.h>
#include <Fuse.FileSystem.UnifiedPaths.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Fuse.Scripting.ValueC-23d67df6.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.Func1-2.h>
#include <Uno.Func2-3.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.DirectoryInfo.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileInfo.h>
#include <Uno.IO.FileSystemInfo.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Time.Constants.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[50];
static uType* TYPES[34];

namespace g{
namespace Fuse{
namespace FileSystem{

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\AndroidPaths.uno
// ------------------------------------------------------------------------------------------

// internal sealed extern class AndroidPaths :9
// {
static void AndroidPaths_build(uType* type)
{
    ::STRINGS[0] = uString::Const("externalCache");
    ::STRINGS[1] = uString::Const("externalFiles");
    ::STRINGS[2] = uString::Const("cache");
    ::STRINGS[3] = uString::Const("files");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
}

uType* AndroidPaths_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AndroidPaths);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.AndroidPaths", options);
    type->fp_build_ = AndroidPaths_build;
    type->fp_ctor_ = (void*)AndroidPaths__New1_fn;
    return type;
}

// public generated AndroidPaths() :9
void AndroidPaths__ctor__fn(AndroidPaths* __this)
{
    __this->ctor_();
}

// private static string GetCacheDirectory() :37
void AndroidPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetCacheDirectory();
}

// private static string GetExternalCacheDirectory() :23
void AndroidPaths__GetExternalCacheDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetExternalCacheDirectory();
}

// private static string GetExternalFilesDirectory() :30
void AndroidPaths__GetExternalFilesDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetExternalFilesDirectory();
}

// private static string GetFilesDirectory() :44
void AndroidPaths__GetFilesDirectory_fn(uString** __retval)
{
    *__retval = AndroidPaths::GetFilesDirectory();
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() :11
void AndroidPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = AndroidPaths::GetPathDictionary();
}

// public generated AndroidPaths New() :9
void AndroidPaths__New1_fn(AndroidPaths** __retval)
{
    *__retval = AndroidPaths::New1();
}

// public generated AndroidPaths() [instance] :9
void AndroidPaths::ctor_()
{
}

// private static string GetCacheDirectory() [static] :37
uString* AndroidPaths::GetCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCacheDirectory363", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetExternalCacheDirectory() [static] :23
uString* AndroidPaths::GetExternalCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetExternalCacheDirectory364", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetExternalFilesDirectory() [static] :30
uString* AndroidPaths::GetExternalFilesDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetExternalFilesDirectory365", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetFilesDirectory() [static] :44
uString* AndroidPaths::GetFilesDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetFilesDirectory366", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() [static] :11
::g::Uno::Collections::Dictionary* AndroidPaths::GetPathDictionary()
{
    uStackFrame __("Fuse.FileSystem.AndroidPaths", "GetPathDictionary()");
    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"externalCache"*/], AndroidPaths::GetExternalCacheDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"externalFiles"*/], AndroidPaths::GetExternalFilesDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"cache"*/], AndroidPaths::GetCacheDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[3/*"files"*/], AndroidPaths::GetFilesDirectory());
    return dict;
}

// public generated AndroidPaths New() [static] :9
AndroidPaths* AndroidPaths::New1()
{
    AndroidPaths* obj1 = (AndroidPaths*)uNew(AndroidPaths_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\FileSystemOperations.uno
// --------------------------------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, TResult> :262
// {
static void FileSystemOperations__Closure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(FileSystemOperations__Closure, _del), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FileSystemOperations__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(FileSystemOperations__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`2", options);
    type->fp_build_ = FileSystemOperations__Closure_build;
    return type;
}

// public Closure(Uno.Func<T1, TResult> del, T1 arg1) :267
void FileSystemOperations__Closure__ctor__fn(FileSystemOperations__Closure* __this, uDelegate* del, void* arg1)
{
    __this->_del = del;
    __this->_arg1() = arg1;
}

// public TResult Invoke() :273
void FileSystemOperations__Closure__Invoke_fn(FileSystemOperations__Closure* __this, uTRef __retval)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`2", "Invoke()");
    uT ret2(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 1, (void*)__this->_arg1()), ret2)), void();
}

// public Closure New(Uno.Func<T1, TResult> del, T1 arg1) :267
void FileSystemOperations__Closure__New1_fn(uType* __type, uDelegate* del, void* arg1, FileSystemOperations__Closure** __retval)
{
    FileSystemOperations__Closure* obj1 = (FileSystemOperations__Closure*)uNew(__type);
    FileSystemOperations__Closure__ctor__fn(obj1, del, arg1);
    return *__retval = obj1, void();
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\FileSystemOperations.uno
// --------------------------------------------------------------------------------------------------

// private sealed class FileSystemOperations.Closure<T1, T2, TResult> :280
// {
static void FileSystemOperations__Closure1_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL), offsetof(FileSystemOperations__Closure1, _del), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
}

uType* FileSystemOperations__Closure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations__Closure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations.Closure`3", options);
    type->fp_build_ = FileSystemOperations__Closure1_build;
    return type;
}

// public Closure(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :286
void FileSystemOperations__Closure1__ctor__fn(FileSystemOperations__Closure1* __this, uDelegate* del, void* arg1, void* arg2)
{
    __this->_del = del;
    __this->_arg1() = arg1;
    __this->_arg2() = arg2;
}

// public TResult Invoke() :293
void FileSystemOperations__Closure1__Invoke_fn(FileSystemOperations__Closure1* __this, uTRef __retval)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations.Closure`3", "Invoke()");
    uT ret2(__this->__type->T(2), U_ALLOCA(__this->__type->T(2)->ValueSize));
    return __retval.Store((uPtr(__this->_del)->Invoke(&ret2, 2, (void*)__this->_arg1(), (void*)__this->_arg2()), ret2)), void();
}

// public Closure New(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :286
void FileSystemOperations__Closure1__New1_fn(uType* __type, uDelegate* del, void* arg1, void* arg2, FileSystemOperations__Closure1** __retval)
{
    FileSystemOperations__Closure1* obj1 = (FileSystemOperations__Closure1*)uNew(__type);
    FileSystemOperations__Closure1__ctor__fn(obj1, del, arg1, arg2);
    return *__retval = obj1, void();
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\FileSystemModule.uno
// ----------------------------------------------------------------------------------------------

// public sealed class FileSystemModule :43
// {
static void FileSystemModule_build(uType* type)
{
    ::STRINGS[4] = uString::Const("FuseJS/FileSystem");
    ::STRINGS[5] = uString::Const("cacheDirectory");
    ::STRINGS[6] = uString::Const("dataDirectory");
    ::STRINGS[7] = uString::Const("androidPaths");
    ::STRINGS[8] = uString::Const("createDirectory");
    ::STRINGS[9] = uString::Const("createDirectorySync");
    ::STRINGS[10] = uString::Const("delete");
    ::STRINGS[11] = uString::Const("deleteSync");
    ::STRINGS[12] = uString::Const("exists");
    ::STRINGS[13] = uString::Const("existsSync");
    ::STRINGS[14] = uString::Const("getDirectoryInfo");
    ::STRINGS[15] = uString::Const("getDirectoryInfoSync");
    ::STRINGS[16] = uString::Const("getFileInfo");
    ::STRINGS[17] = uString::Const("getFileInfoSync");
    ::STRINGS[18] = uString::Const("listDirectories");
    ::STRINGS[19] = uString::Const("listDirectoriesSync");
    ::STRINGS[20] = uString::Const("listEntries");
    ::STRINGS[21] = uString::Const("listEntriesSync");
    ::STRINGS[22] = uString::Const("listFiles");
    ::STRINGS[23] = uString::Const("listFilesSync");
    ::STRINGS[24] = uString::Const("readBufferFromFile");
    ::STRINGS[25] = uString::Const("moveSync");
    ::STRINGS[26] = uString::Const("move");
    ::STRINGS[27] = uString::Const("copySync");
    ::STRINGS[28] = uString::Const("copy");
    ::STRINGS[29] = uString::Const("readBufferFromFileSync");
    ::STRINGS[30] = uString::Const("readTextFromFile");
    ::STRINGS[31] = uString::Const("readTextFromFileSync");
    ::STRINGS[32] = uString::Const("writeBufferToFile");
    ::STRINGS[33] = uString::Const("writeBufferToFileSync");
    ::STRINGS[34] = uString::Const("writeTextToFile");
    ::STRINGS[35] = uString::Const("writeTextToFileSync");
    ::STRINGS[36] = uString::Const("appendTextToFile");
    ::STRINGS[37] = uString::Const("appendTextToFileSync");
    ::STRINGS[38] = uString::Const("Second argument \"text\" is required to be a string");
    ::STRINGS[39] = uString::Const("First argument `source` has to be a valid path");
    ::STRINGS[40] = uString::Const("Second argument `destination` has to be a valid path");
    ::STRINGS[41] = uString::Const("args");
    ::STRINGS[42] = uString::Const("first argument path is required to be a string");
    ::STRINGS[43] = uString::Const("(Date Converter)");
    ::STRINGS[44] = uString::Const("new Date({0})");
    ::STRINGS[45] = uString::Const("length");
    ::STRINGS[46] = uString::Const("fullName");
    ::STRINGS[47] = uString::Const("lastWriteTime");
    ::STRINGS[48] = uString::Const("lastAccessTime");
    ::STRINGS[49] = uString::Const("Second argument \"data\" is required to be an ArrayBuffer");
    ::TYPES[1] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[5] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[6] = type->MakeMethod(2/*ToScriptingObject<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[10] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::IO::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::IO::FileSystemInfo_typeof(), NULL);
    ::TYPES[14] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::IO::FileSystemInfo_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[15] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof()->Array(), NULL);
    ::TYPES[17] = ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::String_typeof()->Array(), ::g::Fuse::Scripting::Array_typeof(), NULL);
    ::TYPES[18] = type->MakeMethod(1/*ToScriptingArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Scripting::Object_typeof(), NULL);
    ::TYPES[20] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Byte_typeof()->Array(), NULL);
    ::TYPES[21] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[23] = type->MakeMethod(0/*GetArg<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Bool_typeof();
    ::TYPES[25] = ::g::Uno::String_typeof();
    ::TYPES[26] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(8/*ToArray<object>*/, uObject_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Collections::EnumerableExtensions_typeof();
    ::TYPES[28] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[29] = uObject_typeof()->Array();
    ::TYPES[30] = ::g::Uno::IO::FileInfo_typeof();
    ::TYPES[31] = ::g::Uno::Collections::Dictionary__Enumerator_typeof();
    ::TYPES[32] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[33] = type->MakeMethod(0/*GetArg<byte[]>*/, ::g::Uno::Byte_typeof()->Array(), NULL);
    type->SetDependencies(
        ::g::Uno::Time::Constants_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(5/*OfType<T, object>*/, type->MethodTypes[1]->U(0), uObject_typeof(), NULL),
        ::TYPES[28/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[31/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(::TYPES[25/*string*/], type->MethodTypes[2]->U(0), NULL),
        ::TYPES[32/*Uno.Collections.KeyValuePair`2*/]->MakeType(::TYPES[25/*string*/], type->MethodTypes[2]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        ::g::Fuse::FileSystem::FileSystemOperations_typeof(), offsetof(FileSystemModule, _operations), 0,
        type, (uintptr_t)&FileSystemModule::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("CreateDirectory", NULL, (void*)FileSystemModule__CreateDirectory_fn, 0, false, ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::FileSystem::Nothing_typeof(), NULL), 1, ::TYPES[29/*object[]*/]),
        new uFunction("CreateDirectorySync", NULL, (void*)FileSystemModule__CreateDirectorySync_fn, 0, false, uObject_typeof(), 2, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[29/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)FileSystemModule__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FileSystemModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.FileSystem.FileSystemModule", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->fp_build_ = FileSystemModule_build;
    type->fp_ctor_ = (void*)FileSystemModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileSystemModule() :48
void FileSystemModule__ctor_2_fn(FileSystemModule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) :119
void FileSystemModule__AppendTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(args);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) :140
void FileSystemModule__AppendTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->AppendTextToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(object[] args) :679
void FileSystemModule__Copy_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Copy(args);
}

// private object CopySync(Fuse.Scripting.Context context, object[] args) :700
void FileSystemModule__CopySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CopySync(context, args);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) :167
void FileSystemModule__CreateDirectory_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(args);
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) :185
void FileSystemModule__CreateDirectorySync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->CreateDirectorySync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) :211
void FileSystemModule__Delete_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(args);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) :231
void FileSystemModule__DeleteSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DeleteSync(context, args);
}

// private Uno.Threading.Future<bool> Exists(object[] args) :257
void FileSystemModule__Exists_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(args);
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) :276
void FileSystemModule__ExistsSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ExistsSync(context, args);
}

// private Uno.Collections.Dictionary<string, string> GetAndroidPaths() :292
void FileSystemModule__GetAndroidPaths_fn(FileSystemModule* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->GetAndroidPaths();
}

// private static T GetArg<T>(object[] args, int index, string error) :902
void FileSystemModule__GetArg_fn(uType* __type, uArray* args, int32_t* index, uString* error, uObject** __retval)
{
    *__retval = FileSystemModule::GetArg(__type, args, *index, error);
}

// private string GetCacheDirectory() :312
void FileSystemModule__GetCacheDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetCacheDirectory();
}

// private string GetDataDirectory() :329
void FileSystemModule__GetDataDirectory_fn(FileSystemModule* __this, uString** __retval)
{
    *__retval = __this->GetDataDirectory();
}

// private Uno.Threading.Future<Uno.IO.FileSystemInfo> GetDirectoryInfo(object[] args) :361
void FileSystemModule__GetDirectoryInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(args);
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) :388
void FileSystemModule__GetDirectoryInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(context, args);
}

// private Uno.Threading.Future<Uno.IO.FileSystemInfo> GetFileInfo(object[] args) :421
void FileSystemModule__GetFileInfo_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(args);
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) :448
void FileSystemModule__GetFileInfoSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->GetFileInfoSync(context, args);
}

// private static string GetPathFromArgs(object[] args) :917
void FileSystemModule__GetPathFromArgs_fn(uArray* args, uString** __retval)
{
    *__retval = FileSystemModule::GetPathFromArgs(args);
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) :495
void FileSystemModule__ListDirectories_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(args);
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) :515
void FileSystemModule__ListDirectoriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListDirectoriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) :539
void FileSystemModule__ListEntries_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(args);
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) :559
void FileSystemModule__ListEntriesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListEntriesSync(context, args);
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) :583
void FileSystemModule__ListFiles_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(args);
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) :603
void FileSystemModule__ListFilesSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ListFilesSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) :629
void FileSystemModule__Move_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(args);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) :650
void FileSystemModule__MoveSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->MoveSync(context, args);
}

// public FileSystemModule New() :48
void FileSystemModule__New2_fn(FileSystemModule** __retval)
{
    *__retval = FileSystemModule::New2();
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) :727
void FileSystemModule__ReadBufferFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(args);
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) :746
void FileSystemModule__ReadBufferFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(context, args);
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) :770
void FileSystemModule__ReadTextFromFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(args);
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) :790
void FileSystemModule__ReadTextFromFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->ReadTextFromFileSync(context, args);
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) :931
void FileSystemModule__ToScriptingArray_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = FileSystemModule::ToScriptingArray(__type, context, sourceArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) :954
void FileSystemModule__ToScriptingDate_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time, uObject** __retval)
{
    *__retval = FileSystemModule::ToScriptingDate(context, time);
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Uno.IO.FileSystemInfo info) :938
void FileSystemModule__ToScriptingObject_fn(::g::Fuse::Scripting::Context* context, ::g::Uno::IO::FileSystemInfo* info, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject(context, info);
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) :962
void FileSystemModule__ToScriptingObject1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = FileSystemModule::ToScriptingObject1(__type, context, dict);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) :819
void FileSystemModule__WriteBufferToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(args);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) :844
void FileSystemModule__WriteBufferToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteBufferToFileSync(context, args);
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) :872
void FileSystemModule__WriteTextToFile_fn(FileSystemModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(args);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) :893
void FileSystemModule__WriteTextToFileSync_fn(FileSystemModule* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->WriteTextToFileSync(context, args);
}

uSStrong<FileSystemModule*> FileSystemModule::_instance_;

// public FileSystemModule() [instance] :48
void FileSystemModule::ctor_2()
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", ".ctor()");
    _operations = ::g::Fuse::FileSystem::FileSystemOperations::New1();
    ctor_1();

    if (FileSystemModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileSystemModule::_instance_ = this, ::STRINGS[4/*"FuseJS/File...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[5/*"cacheDirect...*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)FileSystemModule__GetCacheDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[1/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[6/*"dataDirectory"*/], uDelegate::New(::TYPES[2/*Uno.Func<string>*/], (void*)FileSystemModule__GetDataDirectory_fn, this), NULL, NULL));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[3/*Fuse.Scripting.NativeProperty<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], ::STRINGS[7/*"androidPaths"*/], uDelegate::New(::TYPES[4/*Uno.Func<Uno.Collections.Dictionary<string, string>>*/], (void*)FileSystemModule__GetAndroidPaths_fn, this), NULL, uDelegate::New(::TYPES[5/*Fuse.Scripting.ValueConverter<Uno.Collections.Dictionary<string, string>, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject1_fn, NULL, ::TYPES[6/*Fuse.FileSystem.FileSystemModule.ToScriptingObject<string>*/])));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[8/*"createDirec...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__CreateDirectory_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"createDirec...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CreateDirectorySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[10/*"delete"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Delete_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[11/*"deleteSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__DeleteSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[10/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[12/*"exists"*/], uDelegate::New(::TYPES[11/*Fuse.Scripting.FutureFactory<bool>*/], (void*)FileSystemModule__Exists_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[13/*"existsSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ExistsSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Uno.IO.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[14/*"getDirector...*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Uno.IO.FileSystemInfo>*/], (void*)FileSystemModule__GetDirectoryInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Uno.IO.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[15/*"getDirector...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetDirectoryInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[12/*Fuse.Scripting.NativePromise<Uno.IO.FileSystemInfo, Fuse.Scripting.Object>*/], ::STRINGS[16/*"getFileInfo"*/], uDelegate::New(::TYPES[13/*Fuse.Scripting.FutureFactory<Uno.IO.FileSystemInfo>*/], (void*)FileSystemModule__GetFileInfo_fn, this), uDelegate::New(::TYPES[14/*Fuse.Scripting.ResultConverter<Uno.IO.FileSystemInfo, Fuse.Scripting.Object>*/], (void*)FileSystemModule__ToScriptingObject_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[17/*"getFileInfo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__GetFileInfoSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[18/*"listDirecto...*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListDirectories_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[19/*"listDirecto...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListDirectoriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[20/*"listEntries"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListEntries_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[21/*"listEntries...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListEntriesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[15/*Fuse.Scripting.NativePromise<string[], Fuse.Scripting.Array>*/], ::STRINGS[22/*"listFiles"*/], uDelegate::New(::TYPES[16/*Fuse.Scripting.FutureFactory<string[]>*/], (void*)FileSystemModule__ListFiles_fn, this), uDelegate::New(::TYPES[17/*Fuse.Scripting.ResultConverter<string[], Fuse.Scripting.Array>*/], (void*)FileSystemModule__ToScriptingArray_fn, NULL, ::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/])));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[23/*"listFilesSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ListFilesSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[19/*Fuse.Scripting.NativePromise<byte[], Fuse.Scripting.Object>*/], ::STRINGS[24/*"readBufferF...*/], uDelegate::New(::TYPES[20/*Fuse.Scripting.FutureFactory<byte[]>*/], (void*)FileSystemModule__ReadBufferFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[25/*"moveSync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__MoveSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[26/*"move"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Move_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[27/*"copySync"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__CopySync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[28/*"copy"*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__Copy_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[29/*"readBufferF...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadBufferFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[21/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[30/*"readTextFro...*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.FutureFactory<string>*/], (void*)FileSystemModule__ReadTextFromFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[31/*"readTextFro...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__ReadTextFromFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[32/*"writeBuffer...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteBufferToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[33/*"writeBuffer...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteBufferToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[34/*"writeTextTo...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__WriteTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[35/*"writeTextTo...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__WriteTextToFileSync_fn, this)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[7/*Fuse.Scripting.NativePromise<Fuse.FileSystem.Nothing, Fuse.Scripting.Object>*/], ::STRINGS[36/*"appendTextT...*/], uDelegate::New(::TYPES[8/*Fuse.Scripting.FutureFactory<Fuse.FileSystem.Nothing>*/], (void*)FileSystemModule__AppendTextToFile_fn, this), NULL));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[37/*"appendTextT...*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.NativeCallback*/], (void*)FileSystemModule__AppendTextToFileSync_fn, this)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(object[] args) [instance] :119
::g::Uno::Threading::Future1* FileSystemModule::AppendTextToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "AppendTextToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[38/*"Second argu...*/]);
    return uPtr(_operations)->AppendTextToFile(path, text);
}

// private object AppendTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :140
uObject* FileSystemModule::AppendTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "AppendTextToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[38/*"Second argu...*/]);
    uPtr(_operations)->AppendTextToFileSync(path, text);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(object[] args) [instance] :679
::g::Uno::Threading::Future1* FileSystemModule::Copy(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Copy(object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[39/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[40/*"Second argu...*/]);
    return uPtr(_operations)->Copy(source, destination);
}

// private object CopySync(Fuse.Scripting.Context context, object[] args) [instance] :700
uObject* FileSystemModule::CopySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CopySync(Fuse.Scripting.Context,object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[39/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[40/*"Second argu...*/]);
    uPtr(_operations)->CopySync(source, destination);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(object[] args) [instance] :167
::g::Uno::Threading::Future1* FileSystemModule::CreateDirectory(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectory(object[])");
    return uPtr(_operations)->CreateDirectory(FileSystemModule::GetPathFromArgs(args));
}

// public object CreateDirectorySync(Fuse.Scripting.Context context, object[] args) [instance] :185
uObject* FileSystemModule::CreateDirectorySync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "CreateDirectorySync(Fuse.Scripting.Context,object[])");
    uPtr(_operations)->CreateDirectorySync(FileSystemModule::GetPathFromArgs(args));
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(object[] args) [instance] :211
::g::Uno::Threading::Future1* FileSystemModule::Delete(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Delete(object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    return uPtr(_operations)->Delete(FileSystemModule::GetPathFromArgs(args), recursive);
}

// private object DeleteSync(Fuse.Scripting.Context context, object[] args) [instance] :231
uObject* FileSystemModule::DeleteSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "DeleteSync(Fuse.Scripting.Context,object[])");
    bool recursive = ((uPtr(args)->Length() > 1) && uIs((uObject*)uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*bool*/])) ? uUnbox<bool>(::TYPES[24/*bool*/], uPtr(args)->Strong<uObject*>(1)) : false;
    uPtr(_operations)->DeleteSync(FileSystemModule::GetPathFromArgs(args), recursive);
    return NULL;
}

// private Uno.Threading.Future<bool> Exists(object[] args) [instance] :257
::g::Uno::Threading::Future1* FileSystemModule::Exists(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Exists(object[])");
    return uPtr(_operations)->Exists(FileSystemModule::GetPathFromArgs(args));
}

// private object ExistsSync(Fuse.Scripting.Context context, object[] args) [instance] :276
uObject* FileSystemModule::ExistsSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ExistsSync(Fuse.Scripting.Context,object[])");
    return uBox(::TYPES[24/*bool*/], uPtr(_operations)->ExistsSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Collections.Dictionary<string, string> GetAndroidPaths() [instance] :292
::g::Uno::Collections::Dictionary* FileSystemModule::GetAndroidPaths()
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetAndroidPaths()");
    return ::g::Fuse::FileSystem::AndroidPaths::GetPathDictionary();
}

// private string GetCacheDirectory() [instance] :312
uString* FileSystemModule::GetCacheDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetCacheDirectory();
}

// private string GetDataDirectory() [instance] :329
uString* FileSystemModule::GetDataDirectory()
{
    return ::g::Fuse::FileSystem::UnifiedPaths::GetDataDirectory();
}

// private Uno.Threading.Future<Uno.IO.FileSystemInfo> GetDirectoryInfo(object[] args) [instance] :361
::g::Uno::Threading::Future1* FileSystemModule::GetDirectoryInfo(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetDirectoryInfo(object[])");
    return uPtr(_operations)->GetDirectoryInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetDirectoryInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :388
uObject* FileSystemModule::GetDirectoryInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetDirectoryInfoSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetDirectoryInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Uno.IO.FileSystemInfo> GetFileInfo(object[] args) [instance] :421
::g::Uno::Threading::Future1* FileSystemModule::GetFileInfo(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetFileInfo(object[])");
    return uPtr(_operations)->GetFileInfo(FileSystemModule::GetPathFromArgs(args));
}

// private object GetFileInfoSync(Fuse.Scripting.Context context, object[] args) [instance] :448
uObject* FileSystemModule::GetFileInfoSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetFileInfoSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingObject(context, uPtr(_operations)->GetFileInfoSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListDirectories(object[] args) [instance] :495
::g::Uno::Threading::Future1* FileSystemModule::ListDirectories(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectories(object[])");
    return uPtr(_operations)->ListDirectories(FileSystemModule::GetPathFromArgs(args));
}

// private object ListDirectoriesSync(Fuse.Scripting.Context context, object[] args) [instance] :515
uObject* FileSystemModule::ListDirectoriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListDirectoriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListDirectoriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListEntries(object[] args) [instance] :539
::g::Uno::Threading::Future1* FileSystemModule::ListEntries(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntries(object[])");
    return uPtr(_operations)->ListEntries(FileSystemModule::GetPathFromArgs(args));
}

// private object ListEntriesSync(Fuse.Scripting.Context context, object[] args) [instance] :559
uObject* FileSystemModule::ListEntriesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListEntriesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListEntriesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<string[]> ListFiles(object[] args) [instance] :583
::g::Uno::Threading::Future1* FileSystemModule::ListFiles(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFiles(object[])");
    return uPtr(_operations)->ListFiles(FileSystemModule::GetPathFromArgs(args));
}

// private object ListFilesSync(Fuse.Scripting.Context context, object[] args) [instance] :603
uObject* FileSystemModule::ListFilesSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ListFilesSync(Fuse.Scripting.Context,object[])");
    return FileSystemModule::ToScriptingArray(::TYPES[18/*Fuse.FileSystem.FileSystemModule.ToScriptingArray<string>*/], context, uPtr(_operations)->ListFilesSync(FileSystemModule::GetPathFromArgs(args)));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(object[] args) [instance] :629
::g::Uno::Threading::Future1* FileSystemModule::Move(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "Move(object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[39/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[40/*"Second argu...*/]);
    return uPtr(_operations)->Move(source, destination);
}

// private object MoveSync(Fuse.Scripting.Context context, object[] args) [instance] :650
uObject* FileSystemModule::MoveSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "MoveSync(Fuse.Scripting.Context,object[])");
    uString* source = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 0, ::STRINGS[39/*"First argum...*/]);
    uString* destination = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[40/*"Second argu...*/]);
    uPtr(_operations)->MoveSync(source, destination);
    return NULL;
}

// private Uno.Threading.Future<byte[]> ReadBufferFromFile(object[] args) [instance] :727
::g::Uno::Threading::Future1* FileSystemModule::ReadBufferFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFile(object[])");
    return uPtr(_operations)->ReadBufferFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadBufferFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :746
uObject* FileSystemModule::ReadBufferFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadBufferFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadBufferFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<string> ReadTextFromFile(object[] args) [instance] :770
::g::Uno::Threading::Future1* FileSystemModule::ReadTextFromFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFile(object[])");
    return uPtr(_operations)->ReadTextFromFile(FileSystemModule::GetPathFromArgs(args));
}

// private object ReadTextFromFileSync(Fuse.Scripting.Context context, object[] args) [instance] :790
uObject* FileSystemModule::ReadTextFromFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ReadTextFromFileSync(Fuse.Scripting.Context,object[])");
    return uPtr(_operations)->ReadTextFromFileSync(FileSystemModule::GetPathFromArgs(args));
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(object[] args) [instance] :819
::g::Uno::Threading::Future1* FileSystemModule::WriteBufferToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[49/*"Second argu...*/]);
    return uPtr(_operations)->WriteBufferToFile(path, data);
}

// private object WriteBufferToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :844
uObject* FileSystemModule::WriteBufferToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteBufferToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uArray* data = (uArray*)FileSystemModule::GetArg(::TYPES[33/*Fuse.FileSystem.FileSystemModule.GetArg<byte[]>*/], args, 1, ::STRINGS[49/*"Second argu...*/]);
    uPtr(_operations)->WriteBufferToFileSync(path, data);
    return NULL;
}

// private Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(object[] args) [instance] :872
::g::Uno::Threading::Future1* FileSystemModule::WriteTextToFile(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFile(object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[38/*"Second argu...*/]);
    return uPtr(_operations)->WriteTextToFile(path, text);
}

// private object WriteTextToFileSync(Fuse.Scripting.Context context, object[] args) [instance] :893
uObject* FileSystemModule::WriteTextToFileSync(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "WriteTextToFileSync(Fuse.Scripting.Context,object[])");
    uString* path = FileSystemModule::GetPathFromArgs(args);
    uString* text = (uString*)FileSystemModule::GetArg(::TYPES[23/*Fuse.FileSystem.FileSystemModule.GetArg<string>*/], args, 1, ::STRINGS[38/*"Second argu...*/]);
    uPtr(_operations)->WriteTextToFileSync(path, text);
    return NULL;
}

// private static T GetArg<T>(object[] args, int index, string error) [static] :902
uObject* FileSystemModule::GetArg(uType* __type, uArray* args, int32_t index, uString* error)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetArg`1(object[],int,string)");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[41/*"args"*/]));

    uObject* val = (uPtr(args)->Length() > index) ? uAs<uObject*>(uPtr(args)->Strong<uObject*>(index), __type->U(0)) : NULL;

    if (val == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(error));

    return val;
}

// private static string GetPathFromArgs(object[] args) [static] :917
uString* FileSystemModule::GetPathFromArgs(uArray* args)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "GetPathFromArgs(object[])");

    if (args == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[41/*"args"*/]));

    uString* filename = (uPtr(args)->Length() > 0) ? uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[25/*string*/]) : NULL;

    if (::g::Uno::String::op_Equality(filename, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[42/*"first argum...*/]));

    return filename;
}

// public FileSystemModule New() [static] :48
FileSystemModule* FileSystemModule::New2()
{
    FileSystemModule* obj1 = (FileSystemModule*)uNew(FileSystemModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Fuse.Scripting.Array ToScriptingArray<T>(Fuse.Scripting.Context context, T[] sourceArray) [static] :931
::g::Fuse::Scripting::Array* FileSystemModule::ToScriptingArray(uType* __type, ::g::Fuse::Scripting::Context* context, uArray* sourceArray)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.OfType<T, object>*/),
        __type->Precalced(1/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingArray`1(Fuse.Scripting.Context,T[])");
    uArray* convertedArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[26/*Uno.Collections.EnumerableExtensions.ToArray<object>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::OfType(__types[0], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[1], sourceArray))));
    return uPtr(context)->NewArray(convertedArray);
}

// private static object ToScriptingDate(Fuse.Scripting.Context context, Uno.Time.ZonedDateTime time) [static] :954
uObject* FileSystemModule::ToScriptingDate(::g::Fuse::Scripting::Context* context, ::g::Uno::Time::ZonedDateTime* time)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingDate(Fuse.Scripting.Context,Uno.Time.ZonedDateTime)");
    int64_t msSinceUnixEpoch = ::g::Uno::Time::Instant__op_Subtraction1(uPtr(time)->ToInstant(), ::g::Uno::Time::Constants::UnixEpoch()).Ticks() / 10000LL;
    return uPtr(context)->Evaluate(::STRINGS[43/*"(Date Conve...*/], ::g::Uno::String::Format(::STRINGS[44/*"new Date({0})"*/], uArray::Init<uObject*>(::TYPES[29/*object[]*/], 1, uBox<int64_t>(::g::Uno::Long_typeof(), msSinceUnixEpoch))));
}

// private static Fuse.Scripting.Object ToScriptingObject(Fuse.Scripting.Context context, Uno.IO.FileSystemInfo info) [static] :938
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject(::g::Fuse::Scripting::Context* context, ::g::Uno::IO::FileSystemInfo* info)
{
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingObject(Fuse.Scripting.Context,Uno.IO.FileSystemInfo)");
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    ::g::Uno::IO::FileInfo* fileInfo = uAs< ::g::Uno::IO::FileInfo*>(info, ::TYPES[30/*Uno.IO.FileInfo*/]);

    if (fileInfo != NULL)
        uPtr(jsobj)->Item(::STRINGS[45/*"length"*/], uBox(::g::Uno::Double_typeof(), (double)uPtr(fileInfo)->Length()));

    uPtr(jsobj)->Item(::STRINGS[12/*"exists"*/], uBox(::TYPES[24/*bool*/], uPtr(info)->Exists()));
    jsobj->Item(::STRINGS[46/*"fullName"*/], ::g::Fuse::FileSystem::PathTools::NormalizePath(info->FullName()));
    jsobj->Item(::STRINGS[47/*"lastWriteTime"*/], FileSystemModule::ToScriptingDate(context, info->LastWriteTimeUtc()));
    jsobj->Item(::STRINGS[48/*"lastAccessT...*/], FileSystemModule::ToScriptingDate(context, info->LastAccessTimeUtc()));
    return jsobj;
}

// private static Fuse.Scripting.Object ToScriptingObject<T>(Fuse.Scripting.Context context, Uno.Collections.Dictionary<string, T> dict) [static] :962
::g::Fuse::Scripting::Object* FileSystemModule::ToScriptingObject1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Collections::Dictionary* dict)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<string, T>.Enumerator*/),
        __type->Precalced(1/*Uno.Collections.KeyValuePair<string, T>*/),
    };
    uStackFrame __("Fuse.FileSystem.FileSystemModule", "ToScriptingObject`1(Fuse.Scripting.Context,Uno.Collections.Dictionary<string, T>)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret6(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kvp(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;
    uString* ret5;
    ::g::Fuse::Scripting::Object* jsobj = uPtr(context)->NewObject();
    enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(dict), &ret2), ret2);

    {
        try
        {
            {
                while ((::g::Uno::Collections::Dictionary__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3))
                {
                    kvp = (::g::Uno::Collections::Dictionary__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
                    uPtr(jsobj)->Item((::g::Uno::Collections::KeyValuePair__get_Key_fn(&kvp, __types[1], &ret5), ret5), uBoxPtr(__type->U(0), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&kvp, __types[1], &ret6), ret6)));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::Collections::Dictionary__Enumerator__Dispose_fn(&enum1, __types[0]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::Collections::Dictionary__Enumerator__Dispose_fn(&enum1, __types[0]);
        }
        __after_finally_0:;
    }

    return jsobj;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\FileSystemOperations.uno
// --------------------------------------------------------------------------------------------------

// internal sealed class FileSystemOperations :8
// {
static void FileSystemOperations_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[1]->U(1), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->MethodTypes[1]->U(1), NULL),
        FileSystemOperations__Closure_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(0/*RunTask<TResult>*/, type->MethodTypes[2]->U(2), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->MethodTypes[2]->U(2), NULL),
        FileSystemOperations__Closure1_typeof()->MakeType(type->MethodTypes[2]->U(0), type->MethodTypes[2]->U(1), type->MethodTypes[2]->U(2), NULL));
    type->SetFields(0,
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(FileSystemOperations, _dispatcher), 0);
}

uType* FileSystemOperations_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(FileSystemOperations);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.FileSystemOperations", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 3,0);
    type->MethodTypes[2] = type->NewMethodType(3, 3,0);
    type->fp_build_ = FileSystemOperations_build;
    type->fp_ctor_ = (void*)FileSystemOperations__New1_fn;
    return type;
}

// public FileSystemOperations() :13
void FileSystemOperations__ctor__fn(FileSystemOperations* __this)
{
    __this->ctor_();
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) :16
void FileSystemOperations__ctor_1_fn(FileSystemOperations* __this, uObject* dispatcher)
{
    __this->ctor_1(dispatcher);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) :22
void FileSystemOperations__AppendTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->AppendTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) :28
void FileSystemOperations__AppendTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->AppendTextToFileSync(path, text);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(string source, string destination) :155
void FileSystemOperations__Copy_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Copy(source, destination);
}

// private void CopyDirectory(string source, string destination) :170
void FileSystemOperations__CopyDirectory_fn(FileSystemOperations* __this, uString* source, uString* destination)
{
    __this->CopyDirectory(source, destination);
}

// public Fuse.FileSystem.Nothing CopySync(string source, string destination) :161
void FileSystemOperations__CopySync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CopySync(source, destination);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) :35
void FileSystemOperations__CreateDirectory_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->CreateDirectory(path);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) :41
void FileSystemOperations__CreateDirectorySync_fn(FileSystemOperations* __this, uString* path, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->CreateDirectorySync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) :48
void FileSystemOperations__Delete_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Delete(path, *recursive);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) :54
void FileSystemOperations__DeleteSync_fn(FileSystemOperations* __this, uString* path, bool* recursive, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->DeleteSync(path, *recursive);
}

// public Uno.Threading.Future<bool> Exists(string path) :65
void FileSystemOperations__Exists_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Exists(path);
}

// public bool ExistsSync(string path) :71
void FileSystemOperations__ExistsSync_fn(FileSystemOperations* __this, uString* path, bool* __retval)
{
    *__retval = __this->ExistsSync(path);
}

// public Uno.Threading.Future<Uno.IO.FileSystemInfo> GetDirectoryInfo(string path) :79
void FileSystemOperations__GetDirectoryInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetDirectoryInfo(path);
}

// public Uno.IO.FileSystemInfo GetDirectoryInfoSync(string path) :85
void FileSystemOperations__GetDirectoryInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Uno::IO::FileSystemInfo** __retval)
{
    *__retval = __this->GetDirectoryInfoSync(path);
}

// public Uno.Threading.Future<Uno.IO.FileSystemInfo> GetFileInfo(string path) :91
void FileSystemOperations__GetFileInfo_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->GetFileInfo(path);
}

// public Uno.IO.FileSystemInfo GetFileInfoSync(string path) :97
void FileSystemOperations__GetFileInfoSync_fn(FileSystemOperations* __this, uString* path, ::g::Uno::IO::FileSystemInfo** __retval)
{
    *__retval = __this->GetFileInfoSync(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) :103
void FileSystemOperations__ListDirectories_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListDirectories(path);
}

// public string[] ListDirectoriesSync(string path) :109
void FileSystemOperations__ListDirectoriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListDirectoriesSync(path);
}

// public Uno.Threading.Future<string[]> ListEntries(string path) :115
void FileSystemOperations__ListEntries_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListEntries(path);
}

// public string[] ListEntriesSync(string path) :121
void FileSystemOperations__ListEntriesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListEntriesSync(path);
}

// public Uno.Threading.Future<string[]> ListFiles(string path) :127
void FileSystemOperations__ListFiles_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ListFiles(path);
}

// public string[] ListFilesSync(string path) :133
void FileSystemOperations__ListFilesSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ListFilesSync(path);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) :139
void FileSystemOperations__Move_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Move(source, destination);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) :145
void FileSystemOperations__MoveSync_fn(FileSystemOperations* __this, uString* source, uString* destination, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->MoveSync(source, destination);
}

// public FileSystemOperations New() :13
void FileSystemOperations__New1_fn(FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New1();
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) :16
void FileSystemOperations__New2_fn(uObject* dispatcher, FileSystemOperations** __retval)
{
    *__retval = FileSystemOperations::New2(dispatcher);
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) :190
void FileSystemOperations__ReadBufferFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadBufferFromFile(path);
}

// public byte[] ReadBufferFromFileSync(string path) :196
void FileSystemOperations__ReadBufferFromFileSync_fn(FileSystemOperations* __this, uString* path, uArray** __retval)
{
    *__retval = __this->ReadBufferFromFileSync(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) :203
void FileSystemOperations__ReadTextFromFile_fn(FileSystemOperations* __this, uString* path, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->ReadTextFromFile(path);
}

// public string ReadTextFromFileSync(string path) :209
void FileSystemOperations__ReadTextFromFileSync_fn(FileSystemOperations* __this, uString* path, uString** __retval)
{
    *__retval = __this->ReadTextFromFileSync(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) :242
void FileSystemOperations__RunTask_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->RunTask(__type, del);
}

// private Uno.Threading.Future<TResult> RunTask<T1, TResult>(Uno.Func<T1, TResult> del, T1 arg1) :250
void FileSystemOperations__RunTask1_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, TResult>*/),
    };
    FileSystemOperations__Closure* ret19;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure__Invoke_fn, (FileSystemOperations__Closure__New1_fn(__types[2], del, arg1, &ret19), ret19))), void();
}

// private Uno.Threading.Future<TResult> RunTask<T1, T2, TResult>(Uno.Func<T1, T2, TResult> del, T1 arg1, T2 arg2) :256
void FileSystemOperations__RunTask2_fn(FileSystemOperations* __this, uType* __type, uDelegate* del, void* arg1, void* arg2, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.FileSystem.FileSystemOperations.RunTask<TResult>*/),
        __type->Precalced(1/*Uno.Func<TResult>*/),
        __type->Precalced(2/*Fuse.FileSystem.FileSystemOperations.Closure<T1, T2, TResult>*/),
    };
    FileSystemOperations__Closure1* ret20;
    return *__retval = (::g::Uno::Threading::Future1*)__this->RunTask(__types[0], uDelegate::New(__types[1], (void*)FileSystemOperations__Closure1__Invoke_fn, (FileSystemOperations__Closure1__New1_fn(__types[2], del, arg1, arg2, &ret20), ret20))), void();
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) :216
void FileSystemOperations__WriteBufferToFile_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteBufferToFile(path, data);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) :222
void FileSystemOperations__WriteBufferToFileSync_fn(FileSystemOperations* __this, uString* path, uArray* data, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteBufferToFileSync(path, data);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) :229
void FileSystemOperations__WriteTextToFile_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->WriteTextToFile(path, text);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) :235
void FileSystemOperations__WriteTextToFileSync_fn(FileSystemOperations* __this, uString* path, uString* text, ::g::Fuse::FileSystem::Nothing** __retval)
{
    *__retval = __this->WriteTextToFileSync(path, text);
}

// public FileSystemOperations() [instance] :13
void FileSystemOperations::ctor_()
{
    ctor_1(NULL);
}

// public FileSystemOperations(Uno.Threading.IDispatcher dispatcher) [instance] :16
void FileSystemOperations::ctor_1(uObject* dispatcher)
{
    _dispatcher = dispatcher;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> AppendTextToFile(string path, string text) [instance] :22
::g::Uno::Threading::Future1* FileSystemOperations::AppendTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret6;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__AppendTextToFileSync_fn, this), path, text, &ret6), ret6);
}

// public Fuse.FileSystem.Nothing AppendTextToFileSync(string path, string text) [instance] :28
::g::Fuse::FileSystem::Nothing* FileSystemOperations::AppendTextToFileSync(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "AppendTextToFileSync(string,string)");
    ::g::Uno::IO::File::AppendAllText(path, text);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Copy(string source, string destination) [instance] :155
::g::Uno::Threading::Future1* FileSystemOperations::Copy(uString* source, uString* destination)
{
    ::g::Uno::Threading::Future1* ret7;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__CopySync_fn, this), source, destination, &ret7), ret7);
}

// private void CopyDirectory(string source, string destination) [instance] :170
void FileSystemOperations::CopyDirectory(uString* source, uString* destination)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CopyDirectory(string,string)");

    if (!::g::Uno::IO::Directory::Exists(destination))
        ::g::Uno::IO::Directory::CreateDirectory(destination);

    uArray* files = ListEntriesSync(source);

    for (int32_t index2 = 0, length3 = uPtr(files)->Length(); index2 < length3; ++index2)
    {
        uString* file = uPtr(files)->Strong<uString*>(index2);

        if (::g::Uno::IO::Directory::Exists(file))
        {
            CopyDirectory(file, destination);
            continue;
        }

        uString* temppath = ::g::Uno::String::Replace1(uPtr(file), source, destination);
        ::g::Uno::IO::File::Copy(file, temppath);
    }
}

// public Fuse.FileSystem.Nothing CopySync(string source, string destination) [instance] :161
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CopySync(uString* source, uString* destination)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "CopySync(string,string)");

    if (::g::Uno::IO::Directory::Exists(source))
        CopyDirectory(source, destination);
    else
        ::g::Uno::IO::File::Copy(source, destination);

    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> CreateDirectory(string path) [instance] :35
::g::Uno::Threading::Future1* FileSystemOperations::CreateDirectory(uString* path)
{
    ::g::Uno::Threading::Future1* ret8;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__CreateDirectorySync_fn, this), path, &ret8), ret8);
}

// public Fuse.FileSystem.Nothing CreateDirectorySync(string path) [instance] :41
::g::Fuse::FileSystem::Nothing* FileSystemOperations::CreateDirectorySync(uString* path)
{
    ::g::Uno::IO::Directory::CreateDirectory(path);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Delete(string path, bool recursive) [instance] :48
::g::Uno::Threading::Future1* FileSystemOperations::Delete(uString* path, bool recursive)
{
    ::g::Uno::Threading::Future1* ret9;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, bool, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[24/*bool*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[24/*bool*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__DeleteSync_fn, this), path, uCRef(recursive), &ret9), ret9);
}

// public Fuse.FileSystem.Nothing DeleteSync(string path, bool recursive) [instance] :54
::g::Fuse::FileSystem::Nothing* FileSystemOperations::DeleteSync(uString* path, bool recursive)
{
    if (::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::Delete(path, recursive);
    else
        ::g::Uno::IO::File::Delete(path);

    return NULL;
}

// public Uno.Threading.Future<bool> Exists(string path) [instance] :65
::g::Uno::Threading::Future1* FileSystemOperations::Exists(uString* path)
{
    ::g::Uno::Threading::Future1* ret10;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, bool>*/, ::TYPES[25/*string*/], ::TYPES[24/*bool*/], NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[24/*bool*/], NULL), (void*)FileSystemOperations__ExistsSync_fn, this), path, &ret10), ret10);
}

// public bool ExistsSync(string path) [instance] :71
bool FileSystemOperations::ExistsSync(uString* path)
{
    return ::g::Uno::IO::File::Exists(path) || ::g::Uno::IO::Directory::Exists(path);
}

// public Uno.Threading.Future<Uno.IO.FileSystemInfo> GetDirectoryInfo(string path) [instance] :79
::g::Uno::Threading::Future1* FileSystemOperations::GetDirectoryInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret11;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Uno.IO.FileSystemInfo>*/, ::TYPES[25/*string*/], ::g::Uno::IO::FileSystemInfo_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::IO::FileSystemInfo_typeof(), NULL), (void*)FileSystemOperations__GetDirectoryInfoSync_fn, this), path, &ret11), ret11);
}

// public Uno.IO.FileSystemInfo GetDirectoryInfoSync(string path) [instance] :85
::g::Uno::IO::FileSystemInfo* FileSystemOperations::GetDirectoryInfoSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetDirectoryInfoSync(string)");
    return ::g::Uno::IO::DirectoryInfo::New1(path);
}

// public Uno.Threading.Future<Uno.IO.FileSystemInfo> GetFileInfo(string path) [instance] :91
::g::Uno::Threading::Future1* FileSystemOperations::GetFileInfo(uString* path)
{
    ::g::Uno::Threading::Future1* ret12;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, Uno.IO.FileSystemInfo>*/, ::TYPES[25/*string*/], ::g::Uno::IO::FileSystemInfo_typeof(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::IO::FileSystemInfo_typeof(), NULL), (void*)FileSystemOperations__GetFileInfoSync_fn, this), path, &ret12), ret12);
}

// public Uno.IO.FileSystemInfo GetFileInfoSync(string path) [instance] :97
::g::Uno::IO::FileSystemInfo* FileSystemOperations::GetFileInfoSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "GetFileInfoSync(string)");
    return ::g::Uno::IO::FileInfo::New1(path);
}

// public Uno.Threading.Future<string[]> ListDirectories(string path) [instance] :103
::g::Uno::Threading::Future1* FileSystemOperations::ListDirectories(uString* path)
{
    ::g::Uno::Threading::Future1* ret13;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListDirectoriesSync_fn, this), path, &ret13), ret13);
}

// public string[] ListDirectoriesSync(string path) [instance] :109
uArray* FileSystemOperations::ListDirectoriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListDirectoriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(8/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(6/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateDirectories(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListEntries(string path) [instance] :115
::g::Uno::Threading::Future1* FileSystemOperations::ListEntries(uString* path)
{
    ::g::Uno::Threading::Future1* ret14;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListEntriesSync_fn, this), path, &ret14), ret14);
}

// public string[] ListEntriesSync(string path) [instance] :121
uArray* FileSystemOperations::ListEntriesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListEntriesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(8/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(6/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateFileSystemEntries(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<string[]> ListFiles(string path) [instance] :127
::g::Uno::Threading::Future1* FileSystemOperations::ListFiles(uString* path)
{
    ::g::Uno::Threading::Future1* ret15;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string[]>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/]->Array(), NULL), (void*)FileSystemOperations__ListFilesSync_fn, this), path, &ret15), ret15);
}

// public string[] ListFilesSync(string path) [instance] :133
uArray* FileSystemOperations::ListFilesSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ListFilesSync(string)");
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(8/*ToArray<string>*/, ::TYPES[25/*string*/], NULL), (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[27/*Uno.Collections.EnumerableExtensions*/]->MakeMethod(6/*Select<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), ::g::Uno::IO::Directory::EnumerateFiles(path), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)::g::Fuse::FileSystem::PathTools__NormalizePath_fn)));
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> Move(string source, string destination) [instance] :139
::g::Uno::Threading::Future1* FileSystemOperations::Move(uString* source, uString* destination)
{
    ::g::Uno::Threading::Future1* ret16;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__MoveSync_fn, this), source, destination, &ret16), ret16);
}

// public Fuse.FileSystem.Nothing MoveSync(string source, string destination) [instance] :145
::g::Fuse::FileSystem::Nothing* FileSystemOperations::MoveSync(uString* source, uString* destination)
{
    if (::g::Uno::IO::Directory::Exists(source))
        ::g::Uno::IO::Directory::Move(source, destination);
    else
        ::g::Uno::IO::File::Move(source, destination);

    return NULL;
}

// public Uno.Threading.Future<byte[]> ReadBufferFromFile(string path) [instance] :190
::g::Uno::Threading::Future1* FileSystemOperations::ReadBufferFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret17;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, byte[]>*/, ::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), NULL), (void*)FileSystemOperations__ReadBufferFromFileSync_fn, this), path, &ret17), ret17);
}

// public byte[] ReadBufferFromFileSync(string path) [instance] :196
uArray* FileSystemOperations::ReadBufferFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadBufferFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllBytes(path);
}

// public Uno.Threading.Future<string> ReadTextFromFile(string path) [instance] :203
::g::Uno::Threading::Future1* FileSystemOperations::ReadTextFromFile(uString* path)
{
    ::g::Uno::Threading::Future1* ret18;
    return (FileSystemOperations__RunTask1_fn(this, __type->MakeMethod(1/*RunTask<string, string>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], NULL), (void*)FileSystemOperations__ReadTextFromFileSync_fn, this), path, &ret18), ret18);
}

// public string ReadTextFromFileSync(string path) [instance] :209
uString* FileSystemOperations::ReadTextFromFileSync(uString* path)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "ReadTextFromFileSync(string)");
    return ::g::Uno::IO::File::ReadAllText(path);
}

// private Uno.Threading.Future<T> RunTask<T>(Uno.Func<T> del) [instance] :242
::g::Uno::Threading::Future1* FileSystemOperations::RunTask(uType* __type, uDelegate* del)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };

    if (_dispatcher == NULL)
        return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(__types[0], del);

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(__types[0], _dispatcher, del);
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteBufferToFile(string path, byte[] data) [instance] :216
::g::Uno::Threading::Future1* FileSystemOperations::WriteBufferToFile(uString* path, uArray* data)
{
    ::g::Uno::Threading::Future1* ret21;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, byte[], Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__WriteBufferToFileSync_fn, this), path, data, &ret21), ret21);
}

// public Fuse.FileSystem.Nothing WriteBufferToFileSync(string path, byte[] data) [instance] :222
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteBufferToFileSync(uString* path, uArray* data)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteBufferToFileSync(string,byte[])");
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    return NULL;
}

// public Uno.Threading.Future<Fuse.FileSystem.Nothing> WriteTextToFile(string path, string text) [instance] :229
::g::Uno::Threading::Future1* FileSystemOperations::WriteTextToFile(uString* path, uString* text)
{
    ::g::Uno::Threading::Future1* ret22;
    return (FileSystemOperations__RunTask2_fn(this, __type->MakeMethod(2/*RunTask<string, string, Fuse.FileSystem.Nothing>*/, ::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), uDelegate::New(::g::Uno::Func2_typeof()->MakeType(::TYPES[25/*string*/], ::TYPES[25/*string*/], ::g::Fuse::FileSystem::Nothing_typeof(), NULL), (void*)FileSystemOperations__WriteTextToFileSync_fn, this), path, text, &ret22), ret22);
}

// public Fuse.FileSystem.Nothing WriteTextToFileSync(string path, string text) [instance] :235
::g::Fuse::FileSystem::Nothing* FileSystemOperations::WriteTextToFileSync(uString* path, uString* text)
{
    uStackFrame __("Fuse.FileSystem.FileSystemOperations", "WriteTextToFileSync(string,string)");
    ::g::Uno::IO::File::WriteAllText(path, text);
    return NULL;
}

// public FileSystemOperations New() [static] :13
FileSystemOperations* FileSystemOperations::New1()
{
    FileSystemOperations* obj4 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj4->ctor_();
    return obj4;
}

// public FileSystemOperations New(Uno.Threading.IDispatcher dispatcher) [static] :16
FileSystemOperations* FileSystemOperations::New2(uObject* dispatcher)
{
    FileSystemOperations* obj5 = (FileSystemOperations*)uNew(FileSystemOperations_typeof());
    obj5->ctor_1(dispatcher);
    return obj5;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\Nothing.uno
// -------------------------------------------------------------------------------------

// internal sealed class Nothing :4
// {
static void Nothing_build(uType* type)
{
}

uType* Nothing_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New1_fn;
    return type;
}

// private Nothing() :7
void Nothing__ctor__fn(Nothing* __this)
{
    __this->ctor_();
}

// private Nothing New() :7
void Nothing__New1_fn(Nothing** __retval)
{
    *__retval = Nothing::New1();
}

// private Nothing() [instance] :7
void Nothing::ctor_()
{
}

// private Nothing New() [static] :7
Nothing* Nothing::New1()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\PathTools.uno
// ---------------------------------------------------------------------------------------

// internal static class PathTools :6
// {
static void PathTools_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
}

uClassType* PathTools_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.PathTools", options);
    type->fp_build_ = PathTools_build;
    return type;
}

// public static string NormalizePath(string path) :8
void PathTools__NormalizePath_fn(uString* path, uString** __retval)
{
    *__retval = PathTools::NormalizePath(path);
}

// public static string NormalizePath(string path) [static] :8
uString* PathTools::NormalizePath(uString* path)
{
    uStackFrame __("Fuse.FileSystem.PathTools", "NormalizePath(string)");

    if (::g::Uno::IO::Path::DirectorySeparatorChar() == '\\')
        return ::g::Uno::String::Replace(uPtr(path), '\\', '/');

    return path;
}
// }

// C:\Users\borde_000\AppData\Local\Fusetools\Packages\Fuse.FileSystem\1.8.1\UnifiedPaths.Android.uno
// --------------------------------------------------------------------------------------------------

// internal static extern class UnifiedPaths :7
// {
static void UnifiedPaths_build(uType* type)
{
}

uClassType* UnifiedPaths_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.FileSystem.UnifiedPaths", options);
    type->fp_build_ = UnifiedPaths_build;
    return type;
}

// public static string GetCacheDirectory() :10
void UnifiedPaths__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetCacheDirectory();
}

// public static string GetDataDirectory() :17
void UnifiedPaths__GetDataDirectory_fn(uString** __retval)
{
    *__retval = UnifiedPaths::GetDataDirectory();
}

// public static string GetCacheDirectory() [static] :10
uString* UnifiedPaths::GetCacheDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCacheDirectory367", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetDataDirectory() [static] :17
uString* UnifiedPaths::GetDataDirectory()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDataDirectory368", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}} // ::g::Fuse::FileSystem
