﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1058295580;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct  CodeGenerator_t208304615  : public Il2CppObject
{
public:

public:
};

struct CodeGenerator_t208304615_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.CodeGenerator::monitor
	Il2CppObject * ___monitor_0;
	// System.Reflection.Emit.ModuleBuilder System.Runtime.Serialization.Formatters.Binary.CodeGenerator::_module
	ModuleBuilder_t1058295580 * ____module_1;

public:
	inline static int32_t get_offset_of_monitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t208304615_StaticFields, ___monitor_0)); }
	inline Il2CppObject * get_monitor_0() const { return ___monitor_0; }
	inline Il2CppObject ** get_address_of_monitor_0() { return &___monitor_0; }
	inline void set_monitor_0(Il2CppObject * value)
	{
		___monitor_0 = value;
		Il2CppCodeGenWriteBarrier(&___monitor_0, value);
	}

	inline static int32_t get_offset_of__module_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t208304615_StaticFields, ____module_1)); }
	inline ModuleBuilder_t1058295580 * get__module_1() const { return ____module_1; }
	inline ModuleBuilder_t1058295580 ** get_address_of__module_1() { return &____module_1; }
	inline void set__module_1(ModuleBuilder_t1058295580 * value)
	{
		____module_1 = value;
		Il2CppCodeGenWriteBarrier(&____module_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
