#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D;
struct XrStructureNodeBase_t88A7A67C3E384A2A668F8F8D5206EA485BE0B7EE;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2449D96D3310874A230C73B01B4FE0FCCDD44042;
IL2CPP_EXTERN_C String_t* _stringLiteral3803E7EB6B04C563834F2BEF667B88A967141C60;
IL2CPP_EXTERN_C String_t* _stringLiteral5EB179500C83D1C21447ECC71FCA7EED911E7FD1;
IL2CPP_EXTERN_C String_t* _stringLiteral7F7EBA536C9EB16E25B5CF3C1E068C741E24DCAB;
IL2CPP_EXTERN_C String_t* _stringLiteralD2BD3DA8587F156D5049C204DCFDDF54D9DA2E3B;
IL2CPP_EXTERN_C String_t* _stringLiteralFF58C5426EEBFA35383B11D3A421A51DEC1FB847;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct XrStructureNodeBase_t88A7A67C3E384A2A668F8F8D5206EA485BE0B7EE  : public RuntimeObject
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 
{
	void* ___m_Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct XrStructureType_tEDBBE171D46FE1195357B1DA9560A9B210AB0A10 
{
	uint32_t ___value__;
};
struct XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522  : public XrStructureNodeBase_t88A7A67C3E384A2A668F8F8D5206EA485BE0B7EE
{
	NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___m_Data;
	XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* ___m_BasePtr;
	bool ___m_Disposed;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D 
{
	uint32_t ___U3CtypeU3Ek__BackingField;
	void* ___U3CnextU3Ek__BackingField;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeReference_1__ctor_m9E20EB238372330EE554484D1D76DD48E1D2A6A9_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* __this, Il2CppFullySharedGenericStruct ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNodeBase__ctor_mF2967ED7B457C34558D31AB81EABCA39AB62FCE5 (XrStructureNodeBase_t88A7A67C3E384A2A668F8F8D5206EA485BE0B7EE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XrBaseInStructure_get_type_mFE1231E9F52F0F4663DD94CB245BD03CDAF4A415_inline (XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline void NativeReference_1__ctor_m9E20EB238372330EE554484D1D76DD48E1D2A6A9 (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* __this, Il2CppFullySharedGenericStruct ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, Il2CppFullySharedGenericStruct, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeReference_1__ctor_m9E20EB238372330EE554484D1D76DD48E1D2A6A9_fshared)((NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)__this, ___0_value, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 105211
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNode_1__ctor_mA639E376431C53AA8DFDCF0B5CBBD1ED4D53FDCE_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, Il2CppFullySharedGenericStruct ___0_data, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericStruct L_22 = alloca(SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
	//<source_info:<no-source>:1>
	{
		XrStructureNodeBase__ctor_mF2967ED7B457C34558D31AB81EABCA39AB62FCE5((XrStructureNodeBase_t88A7A67C3E384A2A668F8F8D5206EA485BE0B7EE*)__this, NULL);
		uint32_t L_0 = SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5;
		uint32_t L_1 = sizeof(XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_3);
		uint32_t L_5 = SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5;
		int32_t L_6 = ((int32_t)L_5);
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8;
		L_8 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5EB179500C83D1C21447ECC71FCA7EED911E7FD1)), L_4, L_7, NULL);
		uint32_t L_9 = sizeof(XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D);
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2449D96D3310874A230C73B01B4FE0FCCDD44042)), L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0058:
	{
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((Il2CppFullySharedGenericStruct*)___0_data,NULL));
		uint32_t L_16;
		L_16 = XrBaseInStructure_get_type_mFE1231E9F52F0F4663DD94CB245BD03CDAF4A415_inline((XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D*)L_15, NULL);
		if (L_16)
		{
			goto IL_0081;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_18);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF58C5426EEBFA35383B11D3A421A51DEC1FB847)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0081:
	{
		il2cpp_codegen_memcpy(L_22, ___0_data, SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_23;
		L_23 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_25;
		memset((&L_25), 0, sizeof(L_25));
		NativeReference_1__ctor_m9E20EB238372330EE554484D1D76DD48E1D2A6A9((&L_25), il2cpp_codegen_memcpy(L_24, L_22, SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5), L_23, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->___m_Data = L_25;
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_26 = __this->___m_Data;
		Il2CppFullySharedGenericStruct* L_27;
		L_27 = ((  Il2CppFullySharedGenericStruct* (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(L_26, NULL);
		__this->___m_BasePtr = (XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D*)L_27;
		return;
	}
}
// Method Definition Index: 105212
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* XrStructureNode_1_GetAsXrBaseInStructure_mFA0DA32079A783B342BC031A2A642B16746DE16A_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* L_0 = __this->___m_BasePtr;
		return L_0;
	}
}
// Method Definition Index: 105213
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XrStructureNode_1_TryGetData_m93D6D96245E9E7C981B667732845FA3055196684_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, Il2CppFullySharedGenericStruct* ___0_data, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
	//<source_info:<no-source>:1>
	{
		((  void (*) (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_0 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		bool L_1;
		L_1 = ((  bool (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2 = ___0_data;
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_3 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_2, L_4, SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (void**)(Il2CppFullySharedGenericStruct*)L_2, (void*)L_4);
		return (bool)1;
	}

IL_0026:
	{
		Il2CppFullySharedGenericStruct* L_5 = ___0_data;
		il2cpp_codegen_initobj(L_5, SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
		return (bool)0;
	}
}
// Method Definition Index: 105214
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XrStructureNode_1_TrySetData_m922FDAE76BDF7DAF8BD4A7DCF2ED290EBC3D5DEF_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, Il2CppFullySharedGenericStruct ___0_data, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
	//<source_info:<no-source>:1>
	uint32_t V_0 = 0;
	{
		((  void (*) (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_0 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		bool L_1;
		L_1 = ((  bool (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_0, NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((Il2CppFullySharedGenericStruct*)___0_data,NULL));
		uint32_t L_3;
		L_3 = XrBaseInStructure_get_type_mFE1231E9F52F0F4663DD94CB245BD03CDAF4A415_inline((XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D*)L_2, NULL);
		V_0 = L_3;
		XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* L_4 = __this->___m_BasePtr;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_4) == ((intptr_t)L_5)))
		{
			goto IL_0036;
		}
	}
	{
		XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* L_6 = __this->___m_BasePtr;
		uint32_t L_7;
		L_7 = XrBaseInStructure_get_type_mFE1231E9F52F0F4663DD94CB245BD03CDAF4A415_inline((XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D*)L_6, NULL);
		uint32_t L_8 = V_0;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		return (bool)0;
	}

IL_0038:
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_9 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		il2cpp_codegen_memcpy(L_10, ___0_data, SizeOf_TData_t2D9960ED5E2AB17B1F89147C37CB3302239BE6C5);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), L_9, L_10);
		return (bool)1;
	}
}
// Method Definition Index: 105215
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNode_1_Finalize_m5612D9B7567B82713EA8BD6FEB90B094F26F73B2_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0008:
			{
				NullCheck((RuntimeObject*)__this);
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			((  void (*) (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
			goto IL_000f;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_000f:
	{
		return;
	}
}
// Method Definition Index: 105216
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNode_1_Dispose_m0186B229B7CBB72AEBDDE37013A9BD94F5301650_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_1 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		bool L_2;
		L_2 = ((  bool (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_3 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		((  void (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
	}

IL_0021:
	{
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		__this->___m_BasePtr = (XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D*)L_4;
		__this->___m_Disposed = (bool)1;
		CHECKED_LOCAL_INIT(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_StaticInit,(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65((RuntimeObject*)__this, NULL);
		return;
	}
}
// Method Definition Index: 105217
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNode_1_FinalizerImpl_m2B0C33CBBB165110F24BD0C954AA7558BE863889_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F7EBA536C9EB16E25B5CF3C1E068C741E24DCAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2BD3DA8587F156D5049C204DCFDDF54D9DA2E3B);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Disposed;
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4* L_1 = (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*)(&__this->___m_Data);
		bool L_2;
		L_2 = ((  bool (*) (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_1, NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral7F7EBA536C9EB16E25B5CF3C1E068C741E24DCAB, L_5, _stringLiteralD2BD3DA8587F156D5049C204DCFDDF54D9DA2E3B, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
	}

IL_0038:
	{
		return;
	}
}
// Method Definition Index: 105218
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrStructureNode_1_ThrowIfDisposed_m0EC817C91A5C09FF6EA493C3F93ACE0AA113C987_fshared (XrStructureNode_1_t485932B08E05DADA9BAC56EAB3558A101EEB4522* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___m_Disposed;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3803E7EB6B04C563834F2BEF667B88A967141C60)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 94162
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t XrBaseInStructure_get_type_mFE1231E9F52F0F4663DD94CB245BD03CDAF4A415_inline (XrBaseInStructure_t0C410698286D3B519C237BC9F1162C17D01CA61D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		uint32_t L_0 = __this->___U3CtypeU3Ek__BackingField;
		return L_0;
	}
}
