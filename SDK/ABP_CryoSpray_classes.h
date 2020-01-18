#pragma once

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_CryoSpray.ABP_CryoSpray_C
// 0x0260 (0x04E0 - 0x0280)
class UABP_CryoSpray_C : public UCryoSprayAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_22C9555F4B748DEC5992F2B3D16590B0;      // 0x0288(0x0020)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_71792B1449A2B75F42F625B18EFF0213;      // 0x02A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25FCAE934DFD962DC31B6B9365F4A845;// 0x02F0(0x0078)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E60E6FC341B952492DBBB99C77FDCD5F;// 0x0368(0x00B8)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_28218EC34CB6CCE1B374B3B50075D8FD;// 0x0420(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F1B8B4E945A0D1A3B81E87BFFEEBD167;// 0x0468(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_CryoSpray.ABP_CryoSpray_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_CryoSpray(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
