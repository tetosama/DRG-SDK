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

// BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C
// 0x0028 (0x0140 - 0x0118)
class UBP_VampireComponent_C : public UBezerkPerkComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0120(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C");
		return ptr;
	}


	void OnEnemyKilled(struct FGameplayTagContainer* enemyTags, class AActor** enemy, class UDamageClass** DamageClass);
	void Receive_OnInitialized();
	void ExecuteUbergraph_BP_VampireComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
