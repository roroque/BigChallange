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

// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t2760016869;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// Mono.Security.StrongName
struct StrongName_t2702370795;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair__ctor_m583813794 (StrongNameKeyPair_t2760016869 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m285619594 (StrongNameKeyPair_t2760016869 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3690645877 (StrongNameKeyPair_t2760016869 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::GetRSA()
extern "C"  RSA_t1557565273 * StrongNameKeyPair_GetRSA_m987209039 (StrongNameKeyPair_t2760016869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.StrongName System.Reflection.StrongNameKeyPair::StrongName()
extern "C"  StrongName_t2702370795 * StrongNameKeyPair_StrongName_m2125236127 (StrongNameKeyPair_t2760016869 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
