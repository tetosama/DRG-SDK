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

// AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C
// 0x01A8 (0x0418 - 0x0270)
class UABP_FuelCell_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_376FE0F9450837D059CE05A395FFA126;      // 0x0278(0x0020)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_33619B1E4F1A47A55EC7D891965D1490;// 0x0298(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_9CBBC20146006789DFDC52A2BDB72434;// 0x02E0(0x00B8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0D94F7924C125375CA80EB9FFBE6B239;// 0x0398(0x0078)
	float                                              BuildProgress;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefendProgress;                                           // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_FuelCell.ABP_FuelCell_C");
		return ptr;
	}


	void SetBuildProgress(float* Progress);
	void SetDefendProgress(float* Progress);
	void ExecuteUbergraph_ABP_FuelCell(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
