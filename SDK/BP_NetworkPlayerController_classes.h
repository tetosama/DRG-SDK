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

// BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C
// 0x0074 (0x09AC - 0x0938)
class ABP_NetworkPlayerController_C : public ABP_PlayerController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USCREEN_CharacterSelection_Clean_C*          CharSelectScreen;                                         // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UScreen_BaseLoadLevel_C*                     LoaderScreenUI;                                           // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMenu_ServerStatus_C*                        TopBar;                                                   // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPopup_ReconnectController_C*                ReconnectWidget;                                          // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShowingReconnectcontroller;                               // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	class UScreen_CharacterInfo_C*                     CharInfo;                                                 // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                MixerGiveHealthCooldownSeconds;                           // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnDreadnaughtCooldownSeconds;                     // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawn3PraeCooldown;                                  // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnLootbugCooldown;                                // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnGrunt;                                          // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerNitraCooldown;                                       // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnMacteraSpawn;                                   // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnMacteraBomber;                                  // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnMacteraGrabber;                                 // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnAcidSpitter;                                    // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnWebSpitter;                                     // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerSpawnShellback;                                      // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerGiveAmmo;                                            // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerDreadnoughtWaitPeriod;                               // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerDreadnoughtCountdown;                                // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkPlayerController.BP_NetworkPlayerController_C");
		return ptr;
	}


	void Mixer_Enemy_Spawn_Event(struct FString* EventName, int* Cooldown, int* Amount_To_Spawn, struct FString* MixerUser, struct FText* FormatableAnnounceText);
	void CollapseAndRemoveFromParent(class UWidget** Widget);
	class UClass* GetLoaderScreenUIClass();
	void CleanupUI();
	void CalcMixerName(int* ParticipantID, struct FString* Name);
	void GetNonTakenHero(class UClass** SelectedClass);
	void MixerButtonEvt_giveHealth_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnDreadnought_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawn3Praetorians_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_giveNitra_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_giveAmmo_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnLootBug_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnAGrunt_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnMSpawn_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnMBomber_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnMGrabber_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnAcidSpitter_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnWebSpitter_Pressed_ID0(struct FMixerButtonInput* Button);
	void MixerButtonEvt_spawnShellback_Pressed_ID0(struct FMixerButtonInput* Button);
	void ReceiveBeginPlay();
	void OnBack();
	void OnPlayerCharacterPossesed_Event();
	void Server_RequestNonTakenHero();
	void Client_RecieveNonTakenHero(class UClass** New_Character);
	void Server_Mixer_GiveHealth();
	void Server_SetCharacterSelected();
	void ResupplyServer();
	void RecievePreClientTravel();
	void Set_Mixer_Button_CoolDown(struct FString* EventName, int* Cooldown);
	void ShowReconnect(bool* Show);
	void ExecuteUbergraph_BP_NetworkPlayerController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
