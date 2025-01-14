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

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1696569198;
// System.IO.TextWriter
struct TextWriter_t1689927879;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter1689927879.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C"  void SynchronizedWriter__ctor_m3325637572 (SynchronizedWriter_t1696569198 * __this, TextWriter_t1689927879 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C"  void SynchronizedWriter_Close_m69203352 (SynchronizedWriter_t1696569198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C"  void SynchronizedWriter_Flush_m2737258404 (SynchronizedWriter_t1696569198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C"  void SynchronizedWriter_Write_m3398152126 (SynchronizedWriter_t1696569198 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C"  void SynchronizedWriter_Write_m1449099100 (SynchronizedWriter_t1696569198 * __this, CharU5BU5D_t3416858730* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C"  void SynchronizedWriter_Write_m3123256227 (SynchronizedWriter_t1696569198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C"  void SynchronizedWriter_Write_m3259144636 (SynchronizedWriter_t1696569198 * __this, CharU5BU5D_t3416858730* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_Write_m3453201983 (SynchronizedWriter_t1696569198 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C"  void SynchronizedWriter_WriteLine_m3967840723 (SynchronizedWriter_t1696569198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C"  void SynchronizedWriter_WriteLine_m1236139023 (SynchronizedWriter_t1696569198 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object,System.Object)
extern "C"  void SynchronizedWriter_WriteLine_m83686571 (SynchronizedWriter_t1696569198 * __this, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
