﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player/<WinCamera>c__Iterator9
struct  U3CWinCameraU3Ec__Iterator9_t2983930721  : public Il2CppObject
{
public:
	// UnityEngine.GameObject Player/<WinCamera>c__Iterator9::<camera>__0
	GameObject_t4012695102 * ___U3CcameraU3E__0_0;
	// System.Int32 Player/<WinCamera>c__Iterator9::$PC
	int32_t ___U24PC_1;
	// System.Object Player/<WinCamera>c__Iterator9::$current
	Il2CppObject * ___U24current_2;

public:
	inline static int32_t get_offset_of_U3CcameraU3E__0_0() { return static_cast<int32_t>(offsetof(U3CWinCameraU3Ec__Iterator9_t2983930721, ___U3CcameraU3E__0_0)); }
	inline GameObject_t4012695102 * get_U3CcameraU3E__0_0() const { return ___U3CcameraU3E__0_0; }
	inline GameObject_t4012695102 ** get_address_of_U3CcameraU3E__0_0() { return &___U3CcameraU3E__0_0; }
	inline void set_U3CcameraU3E__0_0(GameObject_t4012695102 * value)
	{
		___U3CcameraU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcameraU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U24PC_1() { return static_cast<int32_t>(offsetof(U3CWinCameraU3Ec__Iterator9_t2983930721, ___U24PC_1)); }
	inline int32_t get_U24PC_1() const { return ___U24PC_1; }
	inline int32_t* get_address_of_U24PC_1() { return &___U24PC_1; }
	inline void set_U24PC_1(int32_t value)
	{
		___U24PC_1 = value;
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CWinCameraU3Ec__Iterator9_t2983930721, ___U24current_2)); }
	inline Il2CppObject * get_U24current_2() const { return ___U24current_2; }
	inline Il2CppObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(Il2CppObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
