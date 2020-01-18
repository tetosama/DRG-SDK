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

// AnimBlueprintGeneratedClass ABP_Sideburns_Rig_A.ABP_Sideburns_Rig_A_C
// 0x0800 (0x0AA0 - 0x02A0)
class UABP_Sideburns_Rig_A_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5AE429454BD8FFE66F9AC6B28188EFF2;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_0400BF514CA539AAAE9EFAA84D2A975D; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B659C5ED427620F88781649A1BA5A96E;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C3A2D4E043F7D0268CF4E88604E16786;// 0x0840(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ACB5019741189F77E75099B2FAF6CD30;// 0x0860(0x0108)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_34F5244F4DA6552B5A8B7C91FB1CE28D;// 0x0968(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Sideburns_Rig_A.ABP_Sideburns_Rig_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Sideburns_Rig_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
