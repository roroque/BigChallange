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

// System.Threading.Timer
struct Timer_t3546110984;
// System.Threading.TimerCallback
struct TimerCallback_t4291881837;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_TimerCallback4291881837.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
extern "C"  void Timer__ctor_m1028438267 (Timer_t3546110984 * __this, TimerCallback_t4291881837 * ___callback, Il2CppObject * ___state, int32_t ___dueTime, int32_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
extern "C"  void Timer__ctor_m425594887 (Timer_t3546110984 * __this, TimerCallback_t4291881837 * ___callback, Il2CppObject * ___state, TimeSpan_t763862892  ___dueTime, TimeSpan_t763862892  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C"  void Timer__cctor_m1320176523 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C"  void Timer_Init_m4201404395 (Timer_t3546110984 * __this, TimerCallback_t4291881837 * ___callback, Il2CppObject * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C"  bool Timer_Change_m4108080222 (Timer_t3546110984 * __this, TimeSpan_t763862892  ___dueTime, TimeSpan_t763862892  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C"  void Timer_Dispose_m4229130271 (Timer_t3546110984 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C"  bool Timer_Change_m4132562187 (Timer_t3546110984 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
