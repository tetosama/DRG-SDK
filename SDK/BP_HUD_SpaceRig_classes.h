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

// BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C
// 0x0040 (0x0468 - 0x0428)
class ABP_HUD_SpaceRig_C : public AFSDHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerCharacter*                            PlayerCharacter;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UHUD_SpaceRig_C*                             HUD;                                                      // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UUserWidget*>                         OwnedWidgets;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0458(0x0010) UNKNOWN PROPERTY: ArrayProperty BP_HUD_SpaceRig.BP_HUD_SpaceRig_C.PendingWindows

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HUD_SpaceRig.BP_HUD_SpaceRig_C");
		return ptr;
	}


	void HasSelectedCharacterBeenPromoted(bool* IsPromoted);
	void ShowNextQueuedWindow();
	void EnqueueWindow();
	void PlayerSpawned(class APlayerCharacter** Player);
	void OnVisibilityChanged();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnCountdownCompleted();
	void Update_Visibility();
	void Handle_Count_Down();
	void Setup_Campaign_Notifications();
	void OnCampaignNotification_Event(class UCampaignNotification** Notification);
	void Setup_Retirement_Shouts();
	void OnEligibleForRetirementAssignment(class UBP_GameInstance_C** GameInstance);
	void Setup_Spacerig_Notifications();
	void Setup_UI_Notifications();
	void Setup_Promotion_Rewards();
	void OnLastWindowClosed();
	void Setup_First_Infused_Core();
	void Setup_Pending_Rewards();
	void ExecuteUbergraph_BP_HUD_SpaceRig(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
