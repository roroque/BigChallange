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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m1100844011 (Quaternion_t1891715979 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Dot_m580284 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___a, Quaternion_t1891715979  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  Quaternion_Inverse_m3542515566 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Inverse_m4175627710 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___rotation, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C"  String_t* Quaternion_ToString_m1793285860 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3525329789  Quaternion_get_eulerAngles_m997303795 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t1891715979  Quaternion_Euler_m1204688217 (Il2CppObject * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Euler_m1940911101 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C"  Vector3_t3525329789  Quaternion_Internal_ToEulerRad_m1608666215 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m1660134351 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979 * ___rotation, Vector3_t3525329789 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C"  Quaternion_t1891715979  Quaternion_Internal_FromEulerRad_m3681319598 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___euler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  void Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m1312441940 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789 * ___euler, Quaternion_t1891715979 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C"  int32_t Quaternion_GetHashCode_m3823258238 (Quaternion_t1891715979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C"  bool Quaternion_Equals_m3843409946 (Quaternion_t1891715979 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1891715979  Quaternion_op_Multiply_m3077481361 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___lhs, Quaternion_t1891715979  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Quaternion_op_Multiply_m3771288979 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___rotation, Vector3_t3525329789  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Quaternion_op_Inequality_m4197259746 (Il2CppObject * __this /* static, unused */, Quaternion_t1891715979  ___lhs, Quaternion_t1891715979  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_pinvoke;

extern "C" void Quaternion_t1891715979_marshal_pinvoke(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_pinvoke& marshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_back(const Quaternion_t1891715979_marshaled_pinvoke& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_pinvoke_cleanup(Quaternion_t1891715979_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Quaternion_t1891715979;
struct Quaternion_t1891715979_marshaled_com;

extern "C" void Quaternion_t1891715979_marshal_com(const Quaternion_t1891715979& unmarshaled, Quaternion_t1891715979_marshaled_com& marshaled);
extern "C" void Quaternion_t1891715979_marshal_com_back(const Quaternion_t1891715979_marshaled_com& marshaled, Quaternion_t1891715979& unmarshaled);
extern "C" void Quaternion_t1891715979_marshal_com_cleanup(Quaternion_t1891715979_marshaled_com& marshaled);
