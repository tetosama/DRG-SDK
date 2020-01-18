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

// BlueprintGeneratedClass BP_Donkey.BP_Donkey_C
// 0x0168 (0x05D0 - 0x0468)
class ABP_Donkey_C : public ADonkeyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Oxygen_Leak;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Screen_007;                                            // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FrontPlane1;                                              // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Screen_005;                                            // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FrontPlane;                                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Plane1;                                                   // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_GasCanister_air_Mule1;                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_GasCanister_air_Mule;                                   // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_GasCanister1;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_GasCanister;                                           // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOxygenSourceComponent*                      OxygenSource;                                             // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PlayerRideCapsule;                                        // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioDepositing;                                          // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Donkey_Button;                                         // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        EscapeButton;                                             // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               UseBox_ResourceBank;                                      // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            UseSphere_Return;                                         // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USingleUsableComponent*                      ReturnToMissionUsable;                                    // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightCone;                                                // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FloodLight;                                               // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadarPointComponent*                        radarPoint;                                               // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsTrayOpen;                                               // 0x0550(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	struct FName                                       DestinationKeyName;                                       // 0x0554(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	class ABP_DonkeyDestinationMarker_C*               DonkeyMarker;                                             // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ControlledKeyName;                                        // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReachedDropship;                                        // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       DropShipPosKey;                                           // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GotoDropshipKey;                                          // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BeingDepositedToName;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadingForDropShip;                                       // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                OverlapsPlayer;                                           // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerOverlapsChanged;                                    // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                PlayersDepositing;                                        // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                BreadCrumbTimer;                                          // 0x05B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PlayerStartRideTime;                                      // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	class UFSDAchievement*                             MollyRiderAchievement;                                    // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Donkey.BP_Donkey_C");
		return ptr;
	}


	void OnRep_IsTrayOpen();
	void SetGotoDropShip(struct FVector* Pos);
	void SetControlledByDropShip(bool* Control);
	void SetDestination(struct FVector* Destination);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDonkeyCalled(struct FVector* Position);
	void SetDonkeyPos(struct FVector* Pos);
	void On_Goto_Dropship();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter** user);
	void BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool* canUse);
	void SpawnBreadCrumb();
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature();
	void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void Update_Button_State();
	void BndEvt__OxygenSource_K2Node_ComponentBoundEvent_9_OxygenActiveDelegate__DelegateSignature(bool* IsActive);
	void EnableButton();
	void ExecuteUbergraph_BP_Donkey(int* EntryPoint);
	void PlayerOverlapsChanged__DelegateSignature(int* OverlapCount);
	void OnReachedDropship__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
