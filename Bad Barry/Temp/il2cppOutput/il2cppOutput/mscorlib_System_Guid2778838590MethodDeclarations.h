﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid2778838590.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Guid::.ctor(System.Byte[])
extern "C"  void Guid__ctor_m4231849149 (Guid_t2778838590 * __this, ByteU5BU5D_t58506160* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void Guid__ctor_m1439809125 (Guid_t2778838590 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
extern "C"  void Guid__cctor_m2766110369 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
extern "C"  void Guid_CheckNull_m2831368219 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
extern "C"  void Guid_CheckLength_m1965613350 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
extern "C"  void Guid_CheckArray_m2333985879 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___o, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
extern "C"  int32_t Guid_Compare_m3677181275 (Il2CppObject * __this /* static, unused */, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
extern "C"  int32_t Guid_CompareTo_m899467726 (Guid_t2778838590 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
extern "C"  bool Guid_Equals_m1613304319 (Guid_t2778838590 * __this, Il2CppObject * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
extern "C"  int32_t Guid_CompareTo_m4163940548 (Guid_t2778838590 * __this, Guid_t2778838590  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
extern "C"  bool Guid_Equals_m2229489973 (Guid_t2778838590 * __this, Guid_t2778838590  ___g, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
extern "C"  int32_t Guid_GetHashCode_m885349207 (Guid_t2778838590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
extern "C"  uint16_t Guid_ToHex_m1518905113 (Il2CppObject * __this /* static, unused */, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t2778838590  Guid_NewGuid_m3560729310 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Guid::FastNewGuidArray()
extern "C"  ByteU5BU5D_t58506160* Guid_FastNewGuidArray_m3654390746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
extern "C"  void Guid_AppendInt_m60474956 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___builder, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
extern "C"  void Guid_AppendShort_m2766674707 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___builder, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
extern "C"  void Guid_AppendByte_m1375613333 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___builder, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
extern "C"  String_t* Guid_BaseToString_m2905357353 (Guid_t2778838590 * __this, bool ___h, bool ___p, bool ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m2528531937 (Guid_t2778838590 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
extern "C"  String_t* Guid_ToString_m2135662273 (Guid_t2778838590 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Guid_ToString_m3177248019 (Guid_t2778838590 * __this, String_t* ___format, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Guid_t2778838590;
struct Guid_t2778838590_marshaled_pinvoke;

extern "C" void Guid_t2778838590_marshal_pinvoke(const Guid_t2778838590& unmarshaled, Guid_t2778838590_marshaled_pinvoke& marshaled);
extern "C" void Guid_t2778838590_marshal_pinvoke_back(const Guid_t2778838590_marshaled_pinvoke& marshaled, Guid_t2778838590& unmarshaled);
extern "C" void Guid_t2778838590_marshal_pinvoke_cleanup(Guid_t2778838590_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Guid_t2778838590;
struct Guid_t2778838590_marshaled_com;

extern "C" void Guid_t2778838590_marshal_com(const Guid_t2778838590& unmarshaled, Guid_t2778838590_marshaled_com& marshaled);
extern "C" void Guid_t2778838590_marshal_com_back(const Guid_t2778838590_marshaled_com& marshaled, Guid_t2778838590& unmarshaled);
extern "C" void Guid_t2778838590_marshal_com_cleanup(Guid_t2778838590_marshaled_com& marshaled);
