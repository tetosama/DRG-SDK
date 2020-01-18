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

// BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C
// 0x0138 (0x0A18 - 0x08E0)
class ABP_PlayerController_SpaceRig_C : public ABP_PlayerControllerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWindowWidget*                               ServerBrowser;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMENU_Loadout_C*                             Loadout;                                                  // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Options;                                                  // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               MissionSelect;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                OldCounter;                                               // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	TArray<class UUserWidget*>                         Widgets;                                                  // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPopup_GearUpgrade_Buy_C*                    PopUp_BuyUpgrade;                                         // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0928(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharacterPossed;                                          // 0x0934(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0935(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnToggleHUD;                                              // 0x0938(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWindowWidget*                               CharCustomization;                                        // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Crafting;                                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Popup_Crafting;                                           // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ShowingReconnectcontroller;                               // 0x0960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHUDVisible;                                             // 0x0961(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0962(0x0006) MISSED OFFSET
	class USCREEN_CharacterSelection_Clean_C*          CharacterSelection;                                       // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HasShownCharacterSelector;                                // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class UWindowWidget*                               ReconnectController;                                      // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               NetworkError;                                             // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Trading;                                                  // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Cheat;                                                    // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               Jobs;                                                     // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UUI_CampaignNotificationManager_C*           C;                                                        // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UWindowWidget*                               RetirementPopup_1;                                        // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMENU_UpgradeScreen_C*                       ItemUpgrade;                                              // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               EscapeMenuEnabled;                                        // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class UWindowWidget*                               Bosco;                                                    // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                Medbay_speech_counter;                                    // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_between_shouts;                                      // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MixerConfettiTime;                                        // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	struct FScaledEffect                               MixerConfetti;                                            // 0x09D8(0x0010) (Edit, BlueprintVisible)
	class UFSDAchievement*                             SelfControlAchievement;                                   // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasKickedABarrel;                                         // 0x09F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x09F1(0x0007) MISSED OFFSET
	class UFSDAchievement*                             MugInHoopAchievement;                                     // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFSDAchievement*                             DiscJockeyAchievement;                                    // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseInstantUsableDiscord;                               // 0x0A08(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class UWindowWidget*                               DeepDives;                                                // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController_SpaceRig.BP_PlayerController_SpaceRig_C");
		return ptr;
	}


	void PreloadAssets();
	bool hudVisible();
	void ChangeHUDVisible(bool* IsHUDVisible, EHUDVisibilityReason* reason);
	void SelectLastPlayedCharacter();
	void AddWidget(int* ZOrder, ESlateVisibility* InVisibility, class UUserWidget** Widget);
	void ChangeCharacter(class UClass** NewCharacter);
	void CreateUI();
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_6(struct FKey* Key);
	void InpActEvt_PushToTalk_K2Node_InputActionEvent_5(struct FKey* Key);
	void InpActEvt_O_K2Node_InputKeyEvent_3(struct FKey* Key);
	void InpActEvt_MenuButton_K2Node_InputActionEvent_4(struct FKey* Key);
	void InpActEvt_Chat_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_P_K2Node_InputKeyEvent_2(struct FKey* Key);
	void InpActEvt_CallDonkey_K2Node_InputActionEvent_2(struct FKey* Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(struct FKey* Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_1(struct FKey* Key);
	void MixerButtonEvt_throwConfetti_Pressed_ID0(struct FMixerButtonInput* Button);
	void ShowServerBrowser();
	void ShowMissionSelect();
	void Client_OpenMap();
	void PlayerChangeCharacter(class UClass** NewCharacter);
	void RecievePreClientTravel();
	void ShowCharacterSelect();
	void ControllerReady();
	void RecieveOnControllerReady();
	void ShowBuyItemPopup(class UClass** Item, class UItemUpgrade** Upgrade);
	void ReceiveDestroyed();
	void OnCharacterPossesd();
	void ReceiveBeginPlay();
	void ShowCharCustomization();
	void ShowCrafting();
	void ShowCharacterScreenAndWorld();
	void ShowCraftingAndWorld();
	void ShowCustomizationAndWorld();
	void SpawnPlayer();
	void ShowFirstCharacterSelect();
	void ShowMatchMakingRandom();
	void OpenCharacterSelector(bool* OpenVideo, bool* AllowBack);
	void ShowReconnectController();
	void OnFirstWindowOpened();
	void OnLastWindowClosed();
	void ShowNetworkError();
	void ShowTrading();
	void ShowWindowByClass(class UClass** windowClass, int* ZOrder);
	void ShowCheatMenu();
	void ShowBarMenu(class ASpaceRigBar** Bar);
	void OnRoundSelected_Event(class ASpaceRigBar** Bar, class UDrinkableDataAsset** RequestedDrink);
	void OrderBarRound(class ASpaceRigBar** Bar, class UDrinkableDataAsset** Drink);
	void Deduct_Credits_On_Client(int* amount);
	void ShowJobs();
	void ShowItemUpgradeScreen(class UClass** CharacterClass, class UClass** itemClass, EItemCategory* ItemCategory);
	void ShowBoscoUpgrades();
	void OnPlayerSpawnBegin(int* PlayerId);
	void MixerSpawnConfetti(struct FVector* Location, struct FRotator* Rotation);
	void OnDroppodLeave();
	void PlayerThrewMugInHoop();
	void PlayerPlayedEntireSong();
	void HandleDiscordConsole(class ABP_DiscordConsole_C** DiscordConsole);
	void SetUsableDiscord(bool* Usable);
	void ShowDeepDives();
	void OpenSpacerigConsole(class ABP_BaseSpaceRigConsole_C** Console);
	void SetHasShownCharacterSelector(bool* HasShown);
	void SetIsEscapeMenuEnabled(bool* IsEscapeMenuEnabled);
	void ShowForgeWorkshop();
	void TestSchematic();
	void Reset_Player_Location();
	void Reset_Player_Scale_On_Clients();
	void Server_PopLooatAtAffliction();
	void ShowLookAtConsole();
	void Back_Event_1();
	void OnCharacterSelected();
	void OnHostTimerChanged(float* newTime);
	void OnMissionTimerChanged(float* newTime);
	void DoCountDown(float* newTime);
	void ShowReconnect(bool* Show);
	void OnGravityChanged(float* CurrentGravity, float* Change);
	void ExecuteUbergraph_BP_PlayerController_SpaceRig(int* EntryPoint);
	void OnToggleHUD__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
