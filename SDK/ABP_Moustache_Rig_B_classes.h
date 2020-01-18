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

// AnimBlueprintGeneratedClass ABP_Moustache_Rig_B.ABP_Moustache_Rig_B_C
// 0x0800 (0x0AA0 - 0x02A0)
class UABP_Moustache_Rig_B_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6961AEEB479A56F6EF430E811505B626;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_3ACA5D0746E71307A15211B15F27A3CB; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C53054534D00679CA8B6E6B9BA260B25;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9F4DF4984C7508440A4C48B2F26E9F34;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_98F128734B4F7E9B17CE7ABC7FB5EB36;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E807AB5F40E7B63FD3E199870D757D04;// 0x0968(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Moustache_Rig_B.ABP_Moustache_Rig_B_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Moustache_Rig_B(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
