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

// AnimBlueprintGeneratedClass ABP_Vanity_Headwear_XmasHat_Rigged.ABP_Vanity_Headwear_XmasHat_Rigged_C
// 0x06F0 (0x0990 - 0x02A0)
class UABP_Vanity_Headwear_XmasHat_Rigged_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_00BC33F7479E1AB8A87D7A9D8138AFBA;      // 0x02A8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_015397004676649C47950A8F5841019D;// 0x02C8(0x0138)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_BEE0E09847A8490FB7987EAD7D9C0A5E; // 0x0400(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FEFB607942431E318E6FDA8A5D72557F;// 0x0950(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3ED447524CAA89B24F25689CAAC1ED7F;// 0x0970(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Vanity_Headwear_XmasHat_Rigged.ABP_Vanity_Headwear_XmasHat_Rigged_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Vanity_Headwear_XmasHat_Rigged(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
