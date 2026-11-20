#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46;
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C;
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1;
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2;
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8;
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD;
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5;
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E;
struct ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB;
struct ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6;
struct ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED;
struct Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct ICollection_1_t58D5B5A564BF08CD3C8EE106100AC0D7B8C4508B;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA;
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347;
struct List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0;
struct List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA;
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1;
struct Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct __CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0  : public RuntimeObject
{
};
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97  : public RuntimeObject
{
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D  : public RuntimeObject
{
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549  : public RuntimeObject
{
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC  : public RuntimeObject
{
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F  : public RuntimeObject
{
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6  : public RuntimeObject
{
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1  : public RuntimeObject
{
};
struct U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE  : public RuntimeObject
{
};
struct U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA  : public RuntimeObject
{
};
struct U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA  : public RuntimeObject
{
	__CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1  : public RuntimeObject
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	Exception_t* ___m_Exception;
	RuntimeObject* ___m_stackTrace;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
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
struct Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 
{
	LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ____list;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104  : public LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	bool ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	Il2CppSharedGenericObject* ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A;
struct ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D 
{
	bool ____initialized;
	Il2CppSharedGenericObject* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
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
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
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
struct Metrics_t865BF0741490865117A79705F58784742D6F02B8 
{
	int32_t ___TotalRoomCount;
	int32_t ___CandidateRoomCount;
	int32_t ___Loaded;
	int32_t ___Failed;
	int32_t ___SkippedUserNotInRoom;
	int32_t ___SkippedAlreadyInstantiated;
};
struct ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
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
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct ValueTaskSourceOnCompletedFlags_t3181838E33741E1E7338B33740CCEAD38C6B8BFF 
{
	int32_t ___value__;
};
struct ValueTaskSourceStatus_t9F496A09D3BF95F42C0C5366D8DEBA49F08C4FD3 
{
	int32_t ___value__;
};
struct Flags_tD935E34E819419AC18907444AF9A5993A183FC09 
{
	int32_t ___value__;
};
struct LoadDeviceResult_t21D2C0103AFA987AA9748471F44A75A6345EEF34 
{
	int32_t ___value__;
};
struct MrukResult_t839B8CBC2450FAD7865895D42D02D992BBA3A89D 
{
	int32_t ___value__;
};
struct ConfigureTrackerResult_t073B11F91678F715E405998906D6F44A9DF141D4 
{
	int32_t ___value__;
};
struct EraseResult_t27CCAC05D8F12165F5B34088ECFFAE9410A59707 
{
	int32_t ___value__;
};
struct FetchResult_t6C02AA7FC4DC5E33605E1C5ACB176CBEE7F338F4 
{
	int32_t ___value__;
};
struct SaveResult_t158A36F68A44B33A2045C4AC8FD6A48E7493DC61 
{
	int32_t ___value__;
};
struct ShareResult_t90D8BAF09E08C8C86153A674AE72DED88E706A2B 
{
	int32_t ___value__;
};
struct Result_t2D88432FA2C70DFD3C20AE308848F404D22376D0 
{
	int32_t ___value__;
};
struct Result_t65718B00CEF7A5D1E84402EA2DDCF5BF3D3E6797 
{
	int32_t ___value__;
};
struct LoadSceneModelResult_t7EF1562A6712CE21E388C7FCAE0EAD67764E2E77 
{
	int32_t ___value__;
};
struct OperationResult_tCEEF60CD40479FB5175A075F097BA5C1811E555D 
{
	int32_t ___value__;
};
struct ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t10DD0FF53742520D9E4F27CF02784651F050DA90 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t1C7DC6B136F10B629BAA5A4D4656219B354B0ECD 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tD2A946B63F2A8372E5F002C81A6223B4F8CA89F3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t9394EDB4552688DB3D952D42E0377CE9CE15F70F 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tA15855D5689FD73FC415588C2AF7BEB583CF45DF 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	int32_t ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED 
{
	bool ____initialized;
	List_1_t57EA5F2BB613ED1B7739D0485D861F4F3EE78310* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 
{
	bool ____initialized;
	List_1_tFB3B8D8B7BE5503ECBA1D7F8AC630424F1211AFF* ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F 
{
	bool ____initialized;
	Guid_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 
{
	bool ____initialized;
	uint64_t ____value;
	int32_t ____statusCode;
	int32_t ____status;
};
struct ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710  : public RuntimeObject
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContext;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ____syncContextNoFlow;
	LogicalCallContext_t4BB407B088DB9FA68FE1EC2DB78D33F5BB4BDE9E* ____logicalCallContext;
	IllogicalCallContext_tBE27BC899B192B585D0D20F6A296DC5296C8BFD5* ____illogicalCallContext;
	int32_t ____flags;
	Dictionary_2_tE8D02A3D5DD039B176B8F64028DA5F0883237494* ____localValues;
	List_1_tA7C2A3DF62733E04DA16EDD931856E01BE8283F0* ____localChangeNotifications;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	int32_t ____props;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E  : public MulticastDelegate_t
{
};
struct ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6  : public MulticastDelegate_t
{
};
struct ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED  : public MulticastDelegate_t
{
};
struct ManualResetValueTaskSourceCore_1_t9D46914F6792C23ADDD0977C316A9B39096632AC 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_t818CB35A297A5AE3E9CDCBB6667EED49D9F69E77 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t49A683C035E9754A360539AEE85399929A56DEC8 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tB4C409E92182D241881B5489DFC13C09318A76A3 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tF30060C21BA57ACA8FD40996D154E4CEB3F4911A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tF988667599076489ACDDFD42A76371B27BA35639 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tDC987E53B0C4E84CCA07A16A3F705E69CCDA602B 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tE6BBB1049D1315EA6F35DA9728C0D01262F252B6 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tC3B9C67B67DD3203C4A245361EEA11972E220D67 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tEB79882A5FAC624158C1D66DFCBF4BD9DC20BDFD ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t475BDC90EB9D192DCB7C092762FA8D243CDDA890 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_1_tDAAFCA1B3EDC2316E4F4B638730B55EA212C31A1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_tCA97ED50751D5A2D5504306B87C4D084B3C4FB8A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tE368B721B1E19A0AC8DF0E70D330733463E0DCED ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t9CBBB4E0EBA4D6D17BF284DCB6013B6C5719917A 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tB3DE08B0AE1C37D6758B3195A8D643FA51CCF032 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t75D8FA9F3A403BD05EC767109CB661B074DF2DAA 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_tA2ED6DC610EC6F41EF14C5CC3B2AE83BBB3AC029 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t2786AF0527550C71E6A45EB0936BD321EEF87ED3 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t45942B55D92B1AE419FB104E94788902FC71248F ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t236379DB803801F959F1391B14505A9D3CD9E980 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	OVRResult_2_t38C6F30BDF2C9E7FE8C1D3A842710DA20541AA20 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct ManualResetValueTaskSourceCore_1_t1210CCD6E418EA3A577725405E872BAC2A44CC11 
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation;
	RuntimeObject* ____continuationState;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext;
	RuntimeObject* ____capturedContext;
	bool ____completed;
	ValueTuple_2_t00530A70E027E978C248DC47A49207715B93E3E1 ____result;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error;
	int16_t ____version;
	bool ___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields
{
	U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields
{
	U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields
{
	U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields
{
	U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields
{
	U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields
{
	U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields
{
	U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields
{
	U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields
{
	U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields
{
	U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields
{
	U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* ___U3CU3E9;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__19_0;
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___U3CU3E9__21_0;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__22_0;
};
struct List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA_StaticFields
{
	__CanonU5BU5DU5BU5D_t265B5710371F7635CACCD1295C7780EAD4D63374* ___s_emptyArray;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_sentinel;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticFields
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___s_dummyDefaultEC;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___Default;
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
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26_gshared (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16* __this, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___0_callBack, Il2CppSharedGenericObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_tFC0270BC4BAFE5491F39827C3CAA348068D77141* Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared (Il2CppSharedGenericObject* ___0_item1, Il2CppSharedGenericObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9_gshared (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___1_callback, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0_gshared (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D_gshared (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___1_callback, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684 (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___1_callback, ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, const RuntimeMethod*))LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared)(__this, method);
}
inline void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26 (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16* __this, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16*, LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104*, const RuntimeMethod*))Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26_gshared)(__this, ___0_list, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared)(__this, ___0_index, ___1_collection, method);
}
inline int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, Il2CppSharedGenericObject*, const RuntimeMethod*))LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared)(__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403 (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared)(__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1__ctor_m98EAD4ACCCE25AA8D4084520C07D03C84B50C4E6 (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline void List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68 (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, int32_t, const RuntimeMethod*))List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
inline int32_t List_1_get_Count_mA09DAC378E78D61150174B308A222FB598C1B216_inline (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared)(__this, ___0_token, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
inline bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_QueueUserWorkItem_TisIl2CppSharedGenericObject_mCF99C9926BB09726ED355A16D81D4F63A2DA261A_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
inline bool ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method)
{
	return ((  bool (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, bool, const RuntimeMethod*))ThreadPool_UnsafeQueueUserWorkItem_TisIl2CppSharedGenericObject_m86789ED5ECA7A1D021FAB83EF64B3999213E6A27_gshared)(___0_callBack, ___1_state, ___2_preferLocal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
inline Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	return ((  Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Tuple_Create_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m61DE7E645AC7E63FCFEF4C23D698A20FA37C635A_gshared)(___0_item1, ___1_item2, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_action, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
inline void ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9 (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* ___1_callback, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*, ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347 (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline)(__this, method);
}
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline)(__this, ___0_obj, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360 (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3 (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* ___1_callback, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*, ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705 (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4 (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* ___1_callback, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*, ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890 (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* ___1_callback, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*, ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758 (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* ___1_callback, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*, ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00 (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2 (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* ___1_callback, ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* ___1_callback, ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) ;
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* ___1_callback, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*, ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501 (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637 (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared)(__this, method);
}
inline void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, int16_t, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared)(__this, ___0_token, method);
}
inline void ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0 (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* ___1_callback, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* ___2_state, const RuntimeMethod* method)
{
	((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*, ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D_gshared)(___0_executionContext, ___1_callback, ___2_state, method);
}
inline void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229 (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	((  void (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared)(__this, method);
}
inline bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213*, const RuntimeMethod*))ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684 (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67 (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___0_executionContext, ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* ___1_callback, ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* ___2_state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11690
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_0, NULL);
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11691
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
// Method Definition Index: 11692
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5;
		L_5 = InvokerFuncInvoker1< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_4: *(void**)L_4));
		V_0 = L_5;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_7);
		il2cpp_codegen_write_field_data<true>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_8, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11;
		L_11 = InvokerFuncInvoker2< Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? L_10: *(void**)L_10));
		return;
	}
}
// Method Definition Index: 11693
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
// Method Definition Index: 11694
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_4;
		L_4 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_3: *(void**)L_3), 0);
		V_0 = L_4;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_9 = __this->____comparer;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_2;
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(L_11, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_9);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = __this->____buckets;
		int32_t L_16 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_17 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_18);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		NullCheck(L_19);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_21);
	}

IL_005c:
	{
		int32_t L_22 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_24 = V_2;
		V_1 = L_24;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_25, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_2 = L_26;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = V_2;
		if (L_27)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 11695
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_7 = L_0;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_1;
		L_1 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_0: *(void**)L_0), 0);
		V_0 = L_1;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = __this->____buckets;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_6 = __this->____comparer;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_6);
		bool L_10;
		L_10 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = V_1;
		return L_11;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_1 = L_13;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_1;
		if (L_14)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
// Method Definition Index: 11696
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	//<source_info:<no-source>:1>
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_0, NULL);
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_1);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		NullCheck(L_3);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_6;
		L_6 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_5: *(void**)L_5), 0);
		V_1 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_8 = __this->____buckets;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_11);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_12 = __this->____buckets;
		int32_t L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_14);
		int32_t L_15 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_17 = __this->____buckets;
		NullCheck(L_17);
		int32_t L_18 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_17)->max_length),NULL));
		if ((((int32_t)L_16) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_18, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 11697
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			NullCheck(L_0);
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			int32_t L_6 = L_5;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_10 = V_3;
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_12 = V_0;
			int32_t L_13;
			L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_11: *(void**)L_11), L_12);
			V_4 = L_13;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_15 = V_1;
			int32_t L_16 = V_4;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(L_14);
			il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_18);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_19 = V_1;
			int32_t L_20 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_3;
			NullCheck(L_19);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_21);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = V_3;
			if (L_22)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_23 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		}

IL_004f_1:
		{
			int32_t L_24 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_25 = __this->____buckets;
			NullCheck(L_25);
			int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
			if ((((int32_t)L_24) < ((int32_t)L_26)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_27 = V_1;
			__this->____buckets = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_27);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_28 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
// Method Definition Index: 11698
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	//<source_info:<no-source>:1>
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7B86069998BAC863F6EE754C9D878200BED47898_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m245F7AA05280670E61F8C0778A2DC89B981F0E57_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11779
// Method Definition Index: 11780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m97ADDF2D21785B2A23F4F138D257A56BA6D3F35D_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26((&L_0), __this, NULL);
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// Method Definition Index: 11781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_m6B631273A548E9129A08D942E9849BD99DA2BE83_gshared (LowLevelListWithIList_1_t0FD264EE413671CF3BB0114F6CBDB0E3C4F4D104* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mB5816A014E8FD33359980F2C8997DBC95D4FBE26((&L_0), __this, NULL);
		Enumerator_t3D2A8CCBC521152B902ABCE71DED3C115DEEAC16 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), &L_1);
		return (RuntimeObject*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
// Method Definition Index: 11778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
// Method Definition Index: 11779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 11780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 11781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	//<source_info:<no-source>:1>
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_m5EDF9059E2B9E18A9B5485805DA1E437CD9E5923_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD1211C8F15F5F71881D532224ABE5C511D692167_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
// Method Definition Index: 11759
// Method Definition Index: 11760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = ((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 11761
// Method Definition Index: 11762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* LowLevelList_1_get_Item_mF5D87A967226B59493B1B1D2B9D46D705B140C3E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// Method Definition Index: 11763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m97013DCB2E8805FC3DB2963DDDB69F239293E4C1_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		Il2CppSharedGenericObject* L_5 = ___1_value;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Il2CppSharedGenericObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 11764
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mB18D5DA62BB80B808C3A36DD591B3FD22138BF2D_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_001e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 11765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		LowLevelList_1_set_Capacity_mFD67211CC6B3CEFE404094D7A79E6067F26C3EEC(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 11766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_m246527A296C4E439DEF98D4CFFE22C14D34502F2_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
// Method Definition Index: 11767
// Method Definition Index: 11768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_m649C5E8454A840D02915C509716649D85F169D5B_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		Il2CppSharedGenericObject* L_8 = ___0_item;
		int32_t L_9;
		L_9 = LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A(__this, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11769
// Method Definition Index: 11770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_3;
	}
}
// Method Definition Index: 11771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		Il2CppSharedGenericObject* L_17 = ___1_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 11772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m47DFA9E3D242417D8F8811704C9527E5D149F289_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_mB4490D5C551F28A4FE6897BB059CE8409F6B000A(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_22 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_34 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_35, L_36, 0);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_37 = V_2;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				Il2CppSharedGenericObject* L_50;
				L_50 = InterfaceFuncInvoker0< Il2CppSharedGenericObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_49);
				LowLevelList_1_Insert_mAB5978B3C0C4CDDF7878DEA8731D5CBD2298D403(__this, L_48, L_50, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
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

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
// Method Definition Index: 11773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_mC44C71081087BEDF191A37ECC31F21CDE0BA722B_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = LowLevelList_1_IndexOf_mB0038DF2ABB1F369C435382E2ED90134B770CC5A(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m26C085DDAD35F29EC2DD4563490325E1059E2D84_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_match, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_5 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Il2CppSharedGenericObject* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		bool L_10;
		L_10 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_5, L_9, NULL);
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_17 = ___0_match;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Il2CppSharedGenericObject* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_17);
		bool L_22;
		L_22 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_17, L_21, NULL);
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		Il2CppSharedGenericObject* L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Il2CppSharedGenericObject*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
// Method Definition Index: 11775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_m145190E4B3563DA9050BBD1732DECF8B7169F58E_gshared (LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Il2CppSharedGenericObject*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// Method Definition Index: 11776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m817F38EA7C8C56861A40DBC2351212FBCBF97FAC_gshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tCFA3CB7E3C13B92F06CB214D24D809EB3807FDEF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 11757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 11758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
// Method Definition Index: 11759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 11760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
// Method Definition Index: 11761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
// Method Definition Index: 11763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 11764
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 11765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_002f:
	{
		return;
	}
}
// Method Definition Index: 11766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
// Method Definition Index: 11767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// Method Definition Index: 11768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_11;
		L_11 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// Method Definition Index: 11770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
// Method Definition Index: 11771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 11772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)))(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		NullCheck(L_35);
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					NullCheck((RuntimeObject*)L_46);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				NullCheck(L_49);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_49, (Il2CppFullySharedGenericAny*)L_50);
				InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15), __this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_50: *(void**)L_50));
			}

IL_00f3_1:
			{
				RuntimeObject* L_51 = V_3;
				NullCheck((RuntimeObject*)L_51);
				bool L_52;
				L_52 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_51);
				if (L_52)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
			}
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

IL_0107:
	{
		int32_t L_53 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_53, 1));
		return;
	}
}
// Method Definition Index: 11773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 11774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_5);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_17);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_21: *(void**)L_21));
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_25);
		il2cpp_codegen_memcpy((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
// Method Definition Index: 11775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
// Method Definition Index: 11776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 23062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m94F7AE2A2A577580B6922D16CDB51083CDDDFC80_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_1 = (List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_m98EAD4ACCCE25AA8D4084520C07D03C84B50C4E6(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		NullCheck(L_2);
		List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline(L_2, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		return;
	}
}
// Method Definition Index: 23063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ManagedObjectStore_1_GetValue_m0EAC3C100432375B6075EA13FDB46D31388BF816_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_2;
		return L_1;
	}

IL_000d:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8;
		L_8 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_6, L_7, NULL);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Il2CppSharedGenericObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		return L_11;
	}
}
// Method Definition Index: 23064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA77B8E92DEA1A3240D0EE7EB3468199CBA49AEB2_gshared (ManagedObjectStore_1_t5991B3BF02302E92A67BFA3777506211F997B6FA* __this, int32_t* ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppSharedGenericObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		Il2CppSharedGenericObject* L_2 = ___1_value;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_3 = ___0_index;
		int32_t L_4 = *(L_3);
		int32_t L_5 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_4/L_5));
		int32_t* L_6 = ___0_index;
		int32_t L_7 = *(L_6);
		int32_t L_8 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_7%L_8));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_9 = __this->___m_Chunks;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11;
		L_11 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_9, L_10, NULL);
		int32_t L_12 = V_1;
		Il2CppSharedGenericObject* L_13 = ___1_value;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (Il2CppSharedGenericObject*)L_13);
		return;
	}

IL_0034:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_14 = __this->___m_Free;
		int32_t* L_15 = ___0_index;
		int32_t L_16 = *(L_15);
		NullCheck(L_14);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_14, L_16, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_17 = ___0_index;
		int32_t L_18 = *(L_17);
		int32_t L_19 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_18/L_19));
		int32_t* L_20 = ___0_index;
		int32_t L_21 = *(L_20);
		int32_t L_22 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_21%L_22));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_23 = __this->___m_Chunks;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_25;
		L_25 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_23, L_24, NULL);
		int32_t L_26 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_27 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppSharedGenericObject*)L_27);
		int32_t* L_28 = ___0_index;
		*(L_28) = 0;
		return;
	}

IL_0075:
	{
		Il2CppSharedGenericObject* L_29 = ___1_value;
		if (!L_29)
		{
			goto IL_0134;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_30 = __this->___m_Free;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_30, NULL);
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t* L_32 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_33 = __this->___m_Free;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_33, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		*(L_32) = L_34;
		int32_t* L_35 = ___0_index;
		int32_t L_36 = *(L_35);
		int32_t L_37 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_36/L_37));
		int32_t* L_38 = ___0_index;
		int32_t L_39 = *(L_38);
		int32_t L_40 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_39%L_40));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_41 = __this->___m_Chunks;
		int32_t L_42 = V_5;
		NullCheck(L_41);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_43;
		L_43 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_41, L_42, NULL);
		int32_t L_44 = V_6;
		Il2CppSharedGenericObject* L_45 = ___1_value;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Il2CppSharedGenericObject*)L_45);
		return;
	}

IL_00c7:
	{
		int32_t* L_46 = ___0_index;
		int32_t L_47 = __this->___m_Length;
		V_9 = L_47;
		int32_t L_48 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_9;
		*(L_46) = L_49;
		int32_t* L_50 = ___0_index;
		int32_t L_51 = *(L_50);
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_52 = __this->___m_Chunks;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mA09DAC378E78D61150174B308A222FB598C1B216_inline(L_52, NULL);
		int32_t L_54 = __this->___m_ChunkSize;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_53, L_54)))))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_55 = __this->___m_Chunks;
		int32_t L_56 = __this->___m_ChunkSize;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_57 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_56);
		NullCheck(L_55);
		List_1_Add_mF106F76286D35F37A6488E53F808CB0394A8F59F_inline(L_55, L_57, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0109:
	{
		int32_t* L_58 = ___0_index;
		int32_t L_59 = *(L_58);
		int32_t L_60 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_59/L_60));
		int32_t* L_61 = ___0_index;
		int32_t L_62 = *(L_61);
		int32_t L_63 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_62%L_63));
		List_1_t04D19BE453AE5866F19EFB8FB21856ADF37F96EA* L_64 = __this->___m_Chunks;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_66;
		L_66 = List_1_get_Item_mCC309293366D22D4535488B86EBC8BC43C683D68(L_64, L_65, NULL);
		int32_t L_67 = V_8;
		Il2CppSharedGenericObject* L_68 = ___1_value;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Il2CppSharedGenericObject*)L_68);
	}

IL_0134:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 23062
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m40B48A3F93602CA3B11082174419F92C87991ED4_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_1 = (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		NullCheck(L_2);
		InvokerActionInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_2, L_4);
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		return;
	}
}
// Method Definition Index: 23063
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_GetValue_mE2FBA0F28BC33EEC4E02CE2979EA177A50E7F634_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_2, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_6, L_7);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}
}
// Method Definition Index: 23064
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA68231A6328DCD1A80E8B50EAB8B031C382F071E_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t* ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_14 = L_2;
	const Il2CppFullySharedGenericAny L_28 = L_2;
	const Il2CppFullySharedGenericAny L_30 = L_2;
	const Il2CppFullySharedGenericAny L_47 = L_2;
	const Il2CppFullySharedGenericAny L_70 = L_2;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_4, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = *(L_4);
		int32_t L_6 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = *(L_7);
		int32_t L_9 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_8%L_9));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_10 = __this->___m_Chunks;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12;
		L_12 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_10, L_11);
		int32_t L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_12);
		il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		return;
	}

IL_0034:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_15 = __this->___m_Free;
		int32_t* L_16 = ___0_index;
		int32_t L_17 = *(L_16);
		NullCheck(L_15);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_15, L_17, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_18 = ___0_index;
		int32_t L_19 = *(L_18);
		int32_t L_20 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_19/L_20));
		int32_t* L_21 = ___0_index;
		int32_t L_22 = *(L_21);
		int32_t L_23 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_22%L_23));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_24 = __this->___m_Chunks;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26;
		L_26 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_24, L_25);
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_26);
		il2cpp_codegen_memcpy((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		int32_t* L_29 = ___0_index;
		*(L_29) = 0;
		return;
	}

IL_0075:
	{
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_30);
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = __this->___m_Free;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_32, NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t* L_34 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_35 = __this->___m_Free;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_35, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		*(L_34) = L_36;
		int32_t* L_37 = ___0_index;
		int32_t L_38 = *(L_37);
		int32_t L_39 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_38/L_39));
		int32_t* L_40 = ___0_index;
		int32_t L_41 = *(L_40);
		int32_t L_42 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_41%L_42));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_43 = __this->___m_Chunks;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45;
		L_45 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_43, L_44);
		int32_t L_46 = V_6;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_45);
		il2cpp_codegen_memcpy((L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), L_47, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_45)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_46)), (void*)L_47);
		return;
	}

IL_00c7:
	{
		int32_t* L_48 = ___0_index;
		int32_t L_49 = __this->___m_Length;
		V_9 = L_49;
		int32_t L_50 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_9;
		*(L_48) = L_51;
		int32_t* L_52 = ___0_index;
		int32_t L_53 = *(L_52);
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_54 = __this->___m_Chunks;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ((  int32_t (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)))(L_54, NULL);
		int32_t L_56 = __this->___m_ChunkSize;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_55, L_56)))))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_57 = __this->___m_Chunks;
		int32_t L_58 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_59 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_58);
		NullCheck(L_57);
		InvokerActionInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), L_57, L_59);
	}

IL_0109:
	{
		int32_t* L_60 = ___0_index;
		int32_t L_61 = *(L_60);
		int32_t L_62 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_61/L_62));
		int32_t* L_63 = ___0_index;
		int32_t L_64 = *(L_63);
		int32_t L_65 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_64%L_65));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_66 = __this->___m_Chunks;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_68;
		L_68 = InvokerFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_66, L_67);
		int32_t L_69 = V_8;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		NullCheck(L_68);
		il2cpp_codegen_memcpy((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), L_70, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_69)), (void*)L_70);
	}

IL_0134:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mF815863FF5D3EA629C32EDB7C91FDFEB7D68BEBF_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* L_2 = (OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m3C5CC0B6ECB59EFBDAB06B0B16DEA560BC5CEFFB_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mFF1453645FFF22A603E2DF467AB4B111537DB8B9_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m9421E5D97A4BE7042D6B3DF096EFC08BC988B923_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m5328559BBFAB4987C88BEA28419DA9FDC9E784EF_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ManualResetValueTaskSourceCore_1_GetResult_mF39AF87BFAF45B5772972B3FBF48FBACE28C3FAE_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m19BFB766622EDE8258B3B9894A3004ED0EE3A051_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_43 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m703A20CDDC3611F8211B0715F3A6E2571BCA7485_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m0D1BCA6B69206FE601D18CE99C804285BEFCB977_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_7 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_9 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_10 = (ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mA096D168F1A82CF843AD35E32615EEBB5DC724E9(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t672A028EEA3083BAE16706591063C269FFDE9A46* L_11 = L_10;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D_m35FA3CF45AB0E616CF900A2898F7B93BF9542578(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0181594F490D085AC1D3192B292137CAC3DA7347_gshared (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0* L_19 = ((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA3BEEF39D9CB549713648878297D1750B09708E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE970D9419FAC2AE246864EB745D34A34A577849E_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387* L_2 = (OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mC43C9DA85DE35C28AE72C7650138B75D4DC6B67A_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m4BE3C92EF70A708115C401738ED985C1B654E0BA_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m74A3DD32CA7F3C950E28AAC95ED69245944AD02C_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m692F1C28071026485741643C07EEC30710B04A33_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 ManualResetValueTaskSourceCore_1_GetResult_m8AD46EC86EE64E18905CC9A16EBD6F05AFFE0A88_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t3D03EE259A0265E0EAE5F9969F3AB650E8FF7387 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04646BE1F16754BFB79C953ECFD27DA0D67111CF_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_43 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m2F8EBFF6402AE9E26BB989A10420D721D368B360_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m5A638CAC6C920C4A65353E9ADB7B980E15FD30B2_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_7 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_9 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_10 = (ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m7C12920F91882B8531ADEB8219501513FAE5ABD3(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tE7EA3C2220358D3C5C1D77202B90F31EAE0D874C* L_11 = L_10;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC_m7B67CFD8908704D7A55F54F7D7C84A11D30675F5(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA5843655C639E20276EDAC3539F0E8E19A9C63F_gshared (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97* L_19 = ((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t6E7BC3E8C848F82DC721172CAF1021D2B19B4A97_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mD5766A38A9D1C11FD35912C866131273D672336D_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8* L_2 = (OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m642D519C76F5A575328EBC3B68EEEA6308C35A60_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m95F190D91E54AB3C573B32A6B930912EC07DAE12_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEE079E0EA63A4DB1153740DF1F598A7FEE77BA61_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m62C6BACDBFAC1AE4F903BD3E1D82064FE0379F59_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 ManualResetValueTaskSourceCore_1_GetResult_mE5D11E7F6A12F171CAAF3B84AA59C7643124A67A_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t6B49F342A8269BA149B305C7DA5F6BE0190356E8 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mFCA1B9BF69C4D1051066326D3C5DF62C5F066CFA_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_43 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mC1745A8F5CDCEAC379EAEF08ABA28C5077DC2705_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m7D26332961DBE1B31499C44C36949FF9DD01113B_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_7 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_9 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_10 = (ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mCFC760AE37F29B90109B3885633629190BBFE1A4(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tC10743F76A0790F50F3CD723B540FD69976266A1* L_11 = L_10;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369_m58F55B6F98BDD809220D8BCECCB9B7C98C617362(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mDA268CF54F88C36F9A4B78168CAE0192DA9DDBAB_gshared (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D* L_19 = ((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t243051515683F19E9D582999132955C7316D3A5D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mE441848250908EBD7088016B27639218657D76B3_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D* L_2 = (OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m93027472B2C83716E6CA8B31C921AA8B2293D6BF_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____result))->____value), (void*)NULL);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mAB45E37D8508DD4A026B4C084B3BCF071E1CCBD1_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mF2F887C8166E3050A2258BDDDC74B681DE6ECB53_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m069971BC020CAC3542B68F7F5AE4420CAE6F4E2E_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D ManualResetValueTaskSourceCore_1_GetResult_m9EA98CA58B8BEEE6403BAD0A004F82EB0A295CF2_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRResult_2_t54D9EA8EC84CA3CF683785E98ECDF23384217D5D L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m2D5AC6EA5F802A65F0C119C9A87EFCB20617CD7B_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_43 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m1A35303C478906796B61A49780ACB94402452865_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m46EC893B3BF313DCA8D29EB095104CBDE1464458_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_7 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_9 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_10 = (ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3C0646D90D93985DFADB16CB7C77676EA91B9890(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t8FBAC9559C1E898A8F766E6FA28A193F7EAE47B2* L_11 = L_10;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453_mB6A7135BE82DF261F28CEC2690136CA2B1E7F9AA(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m3F74164B78F264673E10CCB66E32AE6B97B08758_gshared (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549* L_19 = ((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t862699EF32B5C89E5B3D2BC5721A322CFF751549_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m449BA9EC55349EF349E738ABAE9265AE1BFABC08_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD* L_2 = (ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mA6F82486BB6A1BFA49636709FF1BC84FDBE59D96_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_m8D9350AAF4FD3265566096119CFF252BB72C8CC2_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m229C1DFF5BFE3DB429851D460271D58A96A2ED12_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mD0AFF0541AEA16977FA06D967C21B35145A467CF_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD ManualResetValueTaskSourceCore_1_GetResult_m1AF193DE3B26F47F216A34C207988E0A6E580B29_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		ValueTuple_2_tEB67ADA48C3900E430F322F8E60BF5D7ECA7E5BD L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mC522B49D7D2CF9A0FCA0037F677F1460DE38EF5E_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_43 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_mD27F3B49EAFEC0E104A1F35DEF16EF00E5D5CFE4_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA59B38D27666DBDED2450A04CD6AF18E90EB549C_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_7 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_9 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_10 = (ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m1D1138C9C2B05332D3995811A2D3FA4E994377EA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tF9AA533508391C1C473424D094A5F902CB23CCA8* L_11 = L_10;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D_mF93DCD1BBC9B00DE84C9DCB034F901983D030ABF(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m6BE056D00F144F8325F640BB3E2FD527507A3F00_gshared (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC* L_19 = ((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77077D836A90251366DAB2E6DEE8AD2BD15E33AC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m0D16E61936A591EE50C6A0775F03BA50C38BD32A (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		bool* L_2 = (bool*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m68CA264778C35B72D3720931E7657F724D12E04C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, bool ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mB0640DBFBC14BC4F6CEBEA405E621B9D61B86D4B (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mDBEB9C4A34525DB098B1BB39EB7C82C6F3A59EBB (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m9AB7F5CEFC512304D381AA39FCC5C39F90DE1061 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_GetResult_m966754ADB9C524C24F22E830B21D10BEE4CDBC6E (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		bool L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB201EA33D774FB460FF8D5E1F31D81EA8B9BE15C (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_43 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m97DEE9D37DD1818B4CF122DF1DFBCBD42E751B35 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mB24EA868BE690555464C51CE3F77FB00054E94A8 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_7 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_9 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_10 = (ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mA83DB47025F22195C2BB2F503DE6164EADABC2A2(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tAD1FFDDA4A6064702B55372F2898BC0EC84CE6FD* L_11 = L_10;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37_m420C8B58A424BD3BB9D90950711F6105EE1A852E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_mB1E431588F126DE18FB75EDF9F35BE8931EC4733 (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F* L_19 = ((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tCE7F5F54F6D5DAE447C5B8934FBB22737E7F550F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mA1124455316B9A21B574B7534B7634930DBF4819 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* L_2 = (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_mAB1E4665D9FAE9382F8E3D9F3DA6E1FDEBDB8988 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mA9CAF16B00FD644238D06CD1E400C5EAAC77B223 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mEB84EF7AF3EF779326591C4029D2D67800C83F79 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_mAF61D032C85265E85C35885CF0BDE1B05C1CBBBA (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ManualResetValueTaskSourceCore_1_GetResult_m3414631E4E6442F3387FD5696353E4DC4D996F8B (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mB4BD238C2FB1A7A1ACE0A8BB5BBEE72994F99850 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_43 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m22BCEF5BBD66484EF51CA3716970D633C8EA9A2E (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mADD3D7059A7CB42C35DF325CAE269F53458FCCA1 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_7 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_9 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_10 = (ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m3731483A5BF1AE81DEA361D571C6EE457C09E27D(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tA04797DFFA3098FA87766A266E0932E7CE5490D5* L_11 = L_10;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F_m3A6840FF0F517F607E3109C22634630B43E05B3E(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m452BF4BDE67423D27473821F91A1ECB4C6ED1265 (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6* L_19 = ((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9330781F0766B5BA0D736B9DCEA5A924E486BDB6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mC6B64A53E44C35B583D1A2391FCC1BE81E165344_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m844EBABC78CC898DA13FB6303B8C6E15893654EB_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Il2CppSharedGenericObject* ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Il2CppSharedGenericObject* L_0 = ___0_result;
		__this->____result = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result), (void*)L_0);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mF463755DA8463216488439C2448C5A2C7E25EF54_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_mBF5C8CF17B560BDD9AB1A454DE90029164CA5F4C_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m3030DC4B16C28DA7A451B34E75CA6913985B005D_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ManualResetValueTaskSourceCore_1_GetResult_m09A654557257394869C7432EB05B8B88A69C360E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		Il2CppSharedGenericObject* L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m04AF624DBD24D07C63B7257D036F1B416AC9E7A6_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_43 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m91DF19513E482B313D978A4F338F3D7DAE23F88E_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_mA73B54818322F63673653B5E897E9A8943792335_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_7 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_9 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_10 = (ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m41F97653966262D0B31ED2A6A46DDB6C61CE0BCA(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t67723D23B6E12B1A39AF8DAFDD46CAF101BC0B7E* L_11 = L_10;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829_m741BB25BF530740A4A26117257B2D7C0341DBA9D(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m7D5F27A689D48EDCC6D258A7CAA24410AB6B0501_gshared (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1* L_19 = ((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1CCC98F74B50C6C359D21C0FE6A217F73DA333E1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mDD02D741785B516AF918F4B558FFA1B98ACD3D0F_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m510A349D977D43AC9401DDD55E2CDBB91168D560_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		il2cpp_codegen_write_field_data<int16_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),7), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_1);
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (bool)0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_write_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),6), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		il2cpp_codegen_write_field_data<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), NULL);
		il2cpp_codegen_write_field_data<Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m963686376F48F1A227E9CC1FF86B449DAFC1B3CD_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)) ? ___0_result : &___0_result), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),5), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_0, SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mF7BF08920989E5C2698F01D53613CACD21D541F6_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		il2cpp_codegen_write_field_data<ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),6), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_1);
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m755C0341857AF92FAEFFC86C4617CEA4206620E3_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m632C224C7134BD4B5E7A0A94D88D694159C61855_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_GetResult_m2591EF1326047360EF20288EA0304D8C1A6E9BA1_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	const uint32_t SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		bool L_1 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = *(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TResult_t13ED47614072EE2803EA037533C4628ECF33F3B5);
		return;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m42E3144E0F4EBF175C4015BDF7EBFD6E0BD1707E_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12)))(__this, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		il2cpp_codegen_write_field_data<ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22;
		L_22 = il2cpp_intrinsic_interlocked_compare_exchange((((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))), L_21, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_22;
	}

IL_0089:
	{
		RuntimeObject* L_23 = V_0;
		if (!L_23)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_24 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_25 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_24) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_25)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_26 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_5 = L_26;
		RuntimeObject* L_27 = V_5;
		if (!L_27)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_28 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_28, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_29 = V_3;
		if (L_29)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_30 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_30, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_31 = V_4;
		if (L_31)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_32 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_32)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_33 = ___0_continuation;
		RuntimeObject* L_34 = ___1_state;
		bool L_35;
		L_35 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_33, L_34, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_36 = ___0_continuation;
		RuntimeObject* L_37 = ___1_state;
		bool L_38;
		L_38 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_36, L_37, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_39 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_40 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = L_40;
		if (L_41)
		{
			G_B24_0 = L_41;
			G_B24_1 = L_39;
			goto IL_00fd;
		}
		G_B23_0 = L_41;
		G_B23_1 = L_39;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_42 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_43 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_43, (RuntimeObject*)L_42, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = L_43;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_44);
		G_B24_0 = L_44;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_45 = ___0_continuation;
		RuntimeObject* L_46 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_47;
		L_47 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_45, L_46, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_47);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_48;
		L_48 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_49 = ___0_continuation;
		RuntimeObject* L_50 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_51;
		L_51 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_52 = V_4;
		NullCheck(L_48);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_53;
		L_53 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_48, L_49, L_50, L_51, 8, L_52, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m42805625C11AAC4FC1096AD7AAF0A9895BCD46D1_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = *(int16_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m44775A2F3DF4BE1B461339AF576A094007609137_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (bool)1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange((((Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)))), L_2, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_3)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_6 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_7 = L_6;
		if (L_7)
		{
			G_B7_0 = L_7;
			G_B7_1 = L_5;
			goto IL_005c;
		}
		G_B6_0 = L_7;
		G_B6_1 = L_5;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_8 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_9 = (ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		((  void (*) (ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17)))(L_9, (RuntimeObject*)L_8, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB* L_10 = L_9;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_10);
		G_B7_0 = L_10;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*, ContextCallback_1_tC53F7F8F1D7806FD2C253FE7D1679D6AB9D055EB*, ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18)))(G_B7_1, G_B7_0, __this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return;
	}

IL_0063:
	{
		((  void (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m64FDB14F39773A4F0C60CB557B4E6C6A4AFF152A_fshared (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ((  bool (*) (ManualResetValueTaskSourceCore_1_t72FE11A135308C8A62DD0AC910D879E7498C2A3A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = *(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_9 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_12 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_15 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE* L_19 = ((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFF236776F3DA98310D21A41631C1081766AA83CE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_23 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = *(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_27 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_mDF6BC21AC744EBC1DABDB771AAF46D6EF330350F_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		int32_t* L_2 = (int32_t*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(int32_t));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m1C6A17BAD6622AF12F90F4E05F6A2EF2C1043D38_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int32_t ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mDCCDA1C3EFA844958908E7B0BCF702A6F8919933_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m40C4F5702D2D1E9F251EF3B30B718AF3CF82967F_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m38EDE9F358A0122B4AF456DDECC17CBA803FF560_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetResult_mDF08F335DA94C1BD14307BE9CA72E92781D6CF30_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		int32_t L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_m4BEA9C534DE5896C82C81B91A6B71D4A5CEF02B1_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_43 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, (RuntimeObject*)L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m7497292045E7DF8077D032B4B6F940B94FB3904B_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m8DC3D3853FCD71A41DDE826A1EDA3A0BD994E637_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_7 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_9 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_10 = (ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_m01825BFFAE5F57628A29853BB2D094F6938D2FC0(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t458B05AFA5BD117C9B15A021B076DC4CA350AFD6* L_11 = L_10;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213_m4DC286B7662C762CBDB0A7E9C941BA7DE2925D0D(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m946192C7A365B36E97D01DB10AC1C5F16B9B6229_gshared (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA* L_19 = ((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t03F9C2CA4277289066D5A446E95CC890A70C33FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5428
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_Reset_m2C9FA4F1EFF240198BC2E23FEEED563F75943CA9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		int16_t L_1 = (il2cpp_codegen_conv<int16_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add((int32_t)L_0, 1)),NULL));
		__this->____version = L_1;
		__this->____completed = (bool)0;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8* L_2 = (Metrics_t865BF0741490865117A79705F58784742D6F02B8*)(&__this->____result);
		il2cpp_codegen_initobj(L_2, sizeof(Metrics_t865BF0741490865117A79705F58784742D6F02B8));
		__this->____error = (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)(ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757*)NULL);
		__this->____executionContext = (ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710*)NULL);
		__this->____capturedContext = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)NULL);
		__this->____continuation = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuation), (void*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		__this->____continuationState = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)NULL);
		return;
	}
}
// Method Definition Index: 5429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetResult_m57DBA55193D0E8E9B2773FAD70255D7E5E1402D1 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_result, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_0 = ___0_result;
		__this->____result = L_0;
		ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SetException_mCDF3AD1FEA7C4FDAF0DCD2B0747301DE32DC2921 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = ___0_error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(L_0, NULL);
		__this->____error = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error), (void*)L_1);
		ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return;
	}
}
// Method Definition Index: 5431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t ManualResetValueTaskSourceCore_1_get_Version_m5E989EA24BC5AEEA00447BBC85971C2B7FDADCF0 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = __this->____version;
		return L_0;
	}
}
// Method Definition Index: 5432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManualResetValueTaskSourceCore_1_GetStatus_m2C7749654532AC9D59391794B0162A4787FDF045 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = __this->____error;
		NullCheck(L_3);
		Exception_t* L_4;
		L_4 = ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline(L_3, NULL);
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_4, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_002b;
		}
	}
	{
		return (int32_t)(2);
	}

IL_002b:
	{
		return (int32_t)(3);
	}

IL_002d:
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 5433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 ManualResetValueTaskSourceCore_1_GetResult_m078411966BB0BF14547C8ABEA1A4DCE7A591FD05 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B4_0 = NULL;
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* G_B3_0 = NULL;
	{
		int16_t L_0 = ___0_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_0, NULL);
		bool L_1 = __this->____completed;
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_0014:
	{
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_2 = __this->____error;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_3 = L_2;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0020;
		}
		G_B3_0 = L_3;
	}
	{
		goto IL_0025;
	}

IL_0020:
	{
		NullCheck(G_B4_0);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(G_B4_0, NULL);
	}

IL_0025:
	{
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_4 = __this->____result;
		return L_4;
	}
}
// Method Definition Index: 5434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_OnCompleted_mF6C089650C0CB25B2E5EEAC72BB996FF391D919B (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, int16_t ___2_token, int32_t ___3_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	RuntimeObject* V_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_1 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_2 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_3 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B24_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B24_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B23_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B23_1 = NULL;
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___0_continuation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F57E36217901A5B3A93DB73B6E3E63001C94CD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int16_t L_2 = ___2_token;
		ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE(__this, L_2, NULL);
		int32_t L_3 = ___3_flags;
		if (!((int32_t)((int32_t)L_3&2)))
		{
			goto IL_0026;
		}
	}
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_4;
		L_4 = ExecutionContext_Capture_mF143CDB1F0499A42C277190752B864183090DF7F(NULL);
		__this->____executionContext = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____executionContext), (void*)L_4);
	}

IL_0026:
	{
		int32_t L_5 = ___3_flags;
		if (!((int32_t)((int32_t)L_5&1)))
		{
			goto IL_006a;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_6;
		L_6 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		V_1 = L_6;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = il2cpp_codegen_object_get_type(L_8);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0055;
		}
	}
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_13 = V_1;
		__this->____capturedContext = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_13);
		goto IL_006a;
	}

IL_0055:
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_14;
		L_14 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		V_2 = L_14;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_15 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_16;
		L_16 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		if ((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_15) == ((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_17 = V_2;
		__this->____capturedContext = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____capturedContext), (void*)L_17);
	}

IL_006a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = __this->____continuation;
		V_0 = L_18;
		RuntimeObject* L_19 = V_0;
		if (L_19)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_20 = ___1_state;
		__this->____continuationState = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____continuationState), (void*)L_20);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_21 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ___0_continuation;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_21, L_22, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		V_0 = L_23;
	}

IL_0089:
	{
		RuntimeObject* L_24 = V_0;
		if (!L_24)
		{
			goto IL_011f;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		if ((((RuntimeObject*)(RuntimeObject*)L_25) == ((RuntimeObject*)(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26)))
		{
			goto IL_009c;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_009c:
	{
		RuntimeObject* L_27 = __this->____capturedContext;
		V_5 = L_27;
		RuntimeObject* L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c1;
		}
	}
	{
		RuntimeObject* L_29 = V_5;
		V_3 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_29, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_30 = V_3;
		if (L_30)
		{
			goto IL_00dd;
		}
	}
	{
		RuntimeObject* L_31 = V_5;
		V_4 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_31, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_32 = V_4;
		if (L_32)
		{
			goto IL_010a;
		}
	}
	{
		return;
	}

IL_00c1:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_33 = __this->____executionContext;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_34 = ___0_continuation;
		RuntimeObject* L_35 = ___1_state;
		bool L_36;
		L_36 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_34, L_35, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_00d3:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_37 = ___0_continuation;
		RuntimeObject* L_38 = ___1_state;
		bool L_39;
		L_39 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_37, L_38, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_00dd:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_40 = V_3;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_41 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_42 = L_41;
		if (L_42)
		{
			G_B24_0 = L_42;
			G_B24_1 = L_40;
			goto IL_00fd;
		}
		G_B23_0 = L_42;
		G_B23_1 = L_40;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_43 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_44 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_44, L_43, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_45 = L_44;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__19_0), (void*)L_45);
		G_B24_0 = L_45;
		G_B24_1 = G_B23_1;
	}

IL_00fd:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_46 = ___0_continuation;
		RuntimeObject* L_47 = ___1_state;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_48;
		L_48 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_46, L_47, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B24_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B24_1, G_B24_0, L_48);
		return;
	}

IL_010a:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_49;
		L_49 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_50 = ___0_continuation;
		RuntimeObject* L_51 = ___1_state;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_52;
		L_52 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_53 = V_4;
		NullCheck(L_49);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_54;
		L_54 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_49, L_50, L_51, L_52, 8, L_53, NULL);
	}

IL_011f:
	{
		return;
	}
}
// Method Definition Index: 5435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_ValidateToken_m3680EA18FD6CD25E588BAC2A98CCEFF1FFAC0ABE (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, int16_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	//<source_info:<no-source>:1>
	{
		int16_t L_0 = ___0_token;
		int16_t L_1 = __this->____version;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_000e;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000e:
	{
		return;
	}
}
// Method Definition Index: 5436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_SignalCompletion_m9F44992550EC37168ECE5A5ADCDF9F3BCB7DB7E9 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit);
	//<source_info:<no-source>:1>
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* G_B7_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B7_1 = NULL;
	ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* G_B6_0 = NULL;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* G_B6_1 = NULL;
	{
		bool L_0 = __this->____completed;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ManualResetValueTaskSourceCoreShared_ThrowInvalidOperationException_m3F9B3AAC098E5831CAF7C6566DF838B1380AC689(NULL);
	}

IL_000d:
	{
		__this->____completed = (bool)1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = __this->____continuation;
		if (L_1)
		{
			goto IL_002f;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87**)(&__this->____continuation);
		CHECKED_LOCAL_INIT(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticInit,(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ((ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_StaticFields*)il2cpp_codegen_static_fields_for(ManualResetValueTaskSourceCoreShared_tF48FEE2620128CC09662080DA5C1FBE8D6BDB113_il2cpp_TypeInfo_var))->___s_sentinel;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4;
		L_4 = il2cpp_intrinsic_interlocked_compare_exchange(L_2, L_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}

IL_002f:
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_5 = __this->____executionContext;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_6 = __this->____executionContext;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_7 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0;
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_8 = L_7;
		if (L_8)
		{
			G_B7_0 = L_8;
			G_B7_1 = L_6;
			goto IL_005c;
		}
		G_B6_0 = L_8;
		G_B6_1 = L_6;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_9 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_10 = (ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		ContextCallback_1__ctor_mD548F525E4434B520EF30427382B02C2CBE0C684(L_10, L_9, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15)), NULL);
		ContextCallback_1_t396FB402AB13082150A09C5F559C2519A23142ED* L_11 = L_10;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__21_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
	}

IL_005c:
	{
		CHECKED_LOCAL_INIT(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_StaticInit,(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ExecutionContext_RunInternal_TisManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3_mCCAC514DA46F3E4CD1A9F9209E62610402056B67(G_B7_1, G_B7_0, __this, NULL);
		return;
	}

IL_0063:
	{
		ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
	}

IL_0069:
	{
		return;
	}
}
// Method Definition Index: 5437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetValueTaskSourceCore_1_InvokeContinuation_m0CCE5737661CBF7C22875B3AC93AC3CE5C0D4CF5 (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit);
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	CHECKED_LOCAL(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit);
	//<source_info:<no-source>:1>
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B11_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B11_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B10_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B10_1 = NULL;
	{
		RuntimeObject* L_0 = __this->____capturedContext;
		V_2 = L_0;
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		V_0 = ((SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)IsInstClass((RuntimeObject*)L_2, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_il2cpp_TypeInfo_var));
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3 = V_0;
		if (L_3)
		{
			goto IL_006c;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		V_1 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)IsInstClass((RuntimeObject*)L_4, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var));
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = V_1;
		if (L_5)
		{
			goto IL_00a3;
		}
	}
	{
		return;
	}

IL_0022:
	{
		bool L_6;
		L_6 = ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* L_7 = __this->____executionContext;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = __this->____continuation;
		RuntimeObject* L_9 = __this->____continuationState;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D(L_8, L_9, (bool)1, ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_RuntimeMethod_var);
		return;
	}

IL_0046:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = __this->____continuation;
		RuntimeObject* L_12 = __this->____continuationState;
		bool L_13;
		L_13 = ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2(L_11, L_12, (bool)1, ThreadPool_UnsafeQueueUserWorkItem_TisRuntimeObject_m9D9DDA6CF0C5AF802787DA130AE6466F05463CE2_RuntimeMethod_var);
		return;
	}

IL_005a:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = __this->____continuation;
		RuntimeObject* L_15 = __this->____continuationState;
		NullCheck(L_14);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_14, L_15, NULL);
		return;
	}

IL_006c:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_16 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_17 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18 = L_17;
		if (L_18)
		{
			G_B11_0 = L_18;
			G_B11_1 = L_16;
			goto IL_008c;
		}
		G_B10_0 = L_18;
		G_B10_1 = L_16;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_tE0AD7092C369D221F733490F95B9BDE6513BDDEE_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C* L_19 = ((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_20 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_20, L_19, (intptr_t)((void*)il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21)), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21 = L_20;
		((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD799FF210C6D6B3C9BD39E73A8C1316CAA3D808C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)))->___U3CU3E9__22_0), (void*)L_21);
		G_B11_0 = L_21;
		G_B11_1 = G_B10_1;
	}

IL_008c:
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = __this->____continuation;
		RuntimeObject* L_23 = __this->____continuationState;
		Tuple_2_t396DAF6E22C45066CB95306563EE4695D7F339D1* L_24;
		L_24 = Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103(L_22, L_23, Tuple_Create_TisAction_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_TisRuntimeObject_m94BEA63DE2152052FA76374219DDF19A32EB8103_RuntimeMethod_var);
		NullCheck(G_B11_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5, G_B11_1, G_B11_0, L_24);
		return;
	}

IL_00a3:
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_25;
		L_25 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = __this->____continuation;
		RuntimeObject* L_27 = __this->____continuationState;
		CHECKED_LOCAL_INIT(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticInit,(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
		L_28 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_29 = V_1;
		NullCheck(L_25);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
		L_30 = TaskFactory_StartNew_m88C988599EC138D716C0822099C3E6DCC79CC4E8(L_25, L_26, L_27, L_28, 8, L_29, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 5427
// Method Definition Index: 5428
// Method Definition Index: 5429
// Method Definition Index: 5430
// Method Definition Index: 5431
// Method Definition Index: 5432
// Method Definition Index: 5433
// Method Definition Index: 5434
// Method Definition Index: 5435
// Method Definition Index: 5436
// Method Definition Index: 5437
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 8411
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* ExceptionDispatchInfo_get_SourceException_m981DC7F90598BE65BD4FA1A8340025A3A7CC3DBE_inline (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Exception_t* L_0 = __this->___m_Exception;
		return L_0;
	}
}
// Method Definition Index: 5390
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticInit,(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
// Method Definition Index: 5187
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticInit,(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 924
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11613
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
// Method Definition Index: 11708
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 11602
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m093A31DD2E7BC5FFF95B0AA090016C157DF992EE_gshared_inline (ManualResetValueTaskSourceCore_1_t56CD4BF356F919ED63AFF6C421B06A9338A1E46D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 886
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5_gshared_inline (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mB4DEDA806D65C8147C9C2647F002B6B087BF04B8_gshared_inline (ManualResetValueTaskSourceCore_1_t29D5EF48689CDF2D96993911AC27586ED2335BDC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mA956DB18E3049CFF008D85592FE0439CEC17C7AD_gshared_inline (ManualResetValueTaskSourceCore_1_t3C3C631755B9DEBA5C99329A1A08DC06AC4C2369* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBFCB53D2E3B36554F509BE67C1FF75783D4D022A_gshared_inline (ManualResetValueTaskSourceCore_1_tEA114BD869CBDAE478D52EE18F57852E4884B453* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m74353EF9C595EE64A7F883078921A1F7871F6DA7_gshared_inline (ManualResetValueTaskSourceCore_1_tE312DF5B99565440C48B335C00D537B9A6EEF81D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mBB3D52A02B30A241AFE943975FC88CB479CC9BA6_inline (ManualResetValueTaskSourceCore_1_t2E398A2A234CF04D398646A8A8343CCA832C8E37* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_mC51C1433B51F788E901E9DFC1E221C7E62D14ED8_inline (ManualResetValueTaskSourceCore_1_t187D4194C22D6F37F094AE93C58BDA9217135D4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m6DBFF2F8AC55AA5E7A688147778119AD22610AF0_gshared_inline (ManualResetValueTaskSourceCore_1_t41DA9F210C147CE7185AB72FA69DA9E3A92F3829* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m7AA38F3A1E59A5742A8E009254BB813082096A71_gshared_inline (ManualResetValueTaskSourceCore_1_t050EC895DA1652FC2E0FF285703D662C64568213* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 5427
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ManualResetValueTaskSourceCore_1_get_RunContinuationsAsynchronously_m799BFE7851BF2CA42E5815045BA67A0FFDBBBFDB_inline (ManualResetValueTaskSourceCore_1_t577E7A3888BD47E24571A9F769B80447F6E595B3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->___U3CRunContinuationsAsynchronouslyU3Ek__BackingField;
		return L_0;
	}
}
