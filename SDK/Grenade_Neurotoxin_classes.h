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

// BlueprintGeneratedClass Grenade_Neurotoxin.Grenade_Neurotoxin_C
// 0x0024 (0x0458 - 0x0434)
class AGrenade_Neurotoxin_C : public AITM_AOE_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Grenade_Neurotoxin_NozzleCone1;                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Neurotoxin_NozzleCone3;                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Grenade_Neurotoxin_NozzleCone2;                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Neurotoxin.Grenade_Neurotoxin_C");
		return ptr;
	}


	void AddGearStateEntries(class AFSDPlayerState** PlayerState, TArray<struct FGearStatEntry>* Stats);
	void OnExploded();
	void ExecuteUbergraph_Grenade_Neurotoxin(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
