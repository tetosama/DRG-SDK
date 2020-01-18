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

// AnimBlueprintGeneratedClass ABP_Hair_Rig_A.ABP_Hair_Rig_A_C
// 0x06F8 (0x0998 - 0x02A0)
class UABP_Hair_Rig_A_C : public UVanityAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BF196175401BFCE32C1C9BB734D83DA6;      // 0x02A8(0x0020)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_5ABCF68647BDCBC85FBD799588E187F9; // 0x02D0(0x0550)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1A69509646B061452B5C60ADA0396A9C;// 0x0820(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26376C5049171AEC2B0F30A2AA22014C;// 0x0840(0x0020)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_A77C043F4F943FD80A33419AE1A9B2B6;// 0x0860(0x0138)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Hair_Rig_A.ABP_Hair_Rig_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Hair_Rig_A(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
