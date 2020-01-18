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

// AnimBlueprintGeneratedClass ASI_Maggot.ASI_Maggot_C
// 0x0338 (0x05B8 - 0x0280)
class UASI_Maggot_C : public UAnimSharingTransitionInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2C8C64934D034983DF322A9591B4AEDE;      // 0x0288(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9D9AE56848C0C77FBC9DB1A58A79BFE5;// 0x02A8(0x00A0)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_4C8C46B2494AE2640E7156B4E45D94B6;// 0x0348(0x0138)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_23A28DC1422BEA424AA21EB567AC5CE7;// 0x0480(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ASI_Maggot.ASI_Maggot_C");
		return ptr;
	}


	void ExecuteUbergraph_ASI_Maggot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
