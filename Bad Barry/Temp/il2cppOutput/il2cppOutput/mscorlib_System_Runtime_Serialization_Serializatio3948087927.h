﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t3576143653;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t3948087927  : public Il2CppObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t986364934  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t3875263730 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t3576143653 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3948087927, ___context_0)); }
	inline StreamingContext_t986364934  get_context_0() const { return ___context_0; }
	inline StreamingContext_t986364934 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t986364934  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3948087927, ___seen_1)); }
	inline Hashtable_t3875263730 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t3875263730 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t3875263730 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier(&___seen_1, value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3948087927, ___callbacks_2)); }
	inline CallbackHandler_t3576143653 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t3576143653 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t3576143653 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
