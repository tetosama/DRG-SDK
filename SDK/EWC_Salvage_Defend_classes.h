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

// BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C
// 0x0028 (0x0070 - 0x0048)
class UEWC_Salvage_Defend_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     SpawnLocation;                                            // 0x0050(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UEnemyGroupDescriptor*                       EnemyGroup;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Wave_Count_Waves;                                         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Wave_Count_Constant_Pressure;                             // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EWC_Salvage_Defend.EWC_Salvage_Defend_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_Defend(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
