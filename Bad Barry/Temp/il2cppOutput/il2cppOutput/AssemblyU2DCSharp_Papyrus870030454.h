﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Papyrus
struct  Papyrus_t870030454  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Button Papyrus::retryButton
	Button_t990034267 * ___retryButton_2;
	// UnityEngine.UI.Text Papyrus::text
	Text_t3286458198 * ___text_3;
	// System.Boolean Papyrus::click
	bool ___click_4;

public:
	inline static int32_t get_offset_of_retryButton_2() { return static_cast<int32_t>(offsetof(Papyrus_t870030454, ___retryButton_2)); }
	inline Button_t990034267 * get_retryButton_2() const { return ___retryButton_2; }
	inline Button_t990034267 ** get_address_of_retryButton_2() { return &___retryButton_2; }
	inline void set_retryButton_2(Button_t990034267 * value)
	{
		___retryButton_2 = value;
		Il2CppCodeGenWriteBarrier(&___retryButton_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Papyrus_t870030454, ___text_3)); }
	inline Text_t3286458198 * get_text_3() const { return ___text_3; }
	inline Text_t3286458198 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t3286458198 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_click_4() { return static_cast<int32_t>(offsetof(Papyrus_t870030454, ___click_4)); }
	inline bool get_click_4() const { return ___click_4; }
	inline bool* get_address_of_click_4() { return &___click_4; }
	inline void set_click_4(bool value)
	{
		___click_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif