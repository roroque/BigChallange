﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1074763138;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct MethodCallDictionary_t2149518511;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_CallTyp3441586834.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t1712743773  : public Il2CppObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t11523773* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t58506160* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t1074763138 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Il2CppObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t1967233988 * ___exc_5;
	// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::call_type
	int32_t ___call_type_6;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_7;
	// System.Runtime.Remoting.Messaging.MethodCallDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::properties
	MethodCallDictionary_t2149518511 * ___properties_8;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t3431720054* ___methodSignature_9;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___args_1)); }
	inline ObjectU5BU5D_t11523773* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t11523773** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t11523773* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___arg_types_2)); }
	inline ByteU5BU5D_t58506160* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t58506160** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t58506160* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier(&___arg_types_2, value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___ctx_3)); }
	inline LogicalCallContext_t1074763138 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t1074763138 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t1074763138 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_3, value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___rval_4)); }
	inline Il2CppObject * get_rval_4() const { return ___rval_4; }
	inline Il2CppObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(Il2CppObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier(&___rval_4, value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___exc_5)); }
	inline Exception_t1967233988 * get_exc_5() const { return ___exc_5; }
	inline Exception_t1967233988 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t1967233988 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier(&___exc_5, value);
	}

	inline static int32_t get_offset_of_call_type_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___call_type_6)); }
	inline int32_t get_call_type_6() const { return ___call_type_6; }
	inline int32_t* get_address_of_call_type_6() { return &___call_type_6; }
	inline void set_call_type_6(int32_t value)
	{
		___call_type_6 = value;
	}

	inline static int32_t get_offset_of_uri_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___uri_7)); }
	inline String_t* get_uri_7() const { return ___uri_7; }
	inline String_t** get_address_of_uri_7() { return &___uri_7; }
	inline void set_uri_7(String_t* value)
	{
		___uri_7 = value;
		Il2CppCodeGenWriteBarrier(&___uri_7, value);
	}

	inline static int32_t get_offset_of_properties_8() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___properties_8)); }
	inline MethodCallDictionary_t2149518511 * get_properties_8() const { return ___properties_8; }
	inline MethodCallDictionary_t2149518511 ** get_address_of_properties_8() { return &___properties_8; }
	inline void set_properties_8(MethodCallDictionary_t2149518511 * value)
	{
		___properties_8 = value;
		Il2CppCodeGenWriteBarrier(&___properties_8, value);
	}

	inline static int32_t get_offset_of_methodSignature_9() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t1712743773, ___methodSignature_9)); }
	inline TypeU5BU5D_t3431720054* get_methodSignature_9() const { return ___methodSignature_9; }
	inline TypeU5BU5D_t3431720054** get_address_of_methodSignature_9() { return &___methodSignature_9; }
	inline void set_methodSignature_9(TypeU5BU5D_t3431720054* value)
	{
		___methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier(&___methodSignature_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
