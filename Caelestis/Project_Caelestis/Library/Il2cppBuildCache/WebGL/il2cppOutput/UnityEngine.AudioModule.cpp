﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
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

// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A;

IL2CPP_EXTERN_C RuntimeClass* AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6975E9BBACF02877D569BBF09DC44C44D3C346CB 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * ___sampleFramesOverflow_1;

public:
	inline static int32_t get_offset_of_sampleFramesAvailable_0() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B, ___sampleFramesAvailable_0)); }
	inline SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * get_sampleFramesAvailable_0() const { return ___sampleFramesAvailable_0; }
	inline SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 ** get_address_of_sampleFramesAvailable_0() { return &___sampleFramesAvailable_0; }
	inline void set_sampleFramesAvailable_0(SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * value)
	{
		___sampleFramesAvailable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleFramesAvailable_0), (void*)value);
	}

	inline static int32_t get_offset_of_sampleFramesOverflow_1() { return static_cast<int32_t>(offsetof(AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B, ___sampleFramesOverflow_1)); }
	inline SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * get_sampleFramesOverflow_1() const { return ___sampleFramesOverflow_1; }
	inline SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 ** get_address_of_sampleFramesOverflow_1() { return &___sampleFramesOverflow_1; }
	inline void set_sampleFramesOverflow_1(SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * value)
	{
		___sampleFramesOverflow_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampleFramesOverflow_1), (void*)value);
	}
};


// UnityEngine.AudioSettings
struct AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08  : public RuntimeObject
{
public:

public:
};

struct AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields
{
public:
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * ___OnAudioConfigurationChanged_0;

public:
	inline static int32_t get_offset_of_OnAudioConfigurationChanged_0() { return static_cast<int32_t>(offsetof(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields, ___OnAudioConfigurationChanged_0)); }
	inline AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * get_OnAudioConfigurationChanged_0() const { return ___OnAudioConfigurationChanged_0; }
	inline AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A ** get_address_of_OnAudioConfigurationChanged_0() { return &___OnAudioConfigurationChanged_0; }
	inline void set_OnAudioConfigurationChanged_0(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * value)
	{
		___OnAudioConfigurationChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnAudioConfigurationChanged_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AudioDataLoadState
struct AudioDataLoadState_t62C0FB585B1551A3E0955473C4394FE41B0B868D 
{
public:
	// System.Int32 UnityEngine.AudioDataLoadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioDataLoadState_t62C0FB585B1551A3E0955473C4394FE41B0B868D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioListener
struct AudioListener_t03B51B434A263F9AFD07AC8AA5CB4FE6402252A3  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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



// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_mE5E7A777A52B9627F9A6A57A140E5C4AAB5A1387 (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m1FBFFA5FC15B57601D6D13F4A574F7CAD2A93B7E (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, int32_t ___position0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8 (AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___x0, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E (AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * __this, AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F  ___other0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17 (AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8 (AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * __this, AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A  ___other0, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779 (SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * __this, AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioSettings::GetSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D (const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_mDC001A19067B6A02B0DE21A4D66FC8D82529F911 (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, bool ___deviceWasChanged0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, float ___pitch1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, uint64_t ___delay1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, double ___delay0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___stopOneShots0, const RuntimeMethod* method);
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
// System.Void UnityEngine.AudioClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip__ctor_m25D83075F6C4735DF4E997F08E13E7EF6114C9B3 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_PCMReaderCallback_4((PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B *)NULL);
		__this->set_m_PCMSetPositionCallback_5((PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object__ctor_m4DCF5CDB32C2C69290894101A81F473865169279(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567_ftn) (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD_ftn) (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AudioClip::LoadAudioData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_LoadAudioData_m2A16166E36E999B940CC8D522E3003E9ED46DBBF (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_LoadAudioData_m2A16166E36E999B940CC8D522E3003E9ED46DBBF_ftn) (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioClip_LoadAudioData_m2A16166E36E999B940CC8D522E3003E9ED46DBBF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_LoadAudioData_m2A16166E36E999B940CC8D522E3003E9ED46DBBF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::LoadAudioData()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AudioClip::get_preloadAudioData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_get_preloadAudioData_m285293402C858FBE933B251C339FDC868ECD8113 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioClip_get_preloadAudioData_m285293402C858FBE933B251C339FDC868ECD8113_ftn) (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioClip_get_preloadAudioData_m285293402C858FBE933B251C339FDC868ECD8113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_preloadAudioData_m285293402C858FBE933B251C339FDC868ECD8113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_preloadAudioData()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.AudioDataLoadState UnityEngine.AudioClip::get_loadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06_ftn) (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_loadState_m1FF966C14C813FEFD41778D79DC79D557BE67B06_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_loadState()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m9CB2976CDC2C73A92479F8C11C30B17FAA05751F (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * L_0 = __this->get_m_PCMReaderCallback_4();
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * L_2 = __this->get_m_PCMReaderCallback_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___data0;
		PCMReaderCallback_Invoke_mE5E7A777A52B9627F9A6A57A140E5C4AAB5A1387(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m9F3ACF3A244349568C0D0D1D40EE72EF013FB45D (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, int32_t ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * L_0 = __this->get_m_PCMSetPositionCallback_5();
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * L_2 = __this->get_m_PCMSetPositionCallback_5();
		int32_t L_3 = ___position0;
		PCMSetPositionCallback_Invoke_m1FBFFA5FC15B57601D6D13F4A574F7CAD2A93B7E(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8 (AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E (AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * __this, AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8((AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AudioClipPlayable_GetHandle_mBEB846B088961170B6DB961951B511C11B98E0B8((AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E_AdjustorThunk (RuntimeObject * __this, AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F * _thisAdjusted = reinterpret_cast<AudioClipPlayable_t3574B22284CE09FDEAD15BD18D66C4A21D59FA5F *>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m52ECDD49AE6BD8AB4C0AC83C417A0C1B23E3E55E(_thisAdjusted, ___other0, method);
	return _returnValue;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17 (AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * __this, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A *>(__this + _offset);
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8 (AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * __this, AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17((AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A *)__this, /*hidden argument*/NULL);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = AudioMixerPlayable_GetHandle_m76EFC486A7639C4842F590F544B60988CF27BB17((AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A *)(&___other0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_mFD26CFA8ECF2B622B1A3D4117066CAE965C9F704(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8_AdjustorThunk (RuntimeObject * __this, AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A * _thisAdjusted = reinterpret_cast<AudioMixerPlayable_t80531461F1E238E237D7BB2BAE7E031ABDE95C4A *>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mB55D2602ACCD196F61AF3D1AE90B81930A9AB7E8(_thisAdjusted, ___other0, method);
	return _returnValue;
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
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mE6689CFA13C0621F305F389FEEE4D543B71BF236 (AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B * __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * L_0 = __this->get_sampleFramesAvailable_0();
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * L_2 = __this->get_sampleFramesAvailable_0();
		int32_t L_3 = ___sampleFrameCount0;
		SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m998BEADD2A2B4BEF0906A31108B6DC486411CC78 (AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B * __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * L_0 = __this->get_sampleFramesOverflow_1();
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * L_2 = __this->get_sampleFramesOverflow_1();
		int32_t L_3 = ___droppedSampleFrameCount0;
		SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_001c:
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
// System.Int32 UnityEngine.AudioSettings::GetSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D (const RuntimeMethod* method)
{
	typedef int32_t (*AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D_ftn) ();
	static AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetSampleRate()");
	int32_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Double UnityEngine.AudioSettings::get_dspTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AudioSettings_get_dspTime_m0920364A295C8CF4A10DA37BD86BDFD2776B5865 (const RuntimeMethod* method)
{
	typedef double (*AudioSettings_get_dspTime_m0920364A295C8CF4A10DA37BD86BDFD2776B5865_ftn) ();
	static AudioSettings_get_dspTime_m0920364A295C8CF4A10DA37BD86BDFD2776B5865_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_get_dspTime_m0920364A295C8CF4A10DA37BD86BDFD2776B5865_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::get_dspTime()");
	double icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSettings_get_outputSampleRate_mF694C528E77284914F1F8F7CA804BD9ECD0D33BE (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = AudioSettings_GetSampleRate_m61A0069F92C08799666E5B223391B12693BB671D(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052 (int32_t* ___bufferLength0, int32_t* ___numBuffers1, const RuntimeMethod* method)
{
	typedef void (*AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052_ftn) (int32_t*, int32_t*);
	static AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_GetDSPBufferSize_mC28498D69093D2E80A637A40A588230F7E0A2052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::GetDSPBufferSize(System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___bufferLength0, ___numBuffers1);
}
// System.Void UnityEngine.AudioSettings::add_OnAudioConfigurationChanged(UnityEngine.AudioSettings/AudioConfigurationChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_add_OnAudioConfigurationChanged_m699FAFF4FD35390B0A2D40ADE9605920C9F22408 (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_0 = NULL;
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_1 = NULL;
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_2 = NULL;
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_0 = ((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		V_0 = L_0;
	}

IL_0006:
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_1 = V_0;
		V_1 = L_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_2 = V_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)CastclassSealed((RuntimeObject*)L_4, AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_il2cpp_TypeInfo_var));
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_5 = V_2;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_6 = V_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_7;
		L_7 = InterlockedCompareExchangeImpl<AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *>((AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A **)(((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_address_of_OnAudioConfigurationChanged_0()), L_5, L_6);
		V_0 = L_7;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_8 = V_0;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)L_8) == ((RuntimeObject*)(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::remove_OnAudioConfigurationChanged(UnityEngine.AudioSettings/AudioConfigurationChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_remove_OnAudioConfigurationChanged_m60F826840263090CC878CA4BC6E09316C33B1D3E (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_0 = NULL;
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_1 = NULL;
	AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * V_2 = NULL;
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_0 = ((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		V_0 = L_0;
	}

IL_0006:
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_1 = V_0;
		V_1 = L_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_2 = V_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)CastclassSealed((RuntimeObject*)L_4, AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A_il2cpp_TypeInfo_var));
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_5 = V_2;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_6 = V_1;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_7;
		L_7 = InterlockedCompareExchangeImpl<AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *>((AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A **)(((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_address_of_OnAudioConfigurationChanged_0()), L_5, L_6);
		V_0 = L_7;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_8 = V_0;
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)L_8) == ((RuntimeObject*)(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m2CBD1FC39E7AE46E07E777990310D1DC40FB980E (bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_0 = ((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * L_2 = ((AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t1941E7DE9FEF65F7742713EB862D3025244FCB08_il2cpp_TypeInfo_var))->get_OnAudioConfigurationChanged_0();
		bool L_3 = ___deviceWasChanged0;
		AudioConfigurationChangeHandler_Invoke_mDC001A19067B6A02B0DE21A4D66FC8D82529F911(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
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
// System.Single UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, const RuntimeMethod* method)
{
	typedef float (*AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::GetPitch(UnityEngine.AudioSource)");
	float icallRetVal = _il2cpp_icall_func(___source0);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, float ___pitch1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, float);
	static AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::SetPitch(UnityEngine.AudioSource,System.Single)");
	_il2cpp_icall_func(___source0, ___pitch1);
}
// System.Void UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source0, uint64_t ___delay1, const RuntimeMethod* method)
{
	typedef void (*AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, uint64_t);
	static AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::PlayHelper(UnityEngine.AudioSource,System.UInt64)");
	_il2cpp_icall_func(___source0, ___delay1);
}
// System.Void UnityEngine.AudioSource::Play(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, double ___delay0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, double);
	static AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Play(System.Double)");
	_il2cpp_icall_func(__this, ___delay0);
}
// System.Void UnityEngine.AudioSource::Stop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___stopOneShots0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, bool);
	static AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Stop(System.Boolean)");
	_il2cpp_icall_func(__this, ___stopOneShots0);
}
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, float);
	static AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_volume(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB0A139A0693803E201D08B797BFD122B94453C7D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = AudioSource_GetPitch_mE457F85FAAFC820665BF001939C7C9DC3DAD1B62(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		AudioSource_SetPitch_m679D3A8D4749A5960FC2E9E3DA54BC6BF7F7C928(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	typedef int32_t (*AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_timeSamples_m2D16DA78011B58C24BCA679B44D2BF832DFCA0BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_timeSamples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_timeSamples(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, int32_t);
	static AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_timeSamples_m0C976854DF09CEF28A8A21C0E069905E55BC2F33_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_timeSamples(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	typedef AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * (*AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_clip()");
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *);
	static AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	{
		AudioSource_PlayHelper_mAE7BC6AD4F09442D5EB0FF7711ECAB7580195814(__this, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::PlayScheduled(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayScheduled_m80E8DC1432D331243D69F028D5751BFCA0BD89C7 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, double ___time0, const RuntimeMethod* method)
{
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B2_0 = NULL;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * G_B3_1 = NULL;
	{
		double L_0 = ___time0;
		G_B1_0 = __this;
		if ((((double)L_0) < ((double)(0.0))))
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		double L_1 = ___time0;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001a;
	}

IL_0011:
	{
		G_B3_0 = (0.0);
		G_B3_1 = G_B2_0;
	}

IL_001a:
	{
		AudioSource_Play_m1F0F190F0535691D80CB663A3EF67D14BAE78566(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	{
		AudioSource_Stop_mD2260A580FFE563C64EFBD98DAC6376021ABF826(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	typedef void (*AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::Pause()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.AudioSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method)
{
	typedef bool (*AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *);
	static AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_get_loop_m4CC6F50D9332DCC4B3CF380D12622F787BB8FB8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::get_loop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, bool);
	static AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_loop_mDD9FB746D8A7392472E5484EEF8D0A667993E3E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_loop(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5_ftn) (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B *, bool);
	static AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSource_set_playOnAwake_mBE8FAD0E1555C431C56E0DEB4BF7371E76E236F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSource::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mCA9CC5271DE0E4083B85759CA74EED1C1CD219F7 (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_mE5E7A777A52B9627F9A6A57A140E5C4AAB5A1387 (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
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
						GenericInterfaceActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PCMReaderCallback_BeginInvoke_mA4B5DF478312B7B7A00E13D869DF0AD4E01795A9 (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_EndInvoke_m79DD97AB2919A10EBC91F78331213523EA5494DE (PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_m0204C8557D7FB9E95F33168EDFD64182D9342002 (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m1FBFFA5FC15B57601D6D13F4A574F7CAD2A93B7E (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, int32_t ___position0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___position0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___position0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___position0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___position0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___position0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioClip/PCMSetPositionCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PCMSetPositionCallback_BeginInvoke_mF8CA8E07FDAF6B0821D2F1AE8F8545DC0FADC3A3 (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, int32_t ___position0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___position0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_EndInvoke_m7096B994374E95A90C84B87625494BE1076B8574 (PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m389B32B949592BFD1BA53D0C0983CA6B5BA6AAC7 (SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_mCB6172CE3EF20C5E12A697A5CE5EEDED9A3B5779 (SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * __this, AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B * ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
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
						GenericInterfaceActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
					else
						GenericVirtActionInvoker1< uint32_t >::Invoke(targetMethod, ___provider0, ___sampleFrameCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___provider0, ___sampleFrameCount1);
					else
						VirtActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___provider0, ___sampleFrameCount1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
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
						GenericInterfaceActionInvoker2< AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
					else
						GenericVirtActionInvoker2< AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t >::Invoke(targetMethod, targetThis, ___provider0, ___sampleFrameCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
					else
						VirtActionInvoker2< AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___provider0, ___sampleFrameCount1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___provider0, ___sampleFrameCount1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B *, uint32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___provider0, ___sampleFrameCount1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::BeginInvoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SampleFramesHandler_BeginInvoke_m79D52B9AB6F6E72A9A9260F6608F7FA9F6A10ADC (SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * __this, AudioSampleProvider_tD8B613D55D09D6CE86B851A5D8F33560FFCC705B * ___provider0, uint32_t ___sampleFrameCount1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___provider0;
	__d_args[1] = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &___sampleFrameCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_EndInvoke_mC5357233A55B232AC8507FA4A04E06271EDE0309 (SampleFramesHandler_tCF0215103F7BD1AD5397731D86079D6E68AC9487 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mB63AFBABA4712DF64F06A65CC7CE3C9E8C58080B (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_mDC001A19067B6A02B0DE21A4D66FC8D82529F911 (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deviceWasChanged0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___deviceWasChanged0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deviceWasChanged0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deviceWasChanged0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deviceWasChanged0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.AudioSettings/AudioConfigurationChangeHandler::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioConfigurationChangeHandler_BeginInvoke_m2F17366BD1D34B7BB9FC60C1EF34EDC074D0003B (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, bool ___deviceWasChanged0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___deviceWasChanged0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_EndInvoke_m78A4BB19DA6FBEACEC4F57A51D8076A337E02F4C (AudioConfigurationChangeHandler_t1A997C51DF7B553A94DAD358F8D968308994774A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif