#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<SonicBloom.Koreo.Koreography,System.Collections.Generic.List`1<SonicBloom.Koreo.TimingRecord>>>
struct List_1_tE89617508FC4A21B9AAEF409BC46ACB6F8CD615D;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,SonicBloom.Koreo.EventObj>>
struct List_1_t546EAC6CEB73F276B389761E7D03849AE8664C89;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<SonicBloom.Koreo.Koreography>
struct List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2;
// System.Collections.Generic.List`1<SonicBloom.Koreo.KoreographyTrackBase>
struct List_1_tFD7F9F73AB4D10CC814C984C0F631ACEBE349D01;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// SonicBloom.Koreo.Demos.CubeScaler
struct CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// SonicBloom.Koreo.Demos.EmitParticlesOnSpan
struct EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F;
// Frame
struct Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GUIStyleState
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// SonicBloom.Koreo.IKoreographedPlayer
struct IKoreographedPlayer_t0AF993526E331507F7EC2B8DF991A6BE24DD7784;
// SonicBloom.Koreo.IPayload
struct IPayload_tBFE3415E2343FA96D54E02693674074A45130F8E;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// SonicBloom.Koreo.Koreographer
struct Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB;
// SonicBloom.Koreo.KoreographyEvent
struct KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762;
// SonicBloom.Koreo.KoreographyEventCallback
struct KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF;
// SonicBloom.Koreo.KoreographyEventCallbackWithTime
struct KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MusicHandler
struct MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD;
// SonicBloom.Koreo.Demos.MusicalImpulse
struct MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// SonicBloom.Koreo.Demos.TempoSwitch
struct TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// SonicBloom.Koreo.Demos.UIMessageSetter
struct UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04026791327CAB934F76A77A70A9002C8698D1B7;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral218F549257072147962F3D25DBEC634268A9B184;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38;
IL2CPP_EXTERN_C String_t* _stringLiteral617F409DD5D43122BD93A2975F3CB44D22217E09;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CubeScaler_AdjustScale_m0D9C4423F4069A413DE392B4DE49B9166E95B875_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitParticlesOnSpan_OnParticleControlEvent_m4320F6EA34E3EEC1C380CEFB4B320144CD5FA47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MusicHandler_Tick_m7EC88B54797B10CF20529BFC722332B5AC7916D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MusicalImpulse_AddImpulse_m4B74A80DCFAAE8E5E5613F14E61DD61782B8A671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIMessageSetter_UpdateText_mF0D7B453B53A22FFE71D54F3EB87AE0EE4D44F5C_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com;
struct GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke;
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com;

struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// SonicBloom.Koreo.KoreographyEvent
struct KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762  : public RuntimeObject
{
public:
	// System.Int32 SonicBloom.Koreo.KoreographyEvent::mStartSample
	int32_t ___mStartSample_0;
	// System.Int32 SonicBloom.Koreo.KoreographyEvent::mEndSample
	int32_t ___mEndSample_1;
	// SonicBloom.Koreo.IPayload SonicBloom.Koreo.KoreographyEvent::mPayload
	RuntimeObject* ___mPayload_2;

public:
	inline static int32_t get_offset_of_mStartSample_0() { return static_cast<int32_t>(offsetof(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762, ___mStartSample_0)); }
	inline int32_t get_mStartSample_0() const { return ___mStartSample_0; }
	inline int32_t* get_address_of_mStartSample_0() { return &___mStartSample_0; }
	inline void set_mStartSample_0(int32_t value)
	{
		___mStartSample_0 = value;
	}

	inline static int32_t get_offset_of_mEndSample_1() { return static_cast<int32_t>(offsetof(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762, ___mEndSample_1)); }
	inline int32_t get_mEndSample_1() const { return ___mEndSample_1; }
	inline int32_t* get_address_of_mEndSample_1() { return &___mEndSample_1; }
	inline void set_mEndSample_1(int32_t value)
	{
		___mEndSample_1 = value;
	}

	inline static int32_t get_offset_of_mPayload_2() { return static_cast<int32_t>(offsetof(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762, ___mPayload_2)); }
	inline RuntimeObject* get_mPayload_2() const { return ___mPayload_2; }
	inline RuntimeObject** get_address_of_mPayload_2() { return &___mPayload_2; }
	inline void set_mPayload_2(RuntimeObject* value)
	{
		___mPayload_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPayload_2), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// SonicBloom.Koreo.DeltaSlice
struct DeltaSlice_tE19275C0ACE9222D76E7ED0AE34C7F1B858A1B47 
{
public:
	// System.Single SonicBloom.Koreo.DeltaSlice::deltaOffset
	float ___deltaOffset_0;
	// System.Single SonicBloom.Koreo.DeltaSlice::deltaLength
	float ___deltaLength_1;

public:
	inline static int32_t get_offset_of_deltaOffset_0() { return static_cast<int32_t>(offsetof(DeltaSlice_tE19275C0ACE9222D76E7ED0AE34C7F1B858A1B47, ___deltaOffset_0)); }
	inline float get_deltaOffset_0() const { return ___deltaOffset_0; }
	inline float* get_address_of_deltaOffset_0() { return &___deltaOffset_0; }
	inline void set_deltaOffset_0(float value)
	{
		___deltaOffset_0 = value;
	}

	inline static int32_t get_offset_of_deltaLength_1() { return static_cast<int32_t>(offsetof(DeltaSlice_tE19275C0ACE9222D76E7ED0AE34C7F1B858A1B47, ___deltaLength_1)); }
	inline float get_deltaLength_1() const { return ___deltaLength_1; }
	inline float* get_address_of_deltaLength_1() { return &___deltaLength_1; }
	inline void set_deltaLength_1(float value)
	{
		___deltaLength_1 = value;
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
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

// UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceStyle_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Normal_1)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normal_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Hover_2)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Hover_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Active_3)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Active_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Focused_4)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Focused_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnNormal_5)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnNormal_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnHover_6)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnHover_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnActive_7)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnActive_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_OnFocused_8)); }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFocused_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Border_9)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Border_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Padding_10)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Padding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Margin_11)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Margin_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Overflow_12)); }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Overflow_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Name_13() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726, ___m_Name_13)); }
	inline String_t* get_m_Name_13() const { return ___m_Name_13; }
	inline String_t** get_address_of_m_Name_13() { return &___m_Name_13; }
	inline void set_m_Name_13(String_t* value)
	{
		___m_Name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_13), (void*)value);
	}
};

struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_StaticFields, ___s_None_15)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_None_15), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Normal_1;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Hover_2;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Active_3;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_Focused_4;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnHover_6;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnActive_7;
	GUIStyleState_tC89202668617B1D7884980314F293AD382B9AAD9_marshaled_com* ___m_OnFocused_8;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Border_9;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Padding_10;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Margin_11;
	RectOffset_tE3A58467CD0749AD9D3E1271F9E315B38F39AE70_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SonicBloom.Koreo.KoreographyEventCallback
struct KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF  : public MulticastDelegate_t
{
public:

public:
};


// SonicBloom.Koreo.KoreographyEventCallbackWithTime
struct KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// SonicBloom.Koreo.Demos.CubeScaler
struct CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SonicBloom.Koreo.Demos.CubeScaler::eventID
	String_t* ___eventID_4;
	// System.Single SonicBloom.Koreo.Demos.CubeScaler::minScale
	float ___minScale_5;
	// System.Single SonicBloom.Koreo.Demos.CubeScaler::maxScale
	float ___maxScale_6;

public:
	inline static int32_t get_offset_of_eventID_4() { return static_cast<int32_t>(offsetof(CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4, ___eventID_4)); }
	inline String_t* get_eventID_4() const { return ___eventID_4; }
	inline String_t** get_address_of_eventID_4() { return &___eventID_4; }
	inline void set_eventID_4(String_t* value)
	{
		___eventID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventID_4), (void*)value);
	}

	inline static int32_t get_offset_of_minScale_5() { return static_cast<int32_t>(offsetof(CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4, ___minScale_5)); }
	inline float get_minScale_5() const { return ___minScale_5; }
	inline float* get_address_of_minScale_5() { return &___minScale_5; }
	inline void set_minScale_5(float value)
	{
		___minScale_5 = value;
	}

	inline static int32_t get_offset_of_maxScale_6() { return static_cast<int32_t>(offsetof(CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4, ___maxScale_6)); }
	inline float get_maxScale_6() const { return ___maxScale_6; }
	inline float* get_address_of_maxScale_6() { return &___maxScale_6; }
	inline void set_maxScale_6(float value)
	{
		___maxScale_6 = value;
	}
};


// SonicBloom.Koreo.Demos.EmitParticlesOnSpan
struct EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SonicBloom.Koreo.Demos.EmitParticlesOnSpan::eventID
	String_t* ___eventID_4;
	// System.Single SonicBloom.Koreo.Demos.EmitParticlesOnSpan::particlesPerBeat
	float ___particlesPerBeat_5;
	// UnityEngine.ParticleSystem SonicBloom.Koreo.Demos.EmitParticlesOnSpan::particleCom
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleCom_6;
	// System.Int32 SonicBloom.Koreo.Demos.EmitParticlesOnSpan::lastEmitFrame
	int32_t ___lastEmitFrame_7;

public:
	inline static int32_t get_offset_of_eventID_4() { return static_cast<int32_t>(offsetof(EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F, ___eventID_4)); }
	inline String_t* get_eventID_4() const { return ___eventID_4; }
	inline String_t** get_address_of_eventID_4() { return &___eventID_4; }
	inline void set_eventID_4(String_t* value)
	{
		___eventID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventID_4), (void*)value);
	}

	inline static int32_t get_offset_of_particlesPerBeat_5() { return static_cast<int32_t>(offsetof(EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F, ___particlesPerBeat_5)); }
	inline float get_particlesPerBeat_5() const { return ___particlesPerBeat_5; }
	inline float* get_address_of_particlesPerBeat_5() { return &___particlesPerBeat_5; }
	inline void set_particlesPerBeat_5(float value)
	{
		___particlesPerBeat_5 = value;
	}

	inline static int32_t get_offset_of_particleCom_6() { return static_cast<int32_t>(offsetof(EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F, ___particleCom_6)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_particleCom_6() const { return ___particleCom_6; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_particleCom_6() { return &___particleCom_6; }
	inline void set_particleCom_6(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___particleCom_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleCom_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastEmitFrame_7() { return static_cast<int32_t>(offsetof(EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F, ___lastEmitFrame_7)); }
	inline int32_t get_lastEmitFrame_7() const { return ___lastEmitFrame_7; }
	inline int32_t* get_address_of_lastEmitFrame_7() { return &___lastEmitFrame_7; }
	inline void set_lastEmitFrame_7(int32_t value)
	{
		___lastEmitFrame_7 = value;
	}
};


// Frame
struct Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Frame::decayRate
	float ___decayRate_4;

public:
	inline static int32_t get_offset_of_decayRate_4() { return static_cast<int32_t>(offsetof(Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7, ___decayRate_4)); }
	inline float get_decayRate_4() const { return ___decayRate_4; }
	inline float* get_address_of_decayRate_4() { return &___decayRate_4; }
	inline void set_decayRate_4(float value)
	{
		___decayRate_4 = value;
	}
};


// SonicBloom.Koreo.Koreographer
struct Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SonicBloom.Koreo.IKoreographedPlayer SonicBloom.Koreo.Koreographer::musicPlaybackController
	RuntimeObject* ___musicPlaybackController_5;
	// System.Collections.Generic.List`1<SonicBloom.Koreo.Koreography> SonicBloom.Koreo.Koreographer::loadedKoreography
	List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * ___loadedKoreography_6;
	// System.Single SonicBloom.Koreo.Koreographer::eventDelayInSeconds
	float ___eventDelayInSeconds_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<SonicBloom.Koreo.Koreography,System.Collections.Generic.List`1<SonicBloom.Koreo.TimingRecord>>> SonicBloom.Koreo.Koreographer::delayQueue
	List_1_tE89617508FC4A21B9AAEF409BC46ACB6F8CD615D * ___delayQueue_8;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,SonicBloom.Koreo.EventObj>> SonicBloom.Koreo.Koreographer::eventBoard
	List_1_t546EAC6CEB73F276B389761E7D03849AE8664C89 * ___eventBoard_9;
	// System.Collections.Generic.List`1<SonicBloom.Koreo.Koreography> SonicBloom.Koreo.Koreographer::koreographyToProcess
	List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * ___koreographyToProcess_10;
	// System.Collections.Generic.List`1<SonicBloom.Koreo.KoreographyTrackBase> SonicBloom.Koreo.Koreographer::trackProcessingHelper
	List_1_tFD7F9F73AB4D10CC814C984C0F631ACEBE349D01 * ___trackProcessingHelper_11;

public:
	inline static int32_t get_offset_of_musicPlaybackController_5() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___musicPlaybackController_5)); }
	inline RuntimeObject* get_musicPlaybackController_5() const { return ___musicPlaybackController_5; }
	inline RuntimeObject** get_address_of_musicPlaybackController_5() { return &___musicPlaybackController_5; }
	inline void set_musicPlaybackController_5(RuntimeObject* value)
	{
		___musicPlaybackController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicPlaybackController_5), (void*)value);
	}

	inline static int32_t get_offset_of_loadedKoreography_6() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___loadedKoreography_6)); }
	inline List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * get_loadedKoreography_6() const { return ___loadedKoreography_6; }
	inline List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 ** get_address_of_loadedKoreography_6() { return &___loadedKoreography_6; }
	inline void set_loadedKoreography_6(List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * value)
	{
		___loadedKoreography_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadedKoreography_6), (void*)value);
	}

	inline static int32_t get_offset_of_eventDelayInSeconds_7() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___eventDelayInSeconds_7)); }
	inline float get_eventDelayInSeconds_7() const { return ___eventDelayInSeconds_7; }
	inline float* get_address_of_eventDelayInSeconds_7() { return &___eventDelayInSeconds_7; }
	inline void set_eventDelayInSeconds_7(float value)
	{
		___eventDelayInSeconds_7 = value;
	}

	inline static int32_t get_offset_of_delayQueue_8() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___delayQueue_8)); }
	inline List_1_tE89617508FC4A21B9AAEF409BC46ACB6F8CD615D * get_delayQueue_8() const { return ___delayQueue_8; }
	inline List_1_tE89617508FC4A21B9AAEF409BC46ACB6F8CD615D ** get_address_of_delayQueue_8() { return &___delayQueue_8; }
	inline void set_delayQueue_8(List_1_tE89617508FC4A21B9AAEF409BC46ACB6F8CD615D * value)
	{
		___delayQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_eventBoard_9() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___eventBoard_9)); }
	inline List_1_t546EAC6CEB73F276B389761E7D03849AE8664C89 * get_eventBoard_9() const { return ___eventBoard_9; }
	inline List_1_t546EAC6CEB73F276B389761E7D03849AE8664C89 ** get_address_of_eventBoard_9() { return &___eventBoard_9; }
	inline void set_eventBoard_9(List_1_t546EAC6CEB73F276B389761E7D03849AE8664C89 * value)
	{
		___eventBoard_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventBoard_9), (void*)value);
	}

	inline static int32_t get_offset_of_koreographyToProcess_10() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___koreographyToProcess_10)); }
	inline List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * get_koreographyToProcess_10() const { return ___koreographyToProcess_10; }
	inline List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 ** get_address_of_koreographyToProcess_10() { return &___koreographyToProcess_10; }
	inline void set_koreographyToProcess_10(List_1_t6727505BDA929005DE839BDAEE81E3B440B694B2 * value)
	{
		___koreographyToProcess_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___koreographyToProcess_10), (void*)value);
	}

	inline static int32_t get_offset_of_trackProcessingHelper_11() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB, ___trackProcessingHelper_11)); }
	inline List_1_tFD7F9F73AB4D10CC814C984C0F631ACEBE349D01 * get_trackProcessingHelper_11() const { return ___trackProcessingHelper_11; }
	inline List_1_tFD7F9F73AB4D10CC814C984C0F631ACEBE349D01 ** get_address_of_trackProcessingHelper_11() { return &___trackProcessingHelper_11; }
	inline void set_trackProcessingHelper_11(List_1_tFD7F9F73AB4D10CC814C984C0F631ACEBE349D01 * value)
	{
		___trackProcessingHelper_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackProcessingHelper_11), (void*)value);
	}
};

struct Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_StaticFields
{
public:
	// SonicBloom.Koreo.Koreographer SonicBloom.Koreo.Koreographer::_instance
	Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_StaticFields, ____instance_4)); }
	inline Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * get__instance_4() const { return ____instance_4; }
	inline Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// MusicHandler
struct MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String MusicHandler::eventID
	String_t* ___eventID_4;
	// UnityEngine.GameObject MusicHandler::frame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___frame_5;
	// System.Single MusicHandler::inputTimer
	float ___inputTimer_6;
	// System.Single MusicHandler::decayRate
	float ___decayRate_7;

public:
	inline static int32_t get_offset_of_eventID_4() { return static_cast<int32_t>(offsetof(MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD, ___eventID_4)); }
	inline String_t* get_eventID_4() const { return ___eventID_4; }
	inline String_t** get_address_of_eventID_4() { return &___eventID_4; }
	inline void set_eventID_4(String_t* value)
	{
		___eventID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventID_4), (void*)value);
	}

	inline static int32_t get_offset_of_frame_5() { return static_cast<int32_t>(offsetof(MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD, ___frame_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_frame_5() const { return ___frame_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_frame_5() { return &___frame_5; }
	inline void set_frame_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___frame_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frame_5), (void*)value);
	}

	inline static int32_t get_offset_of_inputTimer_6() { return static_cast<int32_t>(offsetof(MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD, ___inputTimer_6)); }
	inline float get_inputTimer_6() const { return ___inputTimer_6; }
	inline float* get_address_of_inputTimer_6() { return &___inputTimer_6; }
	inline void set_inputTimer_6(float value)
	{
		___inputTimer_6 = value;
	}

	inline static int32_t get_offset_of_decayRate_7() { return static_cast<int32_t>(offsetof(MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD, ___decayRate_7)); }
	inline float get_decayRate_7() const { return ___decayRate_7; }
	inline float* get_address_of_decayRate_7() { return &___decayRate_7; }
	inline void set_decayRate_7(float value)
	{
		___decayRate_7 = value;
	}
};


// SonicBloom.Koreo.Demos.MusicalImpulse
struct MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SonicBloom.Koreo.Demos.MusicalImpulse::eventID
	String_t* ___eventID_4;
	// System.Single SonicBloom.Koreo.Demos.MusicalImpulse::jumpSpeed
	float ___jumpSpeed_5;
	// UnityEngine.Rigidbody SonicBloom.Koreo.Demos.MusicalImpulse::rigidbodyCom
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rigidbodyCom_6;

public:
	inline static int32_t get_offset_of_eventID_4() { return static_cast<int32_t>(offsetof(MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115, ___eventID_4)); }
	inline String_t* get_eventID_4() const { return ___eventID_4; }
	inline String_t** get_address_of_eventID_4() { return &___eventID_4; }
	inline void set_eventID_4(String_t* value)
	{
		___eventID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventID_4), (void*)value);
	}

	inline static int32_t get_offset_of_jumpSpeed_5() { return static_cast<int32_t>(offsetof(MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115, ___jumpSpeed_5)); }
	inline float get_jumpSpeed_5() const { return ___jumpSpeed_5; }
	inline float* get_address_of_jumpSpeed_5() { return &___jumpSpeed_5; }
	inline void set_jumpSpeed_5(float value)
	{
		___jumpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rigidbodyCom_6() { return static_cast<int32_t>(offsetof(MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115, ___rigidbodyCom_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rigidbodyCom_6() const { return ___rigidbodyCom_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rigidbodyCom_6() { return &___rigidbodyCom_6; }
	inline void set_rigidbodyCom_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rigidbodyCom_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigidbodyCom_6), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// UnityEngine.Collider2D PlayerController::coll
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___coll_5;
	// System.Single PlayerController::hSpeed
	float ___hSpeed_6;
	// System.Single PlayerController::vForce
	float ___vForce_7;
	// UnityEngine.Transform PlayerController::groundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundCheck_8;
	// UnityEngine.LayerMask PlayerController::platform_test
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___platform_test_9;
	// UnityEngine.Animator PlayerController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_10;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_11;
	// System.Boolean PlayerController::isJumping
	bool ___isJumping_12;
	// System.Boolean PlayerController::jumpPressed
	bool ___jumpPressed_13;
	// System.Int32 PlayerController::jumpTimes
	int32_t ___jumpTimes_14;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_coll_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___coll_5)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_coll_5() const { return ___coll_5; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_coll_5() { return &___coll_5; }
	inline void set_coll_5(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___coll_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coll_5), (void*)value);
	}

	inline static int32_t get_offset_of_hSpeed_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___hSpeed_6)); }
	inline float get_hSpeed_6() const { return ___hSpeed_6; }
	inline float* get_address_of_hSpeed_6() { return &___hSpeed_6; }
	inline void set_hSpeed_6(float value)
	{
		___hSpeed_6 = value;
	}

	inline static int32_t get_offset_of_vForce_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___vForce_7)); }
	inline float get_vForce_7() const { return ___vForce_7; }
	inline float* get_address_of_vForce_7() { return &___vForce_7; }
	inline void set_vForce_7(float value)
	{
		___vForce_7 = value;
	}

	inline static int32_t get_offset_of_groundCheck_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___groundCheck_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundCheck_8() const { return ___groundCheck_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundCheck_8() { return &___groundCheck_8; }
	inline void set_groundCheck_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundCheck_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundCheck_8), (void*)value);
	}

	inline static int32_t get_offset_of_platform_test_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___platform_test_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_platform_test_9() const { return ___platform_test_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_platform_test_9() { return &___platform_test_9; }
	inline void set_platform_test_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___platform_test_9 = value;
	}

	inline static int32_t get_offset_of_anim_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___anim_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_10() const { return ___anim_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_10() { return &___anim_10; }
	inline void set_anim_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_10), (void*)value);
	}

	inline static int32_t get_offset_of_isGrounded_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isGrounded_11)); }
	inline bool get_isGrounded_11() const { return ___isGrounded_11; }
	inline bool* get_address_of_isGrounded_11() { return &___isGrounded_11; }
	inline void set_isGrounded_11(bool value)
	{
		___isGrounded_11 = value;
	}

	inline static int32_t get_offset_of_isJumping_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isJumping_12)); }
	inline bool get_isJumping_12() const { return ___isJumping_12; }
	inline bool* get_address_of_isJumping_12() { return &___isJumping_12; }
	inline void set_isJumping_12(bool value)
	{
		___isJumping_12 = value;
	}

	inline static int32_t get_offset_of_jumpPressed_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___jumpPressed_13)); }
	inline bool get_jumpPressed_13() const { return ___jumpPressed_13; }
	inline bool* get_address_of_jumpPressed_13() { return &___jumpPressed_13; }
	inline void set_jumpPressed_13(bool value)
	{
		___jumpPressed_13 = value;
	}

	inline static int32_t get_offset_of_jumpTimes_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___jumpTimes_14)); }
	inline int32_t get_jumpTimes_14() const { return ___jumpTimes_14; }
	inline int32_t* get_address_of_jumpTimes_14() { return &___jumpTimes_14; }
	inline void set_jumpTimes_14(int32_t value)
	{
		___jumpTimes_14 = value;
	}
};


// SonicBloom.Koreo.Demos.TempoSwitch
struct TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Behaviour[] SonicBloom.Koreo.Demos.TempoSwitch::quarterNoteGroup
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___quarterNoteGroup_4;
	// UnityEngine.Behaviour[] SonicBloom.Koreo.Demos.TempoSwitch::eighthNoteGroup
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___eighthNoteGroup_5;
	// System.Int32 SonicBloom.Koreo.Demos.TempoSwitch::lastQuarterNote
	int32_t ___lastQuarterNote_6;
	// System.Int32 SonicBloom.Koreo.Demos.TempoSwitch::lastEighthNote
	int32_t ___lastEighthNote_7;

public:
	inline static int32_t get_offset_of_quarterNoteGroup_4() { return static_cast<int32_t>(offsetof(TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A, ___quarterNoteGroup_4)); }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* get_quarterNoteGroup_4() const { return ___quarterNoteGroup_4; }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0** get_address_of_quarterNoteGroup_4() { return &___quarterNoteGroup_4; }
	inline void set_quarterNoteGroup_4(BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* value)
	{
		___quarterNoteGroup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quarterNoteGroup_4), (void*)value);
	}

	inline static int32_t get_offset_of_eighthNoteGroup_5() { return static_cast<int32_t>(offsetof(TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A, ___eighthNoteGroup_5)); }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* get_eighthNoteGroup_5() const { return ___eighthNoteGroup_5; }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0** get_address_of_eighthNoteGroup_5() { return &___eighthNoteGroup_5; }
	inline void set_eighthNoteGroup_5(BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* value)
	{
		___eighthNoteGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eighthNoteGroup_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastQuarterNote_6() { return static_cast<int32_t>(offsetof(TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A, ___lastQuarterNote_6)); }
	inline int32_t get_lastQuarterNote_6() const { return ___lastQuarterNote_6; }
	inline int32_t* get_address_of_lastQuarterNote_6() { return &___lastQuarterNote_6; }
	inline void set_lastQuarterNote_6(int32_t value)
	{
		___lastQuarterNote_6 = value;
	}

	inline static int32_t get_offset_of_lastEighthNote_7() { return static_cast<int32_t>(offsetof(TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A, ___lastEighthNote_7)); }
	inline int32_t get_lastEighthNote_7() const { return ___lastEighthNote_7; }
	inline int32_t* get_address_of_lastEighthNote_7() { return &___lastEighthNote_7; }
	inline void set_lastEighthNote_7(int32_t value)
	{
		___lastEighthNote_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SonicBloom.Koreo.Demos.UIMessageSetter
struct UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SonicBloom.Koreo.Demos.UIMessageSetter::eventID
	String_t* ___eventID_4;
	// UnityEngine.GUIStyle SonicBloom.Koreo.Demos.UIMessageSetter::style
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style_5;
	// SonicBloom.Koreo.KoreographyEvent SonicBloom.Koreo.Demos.UIMessageSetter::curTextEvent
	KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___curTextEvent_6;

public:
	inline static int32_t get_offset_of_eventID_4() { return static_cast<int32_t>(offsetof(UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830, ___eventID_4)); }
	inline String_t* get_eventID_4() const { return ___eventID_4; }
	inline String_t** get_address_of_eventID_4() { return &___eventID_4; }
	inline void set_eventID_4(String_t* value)
	{
		___eventID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventID_4), (void*)value);
	}

	inline static int32_t get_offset_of_style_5() { return static_cast<int32_t>(offsetof(UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830, ___style_5)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_style_5() const { return ___style_5; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_style_5() { return &___style_5; }
	inline void set_style_5(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___style_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___style_5), (void*)value);
	}

	inline static int32_t get_offset_of_curTextEvent_6() { return static_cast<int32_t>(offsetof(UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830, ___curTextEvent_6)); }
	inline KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * get_curTextEvent_6() const { return ___curTextEvent_6; }
	inline KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 ** get_address_of_curTextEvent_6() { return &___curTextEvent_6; }
	inline void set_curTextEvent_6(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * value)
	{
		___curTextEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curTextEvent_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * m_Items[1];

public:
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// SonicBloom.Koreo.Koreographer SonicBloom.Koreo.Koreographer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline (const RuntimeMethod* method);
// System.Void SonicBloom.Koreo.KoreographyEventCallbackWithTime::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreographyEventCallbackWithTime__ctor_m8185C0D5C0BEC84AA987A2BC121B85F1C2A0BBFF (KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SonicBloom.Koreo.Koreographer::RegisterForEventsWithTime(System.String,SonicBloom.Koreo.KoreographyEventCallbackWithTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Koreographer_RegisterForEventsWithTime_m8B62D581B78659D81A94CF653342AABB79589C6D (Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * __this, String_t* ___eventID0, KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 * ___callback1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void SonicBloom.Koreo.Koreographer::UnregisterForAllEvents(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Koreographer_UnregisterForAllEvents_m7E25175D9A573FB3FFB01C9ADB0DE7D759A04A88 (Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean SonicBloom.Koreo.CurvePayloadEventExtensions::HasCurvePayload(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvePayloadEventExtensions_HasCurvePayload_m70A8B601278D247A7443BBF8F1FF88DAC99C2F33 (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___koreoEvent0, const RuntimeMethod* method);
// System.Single SonicBloom.Koreo.CurvePayloadEventExtensions::GetValueOfCurveAtTime(SonicBloom.Koreo.KoreographyEvent,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvePayloadEventExtensions_GetValueOfCurveAtTime_m23BD554B0DB4E20A7D2E520A65B37F512EABFD21 (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___koreoEvent0, int32_t ___sampleTime1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void SonicBloom.Koreo.KoreographyEventCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KoreographyEventCallback__ctor_m4C0CAA1F46ADFD55450F184F3B83711D5F3EF46E (KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void SonicBloom.Koreo.Koreographer::RegisterForEvents(System.String,SonicBloom.Koreo.KoreographyEventCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Koreographer_RegisterForEvents_m56DE9EEC5F4DECBD8EE715F3CBE3DDC81CDC1357 (Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * __this, String_t* ___eventID0, KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF * ___callback1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// System.Single SonicBloom.Koreo.Koreographer::GetBeatTimeDelta(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Koreographer_GetBeatTimeDelta_mDD50A598BB9D1F314DFB763B6531F726619317E0 (String_t* ___clipName0, int32_t ___subdivisions1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method);
// System.Void Frame::ColorDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_ColorDecay_m87C43B08567D70C876613FC3A3AA95B60167C090 (Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void MusicHandler::InputTimerDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler_InputTimerDecay_mB52E2AFB84C67672DE04612DA6588BED566C2DC1 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void PlayerController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Attack_m8EBDF74863C527705D9E559E309BF1ED7D2D9C7C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void PlayerController::HorizontalMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HorizontalMovement_mC7489B73DA308505EA53E7F213D6B46150758BF3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mCC40889FC20DD84A8362DD147B05C5E986D0A081 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Single SonicBloom.Koreo.Koreographer::GetBeatTime(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Koreographer_GetBeatTime_m9600BD0F49016539C99AFCCA339D445202F6B424 (String_t* ___clipName0, int32_t ___subdivisions1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Void SonicBloom.Koreo.Demos.TempoSwitch::SwitchGroup(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoSwitch_SwitchGroup_mF0FBECF03DD2564A158A0F2DC55CB4F1A34E9598 (TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A * __this, BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___behaviours0, bool ___bGroupOn1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.String SonicBloom.Koreo.TextPayloadEventExtensions::GetTextValue(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextPayloadEventExtensions_GetTextValue_mA08CD5B5B9EE8C756BC806824330203868FC7EEB (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___koreoEvent0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___position0, String_t* ___text1, GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___style2, const RuntimeMethod* method);
// System.Boolean SonicBloom.Koreo.TextPayloadEventExtensions::HasTextPayload(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextPayloadEventExtensions_HasTextPayload_m2A67547C6A0B3470E59FD5EDBD0250226AC1B3C1 (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___koreoEvent0, const RuntimeMethod* method);
// System.Int32 SonicBloom.Koreo.KoreographyEvent::get_StartSample()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KoreographyEvent_get_StartSample_m2CFAD92DCD02B0263DD74DA4DD3F3ABB4FF91130_inline (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * __this, const RuntimeMethod* method);
// System.Int32 SonicBloom.Koreo.KoreographyEvent::get_EndSample()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KoreographyEvent_get_EndSample_mB5F312FB9928D3034AD8C9FC9DC022DF192E39F0_inline (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * __this, const RuntimeMethod* method);
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
// System.Void SonicBloom.Koreo.Demos.CubeScaler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeScaler_Start_mA3B30DA65520A53DC01B29D88DCA9933E69F0D82 (CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CubeScaler_AdjustScale_m0D9C4423F4069A413DE392B4DE49B9166E95B875_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Koreographer.Instance.RegisterForEventsWithTime(eventID, AdjustScale);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_eventID_4();
		KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 * L_2 = (KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 *)il2cpp_codegen_object_new(KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990_il2cpp_TypeInfo_var);
		KoreographyEventCallbackWithTime__ctor_m8185C0D5C0BEC84AA987A2BC121B85F1C2A0BBFF(L_2, __this, (intptr_t)((intptr_t)CubeScaler_AdjustScale_m0D9C4423F4069A413DE392B4DE49B9166E95B875_RuntimeMethod_var), /*hidden argument*/NULL);
		Koreographer_RegisterForEventsWithTime_m8B62D581B78659D81A94CF653342AABB79589C6D(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.CubeScaler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeScaler_OnDestroy_mCB82D8F67DA36414D6022E54FD5FBFDE9FD614A7 (CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Koreographer.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Koreographer.Instance.UnregisterForAllEvents(this);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_2;
		L_2 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		Koreographer_UnregisterForAllEvents_m7E25175D9A573FB3FFB01C9ADB0DE7D759A04A88(L_2, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.CubeScaler::AdjustScale(SonicBloom.Koreo.KoreographyEvent,System.Int32,System.Int32,SonicBloom.Koreo.DeltaSlice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeScaler_AdjustScale_m0D9C4423F4069A413DE392B4DE49B9166E95B875 (CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4 * __this, KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___evt0, int32_t ___sampleTime1, int32_t ___sampleDelta2, DeltaSlice_tE19275C0ACE9222D76E7ED0AE34C7F1B858A1B47  ___deltaSlice3, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// if (evt.HasCurvePayload())
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_0 = ___evt0;
		bool L_1;
		L_1 = CurvePayloadEventExtensions_HasCurvePayload_m70A8B601278D247A7443BBF8F1FF88DAC99C2F33(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// float curveValue = evt.GetValueOfCurveAtTime(sampleTime);
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_2 = ___evt0;
		int32_t L_3 = ___sampleTime1;
		float L_4;
		L_4 = CurvePayloadEventExtensions_GetValueOfCurveAtTime_m23BD554B0DB4E20A7D2E520A65B37F512EABFD21(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// transform.localScale = Vector3.one * Mathf.Lerp(minScale, maxScale, curveValue);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_7 = __this->get_minScale_5();
		float L_8 = __this->get_maxScale_6();
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_7, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_10, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_11, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.CubeScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeScaler__ctor_m60507C4B111C18D9DC141BEA3E9D597F62952E46 (CubeScaler_t91B4747A30D856D1203F217196E904AA003D57A4 * __this, const RuntimeMethod* method)
{
	{
		// public float minScale = 0.5f;
		__this->set_minScale_5((0.5f));
		// public float maxScale = 1.5f;
		__this->set_maxScale_6((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SonicBloom.Koreo.Demos.EmitParticlesOnSpan::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnSpan_Start_m97BFE3FE157CAC1D6DA69498CB67F8F9C8E3D255 (EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitParticlesOnSpan_OnParticleControlEvent_m4320F6EA34E3EEC1C380CEFB4B320144CD5FA47F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particleCom = GetComponent<ParticleSystem>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0;
		L_0 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		__this->set_particleCom_6(L_0);
		// Koreographer.Instance.RegisterForEvents(eventID, OnParticleControlEvent);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_1;
		L_1 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		String_t* L_2 = __this->get_eventID_4();
		KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF * L_3 = (KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF *)il2cpp_codegen_object_new(KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		KoreographyEventCallback__ctor_m4C0CAA1F46ADFD55450F184F3B83711D5F3EF46E(L_3, __this, (intptr_t)((intptr_t)EmitParticlesOnSpan_OnParticleControlEvent_m4320F6EA34E3EEC1C380CEFB4B320144CD5FA47F_RuntimeMethod_var), /*hidden argument*/NULL);
		Koreographer_RegisterForEvents_m56DE9EEC5F4DECBD8EE715F3CBE3DDC81CDC1357(L_1, L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.EmitParticlesOnSpan::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnSpan_OnDestroy_mCB3B6E022ABBF695B329538D2CD2D5A7B7C87DB6 (EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Koreographer.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Koreographer.Instance.UnregisterForAllEvents(this);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_2;
		L_2 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		Koreographer_UnregisterForAllEvents_m7E25175D9A573FB3FFB01C9ADB0DE7D759A04A88(L_2, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.EmitParticlesOnSpan::OnParticleControlEvent(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnSpan_OnParticleControlEvent_m4320F6EA34E3EEC1C380CEFB4B320144CD5FA47F (EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F * __this, KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (Time.frameCount != lastEmitFrame)
		int32_t L_0;
		L_0 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		int32_t L_1 = __this->get_lastEmitFrame_7();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0034;
		}
	}
	{
		// int particleCount = (int)(particlesPerBeat * Koreographer.GetBeatTimeDelta());
		float L_2 = __this->get_particlesPerBeat_5();
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = Koreographer_GetBeatTimeDelta_mDD50A598BB9D1F314DFB763B6531F726619317E0((String_t*)NULL, 1, /*hidden argument*/NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)));
		// particleCom.Emit(particleCount);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = __this->get_particleCom_6();
		int32_t L_5 = V_0;
		ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28(L_4, L_5, /*hidden argument*/NULL);
		// lastEmitFrame = Time.frameCount;
		int32_t L_6;
		L_6 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		__this->set_lastEmitFrame_7(L_6);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.EmitParticlesOnSpan::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitParticlesOnSpan__ctor_m5F5BD26D3EC771A948A6ABF0A3F722CA931BFA3E (EmitParticlesOnSpan_tE353B50A6AEA29EF955B0EA3C08EDD03CFFA624F * __this, const RuntimeMethod* method)
{
	{
		// public float particlesPerBeat = 100;
		__this->set_particlesPerBeat_5((100.0f));
		// int lastEmitFrame = -1;
		__this->set_lastEmitFrame_7((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Frame::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Start_m769F906E0B48673D53B0567E2E029E6E2B435E57 (Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Frame::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Update_m615912D4CB5AC83F4DB4CB2169EF17C5231B0127 (Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7 * __this, const RuntimeMethod* method)
{
	{
		// ColorDecay();
		Frame_ColorDecay_m87C43B08567D70C876613FC3A3AA95B60167C090(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Frame::ColorDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_ColorDecay_m87C43B08567D70C876613FC3A3AA95B60167C090 (Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color tmpColor = gameObject.GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// tmpColor.a -= decayRate * Time.deltaTime;
		float* L_3 = (&V_0)->get_address_of_a_3();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		float L_6 = __this->get_decayRate_4();
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_4) = (float)((float)il2cpp_codegen_subtract((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		// gameObject.GetComponent<Image>().color = tmpColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = V_0;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// }
		return;
	}
}
// System.Void Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mB3C3297C7B4D25758627FED6E7F67F1EB718F862 (Frame_t8E533B27A314AF68BB12756D482E37F190FB26E7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MusicHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler_Start_mB7DCB86D006DBFF8184EE665CB987644D9D345C3 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicHandler_Tick_m7EC88B54797B10CF20529BFC722332B5AC7916D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Koreographer.Instance.RegisterForEvents(eventID, Tick);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_eventID_4();
		KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF * L_2 = (KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF *)il2cpp_codegen_object_new(KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		KoreographyEventCallback__ctor_m4C0CAA1F46ADFD55450F184F3B83711D5F3EF46E(L_2, __this, (intptr_t)((intptr_t)MusicHandler_Tick_m7EC88B54797B10CF20529BFC722332B5AC7916D6_RuntimeMethod_var), /*hidden argument*/NULL);
		Koreographer_RegisterForEvents_m56DE9EEC5F4DECBD8EE715F3CBE3DDC81CDC1357(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler_Update_m17B1B00F40FCEE5FEE6C89955E23D746142BB0D8 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, const RuntimeMethod* method)
{
	{
		// InputTimerDecay();
		MusicHandler_InputTimerDecay_mB52E2AFB84C67672DE04612DA6588BED566C2DC1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicHandler::InputTimerDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler_InputTimerDecay_mB52E2AFB84C67672DE04612DA6588BED566C2DC1 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, const RuntimeMethod* method)
{
	{
		// inputTimer -= Time.deltaTime * decayRate;
		float L_0 = __this->get_inputTimer_6();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_2 = __this->get_decayRate_7();
		__this->set_inputTimer_6(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))));
		// }
		return;
	}
}
// System.Void MusicHandler::Tick(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler_Tick_m7EC88B54797B10CF20529BFC722332B5AC7916D6 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___evt0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// frame.GetComponent<Image>().color = new Color(1f, 1f, 1f, 0.6f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_frame_5();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_0, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_2), (1.0f), (1.0f), (1.0f), (0.600000024f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// inputTimer = 1f;
		__this->set_inputTimer_6((1.0f));
		// Debug.Log("tick");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicHandler__ctor_m11544F6AB94FDA349E4CF8FBA35258EBAA1B64E3 (MusicHandler_t3E3FDFE141A7B2F96259B43ED2F5F89415138BDD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SonicBloom.Koreo.Demos.MusicalImpulse::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicalImpulse_Start_mF6303AC81690DB7937A7A9A4AF0B8BAC6900AAAD (MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MusicalImpulse_AddImpulse_m4B74A80DCFAAE8E5E5613F14E61DD61782B8A671_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Koreographer.Instance.RegisterForEvents(eventID, AddImpulse);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_eventID_4();
		KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF * L_2 = (KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF *)il2cpp_codegen_object_new(KoreographyEventCallback_tE4A659DD53E325BC1A849E046143AD422C2DCABF_il2cpp_TypeInfo_var);
		KoreographyEventCallback__ctor_m4C0CAA1F46ADFD55450F184F3B83711D5F3EF46E(L_2, __this, (intptr_t)((intptr_t)MusicalImpulse_AddImpulse_m4B74A80DCFAAE8E5E5613F14E61DD61782B8A671_RuntimeMethod_var), /*hidden argument*/NULL);
		Koreographer_RegisterForEvents_m56DE9EEC5F4DECBD8EE715F3CBE3DDC81CDC1357(L_0, L_1, L_2, /*hidden argument*/NULL);
		// rigidbodyCom = GetComponent<Rigidbody>();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3;
		L_3 = Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m9DC24AA806B0B65E917751F7A3AFDB58861157CE_RuntimeMethod_var);
		__this->set_rigidbodyCom_6(L_3);
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.MusicalImpulse::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicalImpulse_OnDestroy_m7B25F09706E0D7C705027D76FB89413961974A48 (MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Koreographer.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Koreographer.Instance.UnregisterForAllEvents(this);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_2;
		L_2 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		Koreographer_UnregisterForAllEvents_m7E25175D9A573FB3FFB01C9ADB0DE7D759A04A88(L_2, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.MusicalImpulse::AddImpulse(SonicBloom.Koreo.KoreographyEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicalImpulse_AddImpulse_m4B74A80DCFAAE8E5E5613F14E61DD61782B8A671 (MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115 * __this, KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___evt0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 vel = rigidbodyCom.velocity;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_0 = __this->get_rigidbodyCom_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// vel.y = jumpSpeed;
		float L_2 = __this->get_jumpSpeed_5();
		(&V_0)->set_y_3(L_2);
		// rigidbodyCom.velocity = vel;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = __this->get_rigidbodyCom_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.MusicalImpulse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicalImpulse__ctor_m00DFE83EF8B33AA9104A4FF0E27231D64F06CCB5 (MusicalImpulse_t91718FB58FDA2C43E49DDCE90A4C1E26186C3115 * __this, const RuntimeMethod* method)
{
	{
		// public float jumpSpeed = 3f;
		__this->set_jumpSpeed_5((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>(); // get rigid body of the player
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// coll = GetComponent<Collider2D>(); // get box-collider of the player
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1;
		L_1 = Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_mB8CB45C5289A0ACF38DAD7B4727F32E4E93DFC30_RuntimeMethod_var);
		__this->set_coll_5(L_1);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetButtonDown("Jump") && jumpTimes > 0)
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->get_jumpTimes_14();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// jumpPressed = true;
		__this->set_jumpPressed_13((bool)1);
	}

IL_001c:
	{
		// Attack();
		PlayerController_Attack_m8EBDF74863C527705D9E559E309BF1ED7D2D9C7C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m9A113567D03E9BFF74D8D1959B8C88124E03BBDE (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04026791327CAB934F76A77A70A9002C8698D1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F549257072147962F3D25DBEC634268A9B184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral617F409DD5D43122BD93A2975F3CB44D22217E09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "lava")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral617F409DD5D43122BD93A2975F3CB44D22217E09, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.Log("collide lava");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral04026791327CAB934F76A77A70A9002C8698D1B7, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// else if (col.gameObject.tag == "enemy")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_5 = ___col0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_5, /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral5CBA1D6F6D9CA883F2453692DFEF6DF2DBFD4E38, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0059;
		}
	}
	{
		// Debug.Log("collide enemy");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral218F549257072147962F3D25DBEC634268A9B184, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isGrounded = Physics2D.OverlapCircle(groundCheck.position, 0.1f, platform_test); // set up the gounding check point of the player
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_groundCheck_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_3 = __this->get_platform_test_9();
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5;
		L_5 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, (0.100000001f), L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		__this->set_isGrounded_11(L_6);
		// HorizontalMovement();
		PlayerController_HorizontalMovement_mC7489B73DA308505EA53E7F213D6B46150758BF3(__this, /*hidden argument*/NULL);
		// Jump();
		PlayerController_Jump_mCC40889FC20DD84A8362DD147B05C5E986D0A081(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::HorizontalMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HorizontalMovement_mC7489B73DA308505EA53E7F213D6B46150758BF3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float horizontalMove = Input.GetAxisRaw("Horizontal"); // get the horizontal axis value of the player: leftwards: -1 rightwards: 1 still: 0
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// rb.velocity = new Vector2(horizontalMove * hSpeed, rb.velocity.y); // player moves with a steady velocity
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_4();
		float L_2 = V_0;
		float L_3 = __this->get_hSpeed_6();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), L_6, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_7, /*hidden argument*/NULL);
		// if(horizontalMove != 0)
		float L_8 = V_0;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_0056;
		}
	}
	{
		// transform.localScale = new Vector3(horizontalMove, 1, 1); // player can change its direction when moving
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), L_10, (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_9, L_11, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mCC40889FC20DD84A8362DD147B05C5E986D0A081 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// if(isGrounded)
		bool L_0 = __this->get_isGrounded_11();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// jumpTimes = 2; // when the player is grounded, resume its jumpTimes
		__this->set_jumpTimes_14(2);
		// isJumping = false;
		__this->set_isJumping_12((bool)0);
	}

IL_0016:
	{
		// if(jumpPressed && isGrounded)
		bool L_1 = __this->get_jumpPressed_13();
		if (!L_1)
		{
			goto IL_0069;
		}
	}
	{
		bool L_2 = __this->get_isGrounded_11();
		if (!L_2)
		{
			goto IL_0069;
		}
	}
	{
		// isJumping = true;
		__this->set_isJumping_12((bool)1);
		// rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps when player is grounded and JUMP button is pressed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_4 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		float L_7 = __this->get_vForce_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_6, L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_8, /*hidden argument*/NULL);
		// jumpTimes--;
		int32_t L_9 = __this->get_jumpTimes_14();
		__this->set_jumpTimes_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		// jumpPressed = false;
		__this->set_jumpPressed_13((bool)0);
		// }
		return;
	}

IL_0069:
	{
		// else if(jumpPressed && jumpTimes > 0 && isJumping)
		bool L_10 = __this->get_jumpPressed_13();
		if (!L_10)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_11 = __this->get_jumpTimes_14();
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		bool L_12 = __this->get_isJumping_12();
		if (!L_12)
		{
			goto IL_00bd;
		}
	}
	{
		// rb.velocity = new Vector2(rb.velocity.x, vForce); // player jumps again if JUMP button is pressed,
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_13 = __this->get_rb_4();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_0();
		float L_17 = __this->get_vForce_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), L_16, L_17, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_13, L_18, /*hidden argument*/NULL);
		// jumpTimes--;                                      // and the jumpTimes is larger than 0
		int32_t L_19 = __this->get_jumpTimes_14();
		__this->set_jumpTimes_14(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// jumpPressed = false;
		__this->set_jumpPressed_13((bool)0);
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Attack_m8EBDF74863C527705D9E559E309BF1ED7D2D9C7C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Attack"))
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// anim.SetTrigger("attack"); // trigger attack animation
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_10();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SonicBloom.Koreo.Demos.TempoSwitch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoSwitch_Update_m17E9ACFADA43A874A7C3BE314D170917E282BE4A (TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int curQuarterNote = Mathf.FloorToInt(Koreographer.GetBeatTime());
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = Koreographer_GetBeatTime_m9600BD0F49016539C99AFCCA339D445202F6B424((String_t*)NULL, 1, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (curQuarterNote != lastQuarterNote)
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get_lastQuarterNote_6();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0034;
		}
	}
	{
		// SwitchGroup(quarterNoteGroup, lastQuarterNote % 2 != 0);
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_4 = __this->get_quarterNoteGroup_4();
		int32_t L_5 = __this->get_lastQuarterNote_6();
		TempoSwitch_SwitchGroup_mF0FBECF03DD2564A158A0F2DC55CB4F1A34E9598(__this, L_4, (bool)((!(((uint32_t)((int32_t)((int32_t)L_5%(int32_t)2))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// lastQuarterNote = curQuarterNote;
		int32_t L_6 = V_0;
		__this->set_lastQuarterNote_6(L_6);
	}

IL_0034:
	{
		// int curEighthNote = Mathf.FloorToInt(Koreographer.GetBeatTime(null, 2));
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		float L_7;
		L_7 = Koreographer_GetBeatTime_m9600BD0F49016539C99AFCCA339D445202F6B424((String_t*)NULL, 2, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (curEighthNote != lastEighthNote)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_lastEighthNote_7();
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0068;
		}
	}
	{
		// SwitchGroup(eighthNoteGroup, lastEighthNote % 2 != 0);
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_11 = __this->get_eighthNoteGroup_5();
		int32_t L_12 = __this->get_lastEighthNote_7();
		TempoSwitch_SwitchGroup_mF0FBECF03DD2564A158A0F2DC55CB4F1A34E9598(__this, L_11, (bool)((!(((uint32_t)((int32_t)((int32_t)L_12%(int32_t)2))) <= ((uint32_t)0)))? 1 : 0), /*hidden argument*/NULL);
		// lastEighthNote = curEighthNote;
		int32_t L_13 = V_1;
		__this->set_lastEighthNote_7(L_13);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.TempoSwitch::SwitchGroup(UnityEngine.Behaviour[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoSwitch_SwitchGroup_mF0FBECF03DD2564A158A0F2DC55CB4F1A34E9598 (TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A * __this, BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___behaviours0, bool ___bGroupOn1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < behaviours.Length; ++i)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// behaviours[i].enabled = bGroupOn;
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_0 = ___behaviours0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___bGroupOn1;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < behaviours.Length; ++i)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0011:
	{
		// for (int i = 0; i < behaviours.Length; ++i)
		int32_t L_6 = V_0;
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_7 = ___behaviours0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.TempoSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempoSwitch__ctor_mD84971217734ED2F35FB9B39E185629BE1EB5128 (TempoSwitch_t28ADC22E0E1866C9B62BC1BED08286B83DDCFB2A * __this, const RuntimeMethod* method)
{
	{
		// int lastEighthNote = -1;
		__this->set_lastEighthNote_7((-1));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SonicBloom.Koreo.Demos.UIMessageSetter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMessageSetter_Start_mE28E2E0F205FCA6BB0EA43F74C1C702B6F9370BC (UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIMessageSetter_UpdateText_mF0D7B453B53A22FFE71D54F3EB87AE0EE4D44F5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Koreographer.Instance.RegisterForEventsWithTime(eventID, UpdateText);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_eventID_4();
		KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 * L_2 = (KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990 *)il2cpp_codegen_object_new(KoreographyEventCallbackWithTime_t0D21C602E7910E8AF563A668B0F233C1513A0990_il2cpp_TypeInfo_var);
		KoreographyEventCallbackWithTime__ctor_m8185C0D5C0BEC84AA987A2BC121B85F1C2A0BBFF(L_2, __this, (intptr_t)((intptr_t)UIMessageSetter_UpdateText_mF0D7B453B53A22FFE71D54F3EB87AE0EE4D44F5C_RuntimeMethod_var), /*hidden argument*/NULL);
		Koreographer_RegisterForEventsWithTime_m8B62D581B78659D81A94CF653342AABB79589C6D(L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.UIMessageSetter::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMessageSetter_OnDestroy_mF74552F734B60A4AAEE2AA1BCAF5A6155AEDB728 (UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Koreographer.Instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0;
		L_0 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Koreographer.Instance.UnregisterForAllEvents(this);
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_2;
		L_2 = Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline(/*hidden argument*/NULL);
		Koreographer_UnregisterForAllEvents_m7E25175D9A573FB3FFB01C9ADB0DE7D759A04A88(L_2, __this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.UIMessageSetter::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMessageSetter_OnGUI_mDAA6B5BD22B721A45A3D8A38F4BAFC9DD77269DE (UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (curTextEvent != null)
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_0 = __this->get_curTextEvent_6();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// GUI.Box(new Rect(0,0, Screen.width, Screen.height), curTextEvent.GetTextValue(), style);
		int32_t L_1;
		L_1 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m12075526A02B55B680716A34AD5287B223122B70((&L_3), (0.0f), (0.0f), ((float)((float)L_1)), ((float)((float)L_2)), /*hidden argument*/NULL);
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_4 = __this->get_curTextEvent_6();
		String_t* L_5;
		L_5 = TextPayloadEventExtensions_GetTextValue_mA08CD5B5B9EE8C756BC806824330203868FC7EEB(L_4, /*hidden argument*/NULL);
		GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * L_6 = __this->get_style_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_tBCBBE29117D8093644C6E72B1CE3FB65C2CDCCC1_il2cpp_TypeInfo_var);
		GUI_Box_mCBAEFC1F48A5BF6E20691EE14024CEBF93705018(L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.UIMessageSetter::UpdateText(SonicBloom.Koreo.KoreographyEvent,System.Int32,System.Int32,SonicBloom.Koreo.DeltaSlice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMessageSetter_UpdateText_mF0D7B453B53A22FFE71D54F3EB87AE0EE4D44F5C (UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830 * __this, KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * ___evt0, int32_t ___sampleTime1, int32_t ___sampleDelta2, DeltaSlice_tE19275C0ACE9222D76E7ED0AE34C7F1B858A1B47  ___deltaSlice3, const RuntimeMethod* method)
{
	{
		// if (evt.HasTextPayload())
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_0 = ___evt0;
		bool L_1;
		L_1 = TextPayloadEventExtensions_HasTextPayload_m2A67547C6A0B3470E59FD5EDBD0250226AC1B3C1(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// if (curTextEvent == null ||
		//     (evt != curTextEvent && evt.StartSample > curTextEvent.StartSample))
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_2 = __this->get_curTextEvent_6();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_3 = ___evt0;
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_4 = __this->get_curTextEvent_6();
		if ((((RuntimeObject*)(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 *)L_3) == ((RuntimeObject*)(KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 *)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_5 = ___evt0;
		int32_t L_6;
		L_6 = KoreographyEvent_get_StartSample_m2CFAD92DCD02B0263DD74DA4DD3F3ABB4FF91130_inline(L_5, /*hidden argument*/NULL);
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_7 = __this->get_curTextEvent_6();
		int32_t L_8;
		L_8 = KoreographyEvent_get_StartSample_m2CFAD92DCD02B0263DD74DA4DD3F3ABB4FF91130_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)L_8)))
		{
			goto IL_0033;
		}
	}

IL_002c:
	{
		// curTextEvent = evt;
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_9 = ___evt0;
		__this->set_curTextEvent_6(L_9);
	}

IL_0033:
	{
		// if (curTextEvent.EndSample < sampleTime)
		KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * L_10 = __this->get_curTextEvent_6();
		int32_t L_11;
		L_11 = KoreographyEvent_get_EndSample_mB5F312FB9928D3034AD8C9FC9DC022DF192E39F0_inline(L_10, /*hidden argument*/NULL);
		int32_t L_12 = ___sampleTime1;
		if ((((int32_t)L_11) >= ((int32_t)L_12)))
		{
			goto IL_0048;
		}
	}
	{
		// curTextEvent = null;
		__this->set_curTextEvent_6((KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 *)NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void SonicBloom.Koreo.Demos.UIMessageSetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMessageSetter__ctor_m66823A599073476796D21FE0279FAEAA8FF7E661 (UIMessageSetter_t95E5D9FF5010712AB9D308244B47968F638CA830 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * Koreographer_get_Instance_mBFC6009F7AECFE2D3B1C62FFFCB4A3F955ED7AC1_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var);
		Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB * L_0 = ((Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_StaticFields*)il2cpp_codegen_static_fields_for(Koreographer_t2CFC1995220F14173F24B75AC7CC289C2E829FFB_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KoreographyEvent_get_StartSample_m2CFAD92DCD02B0263DD74DA4DD3F3ABB4FF91130_inline (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mStartSample_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KoreographyEvent_get_EndSample_mB5F312FB9928D3034AD8C9FC9DC022DF192E39F0_inline (KoreographyEvent_t7BCD3FF1CD8D111EEB76A2DE5EA49DED5DA66762 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mEndSample_1();
		return L_0;
	}
}
