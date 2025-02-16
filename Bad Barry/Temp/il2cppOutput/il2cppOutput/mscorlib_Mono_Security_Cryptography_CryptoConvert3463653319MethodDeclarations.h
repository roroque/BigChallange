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
// System.Security.Cryptography.RSA
struct RSA_t1557565273;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C"  int32_t CryptoConvert_ToInt32LE_m2023521787 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C"  uint32_t CryptoConvert_ToUInt32LE_m558101659 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::GetBytesLE(System.Int32)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_GetBytesLE_m62772046 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_Trim_m4105167672 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPrivateKeyBlob_m1079413163 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPrivateKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPrivateKeyBlob_m1139689325 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[])
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPublicKeyBlob_m2773702008 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPublicKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiPublicKeyBlob_m1285057119 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiPublicKeyBlob(System.Security.Cryptography.RSA)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiPublicKeyBlob_m4141543943 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[])
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiKeyBlob_m3062702575 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiKeyBlob(System.Byte[],System.Int32)
extern "C"  RSA_t1557565273 * CryptoConvert_FromCapiKeyBlob_m2059589448 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::ToCapiKeyBlob(System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t58506160* CryptoConvert_ToCapiKeyBlob_m2611438349 (Il2CppObject * __this /* static, unused */, RSA_t1557565273 * ___rsa, bool ___includePrivateKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
