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

// BlueprintGeneratedClass BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C
// 0x0011 (0x0109 - 0x00F8)
class UBP_QuickRecoveryLogic_C : public UPerkLogic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                DisperseEnemiesRank;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DispersionRadius;                                         // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundAliveEnemies;                                        // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_QuickRecoveryLogic.BP_QuickRecoveryLogic_C");
		return ptr;
	}


	struct FText GetAdditionalText(int* Rank);
	void StartLogic(int* Rank);
	void RevivedOther();
	void PlayFleeEffect();
	void ExecuteUbergraph_BP_QuickRecoveryLogic(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
