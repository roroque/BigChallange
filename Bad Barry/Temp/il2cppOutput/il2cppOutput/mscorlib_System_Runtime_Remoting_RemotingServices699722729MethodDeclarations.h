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

// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;
// System.MarshalByRefObject
struct MarshalByRefObject_t2055500882;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1442800354;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t831247831;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t3359088292;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Remoting.Identity
struct Identity_t1467752358;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t544662673;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t834755532;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t571418633;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef3894317828.h"
#include "mscorlib_System_MarshalByRefObject2055500882.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy3359088292.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMod251966751.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity571418633.h"
#include "mscorlib_System_Runtime_Remoting_Identity1467752358.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C"  void RemotingServices__cctor_m722143346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C"  MethodBase_t3461000640 * RemotingServices_GetVirtualMethod_m2492796715 (Il2CppObject * __this /* static, unused */, Type_t * ___type, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C"  bool RemotingServices_IsTransparentProxy_m3544746083 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C"  Type_t * RemotingServices_GetServerTypeForUri_m2370855021 (Il2CppObject * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m3453424695 (Il2CppObject * __this /* static, unused */, ObjRef_t3894317828 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m3493161574 (Il2CppObject * __this /* static, unused */, ObjRef_t3894317828 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject)
extern "C"  ObjRef_t3894317828 * RemotingServices_Marshal_m164736248 (Il2CppObject * __this /* static, unused */, MarshalByRefObject_t2055500882 * ___Obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.RemotingServices::Marshal(System.MarshalByRefObject,System.String,System.Type)
extern "C"  ObjRef_t3894317828 * RemotingServices_Marshal_m1652368487 (Il2CppObject * __this /* static, unused */, MarshalByRefObject_t2055500882 * ___Obj, String_t* ___ObjURI, Type_t * ___RequestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::NewUri()
extern "C"  String_t* RemotingServices_NewUri_m1542850328 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C"  RealProxy_t1442800354 * RemotingServices_GetRealProxy_m469180406 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  MethodBase_t3461000640 * RemotingServices_GetMethodBaseFromMethodMessage_m589251925 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t3461000640 * RemotingServices_GetMethodBaseFromName_m1109362245 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t3431720054* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t3461000640 * RemotingServices_FindInterfaceMethod_m1641296449 (Il2CppObject * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t3431720054* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RemotingServices_GetObjectData_m3187488043 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsMethodOverloaded(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  bool RemotingServices_IsMethodOverloaded_m3152869778 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsOneWay(System.Reflection.MethodBase)
extern "C"  bool RemotingServices_IsOneWay_m1063600040 (Il2CppObject * __this /* static, unused */, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m1188122341 (Il2CppObject * __this /* static, unused */, ActivatedClientTypeEntry_t3359088292 * ___entry, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m1887308374 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxyForContextBound_m9934294 (Il2CppObject * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C"  Identity_t1467752358 * RemotingServices_GetIdentityForUri_m1730131113 (Il2CppObject * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C"  String_t* RemotingServices_RemoveAppNameFromUri_m1113505532 (Il2CppObject * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C"  ClientIdentity_t544662673 * RemotingServices_GetOrCreateClientIdentity_m3862611826 (Il2CppObject * __this /* static, unused */, ObjRef_t3894317828 * ___objRef, Type_t * ___proxyType, Il2CppObject ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * RemotingServices_GetClientChannelSinkChain_m3823167339 (Il2CppObject * __this /* static, unused */, String_t* ___url, Il2CppObject * ___channelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientActivatedIdentity System.Runtime.Remoting.RemotingServices::CreateClientActivatedServerIdentity(System.MarshalByRefObject,System.Type,System.String)
extern "C"  ClientActivatedIdentity_t834755532 * RemotingServices_CreateClientActivatedServerIdentity_m1542292198 (Il2CppObject * __this /* static, unused */, MarshalByRefObject_t2055500882 * ___realObject, Type_t * ___objectType, String_t* ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  ServerIdentity_t571418633 * RemotingServices_CreateWellKnownServerIdentity_m2420008897 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void RemotingServices_RegisterServerIdentity_m3253238710 (Il2CppObject * __this /* static, unused */, ServerIdentity_t571418633 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetProxyForRemoteObject_m1565953531 (Il2CppObject * __this /* static, unused */, ObjRef_t3894317828 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetRemoteObject_m2559997024 (Il2CppObject * __this /* static, unused */, ObjRef_t3894317828 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C"  void RemotingServices_RegisterInternalChannels_m3428095417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C"  void RemotingServices_DisposeIdentity_m167351746 (Il2CppObject * __this /* static, unused */, Identity_t1467752358 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C"  String_t* RemotingServices_GetNormalizedUri_m2995472567 (Il2CppObject * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
