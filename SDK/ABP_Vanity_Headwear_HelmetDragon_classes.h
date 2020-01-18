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

// AnimBlueprintGeneratedClass ABP_Vanity_Headwear_HelmetDragon.ABP_Vanity_Headwear_HelmetDragon_C
// 0x06F0 (0x0990 - 0x02A0)
class UABP_Vanity_Headwear_HelmetDragon_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7BEEFD33456CFD562888BE8229153FB0;      // 0x02A8(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_A3268E8A4DEE73250409D3B2B3B46981;// 0x02C8(0x0138)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_4CBD8EF34AF8E838E604E9ADFBF80023; // 0x0400(0x0550)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A9F5D4D8469AAA57215F46BAC105A1BF;// 0x0950(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_39422A8D4C604DE3AB7DFD9D5E328904;// 0x0970(0x0020)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Vanity_Headwear_HelmetDragon.ABP_Vanity_Headwear_HelmetDragon_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Vanity_Headwear_HelmetDragon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
