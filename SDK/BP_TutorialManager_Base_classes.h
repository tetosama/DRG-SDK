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

// BlueprintGeneratedClass BP_TutorialManager_Base.BP_TutorialManager_Base_C
// 0x0060 (0x03D0 - 0x0370)
class ABP_TutorialManager_Base_C : public ATutorialManager
{
public:
	class UTutorial_ThrowCarriable_C*                  Tutorial_ThrowCarriable;                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_FocusShot_C*                       Tutorial_FocusShot;                                       // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_BoscoAbility_C*               Tutorial_Hint_BoscoAbility;                               // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_EggMissionTerrainScanner_C*   Tutorial_Hint_EggMissionTerrainScanner;                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Tools_C*                      Tutorial_Hint_Tools;                                      // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_ResourceMined_C*              Tutorial_Hint_NitraMined;                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Dirt_C*                       Tutorial_Hint_Dirt;                                       // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Deposite_C*                   Tutorial_Hint_Deposite;                                   // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_LaserPointer_C*               Tutorial_Hint_LaserPointer;                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_PickAxe_C*                    Tutorial_Hint_PickAxe;                                    // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTutorial_Hint_Flares_C*                     Tutorial_Hint_Flares;                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorialManager_Base.BP_TutorialManager_Base_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
