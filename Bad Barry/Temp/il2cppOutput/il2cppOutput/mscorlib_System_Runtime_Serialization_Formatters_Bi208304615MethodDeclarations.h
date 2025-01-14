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

// System.Type
struct Type_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::.cctor()
extern "C"  void CodeGenerator__cctor_m2748236614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataType(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataType_m706666128 (Il2CppObject * __this /* static, unused */, Type_t * ___type, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::GenerateMetadataTypeInternal(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C"  Type_t * CodeGenerator_GenerateMetadataTypeInternal_m697276819 (Il2CppObject * __this /* static, unused */, Type_t * ___type, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::LoadFromPtr(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_LoadFromPtr_m1949607997 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___ig, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWriteTypeSpec(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitWriteTypeSpec_m3895903836 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitLoadTypeAssembly(System.Reflection.Emit.ILGenerator,System.Type,System.String)
extern "C"  void CodeGenerator_EmitLoadTypeAssembly_m1819466316 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWrite(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWrite_m2268787179 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EmitWritePrimitiveValue(System.Reflection.Emit.ILGenerator,System.Type)
extern "C"  void CodeGenerator_EmitWritePrimitiveValue_m799865557 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___gen, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.CodeGenerator::EnumToUnderlying(System.Type)
extern "C"  Type_t * CodeGenerator_EnumToUnderlying_m3186142121 (Il2CppObject * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
