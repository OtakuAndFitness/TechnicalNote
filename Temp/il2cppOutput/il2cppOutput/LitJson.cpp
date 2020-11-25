#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// LitJson.ExporterFunc
struct ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729;
// LitJson.FsmContext
struct FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41;
// LitJson.IJsonWrapper
struct IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E;
// LitJson.ImporterFunc
struct ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996;
// LitJson.JsonException
struct JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3;
// LitJson.JsonMapper/<>c
struct U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9;
// LitJson.JsonMockWrapper
struct JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5;
// LitJson.JsonReader
struct JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF;
// LitJson.JsonWriter
struct JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C;
// LitJson.Lexer
struct Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D;
// LitJson.Lexer/StateHandler
struct StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F;
// LitJson.WrapperFactory
struct WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9;
// LitJson.WriterContext
struct WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t0D797D34BCC31610DB823979E94E65C2B21C72E0;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.PropertyMetadata>[]
struct EntryU5BU5D_t065CA38087896A3CA7C772EBE50D36D792D53368;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_t40509DEA53FCFFDA057DB33EC7EF8E0029F7063F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tE67C277085FB6692C847697B134BE1D606FF7C3F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_tBA8D25FB2CCDEB3B6B761BA8B0A75F38C04E2E6C;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tB6200BA348CADE97FE5BB18E9186D4B70662157B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_t6898592DC11B05E44B4B8A5BC687D8B5F9257CAA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t1865D7D24B2E885F4641CC2E2998387FE086CC29;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Reflection.MethodInfo>[]
struct EntryU5BU5D_t043EE990153568B89918B768916330A9870D0981;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.PropertyMetadata>
struct KeyCollection_t0C495B429F03BD0076A69A9B2B8015E059AC483F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t5127EA4A758B5EB1DFBC4365200E04E00C0BB508;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_tE4A60C0BB4D8E026212542D87F8D68C66145C422;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_tD2E9194FA8BB604E896EB56294540BB3119F44C4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t2C98C8D8DDE6B086FD1B34820AEEF4624AEC79D0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_t1A5D675736CA90B03C8E6C3E03C2E43280983320;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t4A72383A6031ABC69498AB6B723F91B2BF6E7ED5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Reflection.MethodInfo>
struct KeyCollection_t237A967C48397E731AF61F9814920A051D7F0893;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.PropertyMetadata>
struct ValueCollection_t8EB80E2F23725AF695E0BED4CB3B74F7DAE2DFEF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_tB811E53DF952C1E02A1A417313DB9FC9986FFDB2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_tE48B9D9F10D0E98A79924F5B4F72F4C331FC1C85;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_tDA3D21F84A111755F97B3A9DCEA1EF6080401647;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_tBB19478B0230EBBDA592C4D4BCF5B569AC0E40A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t391E74F2C492AB9543F38674674361F9075B9115;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_tB97527041393E761353E3E04A8485C0923901051;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Reflection.MethodInfo>
struct ValueCollection_t9A99F864F591235BA6444EE23DF19D8D71EFA790;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_t1AB3AB18A00094DAA04D186C39E9C3583DA81E34;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_tF8AA93854054A0DF1B7A6D1664C696E7DBB89F6E;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>
struct Dictionary_2_t296DAF07515BBF5D3E6B6567A0A7DC63EBE4C0C8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_tEB9AB3465C567F1D192C87B065D1597A30CD1A45;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t6D1851853064D3BA491E127BB5677E7476442817;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t1136B31A3DA318C8255489B8821729C09B481976;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t456EB67407D2045A257B66A3A25A825E883FD027;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringReader
struct StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12;
// System.IO.StringWriter
struct StringWriter_t194EF1526E072B93984370042AA80926C2EB6139;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.IO.TextWriter
struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t442C458BD98E4E136DB99F73AD0C24FD0F1D3125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t6D1851853064D3BA491E127BB5677E7476442817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tEB9AB3465C567F1D192C87B065D1597A30CD1A45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserToken_t7E90A15CF79B130BFB728C7DDA8C080BBA3107B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE2E78C029FD76CE21A9EE68AEB00ADE0BA18CD;
IL2CPP_EXTERN_C String_t* _stringLiteral0BF09CD84D74BA36B0ED23170FB17D4EB584ACEA;
IL2CPP_EXTERN_C String_t* _stringLiteral1316FEA343570BB72F1A092A1562B9CB8219F3EE;
IL2CPP_EXTERN_C String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FBB4021455B5C968D58CDFB3D5CCF55BF0DD115;
IL2CPP_EXTERN_C String_t* _stringLiteral24B55FE81E9E7B11798D3A4E4677DD48FFC81559;
IL2CPP_EXTERN_C String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
IL2CPP_EXTERN_C String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
IL2CPP_EXTERN_C String_t* _stringLiteral53C44B2B93C7F97C5385D97F275C54FC27BE59DC;
IL2CPP_EXTERN_C String_t* _stringLiteral5E6979B41B8AB543B137F38D8025FF8C3E03A205;
IL2CPP_EXTERN_C String_t* _stringLiteral614847534C353A23D22B5E3523FA7C6C6432E5EC;
IL2CPP_EXTERN_C String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
IL2CPP_EXTERN_C String_t* _stringLiteral91C19854D31174DD7CA99282D92BE83B83BB3E09;
IL2CPP_EXTERN_C String_t* _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283;
IL2CPP_EXTERN_C String_t* _stringLiteral973776CA0AE32EA889FC2291F84C4925F2285DDE;
IL2CPP_EXTERN_C String_t* _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728;
IL2CPP_EXTERN_C String_t* _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B;
IL2CPP_EXTERN_C String_t* _stringLiteralBE101362718475DAD19D92CBB08995C773D5CB3A;
IL2CPP_EXTERN_C String_t* _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C;
IL2CPP_EXTERN_C String_t* _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015;
IL2CPP_EXTERN_C String_t* _stringLiteralECDDA59AEA5EE67D7D854C969CCF7F4F4B4A4C54;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
IL2CPP_EXTERN_C String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
IL2CPP_EXTERN_C String_t* _stringLiteralF350BB5356B7F3B068F47C6C3D679E77653586B5;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m467C3BB2307AF55F7F4EDE8152CC6C818C7D4112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m47FCE594FBABAECEC0E7172D2E50DB4ADF086F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m54E1BFE2B29C490665F7BC774A0C3C5DDD0303CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9A9FA40B0F08D9B3BBCF337CA3F853B91CB3FA2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA1AFBAA384A9D66BEC2094B122CAB2E11DD3ACE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC3527C85891715F1D64A2759434B0ECD1B0D5A63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mD282A0A9130F377DAF7B0FC4E71D55C28AA3F194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_mD0FC738D1A47380BE379A8CDE21F73F83F028E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m184A28E61E48432144151B013C6475B88A47BA53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_mBB2C0F399A60256D5D23B9E22D4ED6AD49BC36EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_m69F4F981A5A2A86F25727B946FF1909519235EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_mB21E6B8401A51B56B276BC80FBD7B22EA27BB135_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_m2DFAEF35051E6F22442BBABF8A2B3175F76D7C73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_m3CCAF2E714272838D0A2277B280E745548846850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_m663B1945148620242FFD8436EE524A220FD5E37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mFC7C3E9E267F30F31D3FC861DB1C2389D94EFAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mF05624C8B35FF9537E845D3B1E16286DBBF544D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_mCC42729993D2DFFA42C3AD48DEFF182B383DFCC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_mCBE6C67B7B94C4A0391E47D8C14CF975D92AE1BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m486F6AB68BA91736BFCED13B818D08675DDFA10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_mC7DE40B0046A0E59B994297E84EBBEC75473CF9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_mFB00EA0A9EFDE52CCEE077E0E7E5DFE85BC30B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_m2F5C00031663E5F5B231F17AD0A0416CF5332FF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_m54F35776ED97C41C49172D6D3AD2CB2D18A7A8B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m42BB10DBEFB1165A0834512EC0E7EB402D8BC1C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_mEEC0F81DA0D20EA4CF249A11E3CE3C7DA218A736_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m823589B0E1DFD077348F2ED79BE79522CD7E7DD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_m7B641B2B278BA0B121ACEB26B8EE36EA3A617E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_mB579357556B87B7BCEBAEAF652E13E628DCAF3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_m80C359CC8EAE78070CB2E246B20C213F4C584565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_m6C794EDE9CD28C38C0CE979DB2C788C50B3E86D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_mCDBC5DEEC4135AB2AD58C6DD62E08E255C4D3798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_m3F59A00291894A1E5013E3696B5E6892D1130AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mC7C85EBB7246B7F5FA572A0AF9DF13D96E2A9504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m76FC2C4F2731CC58D35D7A4E7EF89D06667BB3DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m47DCA63C6AE3F43E8A3AED08384CEDC7EEB1060B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CReadSkipU3Eb__23_0_m5A8B1622D8833688C4103728C25600594DF83334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m9F304B9C0D4160D1ADC9AA05B600683C1964E3B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mA747A5035FF59F88A0D5EC09B1A1824E6A69237D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mE67447E11989A7CC91081096EC0DE74CC271437B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m927A7ED61E08C59A17911A0945486163A20756A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m67453B9FF29EB06B15CD7471D1E25BABB81D6E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m917FCA7FBEB30B142E965F8BAE659E537BC807A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mF8D38192BBAF46C2B16003BE2D7E463D2C7C0607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m9E6A8DB9620E42D56968C1EDDDBB1E77FFF4EF6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7F008A252A552180B19E36732BEAA7767B1C114B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m5C40CCF7BE908771FF59F32E07ACA7D03C208F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mB0949C65E6169801311A741F1F52BA7C41C7A032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m2A393ADE519270079F02ED4BA38E376D1812172B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mA82EA601B161665FD433CC2464BC4703738BFEF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m8FB27E0834B6DE0FB0A2A707D45F2716E0F6B34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m95641195F248CA1D2B9F6C7702C5C6D704454E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m030F930B00FF1823717C4948BF86FBEED61B228A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m7D7C4DDE3D88AC8FF16C26C877AB8FD85D8C66BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m45A2BEC70963C0137D5F95A9F9D785D791DD8A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m57C04F16B613068178B719F7263A487B5E8DD719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m232DE5DB073B56BC86BE2C2C4E0B50400250987B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m13FE0A74EC07F758D98D26D8BDB007161E674673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m210EE0126DBC291599DB6BA96C7E4EF92E38E938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m95C60057B71E38193DDA00848FC9C8DD05D240A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mF6012DA81D24987AEAE72C8FF32380E04DBD6BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonData_t927D17D8FB5A0F6E800238DD361364ACFD071C3E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonException__ctor_m7447A75C0B2299D452A2249A9DA906C5C8A8AC03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonException__ctor_mB6B297F311BCA965C2B21E3A271034D90898B226_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_AddArrayMetadata_mA4442E4EAF5CA3E5D1DBC3DC827347EB53BD4660_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_AddObjectMetadata_m164A3F98A0F190678C4261C83ECDC3C483DE5C12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_GetConvOp_m18D992CFA47A4664CC53B28AE797C25046B338AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_ReadSkip_m877435CD8C61034B1D0B541FAB83F98D57119662_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterBaseExporters_mF69772EE02E9C41B321636C38F93931A64F3CBA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterBaseImporters_m4171A9089A90EBF81C02ED95AB4FC87E0B025B0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper_ToWrapper_m65488411A4EDDF0E37DE0308D41BAE591F4CCFB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonMapper__cctor_m32EC3BB59D3E171919187C2135E5B0239012A9BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_Close_m5440E5126D365C051589D409FB165FDAE3A9CB69_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_PopulateParseTable_mA4C3CA34DFAE40196DC624261630547D7F11D3F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_ProcessNumber_mBE5A469D83D0D1849AC35555333403E6C0F8CF1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_ProcessSymbol_m054106203012E614E760F2F711C396932EE3B0EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader__cctor_mA760F0E04502182C3A36285E59AA49DCCC8FBA81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonReader__ctor_mF41B511BD00A6DAB3B3D864F92335A84E9D0F87B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Init_m31B06E5F1B3E9007A6C5F5E45982AE08545E3AC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_PutString_mF6CBD9E5651A54175282B078ABC23B3AB2AD8C76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_ToString_m76CEEC8A6AED0BEB58F012E8B86227D5ADD22C8B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m7149BB20B676BD924FCC2948D1E1531BB3CCCA9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter__cctor_m1F0035B6FCF8C755204BFA7E2B8E15A58F15B073_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JsonWriter__ctor_m4F2AB927A5AC20A76DF0F2E1E30F7211DC2B0A19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer_PopulateFsmTables_m49AE89A82E09E4E217DB9452938FE9FC57F1772C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer_ProcessEscChar_m791BA99492515DB017B71D1A8C82830A40DDE240_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer_State21_mCBE6C67B7B94C4A0391E47D8C14CF975D92AE1BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer_State22_m486F6AB68BA91736BFCED13B818D08675DDFA10E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer__cctor_mA49489C6258DC94CE1D09D4F3F4F0B46E6098CA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Lexer__ctor_mB88AD1E4645FACB770521280D22A28B45F86879D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CReadSkipU3Eb__23_0_m5A8B1622D8833688C4103728C25600594DF83334_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m9F304B9C0D4160D1ADC9AA05B600683C1964E3B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mA747A5035FF59F88A0D5EC09B1A1824E6A69237D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mE67447E11989A7CC91081096EC0DE74CC271437B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m927A7ED61E08C59A17911A0945486163A20756A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m67453B9FF29EB06B15CD7471D1E25BABB81D6E9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m917FCA7FBEB30B142E965F8BAE659E537BC807A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mF8D38192BBAF46C2B16003BE2D7E463D2C7C0607_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m9E6A8DB9620E42D56968C1EDDDBB1E77FFF4EF6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7F008A252A552180B19E36732BEAA7767B1C114B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m5C40CCF7BE908771FF59F32E07ACA7D03C208F45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mB0949C65E6169801311A741F1F52BA7C41C7A032_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m2A393ADE519270079F02ED4BA38E376D1812172B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mA82EA601B161665FD433CC2464BC4703738BFEF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m8FB27E0834B6DE0FB0A2A707D45F2716E0F6B34E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m95641195F248CA1D2B9F6C7702C5C6D704454E00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m030F930B00FF1823717C4948BF86FBEED61B228A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m7D7C4DDE3D88AC8FF16C26C877AB8FD85D8C66BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m45A2BEC70963C0137D5F95A9F9D785D791DD8A2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m57C04F16B613068178B719F7263A487B5E8DD719_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m232DE5DB073B56BC86BE2C2C4E0B50400250987B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m13FE0A74EC07F758D98D26D8BDB007161E674673_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m210EE0126DBC291599DB6BA96C7E4EF92E38E938_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m95C60057B71E38193DDA00848FC9C8DD05D240A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mF6012DA81D24987AEAE72C8FF32380E04DBD6BC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD7A8EAC2D5774850A44F2C904095E58C9C4F914F_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE;
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694;
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t25E4D35448C16564339D5C55E83A466A80C383A1 
{
public:

public:
};


// System.Object


// LitJson.FsmContext
struct  FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41  : public RuntimeObject
{
public:
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;

public:
	inline static int32_t get_offset_of_Return_0() { return static_cast<int32_t>(offsetof(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41, ___Return_0)); }
	inline bool get_Return_0() const { return ___Return_0; }
	inline bool* get_address_of_Return_0() { return &___Return_0; }
	inline void set_Return_0(bool value)
	{
		___Return_0 = value;
	}

	inline static int32_t get_offset_of_NextState_1() { return static_cast<int32_t>(offsetof(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41, ___NextState_1)); }
	inline int32_t get_NextState_1() const { return ___NextState_1; }
	inline int32_t* get_address_of_NextState_1() { return &___NextState_1; }
	inline void set_NextState_1(int32_t value)
	{
		___NextState_1 = value;
	}

	inline static int32_t get_offset_of_L_2() { return static_cast<int32_t>(offsetof(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41, ___L_2)); }
	inline Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * get_L_2() const { return ___L_2; }
	inline Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D ** get_address_of_L_2() { return &___L_2; }
	inline void set_L_2(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * value)
	{
		___L_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___L_2), (void*)value);
	}

	inline static int32_t get_offset_of_StateStack_3() { return static_cast<int32_t>(offsetof(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41, ___StateStack_3)); }
	inline int32_t get_StateStack_3() const { return ___StateStack_3; }
	inline int32_t* get_address_of_StateStack_3() { return &___StateStack_3; }
	inline void set_StateStack_3(int32_t value)
	{
		___StateStack_3 = value;
	}
};


// LitJson.JsonData
struct  JsonData_t927D17D8FB5A0F6E800238DD361364ACFD071C3E  : public RuntimeObject
{
public:

public:
};


// LitJson.JsonMapper
struct  JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___static_writer_14)); }
	inline JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}
};


// LitJson.JsonMapper_<>c
struct  U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields
{
public:
	// LitJson.JsonMapper_<>c LitJson.JsonMapper_<>c::<>9
	U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * ___U3CU3E9_0;
	// LitJson.WrapperFactory LitJson.JsonMapper_<>c::<>9__23_0
	WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * ___U3CU3E9__23_0_1;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_0
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_0_2;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_1
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_1_3;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_2
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_2_4;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_3
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_3_5;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_4
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_4_6;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_5
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_5_7;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_6
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_6_8;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_7
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_7_9;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_8
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_8_10;
	// LitJson.ExporterFunc LitJson.JsonMapper_<>c::<>9__24_9
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * ___U3CU3E9__24_9_11;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_0
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_0_12;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_1
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_1_13;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_2
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_2_14;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_3
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_3_15;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_4
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_4_16;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_5
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_5_17;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_6
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_6_18;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_7
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_7_19;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_8
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_8_20;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_9
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_9_21;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_10
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_10_22;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_11
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_11_23;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_12
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_12_24;
	// LitJson.ImporterFunc LitJson.JsonMapper_<>c::<>9__25_13
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___U3CU3E9__25_13_25;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__23_0_1)); }
	inline WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_0_2)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_0_2() const { return ___U3CU3E9__24_0_2; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_0_2() { return &___U3CU3E9__24_0_2; }
	inline void set_U3CU3E9__24_0_2(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_1_3)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_1_3() const { return ___U3CU3E9__24_1_3; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_1_3() { return &___U3CU3E9__24_1_3; }
	inline void set_U3CU3E9__24_1_3(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_2_4)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_2_4() const { return ___U3CU3E9__24_2_4; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_2_4() { return &___U3CU3E9__24_2_4; }
	inline void set_U3CU3E9__24_2_4(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_3_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_3_5)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_3_5() const { return ___U3CU3E9__24_3_5; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_3_5() { return &___U3CU3E9__24_3_5; }
	inline void set_U3CU3E9__24_3_5(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_4_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_4_6)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_4_6() const { return ___U3CU3E9__24_4_6; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_4_6() { return &___U3CU3E9__24_4_6; }
	inline void set_U3CU3E9__24_4_6(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_5_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_5_7)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_5_7() const { return ___U3CU3E9__24_5_7; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_5_7() { return &___U3CU3E9__24_5_7; }
	inline void set_U3CU3E9__24_5_7(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_6_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_6_8)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_6_8() const { return ___U3CU3E9__24_6_8; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_6_8() { return &___U3CU3E9__24_6_8; }
	inline void set_U3CU3E9__24_6_8(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_7_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_7_9)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_7_9() const { return ___U3CU3E9__24_7_9; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_7_9() { return &___U3CU3E9__24_7_9; }
	inline void set_U3CU3E9__24_7_9(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_7_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_7_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_8_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_8_10)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_8_10() const { return ___U3CU3E9__24_8_10; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_8_10() { return &___U3CU3E9__24_8_10; }
	inline void set_U3CU3E9__24_8_10(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_8_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_8_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_9_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__24_9_11)); }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * get_U3CU3E9__24_9_11() const { return ___U3CU3E9__24_9_11; }
	inline ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 ** get_address_of_U3CU3E9__24_9_11() { return &___U3CU3E9__24_9_11; }
	inline void set_U3CU3E9__24_9_11(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * value)
	{
		___U3CU3E9__24_9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_9_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_0_12)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_0_12() const { return ___U3CU3E9__25_0_12; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_0_12() { return &___U3CU3E9__25_0_12; }
	inline void set_U3CU3E9__25_0_12(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_0_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_1_13)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_1_13() const { return ___U3CU3E9__25_1_13; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_1_13() { return &___U3CU3E9__25_1_13; }
	inline void set_U3CU3E9__25_1_13(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_2_14)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_2_14() const { return ___U3CU3E9__25_2_14; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_2_14() { return &___U3CU3E9__25_2_14; }
	inline void set_U3CU3E9__25_2_14(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_3_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_3_15)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_3_15() const { return ___U3CU3E9__25_3_15; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_3_15() { return &___U3CU3E9__25_3_15; }
	inline void set_U3CU3E9__25_3_15(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_3_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_3_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_4_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_4_16)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_4_16() const { return ___U3CU3E9__25_4_16; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_4_16() { return &___U3CU3E9__25_4_16; }
	inline void set_U3CU3E9__25_4_16(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_4_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_4_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_5_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_5_17)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_5_17() const { return ___U3CU3E9__25_5_17; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_5_17() { return &___U3CU3E9__25_5_17; }
	inline void set_U3CU3E9__25_5_17(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_5_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_5_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_6_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_6_18)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_6_18() const { return ___U3CU3E9__25_6_18; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_6_18() { return &___U3CU3E9__25_6_18; }
	inline void set_U3CU3E9__25_6_18(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_6_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_6_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_7_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_7_19)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_7_19() const { return ___U3CU3E9__25_7_19; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_7_19() { return &___U3CU3E9__25_7_19; }
	inline void set_U3CU3E9__25_7_19(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_7_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_7_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_8_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_8_20)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_8_20() const { return ___U3CU3E9__25_8_20; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_8_20() { return &___U3CU3E9__25_8_20; }
	inline void set_U3CU3E9__25_8_20(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_8_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_8_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_9_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_9_21)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_9_21() const { return ___U3CU3E9__25_9_21; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_9_21() { return &___U3CU3E9__25_9_21; }
	inline void set_U3CU3E9__25_9_21(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_9_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_9_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_10_22() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_10_22)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_10_22() const { return ___U3CU3E9__25_10_22; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_10_22() { return &___U3CU3E9__25_10_22; }
	inline void set_U3CU3E9__25_10_22(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_10_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_10_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_11_23() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_11_23)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_11_23() const { return ___U3CU3E9__25_11_23; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_11_23() { return &___U3CU3E9__25_11_23; }
	inline void set_U3CU3E9__25_11_23(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_11_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_11_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_12_24() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_12_24)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_12_24() const { return ___U3CU3E9__25_12_24; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_12_24() { return &___U3CU3E9__25_12_24; }
	inline void set_U3CU3E9__25_12_24(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_12_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_12_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_13_25() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields, ___U3CU3E9__25_13_25)); }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * get_U3CU3E9__25_13_25() const { return ___U3CU3E9__25_13_25; }
	inline ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 ** get_address_of_U3CU3E9__25_13_25() { return &___U3CU3E9__25_13_25; }
	inline void set_U3CU3E9__25_13_25(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * value)
	{
		___U3CU3E9__25_13_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_13_25), (void*)value);
	}
};


// LitJson.JsonMockWrapper
struct  JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5  : public RuntimeObject
{
public:

public:
};


// LitJson.JsonWriter
struct  JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.Boolean LitJson.JsonWriter::lower_case_properties
	bool ___lower_case_properties_10;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___writer_11;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___context_1)); }
	inline WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * get_context_1() const { return ___context_1; }
	inline WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___ctx_stack_2)); }
	inline Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___hex_seq_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_lower_case_properties_10() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___lower_case_properties_10)); }
	inline bool get_lower_case_properties_10() const { return ___lower_case_properties_10; }
	inline bool* get_address_of_lower_case_properties_10() { return &___lower_case_properties_10; }
	inline void set_lower_case_properties_10(bool value)
	{
		___lower_case_properties_10 = value;
	}

	inline static int32_t get_offset_of_writer_11() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C, ___writer_11)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_writer_11() const { return ___writer_11; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_writer_11() { return &___writer_11; }
	inline void set_writer_11(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___writer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_11), (void*)value);
	}
};

struct JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// LitJson.Lexer
struct  Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D  : public RuntimeObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___fsm_context_5)); }
	inline FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_context_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___reader_8)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_reader_8() const { return ___reader_8; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___string_buffer_10)); }
	inline StringBuilder_t * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_buffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_value_11), (void*)value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___fsm_return_table_0;
	// LitJson.Lexer_StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* ___fsm_handler_table_1;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_return_table_0), (void*)value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_handler_table_1), (void*)value);
	}
};


// LitJson.WriterContext
struct  WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct  Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___entries_1)); }
	inline EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t28759DBAE44315B5929179799792B97DE5DB25E2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___keys_7)); }
	inline KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t63F680C82A33FC3793AE963A33F2250E5C5EF1AE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ___values_8)); }
	inline ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6BE1386C47B8E32088CAF0D43DA72A1ED0385750 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct  Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___entries_1)); }
	inline EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t31B057DC7F4CBFA24AB5FFF59530E363FF1B06FC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___keys_7)); }
	inline KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB85600776EB0BD69C4D2030FA8AC13530E9790A4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ___values_8)); }
	inline ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t68254222DF83AE333AFEB4D893EF39E55B8AC583 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>
struct  Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t065CA38087896A3CA7C772EBE50D36D792D53368* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0C495B429F03BD0076A69A9B2B8015E059AC483F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8EB80E2F23725AF695E0BED4CB3B74F7DAE2DFEF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___entries_1)); }
	inline EntryU5BU5D_t065CA38087896A3CA7C772EBE50D36D792D53368* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t065CA38087896A3CA7C772EBE50D36D792D53368** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t065CA38087896A3CA7C772EBE50D36D792D53368* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___keys_7)); }
	inline KeyCollection_t0C495B429F03BD0076A69A9B2B8015E059AC483F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0C495B429F03BD0076A69A9B2B8015E059AC483F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0C495B429F03BD0076A69A9B2B8015E059AC483F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ___values_8)); }
	inline ValueCollection_t8EB80E2F23725AF695E0BED4CB3B74F7DAE2DFEF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8EB80E2F23725AF695E0BED4CB3B74F7DAE2DFEF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8EB80E2F23725AF695E0BED4CB3B74F7DAE2DFEF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t40509DEA53FCFFDA057DB33EC7EF8E0029F7063F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5127EA4A758B5EB1DFBC4365200E04E00C0BB508 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB811E53DF952C1E02A1A417313DB9FC9986FFDB2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___entries_1)); }
	inline EntryU5BU5D_t40509DEA53FCFFDA057DB33EC7EF8E0029F7063F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t40509DEA53FCFFDA057DB33EC7EF8E0029F7063F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t40509DEA53FCFFDA057DB33EC7EF8E0029F7063F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___keys_7)); }
	inline KeyCollection_t5127EA4A758B5EB1DFBC4365200E04E00C0BB508 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5127EA4A758B5EB1DFBC4365200E04E00C0BB508 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5127EA4A758B5EB1DFBC4365200E04E00C0BB508 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ___values_8)); }
	inline ValueCollection_tB811E53DF952C1E02A1A417313DB9FC9986FFDB2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB811E53DF952C1E02A1A417313DB9FC9986FFDB2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB811E53DF952C1E02A1A417313DB9FC9986FFDB2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE67C277085FB6692C847697B134BE1D606FF7C3F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE4A60C0BB4D8E026212542D87F8D68C66145C422 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE48B9D9F10D0E98A79924F5B4F72F4C331FC1C85 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___entries_1)); }
	inline EntryU5BU5D_tE67C277085FB6692C847697B134BE1D606FF7C3F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE67C277085FB6692C847697B134BE1D606FF7C3F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE67C277085FB6692C847697B134BE1D606FF7C3F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___keys_7)); }
	inline KeyCollection_tE4A60C0BB4D8E026212542D87F8D68C66145C422 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE4A60C0BB4D8E026212542D87F8D68C66145C422 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE4A60C0BB4D8E026212542D87F8D68C66145C422 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ___values_8)); }
	inline ValueCollection_tE48B9D9F10D0E98A79924F5B4F72F4C331FC1C85 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE48B9D9F10D0E98A79924F5B4F72F4C331FC1C85 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE48B9D9F10D0E98A79924F5B4F72F4C331FC1C85 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBA8D25FB2CCDEB3B6B761BA8B0A75F38C04E2E6C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD2E9194FA8BB604E896EB56294540BB3119F44C4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDA3D21F84A111755F97B3A9DCEA1EF6080401647 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___entries_1)); }
	inline EntryU5BU5D_tBA8D25FB2CCDEB3B6B761BA8B0A75F38C04E2E6C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBA8D25FB2CCDEB3B6B761BA8B0A75F38C04E2E6C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBA8D25FB2CCDEB3B6B761BA8B0A75F38C04E2E6C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___keys_7)); }
	inline KeyCollection_tD2E9194FA8BB604E896EB56294540BB3119F44C4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD2E9194FA8BB604E896EB56294540BB3119F44C4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD2E9194FA8BB604E896EB56294540BB3119F44C4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ___values_8)); }
	inline ValueCollection_tDA3D21F84A111755F97B3A9DCEA1EF6080401647 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDA3D21F84A111755F97B3A9DCEA1EF6080401647 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDA3D21F84A111755F97B3A9DCEA1EF6080401647 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB6200BA348CADE97FE5BB18E9186D4B70662157B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2C98C8D8DDE6B086FD1B34820AEEF4624AEC79D0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBB19478B0230EBBDA592C4D4BCF5B569AC0E40A3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___entries_1)); }
	inline EntryU5BU5D_tB6200BA348CADE97FE5BB18E9186D4B70662157B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB6200BA348CADE97FE5BB18E9186D4B70662157B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB6200BA348CADE97FE5BB18E9186D4B70662157B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___keys_7)); }
	inline KeyCollection_t2C98C8D8DDE6B086FD1B34820AEEF4624AEC79D0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2C98C8D8DDE6B086FD1B34820AEEF4624AEC79D0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2C98C8D8DDE6B086FD1B34820AEEF4624AEC79D0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ___values_8)); }
	inline ValueCollection_tBB19478B0230EBBDA592C4D4BCF5B569AC0E40A3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBB19478B0230EBBDA592C4D4BCF5B569AC0E40A3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBB19478B0230EBBDA592C4D4BCF5B569AC0E40A3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6898592DC11B05E44B4B8A5BC687D8B5F9257CAA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1A5D675736CA90B03C8E6C3E03C2E43280983320 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t391E74F2C492AB9543F38674674361F9075B9115 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___entries_1)); }
	inline EntryU5BU5D_t6898592DC11B05E44B4B8A5BC687D8B5F9257CAA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6898592DC11B05E44B4B8A5BC687D8B5F9257CAA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6898592DC11B05E44B4B8A5BC687D8B5F9257CAA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___keys_7)); }
	inline KeyCollection_t1A5D675736CA90B03C8E6C3E03C2E43280983320 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1A5D675736CA90B03C8E6C3E03C2E43280983320 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1A5D675736CA90B03C8E6C3E03C2E43280983320 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ___values_8)); }
	inline ValueCollection_t391E74F2C492AB9543F38674674361F9075B9115 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t391E74F2C492AB9543F38674674361F9075B9115 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t391E74F2C492AB9543F38674674361F9075B9115 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___entries_1)); }
	inline EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB2B8A281E7B847B2DDAD3C7F079372D49F34F0F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___keys_7)); }
	inline KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC7DEB2DD70F4CC603C46A8C70D75706B68C65C8E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ___values_8)); }
	inline ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB2C300E4E1D61620CEB2EDE73BBF70831A24CFF6 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1865D7D24B2E885F4641CC2E2998387FE086CC29* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4A72383A6031ABC69498AB6B723F91B2BF6E7ED5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB97527041393E761353E3E04A8485C0923901051 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___entries_1)); }
	inline EntryU5BU5D_t1865D7D24B2E885F4641CC2E2998387FE086CC29* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1865D7D24B2E885F4641CC2E2998387FE086CC29** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1865D7D24B2E885F4641CC2E2998387FE086CC29* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___keys_7)); }
	inline KeyCollection_t4A72383A6031ABC69498AB6B723F91B2BF6E7ED5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4A72383A6031ABC69498AB6B723F91B2BF6E7ED5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4A72383A6031ABC69498AB6B723F91B2BF6E7ED5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ___values_8)); }
	inline ValueCollection_tB97527041393E761353E3E04A8485C0923901051 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB97527041393E761353E3E04A8485C0923901051 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB97527041393E761353E3E04A8485C0923901051 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct  Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t043EE990153568B89918B768916330A9870D0981* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t237A967C48397E731AF61F9814920A051D7F0893 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9A99F864F591235BA6444EE23DF19D8D71EFA790 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___entries_1)); }
	inline EntryU5BU5D_t043EE990153568B89918B768916330A9870D0981* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t043EE990153568B89918B768916330A9870D0981** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t043EE990153568B89918B768916330A9870D0981* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___keys_7)); }
	inline KeyCollection_t237A967C48397E731AF61F9814920A051D7F0893 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t237A967C48397E731AF61F9814920A051D7F0893 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t237A967C48397E731AF61F9814920A051D7F0893 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ___values_8)); }
	inline ValueCollection_t9A99F864F591235BA6444EE23DF19D8D71EFA790 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9A99F864F591235BA6444EE23DF19D8D71EFA790 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9A99F864F591235BA6444EE23DF19D8D71EFA790 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t0D797D34BCC31610DB823979E94E65C2B21C72E0* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0, ____array_0)); }
	inline WriterContextU5BU5D_t0D797D34BCC31610DB823979E94E65C2B21C72E0* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t0D797D34BCC31610DB823979E94E65C2B21C72E0** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t0D797D34BCC31610DB823979E94E65C2B21C72E0* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Collections.Generic.Stack`1<System.Int32>
struct  Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A, ____array_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D112
struct  __StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B__padding[112];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079__padding[12];
	};

public:
};


// LitJson.ArrayMetadata
struct  ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};

// LitJson.ObjectMetadata
struct  ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// LitJson.PropertyMetadata
struct  PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D112 <PrivateImplementationDetails>::C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82
	__StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B  ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5;
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12 <PrivateImplementationDetails>::FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206
	__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6;

public:
	inline static int32_t get_offset_of_U359B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_U359B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0() const { return ___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_U359B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0() { return &___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0; }
	inline void set_U359B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0 = value;
	}

	inline static int32_t get_offset_of_U35B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_U35B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1() const { return ___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_U35B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1() { return &___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1; }
	inline void set_U35B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1 = value;
	}

	inline static int32_t get_offset_of_U37FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_U37FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2() const { return ___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_U37FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2() { return &___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2; }
	inline void set_U37FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2 = value;
	}

	inline static int32_t get_offset_of_B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3() const { return ___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3() { return &___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3; }
	inline void set_B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3 = value;
	}

	inline static int32_t get_offset_of_B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4() const { return ___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4() { return &___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4; }
	inline void set_B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4 = value;
	}

	inline static int32_t get_offset_of_C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5)); }
	inline __StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B  get_C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5() const { return ___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5; }
	inline __StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B * get_address_of_C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5() { return &___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5; }
	inline void set_C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5(__StaticArrayInitTypeSizeU3D112_t65E6FCC3CA48BE18CD63F46BEF01A91397DEC18B  value)
	{
		___C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5 = value;
	}

	inline static int32_t get_offset_of_FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177_StaticFields, ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6)); }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  get_FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6() const { return ___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6; }
	inline __StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079 * get_address_of_FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6() { return &___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6; }
	inline void set_FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6(__StaticArrayInitTypeSizeU3D12_t79DBC034ACA5735915F72AF90C4546B2FAECB079  value)
	{
		___FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6 = value;
	}
};


// LitJson.Condition
struct  Condition_tF63A629E450CECE6E0D4528F9773ACBBD5BC1A3A 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_tF63A629E450CECE6E0D4528F9773ACBBD5BC1A3A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.JsonToken
struct  JsonToken_t77A99DA27397FC2CC92F8147214553DA3E19715A 
{
public:
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t77A99DA27397FC2CC92F8147214553DA3E19715A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.JsonType
struct  JsonType_tB381551FBC193CDD6C5A01738CA9445623BADE75 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_tB381551FBC193CDD6C5A01738CA9445623BADE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.ParserToken
struct  ParserToken_t7E90A15CF79B130BFB728C7DDA8C080BBA3107B1 
{
public:
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParserToken_t7E90A15CF79B130BFB728C7DDA8C080BBA3107B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tA363B5524F41DE008B4AB8304F1E995E2C8CF675, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_tD09B34DB3747CD91D8AAA1238C7595845715301E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StringReader
struct  StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.IO.StringWriter
struct  StringWriter_t194EF1526E072B93984370042AA80926C2EB6139  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_tF9962395513C2A48CF5AF2F371C66DD52789F110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// LitJson.JsonReader
struct  JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_13;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_14;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___automaton_stack_1)); }
	inline Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___automaton_stack_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___lexer_6)); }
	inline Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lexer_6), (void*)value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___reader_10)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_reader_10() const { return ___reader_10; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_10), (void*)value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_skip_non_members_12() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___skip_non_members_12)); }
	inline bool get_skip_non_members_12() const { return ___skip_non_members_12; }
	inline bool* get_address_of_skip_non_members_12() { return &___skip_non_members_12; }
	inline void set_skip_non_members_12(bool value)
	{
		___skip_non_members_12 = value;
	}

	inline static int32_t get_offset_of_token_value_13() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___token_value_13)); }
	inline RuntimeObject * get_token_value_13() const { return ___token_value_13; }
	inline RuntimeObject ** get_address_of_token_value_13() { return &___token_value_13; }
	inline void set_token_value_13(RuntimeObject * value)
	{
		___token_value_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_value_13), (void*)value);
	}

	inline static int32_t get_offset_of_token_14() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF, ___token_14)); }
	inline int32_t get_token_14() const { return ___token_14; }
	inline int32_t* get_address_of_token_14() { return &___token_14; }
	inline void set_token_14(int32_t value)
	{
		___token_14 = value;
	}
};

struct JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_StaticFields, ___parse_table_0)); }
	inline RuntimeObject* get_parse_table_0() const { return ___parse_table_0; }
	inline RuntimeObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(RuntimeObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parse_table_0), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureData_1)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_compareInfo_4)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_cultureInfo_5)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendar_17)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___dayNames_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___monthNames_25)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_eraNames_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dateWords_53)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t5C8B41D89122FC1D3ED53C946C2656DA03CE899A* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___nativeDigits_19)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Reflection.ParameterInfo
struct  ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1F5CB9960D7AD6C3305475C98A397BD0B9C64020 * ___marshalAs_6;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// LitJson.ExporterFunc
struct  ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct  ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.JsonException
struct  JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3  : public ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74
{
public:

public:
};


// LitJson.Lexer_StateHandler
struct  StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.WrapperFactory
struct  WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * m_Items[1];

public:
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer_StateHandler[]
struct StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * m_Items[1];

public:
	inline StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE4E24BBA014099838FCC2F1056455D38783BD9D3_gshared (Dictionary_2_t1AB3AB18A00094DAA04D186C39E9C3583DA81E34 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA308729A18D4844705494A63F0B24FCAE6F9EFEE_gshared (Dictionary_2_tF8AA93854054A0DF1B7A6D1664C696E7DBB89F6E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.PropertyMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1571FBFC803F33932FE1D3397EE0FDD0E8A04E24_gshared (Dictionary_2_t296DAF07515BBF5D3E6B6567A0A7DC63EBE4C0C8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7_gshared (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_gshared (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared (Dictionary_2_t03608389BB57475AA3F4B2B79D176A27807BC884 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB_gshared (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC_gshared (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC_gshared (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mB25122811C323A8A98F0285287005AE14F668FE3_gshared (Stack_1_t5697A763CE21E705BB0297FFBE9AFCB5F95C9163 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method);
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m291BF1F7A6E5B122867B08E6821FE7F670B5FB13 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method);
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_mCB377AE6F1B3AA2BCA9A08EFFD899D87F9B0F83A (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m127E3F8F9A6542A479A610F927B462D326123699 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method);
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_m3826F7A6F6EA91E2FE69B5B615BDEBB60791FC81 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308 (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m47FCE594FBABAECEC0E7172D2E50DB4ADF086F31 (Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23 *, const RuntimeMethod*))Dictionary_2__ctor_mE4E24BBA014099838FCC2F1056455D38783BD9D3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m467C3BB2307AF55F7F4EDE8152CC6C818C7D4112 (Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13 *, const RuntimeMethod*))Dictionary_2__ctor_mA308729A18D4844705494A63F0B24FCAE6F9EFEE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_mC3527C85891715F1D64A2759434B0ECD1B0D5A63 (Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m4F2AB927A5AC20A76DF0F2E1E30F7211DC2B0A19 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262 (Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC (Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mF69772EE02E9C41B321636C38F93931A64F3CBA3 (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m4171A9089A90EBF81C02ED95AB4FC87E0B025B0A (const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetInterface_m10C58481C4BA7C317897E130AC5FAAFCAD56A6E7 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mFD5570D14CEA674CC7C4FEA2445E08A924DCA6C1 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.PropertyMetadata>::.ctor()
inline void Dictionary_2__ctor_m9A9FA40B0F08D9B3BBCF337CA3F853B91CB3FA2D (Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA *, const RuntimeMethod*))Dictionary_2__ctor_m1571FBFC803F33932FE1D3397EE0FDD0E8A04E24_gshared)(__this, method);
}
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_mDE256E22DB23134AB27EE8387950B5C6E3B1BCEB (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m2DED9C02625DC92F4CBCD35192C5BB2C7FF9EB94 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>::.ctor()
inline void Dictionary_2__ctor_m54E1BFE2B29C490665F7BC774A0C3C5DDD0303CD (Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m54E1EF62AFF44AA621E074D123C5C0B3E73A7DD5 (Type_t * __this, String_t* ___name0, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___types1, const RuntimeMethod* method);
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m760C57B1D66D7CBF284495764BB7EFC6E7D74B0F (Type_t * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m3C402C9E95067C95BCA459EA4F15C41158267C27 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject * ___input0, const RuntimeMethod* method);
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_ToObject_mED18F2B01F4BA412C1882396CE977411BB54165D (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * JsonMapper_GetConvOp_m18D992CFA47A4664CC53B28AE797C25046B338AC (Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___parameters1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mA4442E4EAF5CA3E5D1DBC3DC827347EB53BD4660 (Type_t * ___type0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64 (Type_t * ___inst_type0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method);
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Array_CreateInstance_mE3FF1559BCD06302A7DA79FCE32232941AC38F3F (Type_t * ___elementType0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_m164A3F98A0F190678C4261C83ECDC3C483DE5C12 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41 (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_m2F5C18D828485DEF113B680150DC98FE268466B8 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_SkipNonMembers_m9FD325BF08762ED38FAEA2A4FD77FB94AFF56FE4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ReadSkip_m877435CD8C61034B1D0B541FAB83F98D57119662 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader0, const RuntimeMethod* method);
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3F8CB89107097D551D0CFDB0857B7975C5BC26D7 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * ___factory0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method);
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_m73C9711693E1BDEB7534BEFA7D097E6C3B7906F0 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m65488411A4EDDF0E37DE0308D41BAE591F4CCFB7 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * ___factory0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_mA1AFBAA384A9D66BEC2094B122CAB2E11DD3ACE6 (Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m72C5CC842F6792AA8D9E4E1D1178F1798ABEDB15 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m5FBFB52C816834A0FB82FA683E5BD849C3D0AC1B (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF (uint8_t ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, int32_t ___number0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m7149BB20B676BD924FCC2948D1E1531BB3CCCA9F (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC (uint32_t ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_mC198692CA58E6E6FF80009C33264F01E4E4B947A (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772 (int32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m61697621C2BC4FDADFE1742507EBA7B3C1D76475 (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_Parse_m219FE48FD7B6B4936B3BD5257F5D87CFA1545ED7 (String_t* ___input0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mA4C3CA34DFAE40196DC624261630547D7F11D3F8 (const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17 (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, bool ___owned1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7 (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *, const RuntimeMethod*))Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
inline void Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73 (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *, int32_t, const RuntimeMethod*))Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_gshared)(__this, ___item0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mB88AD1E4645FACB770521280D22A28B45F86879D (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8 (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77 (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___symbols3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155 (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE *, const RuntimeMethod*))Dictionary_2__ctor_m7D745ADE56151C2895459668F4A4242985E526D8_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m6ADA5D03EE325554346538B991A4C3566BD2A011 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m5119C451C7052149BC0994D3C7AB5D0AE289E8F3 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method);
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mBEBBEA6153F6A215961F16D6E9CC51653F9C8C01 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mBE5A469D83D0D1849AC35555333403E6C0F8CF1A (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, String_t* ___number0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m264B2E8D3C7766E94EFBAC76B73577BA7A1A8D65 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m5440E5126D365C051589D409FB165FDAE3A9CB69 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mFD96FA9697583DF1C8C7ABA171839DC6BC9F4446 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *, const RuntimeMethod*))Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m85D8B0A146B4AD5D58D2F3EE705DE46936CDE2B4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *, const RuntimeMethod*))Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *, const RuntimeMethod*))Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m054106203012E614E760F2F711C396932EE3B0EE (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m7447A75C0B2299D452A2249A9DA906C5C8A8AC03 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28 (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m31B06E5F1B3E9007A6C5F5E45982AE08545E3AC4 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m47DCA63C6AE3F43E8A3AED08384CEDC7EEB1060B (Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 *, const RuntimeMethod*))Stack_1__ctor_m54114F5D347F44F2C0FD45AF09974A5B55EC5373_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m0369F92DEC7EEFEEDC9969F6EC0F253D0F6944A4 (WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_m76FC2C4F2731CC58D35D7A4E7EF89D06667BB3DF (Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * __this, WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 *, WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B *, const RuntimeMethod*))Stack_1_Push_mB25122811C323A8A98F0285287005AE14F668FE3_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m3E7A28B6EF3DF4014F63932A3074EFB08A10C197 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318 (const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m5D5C98BD98E0CDF3AB69BC39D88F4196D5CD5077 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mF6CBD9E5651A54175282B078ABC23B3AB2AD8C76 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.Lexer::PopulateFsmTables(LitJson.Lexer/StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m49AE89A82E09E4E217DB9452938FE9FC57F1772C (StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F** ___fsm_handler_table0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___fsm_return_table1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956 (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_mC141D5CF55AB3CA34F082A83A1DD76F1FFD77384 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245 (int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m791BA99492515DB017B71D1A8C82830A40DDE240 (int32_t ___esc_char0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mD891B49628F4169B8493B1EC21F242A5BD61D56B (int32_t ___digit0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mFFDBBD5E00EBC98A22CCCF6AE9D2F2710B0FA4DC (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m1A2A133685D8591690D2B8685EB9BC36D8AFA785 (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mB6B297F311BCA965C2B21E3A271034D90898B226 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, int32_t ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9 (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_pinvoke(const ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171& unmarshaled, ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_pinvoke_back(const ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_pinvoke& marshaled, ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_pinvoke_cleanup(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_com(const ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171& unmarshaled, ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_com_back(const ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_com& marshaled, ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshal_com_cleanup(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171_marshaled_com& marshaled)
{
}
// System.Type LitJson.ArrayMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	{
		Type_t * L_0 = __this->get_element_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (JsonData_t927D17D8FB5A0F6E800238DD361364ACFD071C3E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0027;
	}

IL_001e:
	{
		Type_t * L_5 = __this->get_element_type_0();
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		Type_t * L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Type_t * ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	return ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB(_thisAdjusted, method);
}
// System.Void LitJson.ArrayMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_ElementType_m291BF1F7A6E5B122867B08E6821FE7F670B5FB13 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_element_type_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_ElementType_m291BF1F7A6E5B122867B08E6821FE7F670B5FB13_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	ArrayMetadata_set_ElementType_m291BF1F7A6E5B122867B08E6821FE7F670B5FB13(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_is_array_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	return ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6(_thisAdjusted, method);
}
// System.Void LitJson.ArrayMetadata::set_IsArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsArray_mCB377AE6F1B3AA2BCA9A08EFFD899D87F9B0F83A (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_is_array_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsArray_mCB377AE6F1B3AA2BCA9A08EFFD899D87F9B0F83A_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	ArrayMetadata_set_IsArray_mCB377AE6F1B3AA2BCA9A08EFFD899D87F9B0F83A(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ArrayMetadata::get_IsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayMetadata_get_IsList_m127E3F8F9A6542A479A610F927B462D326123699 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_is_list_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ArrayMetadata_get_IsList_m127E3F8F9A6542A479A610F927B462D326123699_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	return ArrayMetadata_get_IsList_m127E3F8F9A6542A479A610F927B462D326123699(_thisAdjusted, method);
}
// System.Void LitJson.ArrayMetadata::set_IsList(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayMetadata_set_IsList_m3826F7A6F6EA91E2FE69B5B615BDEBB60791FC81 (ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_is_list_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ArrayMetadata_set_IsList_m3826F7A6F6EA91E2FE69B5B615BDEBB60791FC81_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 * _thisAdjusted = reinterpret_cast<ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *>(__this + _offset);
	ArrayMetadata_set_IsList_m3826F7A6F6EA91E2FE69B5B615BDEBB60791FC81(_thisAdjusted, ___value0, method);
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m7BADE03DBC908794429C143DA2C8003C455D371E (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___writer1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___obj0) - 1), ___writer1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m6A4F17DBFE33FB71A3D34FA15C0C31719DF902F1 (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m141DD747F4A31B8F00A101961F6B359720FAF420 (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_mC141D5CF55AB3CA34F082A83A1DD76F1FFD77384 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_m3C402C9E95067C95BCA459EA4F15C41158267C27 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___input0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_mA6E07846BB5AC4ED0B66D07B821826B0B5D4F208 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject * ___input0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_mEDD295FCD7401AF9C4F19B7B240FB1C0CEF0D911 (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;
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
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m7447A75C0B2299D452A2249A9DA906C5C8A8AC03 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_m7447A75C0B2299D452A2249A9DA906C5C8A8AC03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t7E90A15CF79B130BFB728C7DDA8C080BBA3107B1_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF350BB5356B7F3B068F47C6C3D679E77653586B5, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m0AF8988654AD1CA2DCA8EC12E6D46563E4EE703F(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mB6B297F311BCA965C2B21E3A271034D90898B226 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonException__ctor_mB6B297F311BCA965C2B21E3A271034D90898B226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)(((int32_t)((uint16_t)L_0))));
		RuntimeObject * L_2 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral0BF09CD84D74BA36B0ED23170FB17D4EB584ACEA, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341 (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_m32EC3BB59D3E171919187C2135E5B0239012A9BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper__cctor_m32EC3BB59D3E171919187C2135E5B0239012A9BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_1, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_3, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_4, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23 * L_5 = (Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23 *)il2cpp_codegen_object_new(Dictionary_2_t0116A2E4073286E538DEBE542ED3395202040D23_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m47FCE594FBABAECEC0E7172D2E50DB4ADF086F31(L_5, /*hidden argument*/Dictionary_2__ctor_m47FCE594FBABAECEC0E7172D2E50DB4ADF086F31_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 * L_6 = (Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5 *)il2cpp_codegen_object_new(Dictionary_2_t6D3D99CBC25EE863935D988A029FB759F204C7F5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A(L_6, /*hidden argument*/Dictionary_2__ctor_mD35E372BD8C570253C47B0659C5F69B2D24A091A_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13 * L_7 = (Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13 *)il2cpp_codegen_object_new(Dictionary_2_t8998CA96A861A710722D924FA2D344B68B347C13_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m467C3BB2307AF55F7F4EDE8152CC6C818C7D4112(L_7, /*hidden argument*/Dictionary_2__ctor_m467C3BB2307AF55F7F4EDE8152CC6C818C7D4112_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6 * L_8 = (Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6 *)il2cpp_codegen_object_new(Dictionary_2_tF6C8EE70FFD95DF8B41A13312CC36DF66CA65AB6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC3527C85891715F1D64A2759434B0ECD1B0D5A63(L_8, /*hidden argument*/Dictionary_2__ctor_mC3527C85891715F1D64A2759434B0ECD1B0D5A63_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_9 = (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C *)il2cpp_codegen_object_new(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m4F2AB927A5AC20A76DF0F2E1E30F7211DC2B0A19(L_9, /*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * L_10 = DateTimeFormatInfo_get_InvariantInfo_mF4896D7991425B6C5391BB86C11091A8B715CCDC(/*hidden argument*/NULL);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C * L_11 = (Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C *)il2cpp_codegen_object_new(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262(L_11, /*hidden argument*/Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C * L_12 = (Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C *)il2cpp_codegen_object_new(Dictionary_2_tF9B89413D5C67150ABF876F62444DCFE74C2CC1C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262(L_12, /*hidden argument*/Dictionary_2__ctor_mD8206EF88C0F17042A67D5C183DACFBAC07A4262_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 * L_13 = (Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 *)il2cpp_codegen_object_new(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC(L_13, /*hidden argument*/Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 * L_14 = (Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62 *)il2cpp_codegen_object_new(Dictionary_2_tFA6D55BC436CEFA59828CFE8C14C69FB6789BC62_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC(L_14, /*hidden argument*/Dictionary_2__ctor_m6AB5EB9C9879BF835D972008BF0551C222DB50BC_RuntimeMethod_var);
		((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mF69772EE02E9C41B321636C38F93931A64F3CBA3(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_m4171A9089A90EBF81C02ED95AB4FC87E0B025B0A(/*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::AddArrayMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddArrayMetadata_mA4442E4EAF5CA3E5D1DBC3DC827347EB53BD4660 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddArrayMetadata_mA4442E4EAF5CA3E5D1DBC3DC827347EB53BD4660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	RuntimeObject * V_10 = NULL;
	bool V_11 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_array_metadata_6();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::ContainsKey(!0) */, IDictionary_2_tEB9AB3465C567F1D192C87B065D1597A30CD1A45_il2cpp_TypeInfo_var, L_0, L_1);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_0106;
	}

IL_0015:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 ));
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		bool L_5 = Type_get_IsArray_m0B4E20F93B1B34C0B5C4B089F543D1AA338DC9FE(L_4, /*hidden argument*/NULL);
		ArrayMetadata_set_IsArray_mCB377AE6F1B3AA2BCA9A08EFFD899D87F9B0F83A((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_0), L_5, /*hidden argument*/NULL);
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		Type_t * L_7 = Type_GetInterface_m10C58481C4BA7C317897E130AC5FAAFCAD56A6E7(L_6, _stringLiteral5E6979B41B8AB543B137F38D8025FF8C3E03A205, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_8 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_7, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		ArrayMetadata_set_IsList_m3826F7A6F6EA91E2FE69B5B615BDEBB60791FC81((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_0), (bool)1, /*hidden argument*/NULL);
	}

IL_0049:
	{
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_11 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		V_4 = 0;
		goto IL_00c5;
	}

IL_0056:
	{
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		PropertyInfo_t * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		PropertyInfo_t * L_16 = V_5;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		bool L_18 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_17, _stringLiteralECDDA59AEA5EE67D7D854C969CCF7F4F4B4A4C54, /*hidden argument*/NULL);
		V_7 = L_18;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00bf;
	}

IL_0076:
	{
		PropertyInfo_t * L_20 = V_5;
		NullCheck(L_20);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_21 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_20);
		V_6 = L_21;
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_22 = V_6;
		NullCheck(L_22);
		V_8 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0091;
		}
	}
	{
		goto IL_00bf;
	}

IL_0091:
	{
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_24 = V_6;
		NullCheck(L_24);
		int32_t L_25 = 0;
		ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Type_t * L_27 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_26);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		bool L_30 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_27, L_29, /*hidden argument*/NULL);
		V_9 = L_30;
		bool L_31 = V_9;
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		PropertyInfo_t * L_32 = V_5;
		NullCheck(L_32);
		Type_t * L_33 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_32);
		ArrayMetadata_set_ElementType_m291BF1F7A6E5B122867B08E6821FE7F670B5FB13((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_0), L_33, /*hidden argument*/NULL);
	}

IL_00be:
	{
	}

IL_00bf:
	{
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_35 = V_4;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_36 = V_3;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))))
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_37 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_array_metadata_lock_7();
		V_10 = L_37;
		V_11 = (bool)0;
	}

IL_00d6:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_38 = V_10;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_38, (bool*)(&V_11), /*hidden argument*/NULL);
		}

IL_00e1:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_39 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_array_metadata_6();
			Type_t * L_40 = ___type0;
			ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171  L_41 = V_0;
			NullCheck(L_39);
			InterfaceActionInvoker2< Type_t *, ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::Add(!0,!1) */, IDictionary_2_tEB9AB3465C567F1D192C87B065D1597A30CD1A45_il2cpp_TypeInfo_var, L_39, L_40, L_41);
			goto IL_00f6;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00f2;
			throw e;
		}

CATCH_00f2:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0x106, FINALLY_00f9);
		} // end catch (depth: 2)

IL_00f6:
		{
			IL2CPP_LEAVE(0x106, FINALLY_00f9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f9;
	}

FINALLY_00f9:
	{ // begin finally (depth: 1)
		{
			bool L_42 = V_11;
			if (!L_42)
			{
				goto IL_0105;
			}
		}

IL_00fd:
		{
			RuntimeObject * L_43 = V_10;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_43, /*hidden argument*/NULL);
		}

IL_0105:
		{
			IL2CPP_END_FINALLY(249)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(249)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x106, IL_0106)
	}

IL_0106:
	{
		return;
	}
}
// System.Void LitJson.JsonMapper::AddObjectMetadata(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_AddObjectMetadata_m164A3F98A0F190678C4261C83ECDC3C483DE5C12 (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_AddObjectMetadata_m164A3F98A0F190678C4261C83ECDC3C483DE5C12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* V_3 = NULL;
	int32_t V_4 = 0;
	PropertyInfo_t * V_5 = NULL;
	PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* V_11 = NULL;
	int32_t V_12 = 0;
	FieldInfo_t * V_13 = NULL;
	PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  V_14;
	memset((&V_14), 0, sizeof(V_14));
	RuntimeObject * V_15 = NULL;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_object_metadata_10();
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::ContainsKey(!0) */, IDictionary_2_t6D1851853064D3BA491E127BB5677E7476442817_il2cpp_TypeInfo_var, L_0, L_1);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		goto IL_01a3;
	}

IL_0015:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C ));
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		Type_t * L_5 = Type_GetInterface_m10C58481C4BA7C317897E130AC5FAAFCAD56A6E7(L_4, _stringLiteral0BE2E78C029FD76CE21A9EE68AEB00ADE0BA18CD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_5, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		ObjectMetadata_set_IsDictionary_mFD5570D14CEA674CC7C4FEA2445E08A924DCA6C1((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_0), (bool)1, /*hidden argument*/NULL);
	}

IL_003b:
	{
		Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA * L_8 = (Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA *)il2cpp_codegen_object_new(Dictionary_2_t48BD03F67ECA79B56C905B23D546EAC9FBD75DBA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9A9FA40B0F08D9B3BBCF337CA3F853B91CB3FA2D(L_8, /*hidden argument*/Dictionary_2__ctor_m9A9FA40B0F08D9B3BBCF337CA3F853B91CB3FA2D_RuntimeMethod_var);
		ObjectMetadata_set_Properties_mDE256E22DB23134AB27EE8387950B5C6E3B1BCEB((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_0), L_8, /*hidden argument*/NULL);
		Type_t * L_9 = ___type0;
		NullCheck(L_9);
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_10 = Type_GetProperties_mEAE2A4049447E8BD9D18989A80E4C8BC742AE97D(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		V_4 = 0;
		goto IL_00fd;
	}

IL_0058:
	{
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		PropertyInfo_t * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		PropertyInfo_t * L_15 = V_5;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		bool L_17 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_16, _stringLiteralECDDA59AEA5EE67D7D854C969CCF7F4F4B4A4C54, /*hidden argument*/NULL);
		V_7 = L_17;
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_00c1;
		}
	}
	{
		PropertyInfo_t * L_19 = V_5;
		NullCheck(L_19);
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_20 = VirtFuncInvoker0< ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* >::Invoke(22 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_19);
		V_8 = L_20;
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_21 = V_8;
		NullCheck(L_21);
		V_9 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0092;
		}
	}
	{
		goto IL_00f7;
	}

IL_0092:
	{
		ParameterInfoU5BU5D_t9F6F38E4A0B0A78E2F463D1B2C0031716CA7A694* L_23 = V_8;
		NullCheck(L_23);
		int32_t L_24 = 0;
		ParameterInfo_t37AB8D79D44E14C48CDA9004CB696E240C3FD4DB * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		Type_t * L_26 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_25);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_27 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_28 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_27, /*hidden argument*/NULL);
		bool L_29 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_26, L_28, /*hidden argument*/NULL);
		V_10 = L_29;
		bool L_30 = V_10;
		if (!L_30)
		{
			goto IL_00bf;
		}
	}
	{
		PropertyInfo_t * L_31 = V_5;
		NullCheck(L_31);
		Type_t * L_32 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_31);
		ObjectMetadata_set_ElementType_m2DED9C02625DC92F4CBCD35192C5BB2C7FF9EB94((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_0), L_32, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		goto IL_00f7;
	}

IL_00c1:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9 ));
		PropertyInfo_t * L_33 = V_5;
		(&V_6)->set_Info_0(L_33);
		PropertyInfo_t * L_34 = V_5;
		NullCheck(L_34);
		Type_t * L_35 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_34);
		(&V_6)->set_Type_2(L_35);
		RuntimeObject* L_36 = ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_0), /*hidden argument*/NULL);
		PropertyInfo_t * L_37 = V_5;
		NullCheck(L_37);
		String_t* L_38 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_37);
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_39 = V_6;
		NullCheck(L_36);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(!0,!1) */, IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6_il2cpp_TypeInfo_var, L_36, L_38, L_39);
	}

IL_00f7:
	{
		int32_t L_40 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00fd:
	{
		int32_t L_41 = V_4;
		PropertyInfoU5BU5D_tAD8E99B12FF99CA4F2EA37B612DE68E112B4CF7E* L_42 = V_3;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_43 = ___type0;
		NullCheck(L_43);
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_44 = Type_GetFields_mFE461EB4CB4624DFA0621793F3F738B1057426AC(L_43, /*hidden argument*/NULL);
		V_11 = L_44;
		V_12 = 0;
		goto IL_0161;
	}

IL_0115:
	{
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_45 = V_11;
		int32_t L_46 = V_12;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		FieldInfo_t * L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		V_13 = L_48;
		il2cpp_codegen_initobj((&V_14), sizeof(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9 ));
		FieldInfo_t * L_49 = V_13;
		(&V_14)->set_Info_0(L_49);
		(&V_14)->set_IsField_1((bool)1);
		FieldInfo_t * L_50 = V_13;
		NullCheck(L_50);
		Type_t * L_51 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_50);
		(&V_14)->set_Type_2(L_51);
		RuntimeObject* L_52 = ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_0), /*hidden argument*/NULL);
		FieldInfo_t * L_53 = V_13;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_53);
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_55 = V_14;
		NullCheck(L_52);
		InterfaceActionInvoker2< String_t*, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::Add(!0,!1) */, IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6_il2cpp_TypeInfo_var, L_52, L_54, L_55);
		int32_t L_56 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0161:
	{
		int32_t L_57 = V_12;
		FieldInfoU5BU5D_t9C36FA93372CA01DAF85946064B058CD9CE2E8BE* L_58 = V_11;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))))
		{
			goto IL_0115;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_59 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_object_metadata_lock_11();
		V_15 = L_59;
		V_16 = (bool)0;
	}

IL_0173:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_60 = V_15;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_60, (bool*)(&V_16), /*hidden argument*/NULL);
		}

IL_017e:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_61 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_object_metadata_10();
			Type_t * L_62 = ___type0;
			ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C  L_63 = V_0;
			NullCheck(L_61);
			InterfaceActionInvoker2< Type_t *, ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C  >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::Add(!0,!1) */, IDictionary_2_t6D1851853064D3BA491E127BB5677E7476442817_il2cpp_TypeInfo_var, L_61, L_62, L_63);
			goto IL_0193;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_018f;
			throw e;
		}

CATCH_018f:
		{ // begin catch(System.ArgumentException)
			IL2CPP_LEAVE(0x1A3, FINALLY_0196);
		} // end catch (depth: 2)

IL_0193:
		{
			IL2CPP_LEAVE(0x1A3, FINALLY_0196);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0196;
	}

FINALLY_0196:
	{ // begin finally (depth: 1)
		{
			bool L_64 = V_16;
			if (!L_64)
			{
				goto IL_01a2;
			}
		}

IL_019a:
		{
			RuntimeObject * L_65 = V_15;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_65, /*hidden argument*/NULL);
		}

IL_01a2:
		{
			IL2CPP_END_FINALLY(406)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(406)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A3, IL_01a3)
	}

IL_01a3:
	{
		return;
	}
}
// System.Reflection.MethodInfo LitJson.JsonMapper::GetConvOp(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * JsonMapper_GetConvOp_m18D992CFA47A4664CC53B28AE797C25046B338AC (Type_t * ___t10, Type_t * ___t21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_GetConvOp_m18D992CFA47A4664CC53B28AE797C25046B338AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	MethodInfo_t * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_lock_9();
		V_1 = L_0;
		V_2 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_2), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_2 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_3 = ___t10;
			NullCheck(L_2);
			bool L_4 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::ContainsKey(!0) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_2, L_3);
			V_3 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_3;
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_0025:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_6 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_7 = ___t10;
			Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE * L_8 = (Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE *)il2cpp_codegen_object_new(Dictionary_2_t039A4B39D37B6024A08EFDA020B4769F588ACFAE_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m54E1BFE2B29C490665F7BC774A0C3C5DDD0303CD(L_8, /*hidden argument*/Dictionary_2__ctor_m54E1BFE2B29C490665F7BC774A0C3C5DDD0303CD_RuntimeMethod_var);
			NullCheck(L_6);
			InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::Add(!0,!1) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		{
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_0043;
			}
		}

IL_003c:
		{
			RuntimeObject * L_10 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_10, /*hidden argument*/NULL);
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(57)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x44, IL_0044)
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
		Type_t * L_12 = ___t10;
		NullCheck(L_11);
		RuntimeObject* L_13 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_11, L_12);
		Type_t * L_14 = ___t21;
		NullCheck(L_13);
		bool L_15 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::ContainsKey(!0) */, IDictionary_2_t442C458BD98E4E136DB99F73AD0C24FD0F1D3125_il2cpp_TypeInfo_var, L_13, L_14);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_17 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
		Type_t * L_18 = ___t10;
		NullCheck(L_17);
		RuntimeObject* L_19 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_17, L_18);
		Type_t * L_20 = ___t21;
		NullCheck(L_19);
		MethodInfo_t * L_21 = InterfaceFuncInvoker1< MethodInfo_t *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(!0) */, IDictionary_2_t442C458BD98E4E136DB99F73AD0C24FD0F1D3125_il2cpp_TypeInfo_var, L_19, L_20);
		V_5 = L_21;
		goto IL_00de;
	}

IL_0070:
	{
		Type_t * L_22 = ___t10;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_23 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_24 = L_23;
		Type_t * L_25 = ___t21;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_25);
		NullCheck(L_22);
		MethodInfo_t * L_26 = Type_GetMethod_m54E1EF62AFF44AA621E074D123C5C0B3E73A7DD5(L_22, _stringLiteral973776CA0AE32EA889FC2291F84C4925F2285DDE, L_24, /*hidden argument*/NULL);
		V_0 = L_26;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_27 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_lock_9();
		V_6 = L_27;
		V_7 = (bool)0;
	}

IL_0090:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_28 = V_6;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_28, (bool*)(&V_7), /*hidden argument*/NULL);
		}

IL_009b:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_29 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_30 = ___t10;
			NullCheck(L_29);
			RuntimeObject* L_31 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_29, L_30);
			Type_t * L_32 = ___t21;
			MethodInfo_t * L_33 = V_0;
			NullCheck(L_31);
			InterfaceActionInvoker2< Type_t *, MethodInfo_t * >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::Add(!0,!1) */, IDictionary_2_t442C458BD98E4E136DB99F73AD0C24FD0F1D3125_il2cpp_TypeInfo_var, L_31, L_32, L_33);
			goto IL_00c9;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00b2;
			throw e;
		}

CATCH_00b2:
		{ // begin catch(System.ArgumentException)
			IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
			RuntimeObject* L_34 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_conv_ops_8();
			Type_t * L_35 = ___t10;
			NullCheck(L_34);
			RuntimeObject* L_36 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::get_Item(!0) */, IDictionary_2_tBF984720234B5D67F3A431176D9DBD935AAC2AEE_il2cpp_TypeInfo_var, L_34, L_35);
			Type_t * L_37 = ___t21;
			NullCheck(L_36);
			MethodInfo_t * L_38 = InterfaceFuncInvoker1< MethodInfo_t *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>::get_Item(!0) */, IDictionary_2_t442C458BD98E4E136DB99F73AD0C24FD0F1D3125_il2cpp_TypeInfo_var, L_36, L_37);
			V_5 = L_38;
			IL2CPP_LEAVE(0xDE, FINALLY_00cc);
		} // end catch (depth: 2)

IL_00c9:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00cc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00cc;
	}

FINALLY_00cc:
	{ // begin finally (depth: 1)
		{
			bool L_39 = V_7;
			if (!L_39)
			{
				goto IL_00d8;
			}
		}

IL_00d0:
		{
			RuntimeObject * L_40 = V_6;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_40, /*hidden argument*/NULL);
		}

IL_00d8:
		{
			IL2CPP_END_FINALLY(204)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(204)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
	}

IL_00d9:
	{
		MethodInfo_t * L_41 = V_0;
		V_5 = L_41;
		goto IL_00de;
	}

IL_00de:
	{
		MethodInfo_t * L_42 = V_5;
		return L_42;
	}
}
// System.Object LitJson.JsonMapper::ReadValue(System.Type,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64 (Type_t * ___inst_type0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	RuntimeObject * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Type_t * V_8 = NULL;
	MethodInfo_t * V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * V_12 = NULL;
	bool V_13 = false;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171  V_18;
	memset((&V_18), 0, sizeof(V_18));
	RuntimeObject* V_19 = NULL;
	Type_t * V_20 = NULL;
	bool V_21 = false;
	bool V_22 = false;
	RuntimeObject * V_23 = NULL;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	bool V_29 = false;
	bool V_30 = false;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C  V_31;
	memset((&V_31), 0, sizeof(V_31));
	String_t* V_32 = NULL;
	bool V_33 = false;
	bool V_34 = false;
	PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  V_35;
	memset((&V_35), 0, sizeof(V_35));
	bool V_36 = false;
	PropertyInfo_t * V_37 = NULL;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	Type_t * G_B4_0 = NULL;
	Type_t * G_B3_0 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B48_0 = 0;
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_0 = ___reader1;
		NullCheck(L_0);
		JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4(L_0, /*hidden argument*/NULL);
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_1 = ___reader1;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_1, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_4 = NULL;
		goto IL_046b;
	}

IL_001d:
	{
		Type_t * L_4 = ___inst_type0;
		Type_t * L_5 = Nullable_GetUnderlyingType_m038B195642BF738026196B1629997705B6317D04(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Type_t * L_6 = V_0;
		Type_t * L_7 = L_6;
		G_B3_0 = L_7;
		if (L_7)
		{
			G_B4_0 = L_7;
			goto IL_002a;
		}
	}
	{
		Type_t * L_8 = ___inst_type0;
		G_B4_0 = L_8;
	}

IL_002a:
	{
		V_1 = G_B4_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_9 = ___reader1;
		NullCheck(L_9);
		int32_t L_10 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_9, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)11)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_12 = ___inst_type0;
		NullCheck(L_12);
		bool L_13 = Type_get_IsClass_m760C57B1D66D7CBF284495764BB7EFC6E7D74B0F(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_15 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_14, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = 1;
	}

IL_004e:
	{
		V_6 = (bool)G_B8_0;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_005d;
		}
	}
	{
		V_4 = NULL;
		goto IL_046b;
	}

IL_005d:
	{
		Type_t * L_17 = ___inst_type0;
		String_t* L_18 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1FBB4021455B5C968D58CDFB3D5CCF55BF0DD115, L_17, /*hidden argument*/NULL);
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_19 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_RuntimeMethod_var);
	}

IL_006e:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_20 = ___reader1;
		NullCheck(L_20);
		int32_t L_21 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) == ((int32_t)8)))
		{
			goto IL_009f;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_22 = ___reader1;
		NullCheck(L_22);
		int32_t L_23 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)6)))
		{
			goto IL_009f;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_24 = ___reader1;
		NullCheck(L_24);
		int32_t L_25 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) == ((int32_t)7)))
		{
			goto IL_009f;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_26 = ___reader1;
		NullCheck(L_26);
		int32_t L_27 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)9))))
		{
			goto IL_009f;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_28 = ___reader1;
		NullCheck(L_28);
		int32_t L_29 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_28, /*hidden argument*/NULL);
		G_B17_0 = ((((int32_t)L_29) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_00a0;
	}

IL_009f:
	{
		G_B17_0 = 1;
	}

IL_00a0:
	{
		V_7 = (bool)G_B17_0;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_01e4;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_31 = ___reader1;
		NullCheck(L_31);
		RuntimeObject * L_32 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Type_t * L_33 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_32, /*hidden argument*/NULL);
		V_8 = L_33;
		Type_t * L_34 = V_1;
		Type_t * L_35 = V_8;
		NullCheck(L_34);
		bool L_36 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_34, L_35);
		V_10 = L_36;
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00d2;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_38 = ___reader1;
		NullCheck(L_38);
		RuntimeObject * L_39 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_38, /*hidden argument*/NULL);
		V_4 = L_39;
		goto IL_046b;
	}

IL_00d2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_41 = V_8;
		NullCheck(L_40);
		bool L_42 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_40, L_41);
		if (!L_42)
		{
			goto IL_00f4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_43 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_44 = V_8;
		NullCheck(L_43);
		RuntimeObject* L_45 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_43, L_44);
		Type_t * L_46 = V_1;
		NullCheck(L_45);
		bool L_47 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(!0) */, IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var, L_45, L_46);
		G_B23_0 = ((int32_t)(L_47));
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B23_0 = 0;
	}

IL_00f5:
	{
		V_11 = (bool)G_B23_0;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_0124;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_custom_importers_table_5();
		Type_t * L_50 = V_8;
		NullCheck(L_49);
		RuntimeObject* L_51 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_49, L_50);
		Type_t * L_52 = V_1;
		NullCheck(L_51);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_53 = InterfaceFuncInvoker1< ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(!0) */, IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var, L_51, L_52);
		V_12 = L_53;
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_54 = V_12;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_55 = ___reader1;
		NullCheck(L_55);
		RuntimeObject * L_56 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		RuntimeObject * L_57 = ImporterFunc_Invoke_m3C402C9E95067C95BCA459EA4F15C41158267C27(L_54, L_56, /*hidden argument*/NULL);
		V_4 = L_57;
		goto IL_046b;
	}

IL_0124:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_58 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_59 = V_8;
		NullCheck(L_58);
		bool L_60 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_58, L_59);
		if (!L_60)
		{
			goto IL_0146;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_61 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_62 = V_8;
		NullCheck(L_61);
		RuntimeObject* L_63 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_61, L_62);
		Type_t * L_64 = V_1;
		NullCheck(L_63);
		bool L_65 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::ContainsKey(!0) */, IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var, L_63, L_64);
		G_B28_0 = ((int32_t)(L_65));
		goto IL_0147;
	}

IL_0146:
	{
		G_B28_0 = 0;
	}

IL_0147:
	{
		V_13 = (bool)G_B28_0;
		bool L_66 = V_13;
		if (!L_66)
		{
			goto IL_0176;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_67 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		Type_t * L_68 = V_8;
		NullCheck(L_67);
		RuntimeObject* L_69 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_67, L_68);
		Type_t * L_70 = V_1;
		NullCheck(L_69);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_71 = InterfaceFuncInvoker1< ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::get_Item(!0) */, IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var, L_69, L_70);
		V_14 = L_71;
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_72 = V_14;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_73 = ___reader1;
		NullCheck(L_73);
		RuntimeObject * L_74 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_73, /*hidden argument*/NULL);
		NullCheck(L_72);
		RuntimeObject * L_75 = ImporterFunc_Invoke_m3C402C9E95067C95BCA459EA4F15C41158267C27(L_72, L_74, /*hidden argument*/NULL);
		V_4 = L_75;
		goto IL_046b;
	}

IL_0176:
	{
		Type_t * L_76 = V_1;
		NullCheck(L_76);
		bool L_77 = VirtFuncInvoker0< bool >::Invoke(70 /* System.Boolean System.Type::get_IsEnum() */, L_76);
		V_15 = L_77;
		bool L_78 = V_15;
		if (!L_78)
		{
			goto IL_0195;
		}
	}
	{
		Type_t * L_79 = V_1;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_80 = ___reader1;
		NullCheck(L_80);
		RuntimeObject * L_81 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_80, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeObject * L_82 = Enum_ToObject_mED18F2B01F4BA412C1882396CE977411BB54165D(L_79, L_81, /*hidden argument*/NULL);
		V_4 = L_82;
		goto IL_046b;
	}

IL_0195:
	{
		Type_t * L_83 = V_1;
		Type_t * L_84 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		MethodInfo_t * L_85 = JsonMapper_GetConvOp_m18D992CFA47A4664CC53B28AE797C25046B338AC(L_83, L_84, /*hidden argument*/NULL);
		V_9 = L_85;
		MethodInfo_t * L_86 = V_9;
		bool L_87 = MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237(L_86, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		V_16 = L_87;
		bool L_88 = V_16;
		if (!L_88)
		{
			goto IL_01cb;
		}
	}
	{
		MethodInfo_t * L_89 = V_9;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_90 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_91 = L_90;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_92 = ___reader1;
		NullCheck(L_92);
		RuntimeObject * L_93 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_92, /*hidden argument*/NULL);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_93);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_93);
		NullCheck(L_89);
		RuntimeObject * L_94 = MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_89, NULL, L_91, /*hidden argument*/NULL);
		V_4 = L_94;
		goto IL_046b;
	}

IL_01cb:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_95 = ___reader1;
		NullCheck(L_95);
		RuntimeObject * L_96 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_95, /*hidden argument*/NULL);
		Type_t * L_97 = V_8;
		Type_t * L_98 = ___inst_type0;
		String_t* L_99 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(_stringLiteral91C19854D31174DD7CA99282D92BE83B83BB3E09, L_96, L_97, L_98, /*hidden argument*/NULL);
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_100 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_100, L_99, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_100, JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_RuntimeMethod_var);
	}

IL_01e4:
	{
		V_2 = NULL;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_101 = ___reader1;
		NullCheck(L_101);
		int32_t L_102 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_101, /*hidden argument*/NULL);
		V_17 = (bool)((((int32_t)L_102) == ((int32_t)4))? 1 : 0);
		bool L_103 = V_17;
		if (!L_103)
		{
			goto IL_0305;
		}
	}
	{
		Type_t * L_104 = ___inst_type0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		JsonMapper_AddArrayMetadata_mA4442E4EAF5CA3E5D1DBC3DC827347EB53BD4660(L_104, /*hidden argument*/NULL);
		RuntimeObject* L_105 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_array_metadata_6();
		Type_t * L_106 = ___inst_type0;
		NullCheck(L_105);
		ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171  L_107 = InterfaceFuncInvoker1< ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 , Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>::get_Item(!0) */, IDictionary_2_tEB9AB3465C567F1D192C87B065D1597A30CD1A45_il2cpp_TypeInfo_var, L_105, L_106);
		V_18 = L_107;
		bool L_108 = ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_18), /*hidden argument*/NULL);
		if (L_108)
		{
			goto IL_0222;
		}
	}
	{
		bool L_109 = ArrayMetadata_get_IsList_m127E3F8F9A6542A479A610F927B462D326123699((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_18), /*hidden argument*/NULL);
		G_B39_0 = ((((int32_t)L_109) == ((int32_t)0))? 1 : 0);
		goto IL_0223;
	}

IL_0222:
	{
		G_B39_0 = 0;
	}

IL_0223:
	{
		V_21 = (bool)G_B39_0;
		bool L_110 = V_21;
		if (!L_110)
		{
			goto IL_023a;
		}
	}
	{
		Type_t * L_111 = ___inst_type0;
		String_t* L_112 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1316FEA343570BB72F1A092A1562B9CB8219F3EE, L_111, /*hidden argument*/NULL);
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_113 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_113, L_112, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_RuntimeMethod_var);
	}

IL_023a:
	{
		bool L_114 = ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_18), /*hidden argument*/NULL);
		V_22 = (bool)((((int32_t)L_114) == ((int32_t)0))? 1 : 0);
		bool L_115 = V_22;
		if (!L_115)
		{
			goto IL_0264;
		}
	}
	{
		Type_t * L_116 = ___inst_type0;
		RuntimeObject * L_117 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_116, /*hidden argument*/NULL);
		V_19 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		Type_t * L_118 = ArrayMetadata_get_ElementType_m7D0AE6DB903B84BEB9E8F020E79842F3C6FB56AB((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_18), /*hidden argument*/NULL);
		V_20 = L_118;
		goto IL_0275;
	}

IL_0264:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_119 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_119, /*hidden argument*/NULL);
		V_19 = L_119;
		Type_t * L_120 = ___inst_type0;
		NullCheck(L_120);
		Type_t * L_121 = VirtFuncInvoker0< Type_t * >::Invoke(97 /* System.Type System.Type::GetElementType() */, L_120);
		V_20 = L_121;
	}

IL_0275:
	{
		goto IL_02a5;
	}

IL_0277:
	{
		Type_t * L_122 = V_20;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_123 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_124 = JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64(L_122, L_123, /*hidden argument*/NULL);
		V_23 = L_124;
		RuntimeObject * L_125 = V_23;
		if (L_125)
		{
			goto IL_0291;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_126 = ___reader1;
		NullCheck(L_126);
		int32_t L_127 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_126, /*hidden argument*/NULL);
		G_B48_0 = ((((int32_t)L_127) == ((int32_t)5))? 1 : 0);
		goto IL_0292;
	}

IL_0291:
	{
		G_B48_0 = 0;
	}

IL_0292:
	{
		V_24 = (bool)G_B48_0;
		bool L_128 = V_24;
		if (!L_128)
		{
			goto IL_029a;
		}
	}
	{
		goto IL_02aa;
	}

IL_029a:
	{
		RuntimeObject* L_129 = V_19;
		RuntimeObject * L_130 = V_23;
		NullCheck(L_129);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_129, L_130);
	}

IL_02a5:
	{
		V_25 = (bool)1;
		goto IL_0277;
	}

IL_02aa:
	{
		bool L_131 = ArrayMetadata_get_IsArray_m6467F632C7F83B7A2C5A6D9BE89099FC12E8A7F6((ArrayMetadata_tB480A19A9177FDE39452D6DAFD816EFAC332A171 *)(&V_18), /*hidden argument*/NULL);
		V_26 = L_131;
		bool L_132 = V_26;
		if (!L_132)
		{
			goto IL_02fc;
		}
	}
	{
		RuntimeObject* L_133 = V_19;
		NullCheck(L_133);
		int32_t L_134 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tA3BAB2482E28132A7CA9E0E21393027353C28B54_il2cpp_TypeInfo_var, L_133);
		V_27 = L_134;
		Type_t * L_135 = V_20;
		int32_t L_136 = V_27;
		RuntimeArray * L_137 = Array_CreateInstance_mE3FF1559BCD06302A7DA79FCE32232941AC38F3F(L_135, L_136, /*hidden argument*/NULL);
		V_2 = L_137;
		V_28 = 0;
		goto IL_02ed;
	}

IL_02d0:
	{
		RuntimeObject * L_138 = V_2;
		RuntimeObject* L_139 = V_19;
		int32_t L_140 = V_28;
		NullCheck(L_139);
		RuntimeObject * L_141 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_139, L_140);
		int32_t L_142 = V_28;
		NullCheck(((RuntimeArray *)CastclassClass((RuntimeObject*)L_138, RuntimeArray_il2cpp_TypeInfo_var)));
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA(((RuntimeArray *)CastclassClass((RuntimeObject*)L_138, RuntimeArray_il2cpp_TypeInfo_var)), L_141, L_142, /*hidden argument*/NULL);
		int32_t L_143 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, (int32_t)1));
	}

IL_02ed:
	{
		int32_t L_144 = V_28;
		int32_t L_145 = V_27;
		V_29 = (bool)((((int32_t)L_144) < ((int32_t)L_145))? 1 : 0);
		bool L_146 = V_29;
		if (L_146)
		{
			goto IL_02d0;
		}
	}
	{
		goto IL_02ff;
	}

IL_02fc:
	{
		RuntimeObject* L_147 = V_19;
		V_2 = L_147;
	}

IL_02ff:
	{
		goto IL_0466;
	}

IL_0305:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_148 = ___reader1;
		NullCheck(L_148);
		int32_t L_149 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_148, /*hidden argument*/NULL);
		V_30 = (bool)((((int32_t)L_149) == ((int32_t)1))? 1 : 0);
		bool L_150 = V_30;
		if (!L_150)
		{
			goto IL_0466;
		}
	}
	{
		Type_t * L_151 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		JsonMapper_AddObjectMetadata_m164A3F98A0F190678C4261C83ECDC3C483DE5C12(L_151, /*hidden argument*/NULL);
		RuntimeObject* L_152 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_object_metadata_10();
		Type_t * L_153 = V_1;
		NullCheck(L_152);
		ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C  L_154 = InterfaceFuncInvoker1< ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C , Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>::get_Item(!0) */, IDictionary_2_t6D1851853064D3BA491E127BB5677E7476442817_il2cpp_TypeInfo_var, L_152, L_153);
		V_31 = L_154;
		Type_t * L_155 = V_1;
		RuntimeObject * L_156 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16(L_155, /*hidden argument*/NULL);
		V_2 = L_156;
		goto IL_045d;
	}

IL_0338:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_157 = ___reader1;
		NullCheck(L_157);
		JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4(L_157, /*hidden argument*/NULL);
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_158 = ___reader1;
		NullCheck(L_158);
		int32_t L_159 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_158, /*hidden argument*/NULL);
		V_33 = (bool)((((int32_t)L_159) == ((int32_t)3))? 1 : 0);
		bool L_160 = V_33;
		if (!L_160)
		{
			goto IL_0354;
		}
	}
	{
		goto IL_0465;
	}

IL_0354:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_161 = ___reader1;
		NullCheck(L_161);
		RuntimeObject * L_162 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_161, /*hidden argument*/NULL);
		V_32 = ((String_t*)CastclassSealed((RuntimeObject*)L_162, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_163 = ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_31), /*hidden argument*/NULL);
		String_t* L_164 = V_32;
		NullCheck(L_163);
		bool L_165 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::ContainsKey(!0) */, IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6_il2cpp_TypeInfo_var, L_163, L_164);
		V_34 = L_165;
		bool L_166 = V_34;
		if (!L_166)
		{
			goto IL_0401;
		}
	}
	{
		RuntimeObject* L_167 = ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_31), /*hidden argument*/NULL);
		String_t* L_168 = V_32;
		NullCheck(L_167);
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_169 = InterfaceFuncInvoker1< PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9 , String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>::get_Item(!0) */, IDictionary_2_tD79B4663096B3B5C24572E4AAFC86D172E0273B6_il2cpp_TypeInfo_var, L_167, L_168);
		V_35 = L_169;
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_170 = V_35;
		bool L_171 = L_170.get_IsField_1();
		V_36 = L_171;
		bool L_172 = V_36;
		if (!L_172)
		{
			goto IL_03ba;
		}
	}
	{
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_173 = V_35;
		MemberInfo_t * L_174 = L_173.get_Info_0();
		RuntimeObject * L_175 = V_2;
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_176 = V_35;
		Type_t * L_177 = L_176.get_Type_2();
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_178 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_179 = JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64(L_177, L_178, /*hidden argument*/NULL);
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_174, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_m9E7A4FBA27F835B6C26CC09CF609333967150E41(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_174, FieldInfo_t_il2cpp_TypeInfo_var)), L_175, L_179, /*hidden argument*/NULL);
		goto IL_03fe;
	}

IL_03ba:
	{
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_180 = V_35;
		MemberInfo_t * L_181 = L_180.get_Info_0();
		V_37 = ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_181, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t * L_182 = V_37;
		NullCheck(L_182);
		bool L_183 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_182);
		V_38 = L_183;
		bool L_184 = V_38;
		if (!L_184)
		{
			goto IL_03ef;
		}
	}
	{
		PropertyInfo_t * L_185 = V_37;
		RuntimeObject * L_186 = V_2;
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_187 = V_35;
		Type_t * L_188 = L_187.get_Type_2();
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_189 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_190 = JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64(L_188, L_189, /*hidden argument*/NULL);
		NullCheck(L_185);
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(26 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_185, L_186, L_190, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		goto IL_03fd;
	}

IL_03ef:
	{
		PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9  L_191 = V_35;
		Type_t * L_192 = L_191.get_Type_2();
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_193 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64(L_192, L_193, /*hidden argument*/NULL);
	}

IL_03fd:
	{
	}

IL_03fe:
	{
		goto IL_045c;
	}

IL_0401:
	{
		bool L_194 = ObjectMetadata_get_IsDictionary_m2F5C18D828485DEF113B680150DC98FE268466B8((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_31), /*hidden argument*/NULL);
		V_39 = (bool)((((int32_t)L_194) == ((int32_t)0))? 1 : 0);
		bool L_195 = V_39;
		if (!L_195)
		{
			goto IL_0440;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_196 = ___reader1;
		NullCheck(L_196);
		bool L_197 = JsonReader_get_SkipNonMembers_m9FD325BF08762ED38FAEA2A4FD77FB94AFF56FE4(L_196, /*hidden argument*/NULL);
		V_40 = (bool)((((int32_t)L_197) == ((int32_t)0))? 1 : 0);
		bool L_198 = V_40;
		if (!L_198)
		{
			goto IL_0436;
		}
	}
	{
		Type_t * L_199 = ___inst_type0;
		String_t* L_200 = V_32;
		String_t* L_201 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral614847534C353A23D22B5E3523FA7C6C6432E5EC, L_199, L_200, /*hidden argument*/NULL);
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_202 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_202, L_201, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_202, JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64_RuntimeMethod_var);
	}

IL_0436:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_203 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		JsonMapper_ReadSkip_m877435CD8C61034B1D0B541FAB83F98D57119662(L_203, /*hidden argument*/NULL);
		goto IL_045d;
	}

IL_0440:
	{
		RuntimeObject * L_204 = V_2;
		String_t* L_205 = V_32;
		Type_t * L_206 = ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33((ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *)(&V_31), /*hidden argument*/NULL);
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_207 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject * L_208 = JsonMapper_ReadValue_m2037BA2B56377C66F44B64B7D1EF9B9E3B095B64(L_206, L_207, /*hidden argument*/NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_204, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_204, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var)), L_205, L_208);
	}

IL_045c:
	{
	}

IL_045d:
	{
		V_41 = (bool)1;
		goto IL_0338;
	}

IL_0465:
	{
	}

IL_0466:
	{
		RuntimeObject * L_209 = V_2;
		V_4 = L_209;
		goto IL_046b;
	}

IL_046b:
	{
		RuntimeObject * L_210 = V_4;
		return L_210;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * ___factory0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	String_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B20_0 = 0;
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_0 = ___reader1;
		NullCheck(L_0);
		JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4(L_0, /*hidden argument*/NULL);
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_1 = ___reader1;
		NullCheck(L_1);
		int32_t L_2 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_001d;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_3 = ___reader1;
		NullCheck(L_3);
		int32_t L_4 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)((int32_t)11)))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 1;
	}

IL_001e:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		V_2 = (RuntimeObject*)NULL;
		goto IL_01a6;
	}

IL_0029:
	{
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_6 = ___factory0;
		NullCheck(L_6);
		RuntimeObject* L_7 = WrapperFactory_Invoke_m3F8CB89107097D551D0CFDB0857B7975C5BC26D7(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_8 = ___reader1;
		NullCheck(L_8);
		int32_t L_9 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_8, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_11 = V_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_12 = ___reader1;
		NullCheck(L_12);
		RuntimeObject * L_13 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_11, ((String_t*)CastclassSealed((RuntimeObject*)L_13, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_14 = V_0;
		V_2 = L_14;
		goto IL_01a6;
	}

IL_0058:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_15 = ___reader1;
		NullCheck(L_15);
		int32_t L_16 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_15, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_16) == ((int32_t)8))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0081;
		}
	}
	{
		RuntimeObject* L_18 = V_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_19 = ___reader1;
		NullCheck(L_19);
		RuntimeObject * L_20 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< double >::Invoke(1 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_18, ((*(double*)((double*)UnBox(L_20, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_21 = V_0;
		V_2 = L_21;
		goto IL_01a6;
	}

IL_0081:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_22 = ___reader1;
		NullCheck(L_22);
		int32_t L_23 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_22, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)6))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_25 = V_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_26 = ___reader1;
		NullCheck(L_26);
		RuntimeObject * L_27 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_25, ((*(int32_t*)((int32_t*)UnBox(L_27, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_28 = V_0;
		V_2 = L_28;
		goto IL_01a6;
	}

IL_00aa:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_29 = ___reader1;
		NullCheck(L_29);
		int32_t L_30 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_29, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_30) == ((int32_t)7))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_00d3;
		}
	}
	{
		RuntimeObject* L_32 = V_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_33 = ___reader1;
		NullCheck(L_33);
		RuntimeObject * L_34 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		InterfaceActionInvoker1< int64_t >::Invoke(4 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_32, ((*(int64_t*)((int64_t*)UnBox(L_34, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_35 = V_0;
		V_2 = L_35;
		goto IL_01a6;
	}

IL_00d3:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_36 = ___reader1;
		NullCheck(L_36);
		int32_t L_37 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_36, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_37) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_00fd;
		}
	}
	{
		RuntimeObject* L_39 = V_0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_40 = ___reader1;
		NullCheck(L_40);
		RuntimeObject * L_41 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_39, ((*(bool*)((bool*)UnBox(L_41, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_42 = V_0;
		V_2 = L_42;
		goto IL_01a6;
	}

IL_00fd:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_43 = ___reader1;
		NullCheck(L_43);
		int32_t L_44 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_43, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_44) == ((int32_t)4))? 1 : 0);
		bool L_45 = V_8;
		if (!L_45)
		{
			goto IL_014b;
		}
	}
	{
		RuntimeObject* L_46 = V_0;
		NullCheck(L_46);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_46, 2);
		goto IL_0143;
	}

IL_0117:
	{
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_47 = ___factory0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_48 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B(L_47, L_48, /*hidden argument*/NULL);
		V_9 = L_49;
		RuntimeObject* L_50 = V_9;
		if (L_50)
		{
			goto IL_0130;
		}
	}
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_51 = ___reader1;
		NullCheck(L_51);
		int32_t L_52 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_51, /*hidden argument*/NULL);
		G_B20_0 = ((((int32_t)L_52) == ((int32_t)5))? 1 : 0);
		goto IL_0131;
	}

IL_0130:
	{
		G_B20_0 = 0;
	}

IL_0131:
	{
		V_10 = (bool)G_B20_0;
		bool L_53 = V_10;
		if (!L_53)
		{
			goto IL_0139;
		}
	}
	{
		goto IL_0148;
	}

IL_0139:
	{
		RuntimeObject* L_54 = V_0;
		RuntimeObject* L_55 = V_9;
		NullCheck(L_54);
		InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var, L_54, L_55);
	}

IL_0143:
	{
		V_11 = (bool)1;
		goto IL_0117;
	}

IL_0148:
	{
		goto IL_01a2;
	}

IL_014b:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_56 = ___reader1;
		NullCheck(L_56);
		int32_t L_57 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_56, /*hidden argument*/NULL);
		V_12 = (bool)((((int32_t)L_57) == ((int32_t)1))? 1 : 0);
		bool L_58 = V_12;
		if (!L_58)
		{
			goto IL_01a2;
		}
	}
	{
		RuntimeObject* L_59 = V_0;
		NullCheck(L_59);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t1D4D4AFEDC62F12FDC4A29CC1D4BBD846BCA938E_il2cpp_TypeInfo_var, L_59, 1);
		goto IL_019c;
	}

IL_0165:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_60 = ___reader1;
		NullCheck(L_60);
		JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4(L_60, /*hidden argument*/NULL);
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_61 = ___reader1;
		NullCheck(L_61);
		int32_t L_62 = JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98(L_61, /*hidden argument*/NULL);
		V_14 = (bool)((((int32_t)L_62) == ((int32_t)3))? 1 : 0);
		bool L_63 = V_14;
		if (!L_63)
		{
			goto IL_017e;
		}
	}
	{
		goto IL_01a1;
	}

IL_017e:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_64 = ___reader1;
		NullCheck(L_64);
		RuntimeObject * L_65 = JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D(L_64, /*hidden argument*/NULL);
		V_13 = ((String_t*)CastclassSealed((RuntimeObject*)L_65, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_66 = V_0;
		String_t* L_67 = V_13;
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_68 = ___factory0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_69 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_70 = JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B(L_68, L_69, /*hidden argument*/NULL);
		NullCheck(L_66);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_66, L_67, L_70);
	}

IL_019c:
	{
		V_15 = (bool)1;
		goto IL_0165;
	}

IL_01a1:
	{
	}

IL_01a2:
	{
		RuntimeObject* L_71 = V_0;
		V_2 = L_71;
		goto IL_01a6;
	}

IL_01a6:
	{
		RuntimeObject* L_72 = V_2;
		return L_72;
	}
}
// System.Void LitJson.JsonMapper::ReadSkip(LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_ReadSkip_m877435CD8C61034B1D0B541FAB83F98D57119662 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ReadSkip_m877435CD8C61034B1D0B541FAB83F98D57119662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * G_B2_0 = NULL;
	WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_0 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__23_0_1();
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_2 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_3 = (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 *)il2cpp_codegen_object_new(WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_m73C9711693E1BDEB7534BEFA7D097E6C3B7906F0(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CReadSkipU3Eb__23_0_m5A8B1622D8833688C4103728C25600594DF83334_RuntimeMethod_var), /*hidden argument*/NULL);
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_4 = L_3;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__23_0_1(L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_5 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		JsonMapper_ToWrapper_m65488411A4EDDF0E37DE0308D41BAE591F4CCFB7(G_B2_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mF69772EE02E9C41B321636C38F93931A64F3CBA3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseExporters_mF69772EE02E9C41B321636C38F93931A64F3CBA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B2_0 = NULL;
	Type_t * G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B1_0 = NULL;
	Type_t * G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B4_0 = NULL;
	Type_t * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B6_0 = NULL;
	Type_t * G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B5_0 = NULL;
	Type_t * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B8_0 = NULL;
	Type_t * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B7_0 = NULL;
	Type_t * G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B10_0 = NULL;
	Type_t * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B9_0 = NULL;
	Type_t * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B12_0 = NULL;
	Type_t * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B11_0 = NULL;
	Type_t * G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B14_0 = NULL;
	Type_t * G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B13_0 = NULL;
	Type_t * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B16_0 = NULL;
	Type_t * G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B15_0 = NULL;
	Type_t * G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B18_0 = NULL;
	Type_t * G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B17_0 = NULL;
	Type_t * G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B20_0 = NULL;
	Type_t * G_B20_1 = NULL;
	RuntimeObject* G_B20_2 = NULL;
	ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * G_B19_0 = NULL;
	Type_t * G_B19_1 = NULL;
	RuntimeObject* G_B19_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_3 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_2();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_0;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_5 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_6 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m9F304B9C0D4160D1ADC9AA05B600683C1964E3B3_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_7 = L_6;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_2(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002f:
	{
		NullCheck(G_B2_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B2_2, G_B2_1, G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_9 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_11 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_3();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		G_B3_2 = L_8;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			G_B4_2 = L_8;
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_13 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_14 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mA747A5035FF59F88A0D5EC09B1A1824E6A69237D_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_15 = L_14;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_3(L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0063:
	{
		NullCheck(G_B4_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_19 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_2_4();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = L_16;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = L_16;
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_21 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_22 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mE67447E11989A7CC91081096EC0DE74CC271437B_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_23 = L_22;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_2_4(L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0097:
	{
		NullCheck(G_B6_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_25 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_27 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_3_5();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_28 = L_27;
		G_B7_0 = L_28;
		G_B7_1 = L_26;
		G_B7_2 = L_24;
		if (L_28)
		{
			G_B8_0 = L_28;
			G_B8_1 = L_26;
			G_B8_2 = L_24;
			goto IL_00cb;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_29 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_30 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m927A7ED61E08C59A17911A0945486163A20756A6_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_31 = L_30;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_3_5(L_31);
		G_B8_0 = L_31;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00cb:
	{
		NullCheck(G_B8_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B8_2, G_B8_1, G_B8_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_33 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_35 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_4_6();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_36 = L_35;
		G_B9_0 = L_36;
		G_B9_1 = L_34;
		G_B9_2 = L_32;
		if (L_36)
		{
			G_B10_0 = L_36;
			G_B10_1 = L_34;
			G_B10_2 = L_32;
			goto IL_00ff;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_37 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_38 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m67453B9FF29EB06B15CD7471D1E25BABB81D6E9E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_39 = L_38;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_4_6(L_39);
		G_B10_0 = L_39;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00ff:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_43 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_5_7();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_44 = L_43;
		G_B11_0 = L_44;
		G_B11_1 = L_42;
		G_B11_2 = L_40;
		if (L_44)
		{
			G_B12_0 = L_44;
			G_B12_1 = L_42;
			G_B12_2 = L_40;
			goto IL_0133;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_45 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_46 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_46, L_45, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m917FCA7FBEB30B142E965F8BAE659E537BC807A3_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_47 = L_46;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_5_7(L_47);
		G_B12_0 = L_47;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_0133:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_48 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_49 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_51 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_6_8();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_52 = L_51;
		G_B13_0 = L_52;
		G_B13_1 = L_50;
		G_B13_2 = L_48;
		if (L_52)
		{
			G_B14_0 = L_52;
			G_B14_1 = L_50;
			G_B14_2 = L_48;
			goto IL_0167;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_53 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_54 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_54, L_53, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mF8D38192BBAF46C2B16003BE2D7E463D2C7C0607_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_55 = L_54;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_6_8(L_55);
		G_B14_0 = L_55;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_0167:
	{
		NullCheck(G_B14_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B14_2, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_56 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_57 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_59 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_7_9();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_60 = L_59;
		G_B15_0 = L_60;
		G_B15_1 = L_58;
		G_B15_2 = L_56;
		if (L_60)
		{
			G_B16_0 = L_60;
			G_B16_1 = L_58;
			G_B16_2 = L_56;
			goto IL_019b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_61 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_62 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_62, L_61, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m9E6A8DB9620E42D56968C1EDDDBB1E77FFF4EF6D_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_63 = L_62;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_7_9(L_63);
		G_B16_0 = L_63;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_019b:
	{
		NullCheck(G_B16_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B16_2, G_B16_1, G_B16_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_64 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_65 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_67 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_8_10();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_68 = L_67;
		G_B17_0 = L_68;
		G_B17_1 = L_66;
		G_B17_2 = L_64;
		if (L_68)
		{
			G_B18_0 = L_68;
			G_B18_1 = L_66;
			G_B18_2 = L_64;
			goto IL_01cf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_69 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_70 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_70, L_69, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7F008A252A552180B19E36732BEAA7767B1C114B_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_71 = L_70;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_8_10(L_71);
		G_B18_0 = L_71;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_01cf:
	{
		NullCheck(G_B18_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B18_2, G_B18_1, G_B18_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_72 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_73 = { reinterpret_cast<intptr_t> (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_74 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_75 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__24_9_11();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_76 = L_75;
		G_B19_0 = L_76;
		G_B19_1 = L_74;
		G_B19_2 = L_72;
		if (L_76)
		{
			G_B20_0 = L_76;
			G_B20_1 = L_74;
			G_B20_2 = L_72;
			goto IL_0203;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_77 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_78 = (ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 *)il2cpp_codegen_object_new(ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m90BF10157A36A827B9E6A033961D17F09F31BBCA(L_78, L_77, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m5C40CCF7BE908771FF59F32E07ACA7D03C208F45_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * L_79 = L_78;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__24_9_11(L_79);
		G_B20_0 = L_79;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_0203:
	{
		NullCheck(G_B20_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t2218A086E4C812F1AADFB29AB9376A3619277729 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_t91721D5CDEBABD088038D0BB83D8BA853DA3758E_il2cpp_TypeInfo_var, G_B20_2, G_B20_1, G_B20_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_m4171A9089A90EBF81C02ED95AB4FC87E0B025B0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterBaseImporters_m4171A9089A90EBF81C02ED95AB4FC87E0B025B0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * V_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B2_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B1_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B4_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B3_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B6_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B5_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B8_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B7_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B10_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B9_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B12_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B11_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B14_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B13_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B16_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B15_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B18_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B17_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B20_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B19_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B22_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B21_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B24_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B23_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B26_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B25_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B28_0 = NULL;
	ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * G_B27_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_0 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_0_12();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_2 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_3 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mB0949C65E6169801311A741F1F52BA7C41C7A032_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_4 = L_3;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_0_12(L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_10 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_5, L_7, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_11 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_1_13();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_13 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_14 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m030F930B00FF1823717C4948BF86FBEED61B228A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_15 = L_14;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_1_13(L_15);
		G_B4_0 = L_15;
	}

IL_0060:
	{
		V_0 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_17 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_19 = { reinterpret_cast<intptr_t> (UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_19, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_21 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_22 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_2_14();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_23 = L_22;
		G_B5_0 = L_23;
		if (L_23)
		{
			G_B6_0 = L_23;
			goto IL_00a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_24 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_25 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m7D7C4DDE3D88AC8FF16C26C877AB8FD85D8C66BC_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_26 = L_25;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_2_14(L_26);
		G_B6_0 = L_26;
	}

IL_00a0:
	{
		V_0 = G_B6_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_27 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_30 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		Type_t * L_31 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_30, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_32 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_33 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_3_15();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_34 = L_33;
		G_B7_0 = L_34;
		if (L_34)
		{
			G_B8_0 = L_34;
			goto IL_00e0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_35 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_36 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m45A2BEC70963C0137D5F95A9F9D785D791DD8A2E_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_37 = L_36;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_3_15(L_37);
		G_B8_0 = L_37;
	}

IL_00e0:
	{
		V_0 = G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_38 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_39 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_39, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_0_0_0_var) };
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_43 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_38, L_40, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_44 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_4_16();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_45 = L_44;
		G_B9_0 = L_45;
		if (L_45)
		{
			G_B10_0 = L_45;
			goto IL_0120;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_46 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_47 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m57C04F16B613068178B719F7263A487B5E8DD719_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_48 = L_47;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_4_16(L_48);
		G_B10_0 = L_48;
	}

IL_0120:
	{
		V_0 = G_B10_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_50 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_50, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_52 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		Type_t * L_53 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_52, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_54 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_49, L_51, L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_55 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_5_17();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_56 = L_55;
		G_B11_0 = L_56;
		if (L_56)
		{
			G_B12_0 = L_56;
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_57 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_58 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_58, L_57, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m232DE5DB073B56BC86BE2C2C4E0B50400250987B_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_59 = L_58;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_5_17(L_59);
		G_B12_0 = L_59;
	}

IL_0160:
	{
		V_0 = G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_60 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_61 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_61, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_63 = { reinterpret_cast<intptr_t> (UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_0_0_0_var) };
		Type_t * L_64 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_63, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_65 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_60, L_62, L_64, L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_66 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_6_18();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_67 = L_66;
		G_B13_0 = L_67;
		if (L_67)
		{
			G_B14_0 = L_67;
			goto IL_01a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_68 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_69 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_69, L_68, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m13FE0A74EC07F758D98D26D8BDB007161E674673_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_70 = L_69;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_6_18(L_70);
		G_B14_0 = L_70;
	}

IL_01a0:
	{
		V_0 = G_B14_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_71 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_72 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_72, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_74 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_75 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_74, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_76 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_71, L_73, L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_77 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_7_19();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_78 = L_77;
		G_B15_0 = L_78;
		if (L_78)
		{
			G_B16_0 = L_78;
			goto IL_01e0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_79 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_80 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_80, L_79, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m210EE0126DBC291599DB6BA96C7E4EF92E38E938_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_81 = L_80;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_7_19(L_81);
		G_B16_0 = L_81;
	}

IL_01e0:
	{
		V_0 = G_B16_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_82 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_83 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_84 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_83, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_85 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		Type_t * L_86 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_85, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_87 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_82, L_84, L_86, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_88 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_8_20();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_89 = L_88;
		G_B17_0 = L_89;
		if (L_89)
		{
			G_B18_0 = L_89;
			goto IL_0220;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_90 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_91 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_91, L_90, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m95C60057B71E38193DDA00848FC9C8DD05D240A2_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_92 = L_91;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_8_20(L_92);
		G_B18_0 = L_92;
	}

IL_0220:
	{
		V_0 = G_B18_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_93 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_94 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_96 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		Type_t * L_97 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_96, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_98 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_99 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_9_21();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_100 = L_99;
		G_B19_0 = L_100;
		if (L_100)
		{
			G_B20_0 = L_100;
			goto IL_0260;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_101 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_102 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_102, L_101, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mF6012DA81D24987AEAE72C8FF32380E04DBD6BC3_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_103 = L_102;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_9_21(L_103);
		G_B20_0 = L_103;
	}

IL_0260:
	{
		V_0 = G_B20_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_104 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_105 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_107 = { reinterpret_cast<intptr_t> (Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_0_0_0_var) };
		Type_t * L_108 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_107, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_109 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_110 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_10_22();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_111 = L_110;
		G_B21_0 = L_111;
		if (L_111)
		{
			G_B22_0 = L_111;
			goto IL_02a0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_112 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_113 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_113, L_112, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m2A393ADE519270079F02ED4BA38E376D1812172B_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_114 = L_113;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_10_22(L_114);
		G_B22_0 = L_114;
	}

IL_02a0:
	{
		V_0 = G_B22_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_115 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_116 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_117 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_116, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_118 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
		Type_t * L_119 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_118, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_120 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_115, L_117, L_119, L_120, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_121 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_11_23();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_122 = L_121;
		G_B23_0 = L_122;
		if (L_122)
		{
			G_B24_0 = L_122;
			goto IL_02e0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_123 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_124 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_124, L_123, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mA82EA601B161665FD433CC2464BC4703738BFEF7_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_125 = L_124;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_11_23(L_125);
		G_B24_0 = L_125;
	}

IL_02e0:
	{
		V_0 = G_B24_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_126 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_127 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_128 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_127, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_129 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		Type_t * L_130 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_129, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_131 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_126, L_128, L_130, L_131, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_132 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_12_24();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_133 = L_132;
		G_B25_0 = L_133;
		if (L_133)
		{
			G_B26_0 = L_133;
			goto IL_0320;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_134 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_135 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_135, L_134, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m8FB27E0834B6DE0FB0A2A707D45F2716E0F6B34E_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_136 = L_135;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_12_24(L_136);
		G_B26_0 = L_136;
	}

IL_0320:
	{
		V_0 = G_B26_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_137 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_139 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_138, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_140 = { reinterpret_cast<intptr_t> (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_0_0_0_var) };
		Type_t * L_141 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_140, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_142 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_137, L_139, L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_143 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9__25_13_25();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_144 = L_143;
		G_B27_0 = L_144;
		if (L_144)
		{
			G_B28_0 = L_144;
			goto IL_0360;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_145 = ((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_146 = (ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 *)il2cpp_codegen_object_new(ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m6D5CED47DA526C92DCE211D87FBD054AF836E1A2(L_146, L_145, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m95641195F248CA1D2B9F6C7702C5C6D704454E00_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_147 = L_146;
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9__25_13_25(L_147);
		G_B28_0 = L_147;
	}

IL_0360:
	{
		V_0 = G_B28_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_148 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_149 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_150 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_149, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_151 = { reinterpret_cast<intptr_t> (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_0_0_0_var) };
		Type_t * L_152 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_151, /*hidden argument*/NULL);
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_153 = V_0;
		JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18(L_148, L_150, L_152, L_153, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_RegisterImporter_m2E6FEBF41BB6F49F75C38CD4BA8BE2CD0D2B2B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(2 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_4 = ___table0;
		Type_t * L_5 = ___json_type1;
		Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A * L_6 = (Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A *)il2cpp_codegen_object_new(Dictionary_2_t5DA8AD0EA8D3F67B92D63DCDB6BB528E6240C88A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA1AFBAA384A9D66BEC2094B122CAB2E11DD3ACE6(L_6, /*hidden argument*/Dictionary_2__ctor_mA1AFBAA384A9D66BEC2094B122CAB2E11DD3ACE6_RuntimeMethod_var);
		NullCheck(L_4);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_4, L_5, L_6);
	}

IL_001c:
	{
		RuntimeObject* L_7 = ___table0;
		Type_t * L_8 = ___json_type1;
		NullCheck(L_7);
		RuntimeObject* L_9 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_tF09AC73AEBE0999B194FFE3F37AC0CEC804D935C_il2cpp_TypeInfo_var, L_7, L_8);
		Type_t * L_10 = ___value_type2;
		ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * L_11 = ___importer3;
		NullCheck(L_9);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t864BE36703A32251CDE71A88E43F65BA7C9F2996 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_tC47DD495EA3C8EE41736835C575A4478AAB0B5E5_il2cpp_TypeInfo_var, L_9, L_10, L_11);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m65488411A4EDDF0E37DE0308D41BAE591F4CCFB7 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * ___factory0, JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonMapper_ToWrapper_m65488411A4EDDF0E37DE0308D41BAE591F4CCFB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * L_0 = ___factory0;
		JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * L_1 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = JsonMapper_ReadValue_m3658B7A9AA3450B51E5C2186B06EDB6398AFC46B(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
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
// System.Void LitJson.JsonMapper_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD7A8EAC2D5774850A44F2C904095E58C9C4F914F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD7A8EAC2D5774850A44F2C904095E58C9C4F914F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * L_0 = (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 *)il2cpp_codegen_object_new(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m72C5CC842F6792AA8D9E4E1D1178F1798ABEDB15(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m72C5CC842F6792AA8D9E4E1D1178F1798ABEDB15 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper_<>c::<ReadSkip>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CReadSkipU3Eb__23_0_m5A8B1622D8833688C4103728C25600594DF83334 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CReadSkipU3Eb__23_0_m5A8B1622D8833688C4103728C25600594DF83334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * L_0 = (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 *)il2cpp_codegen_object_new(JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5_il2cpp_TypeInfo_var);
		JsonMockWrapper__ctor_m5FBFB52C816834A0FB82FA683E5BD849C3D0AC1B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m9F304B9C0D4160D1ADC9AA05B600683C1964E3B3 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m9F304B9C0D4160D1ADC9AA05B600683C1964E3B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m322C82C3EB50E7389A4A38C4601FD08705CA56CF(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mA747A5035FF59F88A0D5EC09B1A1824E6A69237D (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_mA747A5035FF59F88A0D5EC09B1A1824E6A69237D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m1D5180AFF3E80B04E8FD3E98F59174D881CB85B3(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mE67447E11989A7CC91081096EC0DE74CC271437B (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mE67447E11989A7CC91081096EC0DE74CC271437B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_3 = Convert_ToString_m20E97C7A44B4E97B0391CA7810EF35FE25657425(((*(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)UnBox(L_1, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m927A7ED61E08C59A17911A0945486163A20756A6 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m927A7ED61E08C59A17911A0945486163A20756A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m7149BB20B676BD924FCC2948D1E1531BB3CCCA9F(L_0, ((*(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)((Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 *)UnBox(L_1, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m67453B9FF29EB06B15CD7471D1E25BABB81D6E9E (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m67453B9FF29EB06B15CD7471D1E25BABB81D6E9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m484F8DB9BD6090856385FF8A4C0113DD51D5CC1D(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m917FCA7FBEB30B142E965F8BAE659E537BC807A3 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m917FCA7FBEB30B142E965F8BAE659E537BC807A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_mB0AA47EFAB81D1DBA0C2153ECBD0E19DE230BE2C(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mF8D38192BBAF46C2B16003BE2D7E463D2C7C0607 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_mF8D38192BBAF46C2B16003BE2D7E463D2C7C0607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_2 = Convert_ToInt32_m8A95C977AFB27DA577E58CAE3255F8B24EE79517(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m9E6A8DB9620E42D56968C1EDDDBB1E77FFF4EF6D (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m9E6A8DB9620E42D56968C1EDDDBB1E77FFF4EF6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_2 = Convert_ToUInt64_mC8F7AEA2A46B8BEB45B65312F49EEE2540B596EC(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7F008A252A552180B19E36732BEAA7767B1C114B (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m7F008A252A552180B19E36732BEAA7767B1C114B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper_<>c::<RegisterBaseExporters>b__24_9(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m5C40CCF7BE908771FF59F32E07ACA7D03C208F45 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___obj0, JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_m5C40CCF7BE908771FF59F32E07ACA7D03C208F45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)UnBox(L_1, DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_datetime_format_1();
		String_t* L_3 = DateTimeOffset_ToString_mC198692CA58E6E6FF80009C33264F01E4E4B947A((DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 *)(&V_0), _stringLiteralBE101362718475DAD19D92CBB08995C773D5CB3A, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mB0949C65E6169801311A741F1F52BA7C41C7A032 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_mB0949C65E6169801311A741F1F52BA7C41C7A032_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint8_t L_1 = Convert_ToByte_mC952E2B42FF6008EF2123228A0BFB9054531EB64(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m030F930B00FF1823717C4948BF86FBEED61B228A (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m030F930B00FF1823717C4948BF86FBEED61B228A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint64_t L_1 = Convert_ToUInt64_m3D60F8111B12E0D8BB538E433065340CF45EB772(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m7D7C4DDE3D88AC8FF16C26C877AB8FD85D8C66BC (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_m7D7C4DDE3D88AC8FF16C26C877AB8FD85D8C66BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int64_t L_1 = Convert_ToInt64_m61697621C2BC4FDADFE1742507EBA7B3C1D76475(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m45A2BEC70963C0137D5F95A9F9D785D791DD8A2E (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m45A2BEC70963C0137D5F95A9F9D785D791DD8A2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int8_t L_1 = Convert_ToSByte_m65A58DC38CC3A2E7B1D2546EC2FE0803AAB03F34(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m57C04F16B613068178B719F7263A487B5E8DD719 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m57C04F16B613068178B719F7263A487B5E8DD719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int16_t L_1 = Convert_ToInt16_m0D8DD7C5E5F85BE27D38E0FBD17411B8682618B3(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m232DE5DB073B56BC86BE2C2C4E0B50400250987B (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m232DE5DB073B56BC86BE2C2C4E0B50400250987B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint16_t L_1 = Convert_ToUInt16_m926B887258078B9BB42574AA2B3F95DC50460EA7(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m13FE0A74EC07F758D98D26D8BDB007161E674673 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_m13FE0A74EC07F758D98D26D8BDB007161E674673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mA22ABF80925CA54B6B4869939964184C7F344B41(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m210EE0126DBC291599DB6BA96C7E4EF92E38E938 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_m210EE0126DBC291599DB6BA96C7E4EF92E38E938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		float L_1 = Convert_ToSingle_m4D6202BB2F75526A5E01DA49A35D26007C76A21C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m95C60057B71E38193DDA00848FC9C8DD05D240A2 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m95C60057B71E38193DDA00848FC9C8DD05D240A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_1 = Convert_ToDouble_mAE52754212671CD42E2C67BD9ABCE18DAEE443CC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mF6012DA81D24987AEAE72C8FF32380E04DBD6BC3 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_mF6012DA81D24987AEAE72C8FF32380E04DBD6BC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_1 = Convert_ToDecimal_mF93A2E5C1006C59187BA8F1F17E66CEC2D8F7FCE(((*(double*)((double*)UnBox(L_0, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m2A393ADE519270079F02ED4BA38E376D1812172B (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m2A393ADE519270079F02ED4BA38E376D1812172B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		uint32_t L_1 = Convert_ToUInt32_mD1B91075B4D330E0D2D4600A6D5283C2FA1586E4(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mA82EA601B161665FD433CC2464BC4703738BFEF7 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mA82EA601B161665FD433CC2464BC4703738BFEF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_1 = Convert_ToChar_mE2AE0A8A2085470EA17FC28F7D17BE676A135C45(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_2);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		RuntimeObject * L_4 = V_0;
		return L_4;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m8FB27E0834B6DE0FB0A2A707D45F2716E0F6B34E (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_m8FB27E0834B6DE0FB0A2A707D45F2716E0F6B34E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2 = Convert_ToDateTime_m57803D920D7F8261F00652A19DD01E530A530795(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &L_3);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// System.Object LitJson.JsonMapper_<>c::<RegisterBaseImporters>b__25_13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m95641195F248CA1D2B9F6C7702C5C6D704454E00 (U3CU3Ec_tDF4B813B46A2C033B4EB80C2572D33A842C1A2D9 * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m95641195F248CA1D2B9F6C7702C5C6D704454E00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_t9940214A1A83F4B889E940FB1574486C1F895541_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var);
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_2 = DateTimeOffset_Parse_m219FE48FD7B6B4936B3BD5257F5D87CFA1545ED7(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var, &L_3);
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
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
// System.Void LitJson.JsonMockWrapper::SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetBoolean_m463E9B3AD21A5A486AD1BF186B7F0C3D317DC5D9 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, bool ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetDouble_mE175A8F5B2365F37DE96E7C52FB549DD33C4469B (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, double ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetInt_mE1C2CD9EF19A1968CB2E315FD8CF905DFD485B83 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetJsonType_mD674927B0E109D3D1DCBA18201686B7177043B96 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetLong_m2E31823856F7B458C7B8E6AA23A3B4A3C3BFA609 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int64_t ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_SetString_m476A3B18B4609CB8268E91D7A64C5F5BFBCDC40D (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, String_t* ___val0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_get_IsReadOnly_m03C2DD76262907F68F94533F1DBCA68FD5AD0245 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMockWrapper_System_Collections_IList_get_Item_m7E18B36B97CF8E309F494612398FCCE0579244B2 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		V_0 = NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject * L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_set_Item_m945C75CDFF80C26FB0540B261DA980AD656AD72D (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_Add_mEB8F2B4258D7B493C104AD5B3065B891DB8D369F (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Clear_m7EA0B39A398B0A933DBCD1B2C35587D3CE2E7C7F (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IList_Contains_m5B5BE59949971B4AD2889E4B2AFD5B02817A2E8F (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_IList_IndexOf_m82B34A56D6E356C87F262B730454DBEF0A88463E (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Insert_m66D684E11E82F538C9F9A79CDAA5253FB28BE2C0 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___i0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_Remove_m635CB7C6B3CBD22DF47246E15DCCD61E3CCD05CA (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IList_RemoveAt_mDAA0ECBEF72608E9F3A3902E581B183D82759E36 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 LitJson.JsonMockWrapper::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonMockWrapper_System_Collections_ICollection_get_Count_mF9BB485813F582B9F2F3C86BAA151F768D59A100 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_ICollection_CopyTo_m0F4C971796F65E3D33B0131957E35653EC96744E (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonMockWrapper::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IEnumerable_GetEnumerator_m6968E14CEC7FAF76B23DF27A227621F914E27FF3 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Object LitJson.JsonMockWrapper::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonMockWrapper_System_Collections_IDictionary_get_Item_m71EB6D7CF78A9D0DE37343E2BA619FB09DD5C5D1 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		V_0 = NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject * L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_set_Item_m76B793738995B77FF475ACED0423BFEB26FD1241 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void LitJson.JsonMockWrapper::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper_System_Collections_IDictionary_Add_mED2E472AB901316654C8579B6C211E0A37289EBA (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___k0, RuntimeObject * ___v1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LitJson.JsonMockWrapper::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonMockWrapper_System_Collections_IDictionary_Contains_m7D0ECC792235F883FB4E576D84AA21AE77418A03 (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonMockWrapper::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMockWrapper_System_Collections_IDictionary_GetEnumerator_mDA08014802E81903B72FC9C82CFD29787E1D9CDA (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Void LitJson.JsonMockWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMockWrapper__ctor_m5FBFB52C816834A0FB82FA683E5BD849C3D0AC1B (JsonMockWrapper_t592C1360D6F5B904CD1B7640B194E730BCD573D5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean LitJson.JsonReader::get_SkipNonMembers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_get_SkipNonMembers_m9FD325BF08762ED38FAEA2A4FD77FB94AFF56FE4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_skip_non_members_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_mFD39D091E94D2E476BC61B92664847AD5106BB98 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_token_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m2E1B1EDE1AB1F956EFF1EF7C2098AEC1B875501D (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = __this->get_token_value_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mA760F0E04502182C3A36285E59AA49DCCC8FBA81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__cctor_mA760F0E04502182C3A36285E59AA49DCCC8FBA81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = JsonReader_PopulateParseTable_mA4C3CA34DFAE40196DC624261630547D7F11D3F8(/*hidden argument*/NULL);
		((JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_il2cpp_TypeInfo_var))->set_parse_table_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mF41B511BD00A6DAB3B3D864F92335A84E9D0F87B (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, String_t* ___json_text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_mF41B511BD00A6DAB3B3D864F92335A84E9D0F87B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)il2cpp_codegen_object_new(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var);
		StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, bool ___owned1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_0 = ___reader0;
		V_0 = (bool)((((RuntimeObject*)(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral24B55FE81E9E7B11798D3A4E4677DD48FFC81559, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, JsonReader__ctor_m758F968A5CBADBA9CF1D64D72F324DF2AC1DF8AF_RuntimeMethod_var);
	}

IL_001b:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_read_started_9((bool)0);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_3 = (Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A *)il2cpp_codegen_object_new(Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A_il2cpp_TypeInfo_var);
		Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7(L_3, /*hidden argument*/Stack_1__ctor_mE8D272ED844BA8C1F8015F1ED8DDD51B77ACCDD7_RuntimeMethod_var);
		__this->set_automaton_stack_1(L_3);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73(L_4, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_5 = __this->get_automaton_stack_1();
		NullCheck(L_5);
		Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73(L_5, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_6 = ___reader0;
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_7 = (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D *)il2cpp_codegen_object_new(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var);
		Lexer__ctor_mB88AD1E4645FACB770521280D22A28B45F86879D(L_7, L_6, /*hidden argument*/NULL);
		__this->set_lexer_6(L_7);
		__this->set_end_of_input_5((bool)0);
		__this->set_end_of_json_4((bool)0);
		__this->set_skip_non_members_12((bool)1);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_8 = ___reader0;
		__this->set_reader_10(L_8);
		bool L_9 = ___owned1;
		__this->set_reader_is_owned_11(L_9);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mA4C3CA34DFAE40196DC624261630547D7F11D3F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_PopulateParseTable_mA4C3CA34DFAE40196DC624261630547D7F11D3F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 * L_0 = (Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3 *)il2cpp_codegen_object_new(Dictionary_2_t80A4344788DF906C4D1539D0AE15D60C7DE12BC3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8(L_0, /*hidden argument*/Dictionary_2__ctor_mD384100234657B6EA59FD1256FE13207C5E62EE8_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_il2cpp_TypeInfo_var);
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_1, ((int32_t)65548), /*hidden argument*/NULL);
		RuntimeObject* L_2 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_3 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_2, ((int32_t)65548), ((int32_t)91), L_5, /*hidden argument*/NULL);
		RuntimeObject* L_6 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_6, ((int32_t)65549), /*hidden argument*/NULL);
		RuntimeObject* L_7 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_9 = L_8;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_9, L_10, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_7, ((int32_t)65549), ((int32_t)34), L_9, /*hidden argument*/NULL);
		RuntimeObject* L_11 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_12 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = L_12;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_11, ((int32_t)65549), ((int32_t)91), L_13, /*hidden argument*/NULL);
		RuntimeObject* L_15 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_16 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_15, ((int32_t)65549), ((int32_t)93), L_17, /*hidden argument*/NULL);
		RuntimeObject* L_18 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_19 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_20 = L_19;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_18, ((int32_t)65549), ((int32_t)123), L_20, /*hidden argument*/NULL);
		RuntimeObject* L_22 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_23 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = L_23;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_24, L_25, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_22, ((int32_t)65549), ((int32_t)65537), L_24, /*hidden argument*/NULL);
		RuntimeObject* L_26 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_27 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_28 = L_27;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_26, ((int32_t)65549), ((int32_t)65538), L_28, /*hidden argument*/NULL);
		RuntimeObject* L_30 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_31 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = L_31;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_32, L_33, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_30, ((int32_t)65549), ((int32_t)65539), L_32, /*hidden argument*/NULL);
		RuntimeObject* L_34 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_35 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_36 = L_35;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____7FCA397EF25DB53B2C58A05F9BBFA4E8E0685FDBC8AAF39536123447056895C0_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_34, ((int32_t)65549), ((int32_t)65540), L_36, /*hidden argument*/NULL);
		RuntimeObject* L_38 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_38, ((int32_t)65544), /*hidden argument*/NULL);
		RuntimeObject* L_39 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_40 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_39, ((int32_t)65544), ((int32_t)123), L_42, /*hidden argument*/NULL);
		RuntimeObject* L_43 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_43, ((int32_t)65545), /*hidden argument*/NULL);
		RuntimeObject* L_44 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_45 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_46 = L_45;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_47 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____59B7E757844D3BF9299877BD1C17451611BFBAB493374D6B18D973FDE534151A_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_46, L_47, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_44, ((int32_t)65545), ((int32_t)34), L_46, /*hidden argument*/NULL);
		RuntimeObject* L_48 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_49 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_50 = L_49;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_48, ((int32_t)65545), ((int32_t)125), L_50, /*hidden argument*/NULL);
		RuntimeObject* L_51 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_51, ((int32_t)65546), /*hidden argument*/NULL);
		RuntimeObject* L_52 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_53 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_54 = L_53;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____B7A918F6F138CA8137025633559198B529D28CCEC5A51B005376CC69A5B83D85_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_54, L_55, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_52, ((int32_t)65546), ((int32_t)34), L_54, /*hidden argument*/NULL);
		RuntimeObject* L_56 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_56, ((int32_t)65547), /*hidden argument*/NULL);
		RuntimeObject* L_57 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_58 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = L_58;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____FC03ECB1D62767A5B31230F548FA4D4C02F01E3DA8CA1FC66C7C332EA16BF206_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_59, L_60, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_57, ((int32_t)65547), ((int32_t)44), L_59, /*hidden argument*/NULL);
		RuntimeObject* L_61 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_62 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_61, ((int32_t)65547), ((int32_t)125), L_63, /*hidden argument*/NULL);
		RuntimeObject* L_64 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_64, ((int32_t)65552), /*hidden argument*/NULL);
		RuntimeObject* L_65 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_66 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_67 = L_66;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____B257E85A5D3CAB5E738D5A0FD1A7AE96624BFE92CB7915726CBBE1518C3225CF_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_67, L_68, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_65, ((int32_t)65552), ((int32_t)34), L_67, /*hidden argument*/NULL);
		RuntimeObject* L_69 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_69, ((int32_t)65543), /*hidden argument*/NULL);
		RuntimeObject* L_70 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_71 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_70, ((int32_t)65543), ((int32_t)91), L_72, /*hidden argument*/NULL);
		RuntimeObject* L_73 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_74 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_73, ((int32_t)65543), ((int32_t)123), L_75, /*hidden argument*/NULL);
		RuntimeObject* L_76 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_76, ((int32_t)65550), /*hidden argument*/NULL);
		RuntimeObject* L_77 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_78 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_79 = L_78;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_77, ((int32_t)65550), ((int32_t)34), L_79, /*hidden argument*/NULL);
		RuntimeObject* L_80 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_81 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_82 = L_81;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_80, ((int32_t)65550), ((int32_t)91), L_82, /*hidden argument*/NULL);
		RuntimeObject* L_83 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_84 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_85 = L_84;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_83, ((int32_t)65550), ((int32_t)123), L_85, /*hidden argument*/NULL);
		RuntimeObject* L_86 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_87 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_88 = L_87;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_86, ((int32_t)65550), ((int32_t)65537), L_88, /*hidden argument*/NULL);
		RuntimeObject* L_89 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_90 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_91 = L_90;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_89, ((int32_t)65550), ((int32_t)65538), L_91, /*hidden argument*/NULL);
		RuntimeObject* L_92 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_93 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_94 = L_93;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_92, ((int32_t)65550), ((int32_t)65539), L_94, /*hidden argument*/NULL);
		RuntimeObject* L_95 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_96 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_97 = L_96;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_95, ((int32_t)65550), ((int32_t)65540), L_97, /*hidden argument*/NULL);
		RuntimeObject* L_98 = V_0;
		JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77(L_98, ((int32_t)65551), /*hidden argument*/NULL);
		RuntimeObject* L_99 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_100 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_101 = L_100;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_102 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____5B979F69B96A61586A09DD4ED26F20534C629B08732AE32FA34B6F8A0049ACDD_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_101, L_102, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_99, ((int32_t)65551), ((int32_t)44), L_101, /*hidden argument*/NULL);
		RuntimeObject* L_103 = V_0;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_104 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D(L_103, ((int32_t)65551), ((int32_t)93), L_105, /*hidden argument*/NULL);
		RuntimeObject* L_106 = V_0;
		V_1 = L_106;
		goto IL_03b7;
	}

IL_03b7:
	{
		RuntimeObject* L_107 = V_1;
		return L_107;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___symbols3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddCol_m946BCC7284E3E701943FF394E48E8ED1A7138D1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___row1;
		NullCheck(L_0);
		RuntimeObject* L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col2;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ___symbols3;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77 (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_TableAddRow_m9E9A80C1BFD13A947FC810B7C7E1EB6FDB7AEF77_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___rule1;
		Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE * L_2 = (Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE *)il2cpp_codegen_object_new(Dictionary_2_t477CA2C652D1F39897DBB5DB01D89103617494AE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155(L_2, /*hidden argument*/Dictionary_2__ctor_m148696D175A4AE09615CDF2F8F1D21A729C0E155_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_mBE5A469D83D0D1849AC35555333403E6C0F8CF1A (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, String_t* ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessNumber_mBE5A469D83D0D1849AC35555333403E6C0F8CF1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	double V_4 = 0.0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_4, ((int32_t)69), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 1;
	}

IL_0028:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_7 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_8 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		bool L_9 = Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7(L_7, ((int32_t)511), L_8, (double*)(&V_4), /*hidden argument*/NULL);
		V_5 = L_9;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		__this->set_token_14(8);
		double L_11 = V_4;
		double L_12 = L_11;
		RuntimeObject * L_13 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_12);
		__this->set_token_value_13(L_13);
		goto IL_00f1;
	}

IL_005f:
	{
	}

IL_0060:
	{
		String_t* L_14 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_15 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_16 = Int32_TryParse_m6ADA5D03EE325554346538B991A4C3566BD2A011(L_14, 7, L_15, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_6 = L_16;
		bool L_17 = V_6;
		if (!L_17)
		{
			goto IL_008a;
		}
	}
	{
		__this->set_token_14(6);
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_13(L_20);
		goto IL_00f1;
	}

IL_008a:
	{
		String_t* L_21 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_22 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_23 = Int64_TryParse_m8CE5F89833C03A091273A4EF48C69E86E1F81ACC(L_21, 7, L_22, (int64_t*)(&V_1), /*hidden argument*/NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		__this->set_token_14(7);
		int64_t L_25 = V_1;
		int64_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_26);
		__this->set_token_value_13(L_27);
		goto IL_00f1;
	}

IL_00b4:
	{
		String_t* L_28 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_29 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		bool L_30 = UInt64_TryParse_m5119C451C7052149BC0994D3C7AB5D0AE289E8F3(L_28, 7, L_29, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		V_8 = L_30;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00de;
		}
	}
	{
		__this->set_token_14(7);
		uint64_t L_32 = V_2;
		uint64_t L_33 = L_32;
		RuntimeObject * L_34 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_33);
		__this->set_token_value_13(L_34);
		goto IL_00f1;
	}

IL_00de:
	{
		__this->set_token_14(6);
		int32_t L_35 = 0;
		RuntimeObject * L_36 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_35);
		__this->set_token_value_13(L_36);
	}

IL_00f1:
	{
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m054106203012E614E760F2F711C396932EE3B0EE (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_ProcessSymbol_m054106203012E614E760F2F711C396932EE3B0EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		int32_t L_0 = __this->get_current_symbol_3();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)91)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		__this->set_token_14(4);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_0024:
	{
		int32_t L_2 = __this->get_current_symbol_3();
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)93)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		__this->set_token_14(5);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_0047:
	{
		int32_t L_4 = __this->get_current_symbol_3();
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)((int32_t)123)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_006a;
		}
	}
	{
		__this->set_token_14(1);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_006a:
	{
		int32_t L_6 = __this->get_current_symbol_3();
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)125)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_008d;
		}
	}
	{
		__this->set_token_14(3);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_008d:
	{
		int32_t L_8 = __this->get_current_symbol_3();
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_10 = __this->get_parser_in_string_7();
		V_5 = L_10;
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_00bc;
		}
	}
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)1);
		goto IL_00dc;
	}

IL_00bc:
	{
		int32_t L_12 = __this->get_token_14();
		V_6 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_00d4;
		}
	}
	{
		__this->set_token_14(((int32_t)9));
	}

IL_00d4:
	{
		__this->set_parser_in_string_7((bool)1);
	}

IL_00dc:
	{
		goto IL_01e6;
	}

IL_00e2:
	{
		int32_t L_14 = __this->get_current_symbol_3();
		V_7 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)65541)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_010d;
		}
	}
	{
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_16 = __this->get_lexer_6();
		NullCheck(L_16);
		String_t* L_17 = Lexer_get_StringValue_mBEBBEA6153F6A215961F16D6E9CC51653F9C8C01(L_16, /*hidden argument*/NULL);
		__this->set_token_value_13(L_17);
		goto IL_01e6;
	}

IL_010d:
	{
		int32_t L_18 = __this->get_current_symbol_3();
		V_8 = (bool)((((int32_t)L_18) == ((int32_t)((int32_t)65539)))? 1 : 0);
		bool L_19 = V_8;
		if (!L_19)
		{
			goto IL_0142;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_20 = ((bool)0);
		RuntimeObject * L_21 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_20);
		__this->set_token_value_13(L_21);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_0142:
	{
		int32_t L_22 = __this->get_current_symbol_3();
		V_9 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)65540)))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_0168;
		}
	}
	{
		__this->set_token_14(((int32_t)11));
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_0168:
	{
		int32_t L_24 = __this->get_current_symbol_3();
		V_10 = (bool)((((int32_t)L_24) == ((int32_t)((int32_t)65537)))? 1 : 0);
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_0198;
		}
	}
	{
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = __this->get_lexer_6();
		NullCheck(L_26);
		String_t* L_27 = Lexer_get_StringValue_mBEBBEA6153F6A215961F16D6E9CC51653F9C8C01(L_26, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_mBE5A469D83D0D1849AC35555333403E6C0F8CF1A(__this, L_27, /*hidden argument*/NULL);
		__this->set_parser_return_8((bool)1);
		goto IL_01e6;
	}

IL_0198:
	{
		int32_t L_28 = __this->get_current_symbol_3();
		V_11 = (bool)((((int32_t)L_28) == ((int32_t)((int32_t)65546)))? 1 : 0);
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_01b6;
		}
	}
	{
		__this->set_token_14(2);
		goto IL_01e6;
	}

IL_01b6:
	{
		int32_t L_30 = __this->get_current_symbol_3();
		V_12 = (bool)((((int32_t)L_30) == ((int32_t)((int32_t)65538)))? 1 : 0);
		bool L_31 = V_12;
		if (!L_31)
		{
			goto IL_01e6;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_32 = ((bool)1);
		RuntimeObject * L_33 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_32);
		__this->set_token_value_13(L_33);
		__this->set_parser_return_8((bool)1);
	}

IL_01e6:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_m85D8B0A146B4AD5D58D2F3EE705DE46936CDE2B4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0 = __this->get_end_of_input_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_004b;
	}

IL_000f:
	{
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_2 = __this->get_lexer_6();
		NullCheck(L_2);
		Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B(L_2, /*hidden argument*/NULL);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = __this->get_lexer_6();
		NullCheck(L_3);
		bool L_4 = Lexer_get_EndOfInput_m264B2E8D3C7766E94EFBAC76B73577BA7A1A8D65(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		JsonReader_Close_m5440E5126D365C051589D409FB165FDAE3A9CB69(__this, /*hidden argument*/NULL);
		V_1 = (bool)0;
		goto IL_004b;
	}

IL_0036:
	{
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = __this->get_lexer_6();
		NullCheck(L_6);
		int32_t L_7 = Lexer_get_Token_mFD96FA9697583DF1C8C7ABA171839DC6BC9F4446(L_6, /*hidden argument*/NULL);
		__this->set_current_input_2(L_7);
		V_1 = (bool)1;
		goto IL_004b;
	}

IL_004b:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_m5440E5126D365C051589D409FB165FDAE3A9CB69 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Close_m5440E5126D365C051589D409FB165FDAE3A9CB69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = __this->get_end_of_input_5();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0044;
	}

IL_000d:
	{
		__this->set_end_of_input_5((bool)1);
		__this->set_end_of_json_4((bool)1);
		bool L_2 = __this->get_reader_is_owned_11();
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_4 = __this->get_reader_10();
		V_2 = L_4;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3C, FINALLY_0031);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0031;
	}

FINALLY_0031:
	{ // begin finally (depth: 1)
		{
			TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_5 = V_2;
			if (!L_5)
			{
				goto IL_003b;
			}
		}

IL_0034:
		{
			TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_6 = V_2;
			NullCheck(L_6);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_6);
		}

IL_003b:
		{
			IL2CPP_END_FINALLY(49)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(49)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
	}

IL_003d:
	{
		__this->set_reader_10((TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A *)NULL);
	}

IL_0044:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4 (JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		bool L_0 = __this->get_end_of_input_5();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_01cc;
	}

IL_0012:
	{
		bool L_2 = __this->get_end_of_json_4();
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_end_of_json_4((bool)0);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB(L_4, /*hidden argument*/Stack_1_Clear_mC43E363C0EFFE101A8F99D9ABE92A17D76EE79EB_RuntimeMethod_var);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_5 = __this->get_automaton_stack_1();
		NullCheck(L_5);
		Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73(L_5, ((int32_t)65553), /*hidden argument*/Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var);
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_6 = __this->get_automaton_stack_1();
		NullCheck(L_6);
		Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73(L_6, ((int32_t)65543), /*hidden argument*/Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var);
	}

IL_0053:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_token_14(0);
		__this->set_token_value_13(NULL);
		bool L_7 = __this->get_read_started_9();
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_009d;
		}
	}
	{
		__this->set_read_started_9((bool)1);
		bool L_9 = JsonReader_ReadToken_m85D8B0A146B4AD5D58D2F3EE705DE46936CDE2B4(__this, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_009c;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_01cc;
	}

IL_009c:
	{
	}

IL_009d:
	{
		goto IL_01c4;
	}

IL_00a2:
	{
		bool L_11 = __this->get_parser_return_8();
		V_6 = L_11;
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00d6;
		}
	}
	{
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_13 = __this->get_automaton_stack_1();
		NullCheck(L_13);
		int32_t L_14 = Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC(L_13, /*hidden argument*/Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)L_14) == ((int32_t)((int32_t)65553)))? 1 : 0);
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_00cf;
		}
	}
	{
		__this->set_end_of_json_4((bool)1);
	}

IL_00cf:
	{
		V_2 = (bool)1;
		goto IL_01cc;
	}

IL_00d6:
	{
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_16 = __this->get_automaton_stack_1();
		NullCheck(L_16);
		int32_t L_17 = Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC(L_16, /*hidden argument*/Stack_1_Pop_m9A754566910D626419047ADA68D8493D6692F5FC_RuntimeMethod_var);
		__this->set_current_symbol_3(L_17);
		JsonReader_ProcessSymbol_m054106203012E614E760F2F711C396932EE3B0EE(__this, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_current_symbol_3();
		int32_t L_19 = __this->get_current_input_2();
		V_8 = (bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_0152;
		}
	}
	{
		bool L_21 = JsonReader_ReadToken_m85D8B0A146B4AD5D58D2F3EE705DE46936CDE2B4(__this, /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0150;
		}
	}
	{
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_23 = __this->get_automaton_stack_1();
		NullCheck(L_23);
		int32_t L_24 = Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC(L_23, /*hidden argument*/Stack_1_Peek_m3F6CDCF828A747C32BBCAA73A85D5116102F74AC_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)((((int32_t)L_24) == ((int32_t)((int32_t)65553)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_10;
		if (!L_25)
		{
			goto IL_0139;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_26 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_26, _stringLiteral53C44B2B93C7F97C5385D97F275C54FC27BE59DC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4_RuntimeMethod_var);
	}

IL_0139:
	{
		bool L_27 = __this->get_parser_return_8();
		V_11 = L_27;
		bool L_28 = V_11;
		if (!L_28)
		{
			goto IL_014c;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_01cc;
	}

IL_014c:
	{
		V_2 = (bool)0;
		goto IL_01cc;
	}

IL_0150:
	{
		goto IL_01c4;
	}

IL_0152:
	{
	}

IL_0153:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_tE6E88642DBAB85008AF8E451D2AB76AC861F3DDF_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_30 = __this->get_current_symbol_3();
		NullCheck(L_29);
		RuntimeObject* L_31 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_tFA3AB64BFA07F7DE6104192003EB5CAD7A05F4EF_il2cpp_TypeInfo_var, L_29, L_30);
		int32_t L_32 = __this->get_current_input_2();
		NullCheck(L_31);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_33 = InterfaceFuncInvoker1< Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_tEB678B1A5DD39823F992E9CC72BDF1890F8DBF75_il2cpp_TypeInfo_var, L_31, L_32);
		V_0 = L_33;
		goto IL_0184;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0173;
		throw e;
	}

CATCH_0173:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_12 = ((KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 *)__exception_local);
		int32_t L_34 = __this->get_current_input_2();
		KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * L_35 = V_12;
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_36 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_m7447A75C0B2299D452A2249A9DA906C5C8A8AC03(L_36, L_34, L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, JsonReader_Read_m6E25061A107B5D70BDEE30B52A480E3D29C104D4_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0184:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 0;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_13 = (bool)((((int32_t)L_39) == ((int32_t)((int32_t)65554)))? 1 : 0);
		bool L_40 = V_13;
		if (!L_40)
		{
			goto IL_0196;
		}
	}
	{
		goto IL_01c4;
	}

IL_0196:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_41 = V_0;
		NullCheck(L_41);
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))), (int32_t)1));
		goto IL_01b5;
	}

IL_019f:
	{
		Stack_1_t09A8EBB6E2F5CCF7E2E67BDECA461795F93D523A * L_42 = __this->get_automaton_stack_1();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_43 = V_0;
		int32_t L_44 = V_14;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_42);
		Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73(L_42, L_46, /*hidden argument*/Stack_1_Push_m093B9DD635DC4EFEAC301FBDEC1B06024071DF73_RuntimeMethod_var);
		int32_t L_47 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)1));
	}

IL_01b5:
	{
		int32_t L_48 = V_14;
		V_15 = (bool)((((int32_t)((((int32_t)L_48) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_15;
		if (L_49)
		{
			goto IL_019f;
		}
	}
	{
	}

IL_01c4:
	{
		V_16 = (bool)1;
		goto IL_00a2;
	}

IL_01cc:
	{
		bool L_50 = V_2;
		return L_50;
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
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m1F0035B6FCF8C755204BFA7E2B8E15A58F15B073 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__cctor_m1F0035B6FCF8C755204BFA7E2B8E15A58F15B073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_0 = NumberFormatInfo_get_InvariantInfo_m55FDCA552CC3CD15E01E10DBFDD5756AB1DCC54D(/*hidden argument*/NULL);
		((JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m4F2AB927A5AC20A76DF0F2E1E30F7211DC2B0A19 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter__ctor_m4F2AB927A5AC20A76DF0F2E1E30F7211DC2B0A19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 * L_2 = (StringWriter_t194EF1526E072B93984370042AA80926C2EB6139 *)il2cpp_codegen_object_new(StringWriter_t194EF1526E072B93984370042AA80926C2EB6139_il2cpp_TypeInfo_var);
		StringWriter__ctor_m95CECB2AA32BDD586F89DE2DA0EEEFABACB19A28(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_11(L_2);
		JsonWriter_Init_m31B06E5F1B3E9007A6C5F5E45982AE08545E3AC4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B35_0 = 0;
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_Count_0();
		NullCheck(L_4);
		L_4->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
	}

IL_0026:
	{
		bool L_6 = __this->get_validate_9();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_0167;
	}

IL_0038:
	{
		bool L_8 = __this->get_has_reached_end_3();
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_10 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_10, _stringLiteral99335FE5A851B8D6DE6C4F3960B91381442A9C4B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_11 = ___cond0;
		V_4 = L_11;
		int32_t L_12 = V_4;
		V_3 = L_12;
		int32_t L_13 = V_3;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0072;
			}
			case 1:
			{
				goto IL_0096;
			}
			case 2:
			{
				goto IL_00c7;
			}
			case 3:
			{
				goto IL_00f8;
			}
			case 4:
			{
				goto IL_0126;
			}
		}
	}
	{
		goto IL_0167;
	}

IL_0072:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_InArray_1();
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0091;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_17 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_17, _stringLiteral9291AA1658502FAC86A8371BE70913BB2D603283, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_0091:
	{
		goto IL_0167;
	}

IL_0096:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_18 = __this->get_context_1();
		NullCheck(L_18);
		bool L_19 = L_18->get_InObject_2();
		if (!L_19)
		{
			goto IL_00b0;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_20 = __this->get_context_1();
		NullCheck(L_20);
		bool L_21 = L_20->get_ExpectingValue_3();
		G_B14_0 = ((int32_t)(L_21));
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B14_0 = 1;
	}

IL_00b1:
	{
		V_6 = (bool)G_B14_0;
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_00c2;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_23 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_23, _stringLiteral97629CE304162C43F08FCEFEB814CC3CB6724728, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_00c2:
	{
		goto IL_0167;
	}

IL_00c7:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_InObject_2();
		if (!L_25)
		{
			goto IL_00e4;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_26 = __this->get_context_1();
		NullCheck(L_26);
		bool L_27 = L_26->get_ExpectingValue_3();
		G_B20_0 = ((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		goto IL_00e5;
	}

IL_00e4:
	{
		G_B20_0 = 0;
	}

IL_00e5:
	{
		V_7 = (bool)G_B20_0;
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00f6;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_29 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_29, _stringLiteralE6816349A8502B93DEEF3110B026078572F9A015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_00f6:
	{
		goto IL_0167;
	}

IL_00f8:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_30 = __this->get_context_1();
		NullCheck(L_30);
		bool L_31 = L_30->get_InObject_2();
		if (!L_31)
		{
			goto IL_0112;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_32 = __this->get_context_1();
		NullCheck(L_32);
		bool L_33 = L_32->get_ExpectingValue_3();
		G_B26_0 = ((int32_t)(L_33));
		goto IL_0113;
	}

IL_0112:
	{
		G_B26_0 = 1;
	}

IL_0113:
	{
		V_8 = (bool)G_B26_0;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0124;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_35 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_35, _stringLiteralC08ECE7D87BEA19F5BEB3929F2645FAA2A46714C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_0124:
	{
		goto IL_0167;
	}

IL_0126:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_36 = __this->get_context_1();
		NullCheck(L_36);
		bool L_37 = L_36->get_InArray_1();
		if (L_37)
		{
			goto IL_0153;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_38 = __this->get_context_1();
		NullCheck(L_38);
		bool L_39 = L_38->get_InObject_2();
		if (!L_39)
		{
			goto IL_0150;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_40 = __this->get_context_1();
		NullCheck(L_40);
		bool L_41 = L_40->get_ExpectingValue_3();
		G_B33_0 = ((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		goto IL_0151;
	}

IL_0150:
	{
		G_B33_0 = 1;
	}

IL_0151:
	{
		G_B35_0 = G_B33_0;
		goto IL_0154;
	}

IL_0153:
	{
		G_B35_0 = 0;
	}

IL_0154:
	{
		V_9 = (bool)G_B35_0;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0165;
		}
	}
	{
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_43 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mBC4B91419F07F9739CE22424CE054A83D57B4341(L_43, _stringLiteralFAE13CA253363E593621DD7CCF4DF1DCA39E2817, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3_RuntimeMethod_var);
	}

IL_0165:
	{
		goto IL_0167;
	}

IL_0167:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m31B06E5F1B3E9007A6C5F5E45982AE08545E3AC4 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Init_m31B06E5F1B3E9007A6C5F5E45982AE08545E3AC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		__this->set_lower_case_properties_10((bool)0);
		Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * L_1 = (Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 *)il2cpp_codegen_object_new(Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0_il2cpp_TypeInfo_var);
		Stack_1__ctor_m47DCA63C6AE3F43E8A3AED08384CEDC7EEB1060B(L_1, /*hidden argument*/Stack_1__ctor_m47DCA63C6AE3F43E8A3AED08384CEDC7EEB1060B_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_2 = (WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B *)il2cpp_codegen_object_new(WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B_il2cpp_TypeInfo_var);
		WriterContext__ctor_m0369F92DEC7EEFEEDC9969F6EC0F253D0F6944A4(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_t3034EE6A9142E8E5C02014B07FF406134545DDF0 * L_3 = __this->get_ctx_stack_2();
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_m76FC2C4F2731CC58D35D7A4E7EF89D06667BB3DF(L_3, L_4, /*hidden argument*/Stack_1_Push_m76FC2C4F2731CC58D35D7A4E7EF89D06667BB3DF_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m5D5C98BD98E0CDF3AB69BC39D88F4196D5CD5077 (int32_t ___n0, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_1 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		V_2 = (bool)((((int32_t)L_1) < ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = ___hex1;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_4))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_5))))));
		goto IL_002d;
	}

IL_0020:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = ___hex1;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_7))), (Il2CppChar)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)10)))))))));
	}

IL_002d:
	{
		int32_t L_9 = ___n0;
		___n0 = ((int32_t)((int32_t)L_9>>(int32_t)4));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)4))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0041;
		}
	}
	{
		V_1 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_4 = __this->get_writer_11();
		NullCheck(L_4);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_4, ((int32_t)32));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_indentation_5();
		V_2 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0022;
		}
	}

IL_0041:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_9 = __this->get_writer_11();
		String_t* L_10 = ___str0;
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m3E7A28B6EF3DF4014F63932A3074EFB08A10C197(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m3E7A28B6EF3DF4014F63932A3074EFB08A10C197 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		G_B4_0 = ((((int32_t)L_4) > ((int32_t)1))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B4_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_6 = __this->get_writer_11();
		NullCheck(L_6);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_6, ((int32_t)44));
	}

IL_0034:
	{
		bool L_7 = __this->get_pretty_print_8();
		if (!L_7)
		{
			goto IL_004c;
		}
	}
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_8 = __this->get_context_1();
		NullCheck(L_8);
		bool L_9 = L_8->get_ExpectingValue_3();
		G_B9_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004d;
	}

IL_004c:
	{
		G_B9_0 = 0;
	}

IL_004d:
	{
		V_1 = (bool)G_B9_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0062;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_11 = __this->get_writer_11();
		String_t* L_12 = Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318(/*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, L_12);
	}

IL_0062:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mF6CBD9E5651A54175282B078ABC23B3AB2AD8C76 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_PutString_mF6CBD9E5651A54175282B078ABC23B3AB2AD8C76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B16_0 = 0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_1 = __this->get_writer_11();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_016b;
	}

IL_0029:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_4, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		Il2CppChar L_7 = V_3;
		V_2 = L_7;
		Il2CppChar L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_0093;
			}
			case 2:
			{
				goto IL_0067;
			}
			case 3:
			{
				goto IL_00f8;
			}
			case 4:
			{
				goto IL_00cf;
			}
			case 5:
			{
				goto IL_007d;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0056:
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)34))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_005d;
	}

IL_005d:
	{
		Il2CppChar L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)92))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00f8;
	}

IL_0067:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_11 = __this->get_writer_11();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8);
		goto IL_0167;
	}

IL_007d:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_12 = __this->get_writer_11();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01);
		goto IL_0167;
	}

IL_0093:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_13 = __this->get_writer_11();
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_13, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7);
		goto IL_0167;
	}

IL_00a9:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_14 = __this->get_writer_11();
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, ((int32_t)92));
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_15 = __this->get_writer_11();
		String_t* L_16 = ___str0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Il2CppChar L_18 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_15, L_18);
		goto IL_0167;
	}

IL_00cf:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_19 = __this->get_writer_11();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385);
		goto IL_0167;
	}

IL_00e5:
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_20 = __this->get_writer_11();
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_20, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5);
		goto IL_0167;
	}

IL_00f8:
	{
		String_t* L_21 = ___str0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		Il2CppChar L_23 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_21, L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)32))))
		{
			goto IL_0113;
		}
	}
	{
		String_t* L_24 = ___str0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		Il2CppChar L_26 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_24, L_25, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)((((int32_t)L_26) > ((int32_t)((int32_t)126)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0114;
	}

IL_0113:
	{
		G_B16_0 = 0;
	}

IL_0114:
	{
		V_4 = (bool)G_B16_0;
		bool L_27 = V_4;
		if (!L_27)
		{
			goto IL_0130;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_28 = __this->get_writer_11();
		String_t* L_29 = ___str0;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		Il2CppChar L_31 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_28, L_31);
		goto IL_0167;
	}

IL_0130:
	{
		String_t* L_32 = ___str0;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		Il2CppChar L_34 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_32, L_33, /*hidden argument*/NULL);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_35 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m5D5C98BD98E0CDF3AB69BC39D88F4196D5CD5077(L_34, L_35, /*hidden argument*/NULL);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_36 = __this->get_writer_11();
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_37 = __this->get_writer_11();
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_38 = __this->get_hex_seq_4();
		NullCheck(L_37);
		VirtActionInvoker1< CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* >::Invoke(11 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_37, L_38);
	}

IL_0167:
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_016b:
	{
		int32_t L_40 = V_1;
		int32_t L_41 = V_0;
		V_5 = (bool)((((int32_t)L_40) < ((int32_t)L_41))? 1 : 0);
		bool L_42 = V_5;
		if (L_42)
		{
			goto IL_0029;
		}
	}
	{
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_43 = __this->get_writer_11();
		NullCheck(L_43);
		VirtActionInvoker1< Il2CppChar >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_43, ((int32_t)34));
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_m76CEEC8A6AED0BEB58F012E8B86227D5ADD22C8B (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_ToString_m76CEEC8A6AED0BEB58F012E8B86227D5ADD22C8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		V_0 = (bool)((((RuntimeObject*)(StringBuilder_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_1 = L_2;
		goto IL_0024;
	}

IL_0016:
	{
		StringBuilder_t * L_3 = __this->get_inst_string_builder_7();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_1 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		String_t* L_5 = V_1;
		return L_5;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m7149BB20B676BD924FCC2948D1E1531BB3CCCA9F (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m7149BB20B676BD924FCC2948D1E1531BB3CCCA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461(__this, /*hidden argument*/NULL);
		Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_mC3AC6F8BB681D0987C450396DCE22BAFAF5CB18D(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m8B6395938D3D08C6E315C8C89DFFC92F842CFB3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m013DD2590D9DCBA00A8A4FEEBE7FC2DBD4DDBC70(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m8D771714083F0CC512B4B30525CA020DA35EE655_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A(__this, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		goto IL_002e;
	}

IL_0026:
	{
		String_t* L_2 = ___str0;
		JsonWriter_PutString_mF6CBD9E5651A54175282B078ABC23B3AB2AD8C76(__this, L_2, /*hidden argument*/NULL);
	}

IL_002e:
	{
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313 (JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JsonWriter_Write_m8F3E5F383BED5CA25A0524077B9A0A844D9EC313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_m3FC517927EFCCD57FE6083CA2629643DDA083CE3(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_mC6EE9B75D9F2932ED80C90653DDCBAEA121AD461(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var);
		NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * L_1 = ((JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_t0249703A6B3C0F1AF74BF38F7FB0965322BD660C_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_2 = Convert_ToString_m700ABBAAF525328BB3A050D41B983F59E447C2D5(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_m06CD91079842129B8F937C5FB158AB6DD2BC671A(__this, L_2, /*hidden argument*/NULL);
		WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
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
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_m264B2E8D3C7766E94EFBAC76B73577BA7A1A8D65 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_end_of_input_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mFD96FA9697583DF1C8C7ABA171839DC6BC9F4446 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_token_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_mBEBBEA6153F6A215961F16D6E9CC51653F9C8C01 (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_string_value_11();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_mA49489C6258DC94CE1D09D4F3F4F0B46E6098CA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer__cctor_mA49489C6258DC94CE1D09D4F3F4F0B46E6098CA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lexer_PopulateFsmTables_m49AE89A82E09E4E217DB9452938FE9FC57F1772C((StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F**)(((Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var))->get_address_of_fsm_handler_table_1()), (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83**)(((Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var))->get_address_of_fsm_return_table_0()), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_mB88AD1E4645FACB770521280D22A28B45F86879D (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer__ctor_mB88AD1E4645FACB770521280D22A28B45F86879D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_allow_comments_2((bool)1);
		__this->set_allow_single_quoted_strings_3((bool)1);
		__this->set_input_buffer_6(0);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1C0F2D97B838537A2D0F64033AE4EF02D150A956(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_string_buffer_10(L_0);
		__this->set_state_9(1);
		__this->set_end_of_input_4((bool)0);
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_1 = ___reader0;
		__this->set_reader_8(L_1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *)il2cpp_codegen_object_new(FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41_il2cpp_TypeInfo_var);
		FsmContext__ctor_mC141D5CF55AB3CA34F082A83A1DD76F1FFD77384(L_2, /*hidden argument*/NULL);
		__this->set_fsm_context_5(L_2);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_3 = __this->get_fsm_context_5();
		NullCheck(L_3);
		L_3->set_L_2(__this);
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mD891B49628F4169B8493B1EC21F242A5BD61D56B (int32_t ___digit0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___digit0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)65))))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_005f;
			}
			case 5:
			{
				goto IL_0064;
			}
		}
	}
	{
		goto IL_0028;
	}

IL_0028:
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)97))))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_005a;
			}
			case 4:
			{
				goto IL_005f;
			}
			case 5:
			{
				goto IL_0064;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_004b:
	{
		V_2 = ((int32_t)10);
		goto IL_0070;
	}

IL_0050:
	{
		V_2 = ((int32_t)11);
		goto IL_0070;
	}

IL_0055:
	{
		V_2 = ((int32_t)12);
		goto IL_0070;
	}

IL_005a:
	{
		V_2 = ((int32_t)13);
		goto IL_0070;
	}

IL_005f:
	{
		V_2 = ((int32_t)14);
		goto IL_0070;
	}

IL_0064:
	{
		V_2 = ((int32_t)15);
		goto IL_0070;
	}

IL_0069:
	{
		int32_t L_4 = ___digit0;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)48)));
		goto IL_0070;
	}

IL_0070:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables(LitJson.Lexer_StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_m49AE89A82E09E4E217DB9452938FE9FC57F1772C (StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F** ___fsm_handler_table0, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** ___fsm_return_table1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_PopulateFsmTables_m49AE89A82E09E4E217DB9452938FE9FC57F1772C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F** L_0 = ___fsm_handler_table0;
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_1 = (StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F*)(StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F*)SZArrayNew(StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_2 = L_1;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_3 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_3, NULL, (intptr_t)((intptr_t)Lexer_State1_mF05624C8B35FF9537E845D3B1E16286DBBF544D0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_3);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_4 = L_2;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_5 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_5, NULL, (intptr_t)((intptr_t)Lexer_State2_m823589B0E1DFD077348F2ED79BE79522CD7E7DD3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_5);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_6 = L_4;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_7 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_7, NULL, (intptr_t)((intptr_t)Lexer_State3_m7B641B2B278BA0B121ACEB26B8EE36EA3A617E2F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_7);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_8 = L_6;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_9 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_9, NULL, (intptr_t)((intptr_t)Lexer_State4_mB579357556B87B7BCEBAEAF652E13E628DCAF3E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_9);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_10 = L_8;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_11 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_11, NULL, (intptr_t)((intptr_t)Lexer_State5_m80C359CC8EAE78070CB2E246B20C213F4C584565_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_11);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_12 = L_10;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_13 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_13, NULL, (intptr_t)((intptr_t)Lexer_State6_m6C794EDE9CD28C38C0CE979DB2C788C50B3E86D2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_13);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_14 = L_12;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_15 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_15, NULL, (intptr_t)((intptr_t)Lexer_State7_mCDBC5DEEC4135AB2AD58C6DD62E08E255C4D3798_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_15);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_16 = L_14;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_17 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_17, NULL, (intptr_t)((intptr_t)Lexer_State8_m3F59A00291894A1E5013E3696B5E6892D1130AE2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_17);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_18 = L_16;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_19 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_19, NULL, (intptr_t)((intptr_t)Lexer_State9_mC7C85EBB7246B7F5FA572A0AF9DF13D96E2A9504_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_19);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_20 = L_18;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_21 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_21, NULL, (intptr_t)((intptr_t)Lexer_State10_mD282A0A9130F377DAF7B0FC4E71D55C28AA3F194_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_21);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_22 = L_20;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_23 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_23, NULL, (intptr_t)((intptr_t)Lexer_State11_mD0FC738D1A47380BE379A8CDE21F73F83F028E3A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_23);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_24 = L_22;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_25 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_25, NULL, (intptr_t)((intptr_t)Lexer_State12_m184A28E61E48432144151B013C6475B88A47BA53_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_25);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_26 = L_24;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_27 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_27, NULL, (intptr_t)((intptr_t)Lexer_State13_mBB2C0F399A60256D5D23B9E22D4ED6AD49BC36EE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_27);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_28 = L_26;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_29 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_29, NULL, (intptr_t)((intptr_t)Lexer_State14_m69F4F981A5A2A86F25727B946FF1909519235EE3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_29);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_30 = L_28;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_31 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_31, NULL, (intptr_t)((intptr_t)Lexer_State15_mB21E6B8401A51B56B276BC80FBD7B22EA27BB135_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_31);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_32 = L_30;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_33 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_33, NULL, (intptr_t)((intptr_t)Lexer_State16_m2DFAEF35051E6F22442BBABF8A2B3175F76D7C73_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_33);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_34 = L_32;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_35 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_35, NULL, (intptr_t)((intptr_t)Lexer_State17_m3CCAF2E714272838D0A2277B280E745548846850_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_35);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_36 = L_34;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_37 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_37, NULL, (intptr_t)((intptr_t)Lexer_State18_m663B1945148620242FFD8436EE524A220FD5E37B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_37);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_38 = L_36;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_39 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_39, NULL, (intptr_t)((intptr_t)Lexer_State19_mFC7C3E9E267F30F31D3FC861DB1C2389D94EFAB2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_39);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_40 = L_38;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_41 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_41, NULL, (intptr_t)((intptr_t)Lexer_State20_mCC42729993D2DFFA42C3AD48DEFF182B383DFCC9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_41);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_42 = L_40;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_43 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_43, NULL, (intptr_t)((intptr_t)Lexer_State21_mCBE6C67B7B94C4A0391E47D8C14CF975D92AE1BF_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_43);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_44 = L_42;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_45 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_45, NULL, (intptr_t)((intptr_t)Lexer_State22_m486F6AB68BA91736BFCED13B818D08675DDFA10E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_45);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_46 = L_44;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_47 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_47, NULL, (intptr_t)((intptr_t)Lexer_State23_mC7DE40B0046A0E59B994297E84EBBEC75473CF9E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_47);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_48 = L_46;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_49 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_49, NULL, (intptr_t)((intptr_t)Lexer_State24_mFB00EA0A9EFDE52CCEE077E0E7E5DFE85BC30B44_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_49);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_50 = L_48;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_51 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_51, NULL, (intptr_t)((intptr_t)Lexer_State25_m2F5C00031663E5F5B231F17AD0A0416CF5332FF9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_51);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_52 = L_50;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_53 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_53, NULL, (intptr_t)((intptr_t)Lexer_State26_m54F35776ED97C41C49172D6D3AD2CB2D18A7A8B2_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_53);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_54 = L_52;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_55 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_55, NULL, (intptr_t)((intptr_t)Lexer_State27_m42BB10DBEFB1165A0834512EC0E7EB402D8BC1C6_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_55);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_56 = L_54;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_57 = (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)il2cpp_codegen_object_new(StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F(L_57, NULL, (intptr_t)((intptr_t)Lexer_State28_mEEC0F81DA0D20EA4CF249A11E3CE3C7DA218A736_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 *)L_57);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_56;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_56);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** L_58 = ___fsm_return_table1;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_59 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_60 = L_59;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_61 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0CF42862D81C5087E990F79D6B3578F5081EA177____C84227140A8A7787B30DFF8BD5693C19AA5A430C4E89FFD0256D7F77B3FEAD82_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_60, L_61, /*hidden argument*/NULL);
		*((RuntimeObject **)L_58) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_58, (void*)(RuntimeObject *)L_60);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m791BA99492515DB017B71D1A8C82830A40DDE240 (int32_t ___esc_char0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_ProcessEscChar_m791BA99492515DB017B71D1A8C82830A40DDE240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = ___esc_char0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)92))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)39))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0074;
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)47))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0024;
	}

IL_0024:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)92))))
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0074;
	}

IL_002b:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) > ((int32_t)((int32_t)102))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)98))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0037;
	}

IL_0037:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)102))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0074;
	}

IL_003e:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)110))))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0045;
	}

IL_0045:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)114))))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_004c;
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)116))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0053:
	{
		int32_t L_14 = ___esc_char0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_15 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		goto IL_0079;
	}

IL_005c:
	{
		V_2 = ((int32_t)10);
		goto IL_0079;
	}

IL_0061:
	{
		V_2 = ((int32_t)9);
		goto IL_0079;
	}

IL_0066:
	{
		V_2 = ((int32_t)13);
		goto IL_0079;
	}

IL_006b:
	{
		V_2 = 8;
		goto IL_0079;
	}

IL_006f:
	{
		V_2 = ((int32_t)12);
		goto IL_0079;
	}

IL_0074:
	{
		V_2 = ((int32_t)63);
		goto IL_0079;
	}

IL_0079:
	{
		Il2CppChar L_16 = V_2;
		return L_16;
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mF05624C8B35FF9537E845D3B1E16286DBBF544D0 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		goto IL_0241;
	}

IL_0006:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_003c;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		G_B5_0 = ((((int32_t)((((int32_t)L_8) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B5_0 = 0;
	}

IL_003a:
	{
		G_B7_0 = G_B5_0;
		goto IL_003d;
	}

IL_003c:
	{
		G_B7_0 = 1;
	}

IL_003d:
	{
		V_0 = (bool)G_B7_0;
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0241;
	}

IL_0046:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_11 = L_10->get_L_2();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_input_char_7();
		if ((((int32_t)L_12) < ((int32_t)((int32_t)49))))
		{
			goto IL_0069;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		G_B12_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B12_0 = 0;
	}

IL_006a:
	{
		V_1 = (bool)G_B12_0;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_009a;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		StringBuilder_t * L_19 = L_18->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_21 = L_20->get_L_2();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_input_char_7();
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, (((int32_t)((uint16_t)L_22))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(3);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_009a:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_4 = L_26;
		int32_t L_27 = V_4;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) > ((int32_t)((int32_t)91))))
		{
			goto IL_00f8;
		}
	}
	{
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)39))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)34))))
		{
			goto IL_0136;
		}
	}
	{
		goto IL_00bb;
	}

IL_00bb:
	{
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)39))))
		{
			goto IL_01e1;
		}
	}
	{
		goto IL_023d;
	}

IL_00c8:
	{
		int32_t L_32 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_014c;
			}
			case 1:
			{
				goto IL_0161;
			}
			case 2:
			{
				goto IL_023d;
			}
			case 3:
			{
				goto IL_0219;
			}
			case 4:
			{
				goto IL_018c;
			}
		}
	}
	{
		goto IL_00e7;
	}

IL_00e7:
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)58))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_00ee;
	}

IL_00ee:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)91))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_023d;
	}

IL_00f8:
	{
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)110))))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_36 = V_3;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)93))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0104;
	}

IL_0104:
	{
		int32_t L_37 = V_3;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)102))))
		{
			goto IL_01b7;
		}
	}
	{
		goto IL_010e;
	}

IL_010e:
	{
		int32_t L_38 = V_3;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)110))))
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_023d;
	}

IL_011b:
	{
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)116))))
		{
			goto IL_01d5;
		}
	}
	{
		goto IL_0125;
	}

IL_0125:
	{
		int32_t L_40 = V_3;
		if ((((int32_t)L_40) == ((int32_t)((int32_t)123))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_012c;
	}

IL_012c:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) == ((int32_t)((int32_t)125))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_023d;
	}

IL_0136:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->set_NextState_1(((int32_t)19));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->set_Return_0((bool)1);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_014c:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->set_NextState_1(1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_45 = ___ctx0;
		NullCheck(L_45);
		L_45->set_Return_0((bool)1);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_0161:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_47 = L_46->get_L_2();
		NullCheck(L_47);
		StringBuilder_t * L_48 = L_47->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_49 = ___ctx0;
		NullCheck(L_49);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_50 = L_49->get_L_2();
		NullCheck(L_50);
		int32_t L_51 = L_50->get_input_char_7();
		NullCheck(L_48);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_48, (((int32_t)((uint16_t)L_51))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_52 = ___ctx0;
		NullCheck(L_52);
		L_52->set_NextState_1(2);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_018c:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_53 = ___ctx0;
		NullCheck(L_53);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_54 = L_53->get_L_2();
		NullCheck(L_54);
		StringBuilder_t * L_55 = L_54->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_56 = ___ctx0;
		NullCheck(L_56);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_57 = L_56->get_L_2();
		NullCheck(L_57);
		int32_t L_58 = L_57->get_input_char_7();
		NullCheck(L_55);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_55, (((int32_t)((uint16_t)L_58))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_59 = ___ctx0;
		NullCheck(L_59);
		L_59->set_NextState_1(4);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_01b7:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->set_NextState_1(((int32_t)12));
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_01c6:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_61 = ___ctx0;
		NullCheck(L_61);
		L_61->set_NextState_1(((int32_t)16));
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_01d5:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_62 = ___ctx0;
		NullCheck(L_62);
		L_62->set_NextState_1(((int32_t)9));
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_01e1:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_63 = ___ctx0;
		NullCheck(L_63);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_64 = L_63->get_L_2();
		NullCheck(L_64);
		bool L_65 = L_64->get_allow_single_quoted_strings_3();
		V_5 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_5;
		if (!L_66)
		{
			goto IL_01f9;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0259;
	}

IL_01f9:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_67 = ___ctx0;
		NullCheck(L_67);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_68 = L_67->get_L_2();
		NullCheck(L_68);
		L_68->set_input_char_7(((int32_t)34));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_69 = ___ctx0;
		NullCheck(L_69);
		L_69->set_NextState_1(((int32_t)23));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_70 = ___ctx0;
		NullCheck(L_70);
		L_70->set_Return_0((bool)1);
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_0219:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_71 = ___ctx0;
		NullCheck(L_71);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_72 = L_71->get_L_2();
		NullCheck(L_72);
		bool L_73 = L_72->get_allow_comments_2();
		V_6 = (bool)((((int32_t)L_73) == ((int32_t)0))? 1 : 0);
		bool L_74 = V_6;
		if (!L_74)
		{
			goto IL_0231;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0259;
	}

IL_0231:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_75 = ___ctx0;
		NullCheck(L_75);
		L_75->set_NextState_1(((int32_t)25));
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_023d:
	{
		V_2 = (bool)0;
		goto IL_0259;
	}

IL_0241:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_76 = ___ctx0;
		NullCheck(L_76);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_77 = L_76->get_L_2();
		NullCheck(L_77);
		bool L_78 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_77, /*hidden argument*/NULL);
		V_7 = L_78;
		bool L_79 = V_7;
		if (L_79)
		{
			goto IL_0006;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0259;
	}

IL_0259:
	{
		bool L_80 = V_2;
		return L_80;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m823589B0E1DFD077348F2ED79BE79522CD7E7DD3 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)49))))
		{
			goto IL_0030;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		G_B3_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_11, (((int32_t)((uint16_t)L_14))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_15 = ___ctx0;
		NullCheck(L_15);
		L_15->set_NextState_1(3);
		V_1 = (bool)1;
		goto IL_009f;
	}

IL_005e:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		V_3 = L_18;
		int32_t L_19 = V_3;
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)48))))
		{
			goto IL_0073;
		}
	}
	{
		goto IL_009b;
	}

IL_0073:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_22 = L_21->get_L_2();
		NullCheck(L_22);
		StringBuilder_t * L_23 = L_22->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		NullCheck(L_23);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_23, (((int32_t)((uint16_t)L_26))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->set_NextState_1(4);
		V_1 = (bool)1;
		goto IL_009f;
	}

IL_009b:
	{
		V_1 = (bool)0;
		goto IL_009f;
	}

IL_009f:
	{
		bool L_28 = V_1;
		return L_28;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_m7B641B2B278BA0B121ACEB26B8EE36EA3A617E2F (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		goto IL_0156;
	}

IL_0006:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_002a;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		G_B4_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_8 = L_7->get_L_2();
		NullCheck(L_8);
		StringBuilder_t * L_9 = L_8->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_11 = L_10->get_L_2();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_input_char_7();
		NullCheck(L_9);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_9, (((int32_t)((uint16_t)L_12))), /*hidden argument*/NULL);
		goto IL_0156;
	}

IL_0052:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0087;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0084;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		G_B10_0 = ((((int32_t)((((int32_t)L_21) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 0;
	}

IL_0085:
	{
		G_B12_0 = G_B10_0;
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 1;
	}

IL_0088:
	{
		V_1 = (bool)G_B12_0;
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_00a2;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_016e;
	}

IL_00a2:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		V_4 = L_27;
		int32_t L_28 = V_4;
		V_3 = L_28;
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)69))))
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)44))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00be;
	}

IL_00be:
	{
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)46))))
		{
			goto IL_0102;
		}
	}
	{
		goto IL_00c5;
	}

IL_00c5:
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)69))))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0152;
	}

IL_00cf:
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)93))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_00d6;
	}

IL_00d6:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)101))))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_00dd;
	}

IL_00dd:
	{
		int32_t L_35 = V_3;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)125))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_0152;
	}

IL_00e4:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_37, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_39 = ___ctx0;
		NullCheck(L_39);
		L_39->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_016e;
	}

IL_0102:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_41 = L_40->get_L_2();
		NullCheck(L_41);
		StringBuilder_t * L_42 = L_41->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_44 = L_43->get_L_2();
		NullCheck(L_44);
		int32_t L_45 = L_44->get_input_char_7();
		NullCheck(L_42);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_42, (((int32_t)((uint16_t)L_45))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_46 = ___ctx0;
		NullCheck(L_46);
		L_46->set_NextState_1(5);
		V_2 = (bool)1;
		goto IL_016e;
	}

IL_012a:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_48 = L_47->get_L_2();
		NullCheck(L_48);
		StringBuilder_t * L_49 = L_48->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_50 = ___ctx0;
		NullCheck(L_50);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_51 = L_50->get_L_2();
		NullCheck(L_51);
		int32_t L_52 = L_51->get_input_char_7();
		NullCheck(L_49);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_49, (((int32_t)((uint16_t)L_52))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_53 = ___ctx0;
		NullCheck(L_53);
		L_53->set_NextState_1(7);
		V_2 = (bool)1;
		goto IL_016e;
	}

IL_0152:
	{
		V_2 = (bool)0;
		goto IL_016e;
	}

IL_0156:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_54 = ___ctx0;
		NullCheck(L_54);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_55 = L_54->get_L_2();
		NullCheck(L_55);
		bool L_56 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_55, /*hidden argument*/NULL);
		V_5 = L_56;
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_0006;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_016e;
	}

IL_016e:
	{
		bool L_58 = V_2;
		return L_58;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_mB579357556B87B7BCEBAEAF652E13E628DCAF3E8 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) < ((int32_t)((int32_t)9))))
		{
			goto IL_003f;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		G_B4_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B4_0 = 0;
	}

IL_0040:
	{
		G_B6_0 = G_B4_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 1;
	}

IL_0043:
	{
		V_0 = (bool)G_B6_0;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->set_NextState_1(1);
		V_1 = (bool)1;
		goto IL_010f;
	}

IL_005d:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		V_3 = L_16;
		int32_t L_17 = V_3;
		V_2 = L_17;
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)69))))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)44))))
		{
			goto IL_009d;
		}
	}
	{
		goto IL_0077;
	}

IL_0077:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)46))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_007e;
	}

IL_007e:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)69))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_010b;
	}

IL_0088:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)93))))
		{
			goto IL_009d;
		}
	}
	{
		goto IL_008f;
	}

IL_008f:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)101))))
		{
			goto IL_00e3;
		}
	}
	{
		goto IL_0096;
	}

IL_0096:
	{
		int32_t L_24 = V_2;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)125))))
		{
			goto IL_009d;
		}
	}
	{
		goto IL_010b;
	}

IL_009d:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_26, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_28 = ___ctx0;
		NullCheck(L_28);
		L_28->set_NextState_1(1);
		V_1 = (bool)1;
		goto IL_010f;
	}

IL_00bb:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_29 = ___ctx0;
		NullCheck(L_29);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_30 = L_29->get_L_2();
		NullCheck(L_30);
		StringBuilder_t * L_31 = L_30->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_input_char_7();
		NullCheck(L_31);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_31, (((int32_t)((uint16_t)L_34))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(5);
		V_1 = (bool)1;
		goto IL_010f;
	}

IL_00e3:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_38, (((int32_t)((uint16_t)L_41))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->set_NextState_1(7);
		V_1 = (bool)1;
		goto IL_010f;
	}

IL_010b:
	{
		V_1 = (bool)0;
		goto IL_010f;
	}

IL_010f:
	{
		bool L_43 = V_1;
		return L_43;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_m80C359CC8EAE78070CB2E246B20C213F4C584565 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0030;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		G_B3_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_11, (((int32_t)((uint16_t)L_14))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_15 = ___ctx0;
		NullCheck(L_15);
		L_15->set_NextState_1(6);
		V_1 = (bool)1;
		goto IL_0062;
	}

IL_005e:
	{
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_0062:
	{
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_m6C794EDE9CD28C38C0CE979DB2C788C50B3E86D2 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		goto IL_0124;
	}

IL_0006:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_002a;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		G_B4_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_8 = L_7->get_L_2();
		NullCheck(L_8);
		StringBuilder_t * L_9 = L_8->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_11 = L_10->get_L_2();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_input_char_7();
		NullCheck(L_9);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_9, (((int32_t)((uint16_t)L_12))), /*hidden argument*/NULL);
		goto IL_0124;
	}

IL_0052:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0087;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0084;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		G_B10_0 = ((((int32_t)((((int32_t)L_21) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 0;
	}

IL_0085:
	{
		G_B12_0 = G_B10_0;
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 1;
	}

IL_0088:
	{
		V_1 = (bool)G_B12_0;
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_00a2;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_013c;
	}

IL_00a2:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		V_4 = L_27;
		int32_t L_28 = V_4;
		V_3 = L_28;
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) > ((int32_t)((int32_t)69))))
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)44))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00be;
	}

IL_00be:
	{
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)69))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_0120;
	}

IL_00c5:
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)93))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00cc;
	}

IL_00cc:
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)101))))
		{
			goto IL_00f8;
		}
	}
	{
		goto IL_00d3;
	}

IL_00d3:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)125))))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_0120;
	}

IL_00da:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_36, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_38 = ___ctx0;
		NullCheck(L_38);
		L_38->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_013c;
	}

IL_00f8:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		StringBuilder_t * L_41 = L_40->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_42 = ___ctx0;
		NullCheck(L_42);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_43 = L_42->get_L_2();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_input_char_7();
		NullCheck(L_41);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_41, (((int32_t)((uint16_t)L_44))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_45 = ___ctx0;
		NullCheck(L_45);
		L_45->set_NextState_1(7);
		V_2 = (bool)1;
		goto IL_013c;
	}

IL_0120:
	{
		V_2 = (bool)0;
		goto IL_013c;
	}

IL_0124:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_47 = L_46->get_L_2();
		NullCheck(L_47);
		bool L_48 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_47, /*hidden argument*/NULL);
		V_5 = L_48;
		bool L_49 = V_5;
		if (L_49)
		{
			goto IL_0006;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_013c;
	}

IL_013c:
	{
		bool L_50 = V_2;
		return L_50;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_mCDBC5DEEC4135AB2AD58C6DD62E08E255C4D3798 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0030;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		G_B3_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B3_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_11, (((int32_t)((uint16_t)L_14))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_15 = ___ctx0;
		NullCheck(L_15);
		L_15->set_NextState_1(8);
		V_1 = (bool)1;
		goto IL_00a6;
	}

IL_005e:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		V_3 = L_18;
		int32_t L_19 = V_3;
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0073;
	}

IL_0073:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)45))))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_00a2;
	}

IL_007a:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		StringBuilder_t * L_24 = L_23->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, (((int32_t)((uint16_t)L_27))), /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_28 = ___ctx0;
		NullCheck(L_28);
		L_28->set_NextState_1(8);
		V_1 = (bool)1;
		goto IL_00a6;
	}

IL_00a2:
	{
		V_1 = (bool)0;
		goto IL_00a6;
	}

IL_00a6:
	{
		bool L_29 = V_1;
		return L_29;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_m3F59A00291894A1E5013E3696B5E6892D1130AE2 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		goto IL_00e6;
	}

IL_0006:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_002a;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		G_B4_0 = ((((int32_t)((((int32_t)L_5) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_8 = L_7->get_L_2();
		NullCheck(L_8);
		StringBuilder_t * L_9 = L_8->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_11 = L_10->get_L_2();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_input_char_7();
		NullCheck(L_9);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_9, (((int32_t)((uint16_t)L_12))), /*hidden argument*/NULL);
		goto IL_00e6;
	}

IL_0052:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0087;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0084;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		G_B10_0 = ((((int32_t)((((int32_t)L_21) > ((int32_t)((int32_t)13)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B10_0 = 0;
	}

IL_0085:
	{
		G_B12_0 = G_B10_0;
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 1;
	}

IL_0088:
	{
		V_1 = (bool)G_B12_0;
		bool L_22 = V_1;
		if (!L_22)
		{
			goto IL_009f;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_24 = ___ctx0;
		NullCheck(L_24);
		L_24->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_00fe;
	}

IL_009f:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		V_4 = L_27;
		int32_t L_28 = V_4;
		V_3 = L_28;
		int32_t L_29 = V_3;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)44))))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00b6;
	}

IL_00b6:
	{
		int32_t L_30 = V_3;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00bd;
	}

IL_00bd:
	{
		int32_t L_31 = V_3;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)125))))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00e2;
	}

IL_00c4:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_33, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_34 = ___ctx0;
		NullCheck(L_34);
		L_34->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_00fe;
	}

IL_00e2:
	{
		V_2 = (bool)0;
		goto IL_00fe;
	}

IL_00e6:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		bool L_38 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_37, /*hidden argument*/NULL);
		V_5 = L_38;
		bool L_39 = V_5;
		if (L_39)
		{
			goto IL_0006;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_00fe;
	}

IL_00fe:
	{
		bool L_40 = V_2;
		return L_40;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mC7C85EBB7246B7F5FA572A0AF9DF13D96E2A9504 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)114))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)10));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mD282A0A9130F377DAF7B0FC4E71D55C28AA3F194 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)11));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_mD0FC738D1A47380BE379A8CDE21F73F83F028E3A (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0038;
	}

IL_0034:
	{
		V_2 = (bool)0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m184A28E61E48432144151B013C6475B88A47BA53 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)97))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)13));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_mBB2C0F399A60256D5D23B9E22D4ED6AD49BC36EE (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)14));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_m69F4F981A5A2A86F25727B946FF1909519235EE3 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)115))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)15));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_mB21E6B8401A51B56B276BC80FBD7B22EA27BB135 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0038;
	}

IL_0034:
	{
		V_2 = (bool)0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_m2DFAEF35051E6F22442BBABF8A2B3175F76D7C73 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)117))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)17));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_m3CCAF2E714272838D0A2277B280E745548846850 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_002e;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)18));
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_002e:
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_m663B1945148620242FFD8436EE524A220FD5E37B (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)108))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0038;
	}

IL_0034:
	{
		V_2 = (bool)0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mFC7C3E9E267F30F31D3FC861DB1C2389D94EFAB2 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		goto IL_0072;
	}

IL_0003:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)34))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0053;
	}

IL_0020:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_7, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)20));
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_003f:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_StateStack_3(((int32_t)19));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_11 = ___ctx0;
		NullCheck(L_11);
		L_11->set_NextState_1(((int32_t)21));
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_0053:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		StringBuilder_t * L_14 = L_13->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		NullCheck(L_14);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_14, (((int32_t)((uint16_t)L_17))), /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0072:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0003;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_0085:
	{
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_mCC42729993D2DFFA42C3AD48DEFF182B383DFCC9 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)34))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0034;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0038;
	}

IL_0034:
	{
		V_2 = (bool)0;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_mCBE6C67B7B94C4A0391E47D8C14CF975D92AE1BF (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State21_mCBE6C67B7B94C4A0391E47D8C14CF975D92AE1BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00b6;
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_003d;
	}

IL_003d:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00b6;
	}

IL_0044:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_00b6;
	}

IL_0057:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_005e;
	}

IL_005e:
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0085;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_0085;
			}
			case 3:
			{
				goto IL_0079;
			}
		}
	}
	{
		goto IL_00b6;
	}

IL_0079:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_17 = ___ctx0;
		NullCheck(L_17);
		L_17->set_NextState_1(((int32_t)22));
		V_2 = (bool)1;
		goto IL_00ba;
	}

IL_0085:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		StringBuilder_t * L_20 = L_19->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_22 = L_21->get_L_2();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var);
		Il2CppChar L_24 = Lexer_ProcessEscChar_m791BA99492515DB017B71D1A8C82830A40DDE240(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_20, L_24, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_26 = ___ctx0;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_StateStack_3();
		NullCheck(L_25);
		L_25->set_NextState_1(L_27);
		V_2 = (bool)1;
		goto IL_00ba;
	}

IL_00b6:
	{
		V_2 = (bool)0;
		goto IL_00ba;
	}

IL_00ba:
	{
		bool L_28 = V_2;
		return L_28;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m486F6AB68BA91736BFCED13B818D08675DDFA10E (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_State22_m486F6AB68BA91736BFCED13B818D08675DDFA10E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		L_1->set_unichar_13(0);
		goto IL_00f2;
	}

IL_001a:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_007d;
		}
	}

IL_0039:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0057;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_007d;
		}
	}

IL_0057:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_007a;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		G_B8_0 = ((((int32_t)((((int32_t)L_19) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_007b;
	}

IL_007a:
	{
		G_B8_0 = 0;
	}

IL_007b:
	{
		G_B10_0 = G_B8_0;
		goto IL_007e;
	}

IL_007d:
	{
		G_B10_0 = 1;
	}

IL_007e:
	{
		V_2 = (bool)G_B10_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_00ed;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_22 = L_21->get_L_2();
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_unichar_13();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var);
		int32_t L_28 = Lexer_HexValue_mD891B49628F4169B8493B1EC21F242A5BD61D56B(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		NullCheck(L_23);
		L_23->set_unichar_13(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_28, (int32_t)L_29)))));
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)((int32_t)L_31/(int32_t)((int32_t)16)));
		int32_t L_32 = V_0;
		V_3 = (bool)((((int32_t)L_32) == ((int32_t)4))? 1 : 0);
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_00eb;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_35 = L_34->get_L_2();
		NullCheck(L_35);
		StringBuilder_t * L_36 = L_35->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_38 = L_37->get_L_2();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_unichar_13();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_40 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_36, L_40, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_41 = ___ctx0;
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_42 = ___ctx0;
		NullCheck(L_42);
		int32_t L_43 = L_42->get_StateStack_3();
		NullCheck(L_41);
		L_41->set_NextState_1(L_43);
		V_4 = (bool)1;
		goto IL_010b;
	}

IL_00eb:
	{
		goto IL_00f2;
	}

IL_00ed:
	{
		V_4 = (bool)0;
		goto IL_010b;
	}

IL_00f2:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_45 = L_44->get_L_2();
		NullCheck(L_45);
		bool L_46 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		bool L_47 = V_5;
		if (L_47)
		{
			goto IL_001a;
		}
	}
	{
		V_4 = (bool)1;
		goto IL_010b;
	}

IL_010b:
	{
		bool L_48 = V_4;
		return L_48;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_mC7DE40B0046A0E59B994297E84EBBEC75473CF9E (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		goto IL_0072;
	}

IL_0003:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)39))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0053;
	}

IL_0020:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD(L_7, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)24));
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_003f:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_StateStack_3(((int32_t)23));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_11 = ___ctx0;
		NullCheck(L_11);
		L_11->set_NextState_1(((int32_t)21));
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_0053:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		StringBuilder_t * L_14 = L_13->get_string_buffer_10();
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_input_char_7();
		NullCheck(L_14);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_14, (((int32_t)((uint16_t)L_17))), /*hidden argument*/NULL);
		goto IL_0072;
	}

IL_0072:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (L_21)
		{
			goto IL_0003;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0085;
	}

IL_0085:
	{
		bool L_22 = V_2;
		return L_22;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_mFB00EA0A9EFDE52CCEE077E0E7E5DFE85BC30B44 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)39))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0041;
	}

IL_0022:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_7 = ___ctx0;
		NullCheck(L_7);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_8 = L_7->get_L_2();
		NullCheck(L_8);
		L_8->set_input_char_7(((int32_t)34));
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_Return_0((bool)1);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0045;
	}

IL_0041:
	{
		V_2 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_m2F5C00031663E5F5B231F17AD0A0416CF5332FF9 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_1, /*hidden argument*/NULL);
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		V_1 = L_4;
		int32_t L_5 = V_1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0029;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0041;
	}

IL_0029:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)27));
		V_2 = (bool)1;
		goto IL_0045;
	}

IL_0035:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)26));
		V_2 = (bool)1;
		goto IL_0045;
	}

IL_0041:
	{
		V_2 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_m54F35776ED97C41C49172D6D3AD2CB2D18A7A8B2 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0024;
	}

IL_0003:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)10)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_4 = ___ctx0;
		NullCheck(L_4);
		L_4->set_NextState_1(1);
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0023:
	{
	}

IL_0024:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		bool L_7 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0003;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m42BB10DBEFB1165A0834512EC0E7EB402D8BC1C6 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0025;
	}

IL_0003:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)42)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_4 = ___ctx0;
		NullCheck(L_4);
		L_4->set_NextState_1(((int32_t)28));
		V_1 = (bool)1;
		goto IL_0038;
	}

IL_0024:
	{
	}

IL_0025:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		bool L_7 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0003;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0038;
	}

IL_0038:
	{
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_mEEC0F81DA0D20EA4CF249A11E3CE3C7DA218A736 (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		goto IL_0044;
	}

IL_0003:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)((int32_t)42)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0044;
	}

IL_0019:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_input_char_7();
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(1);
		V_2 = (bool)1;
		goto IL_0057;
	}

IL_0038:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)27));
		V_2 = (bool)1;
		goto IL_0057;
	}

IL_0044:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_10 = ___ctx0;
		NullCheck(L_10);
		Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * L_11 = L_10->get_L_2();
		NullCheck(L_11);
		bool L_12 = Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0003;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0057;
	}

IL_0057:
	{
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m1C4E587D489B459EEBF82051870D435F14B9935E (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		int32_t L_0 = Lexer_NextChar_mFFDBBD5E00EBC98A22CCCF6AE9D2F2710B0FA4DC(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_1 = L_1;
		__this->set_input_char_7(L_1);
		int32_t L_2 = V_1;
		V_0 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0029;
	}

IL_001e:
	{
		__this->set_end_of_input_4((bool)1);
		V_2 = (bool)0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_mFFDBBD5E00EBC98A22CCCF6AE9D2F2710B0FA4DC (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_input_buffer_6();
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = __this->get_input_buffer_6();
		V_1 = L_2;
		__this->set_input_buffer_6(0);
		int32_t L_3 = V_1;
		V_2 = L_3;
		goto IL_002f;
	}

IL_0021:
	{
		TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * L_4 = __this->get_reader_8();
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Read() */, L_4);
		V_2 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_6 = V_2;
		return L_6;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_0 = __this->get_fsm_context_5();
		NullCheck(L_0);
		L_0->set_Return_0((bool)0);
		goto IL_00e7;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t230CA49A5A4C3158F703E7FBFD069D81F3B99F5F* L_1 = ((Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var))->get_fsm_handler_table_1();
		int32_t L_2 = __this->get_state_9();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * L_5 = V_0;
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_6 = __this->get_fsm_context_5();
		NullCheck(L_5);
		bool L_7 = StateHandler_Invoke_m1A2A133685D8591690D2B8685EB9BC36D8AFA785(L_5, L_6, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = __this->get_input_char_7();
		JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 * L_10 = (JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3 *)il2cpp_codegen_object_new(JsonException_t734DEC46BF9C4A6FBD518DA5034018458CA55BF3_il2cpp_TypeInfo_var);
		JsonException__ctor_mB6B297F311BCA965C2B21E3A271034D90898B226(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, Lexer_NextToken_m71D2D2B45F3348DC54B073DC999B0D36A597D86B_RuntimeMethod_var);
	}

IL_0041:
	{
		bool L_11 = __this->get_end_of_input_4();
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_00ef;
	}

IL_0052:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_13 = __this->get_fsm_context_5();
		NullCheck(L_13);
		bool L_14 = L_13->get_Return_0();
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00d5;
		}
	}
	{
		StringBuilder_t * L_16 = __this->get_string_buffer_10();
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		__this->set_string_value_11(L_17);
		StringBuilder_t * L_18 = __this->get_string_buffer_10();
		StringBuilder_t * L_19 = __this->get_string_buffer_10();
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m44BCD2BF32D45E9376761FF33AA429BFBD902F07(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		StringBuilder_Remove_m5DA9C1C4D056FA61B8923BE85E6BFF44B14A24F9(L_18, 0, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var);
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_21 = ((Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D_il2cpp_TypeInfo_var))->get_fsm_return_table_0();
		int32_t L_22 = __this->get_state_9();
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		__this->set_token_12(L_24);
		int32_t L_25 = __this->get_token_12();
		V_5 = (bool)((((int32_t)L_25) == ((int32_t)((int32_t)65542)))? 1 : 0);
		bool L_26 = V_5;
		if (!L_26)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_27 = __this->get_input_char_7();
		__this->set_token_12(L_27);
	}

IL_00c0:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_28 = __this->get_fsm_context_5();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_NextState_1();
		__this->set_state_9(L_29);
		V_3 = (bool)1;
		goto IL_00ef;
	}

IL_00d5:
	{
		FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * L_30 = __this->get_fsm_context_5();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_NextState_1();
		__this->set_state_9(L_31);
	}

IL_00e7:
	{
		V_6 = (bool)1;
		goto IL_0012;
	}

IL_00ef:
	{
		bool L_32 = V_3;
		return L_32;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_m2D66BE1DEBFDBE3366219C331766C33EB0285CCD (Lexer_tCB2F90660A12ED90BE0398CB98C2DF649C2BDE2D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_char_7();
		__this->set_input_buffer_6(L_0);
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
// System.Void LitJson.Lexer_StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mF371B221BA280B1F495770355B0AFA930250DA5F (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean LitJson.Lexer_StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_m1A2A133685D8591690D2B8685EB9BC36D8AFA785 (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___ctx0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___ctx0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						result = GenericVirtFuncInvoker1< bool, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						result = VirtFuncInvoker1< bool, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___ctx0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.Lexer_StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_mF314ABE97C2E67AA802E973F9F24577A4890F3D9 (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, FsmContext_tF033BF7940D71216CC94C5A930E9728A8864BB41 * ___ctx0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean LitJson.Lexer_StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_mC6D6819FFF7E4BADD37F4FCB5137DA1F5FE5762B (StateHandler_t41698FCE11B9215B1A127F2587D8C677638E3374 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_pinvoke(const ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C& unmarshaled, ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_pinvoke_back(const ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_pinvoke& marshaled, ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_pinvoke_cleanup(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_com(const ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C& unmarshaled, ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_com_back(const ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_com& marshaled, ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshal_com_cleanup(ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C_marshaled_com& marshaled)
{
}
// System.Type LitJson.ObjectMetadata::get_ElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	{
		Type_t * L_0 = __this->get_element_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_3 = { reinterpret_cast<intptr_t> (JsonData_t927D17D8FB5A0F6E800238DD361364ACFD071C3E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0027;
	}

IL_001e:
	{
		Type_t * L_5 = __this->get_element_type_0();
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		Type_t * L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Type_t * ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	return ObjectMetadata_get_ElementType_mD7D1D1DDFBCF45C67BE2A30E5986E3432FA5FE33(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_ElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_ElementType_m2DED9C02625DC92F4CBCD35192C5BB2C7FF9EB94 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_element_type_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_ElementType_m2DED9C02625DC92F4CBCD35192C5BB2C7FF9EB94_AdjustorThunk (RuntimeObject * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	ObjectMetadata_set_ElementType_m2DED9C02625DC92F4CBCD35192C5BB2C7FF9EB94(_thisAdjusted, ___value0, method);
}
// System.Boolean LitJson.ObjectMetadata::get_IsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectMetadata_get_IsDictionary_m2F5C18D828485DEF113B680150DC98FE268466B8 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_is_dictionary_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ObjectMetadata_get_IsDictionary_m2F5C18D828485DEF113B680150DC98FE268466B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	return ObjectMetadata_get_IsDictionary_m2F5C18D828485DEF113B680150DC98FE268466B8(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_IsDictionary(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_IsDictionary_mFD5570D14CEA674CC7C4FEA2445E08A924DCA6C1 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_is_dictionary_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_IsDictionary_mFD5570D14CEA674CC7C4FEA2445E08A924DCA6C1_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	ObjectMetadata_set_IsDictionary_mFD5570D14CEA674CC7C4FEA2445E08A924DCA6C1(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460 (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_properties_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	return ObjectMetadata_get_Properties_mB796004C10A41F5A28DBBF7EC02CF5F2F4490460(_thisAdjusted, method);
}
// System.Void LitJson.ObjectMetadata::set_Properties(System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectMetadata_set_Properties_mDE256E22DB23134AB27EE8387950B5C6E3B1BCEB (ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_properties_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ObjectMetadata_set_Properties_mDE256E22DB23134AB27EE8387950B5C6E3B1BCEB_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C * _thisAdjusted = reinterpret_cast<ObjectMetadata_t8B66C8137062B3726B610B29E0649745D922772C *>(__this + _offset);
	ObjectMetadata_set_Properties_mDE256E22DB23134AB27EE8387950B5C6E3B1BCEB(_thisAdjusted, ___value0, method);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_pinvoke(const PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9& unmarshaled, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_pinvoke_back(const PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_pinvoke& marshaled, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_pinvoke_cleanup(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_com(const PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9& unmarshaled, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_com_back(const PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_com& marshaled, PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshal_com_cleanup(PropertyMetadata_tD234AC48BD8F4DF0F23EC01EB98DC2D842F3DDE9_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_m73C9711693E1BDEB7534BEFA7D097E6C3B7906F0 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3F8CB89107097D551D0CFDB0857B7975C5BC26D7 (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_m4F4384E9C7A68C713F5DA0300B5ECF6CCCAD849C (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_m697C2DA3D58BCAD9DBC1AC42FE8F33AF2096681D (WrapperFactory_t69E36C37028C4AC13CB3746BB48445908A7B18E9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m0369F92DEC7EEFEEDC9969F6EC0F253D0F6944A4 (WriterContext_t743EAD2C457815CB9B43763A8DC11581A1B8DD3B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
