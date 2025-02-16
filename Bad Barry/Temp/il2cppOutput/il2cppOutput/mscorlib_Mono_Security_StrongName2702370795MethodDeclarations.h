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

// Mono.Security.StrongName
struct StrongName_t2702370795;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"

// System.Void Mono.Security.StrongName::.ctor(System.Byte[])
extern "C"  void StrongName__ctor_m2367078620 (StrongName_t2702370795 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.ctor(System.Security.Cryptography.RSA)
extern "C"  void StrongName__ctor_m3580701056 (StrongName_t2702370795 * __this, RSA_t1557565273 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.cctor()
extern "C"  void StrongName__cctor_m1937985856 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::InvalidateCache()
extern "C"  void StrongName_InvalidateCache_m757934578 (StrongName_t2702370795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void StrongName_set_RSA_m2703412289 (StrongName_t2702370795 * __this, RSA_t1557565273 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C"  ByteU5BU5D_t58506160* StrongName_get_PublicKey_m4163536910 (StrongName_t2702370795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C"  ByteU5BU5D_t58506160* StrongName_get_PublicKeyToken_m1378294189 (StrongName_t2702370795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C"  String_t* StrongName_get_TokenAlgorithm_m1030232697 (StrongName_t2702370795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
