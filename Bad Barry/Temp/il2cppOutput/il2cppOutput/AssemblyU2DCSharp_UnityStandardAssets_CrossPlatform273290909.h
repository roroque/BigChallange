﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t1608239565;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t675652908;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UnityStandardAssets_CrossPlatfor3816175517.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t273290909  : public MonoBehaviour_t3012272455
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t1608239565 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t675652908 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t273290909, ___mapping_2)); }
	inline AxisMapping_t1608239565 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t1608239565 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t1608239565 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_2, value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t273290909, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t273290909, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t273290909, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t273290909, ___m_SteerAxis_6)); }
	inline VirtualAxis_t675652908 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t675652908 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t675652908 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_SteerAxis_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
