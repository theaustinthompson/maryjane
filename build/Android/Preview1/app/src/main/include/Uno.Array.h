// This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.8.0/Source/Uno/Array.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{

// public sealed class Array :9
// {
uType* Array_typeof();
void Array__ctor__fn(uArray* __this);
void Array__Copy_fn(uType* __type, uArray* sourceArray, int32_t* sourceIndex, uArray* destinationArray, int32_t* destinationIndex, int32_t* length);
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t* length);
void Array__IndexOf_fn(uType* __type, uArray* array, void* value, int32_t* __retval);
void Array__IndexOf1_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* __retval);
void Array__IndexOf2_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval);
void Array__IndexOfUnchecked_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval);
void Array__LastIndexOf_fn(uType* __type, uArray* array, void* value, int32_t* __retval);
void Array__LastIndexOf1_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* __retval);
void Array__LastIndexOf2_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval);
void Array__LastIndexOfUnchecked_fn(uType* __type, uArray* array, void* value, int32_t* startIndex, int32_t* count, int32_t* __retval);
void Array__New1_fn(uArray** __retval);
void Array__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right);
void Array__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int32_t* left, int32_t* right);
void Array__Sort_fn(uType* __type, uArray* elements, int32_t* index, int32_t* length, uDelegate* comparison);
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison);
void Array__Swap_fn(uType* __type, uArray* data, int32_t* a, int32_t* b);

struct Array
{
    static void ctor_(uArray* __this);
    static void Copy(uType* __type, uArray* sourceArray, int32_t sourceIndex, uArray* destinationArray, int32_t destinationIndex, int32_t length);
    static void Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int32_t length);
    template<class T>
    static int32_t IndexOf(uType* __type, uArray* array, T value) { int32_t __retval; return Array__IndexOf_fn(__type, array, uConstrain(__type->U(0), value), &__retval), __retval; }
    template<class T>
    static int32_t IndexOf1(uType* __type, uArray* array, T value, int32_t startIndex) { int32_t __retval; return Array__IndexOf1_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &__retval), __retval; }
    template<class T>
    static int32_t IndexOf2(uType* __type, uArray* array, T value, int32_t startIndex, int32_t count) { int32_t __retval; return Array__IndexOf2_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &count, &__retval), __retval; }
    template<class T>
    static int32_t IndexOfUnchecked(uType* __type, uArray* array, T value, int32_t startIndex, int32_t count) { int32_t __retval; return Array__IndexOfUnchecked_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &count, &__retval), __retval; }
    template<class T>
    static int32_t LastIndexOf(uType* __type, uArray* array, T value) { int32_t __retval; return Array__LastIndexOf_fn(__type, array, uConstrain(__type->U(0), value), &__retval), __retval; }
    template<class T>
    static int32_t LastIndexOf1(uType* __type, uArray* array, T value, int32_t startIndex) { int32_t __retval; return Array__LastIndexOf1_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &__retval), __retval; }
    template<class T>
    static int32_t LastIndexOf2(uType* __type, uArray* array, T value, int32_t startIndex, int32_t count) { int32_t __retval; return Array__LastIndexOf2_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &count, &__retval), __retval; }
    template<class T>
    static int32_t LastIndexOfUnchecked(uType* __type, uArray* array, T value, int32_t startIndex, int32_t count) { int32_t __retval; return Array__LastIndexOfUnchecked_fn(__type, array, uConstrain(__type->U(0), value), &startIndex, &count, &__retval), __retval; }
    static uArray* New1();
    static void QuickSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right);
    static void ShellSort(uType* __type, uArray* data, uDelegate* comparison, int32_t left, int32_t right);
    static void Sort(uType* __type, uArray* elements, int32_t index, int32_t length, uDelegate* comparison);
    static void Sort1(uType* __type, uArray* elements, uDelegate* comparison);
    static void Swap(uType* __type, uArray* data, int32_t a, int32_t b);
};
// }

}} // ::g::Uno
