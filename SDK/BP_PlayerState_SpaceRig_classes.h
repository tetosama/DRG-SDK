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

// BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
// 0x0079 (0x05F1 - 0x0578)
class ABP_PlayerState_SpaceRig_C : public ABP_PlayerState_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UItemUpgradePreviewComponent*                ItemUpgradePreview;                                       // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HealthInsuranceStatus;                                    // 0x0588(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x058C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               Stats;                                                    // 0x0590(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnStatChange;                                             // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Debug;                                                    // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C");
		return ptr;
	}


	void GetHealthInsuranceStatus(int* HealthInsuranceStatus);
	void UserConstructionScript();
	void WatchStat(class UMissionStat** MissionStat);
	void OnStatChanged(class UMissionStat** MissionStat, float* Value);
	void CommunicatStatChangeToServer(struct FString* StatTitle, struct FString* StatValue);
	void CommunicateStatChangeToAll(struct FString* StatTitle, struct FString* StatValue);
	void ReceiveBeginPlay();
	void CheckCampaign();
	void ExecuteUbergraph_BP_PlayerState_SpaceRig(int* EntryPoint);
	void OnStatChange__DelegateSignature(struct FString* StatTitle, struct FString* StatValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
