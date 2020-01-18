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

// BlueprintGeneratedClass DEC_CheckTargetPref.DEC_CheckTargetPref_C
// 0x0029 (0x00C9 - 0x00A0)
class UDEC_CheckTargetPref_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPreferenceKey;                                      // 0x00A0(0x0028) (Edit, BlueprintVisible)
	EBoscoAbillityTargetPreference                     IsPreference;                                             // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DEC_CheckTargetPref.DEC_CheckTargetPref_C");
		return ptr;
	}


	bool PerformConditionCheck(class AActor** OwnerActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
