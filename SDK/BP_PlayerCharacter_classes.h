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

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x0220 (0x1190 - 0x0F70)
class ABP_PlayerCharacter_C : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AudioControl_C*                          BP_AudioControl;                                          // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_AttachedState_C*                         BP_AttachedState;                                         // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PilotingState_C*                         BP_PilotingState;                                         // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DeadState_C*                             BP_DeadState;                                             // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PhotographyState_C*                      BP_PhotographyState;                                      // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PassedOut_C*                             BP_PassedOut;                                             // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_IntoxicationComponent_C*                 BP_IntoxicationComponent;                                 // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_FrozenState_C*                           BP_FrozenState;                                           // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ScannerArrow;                                             // 0x0FB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_GrabbedState_C*                          BP_GrabbedState;                                          // 0x0FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        FP_PointLight_CloseShine_Ground;                          // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ShoulderCamLocation;                                      // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         ShoulderCamArm;                                           // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        DebugPointLight;                                          // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint6;                                          // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint5;                                          // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint4;                                          // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint3;                                          // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint2;                                          // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint1;                                          // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint;                                           // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint8;                                          // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Selfie_Points_new;                                        // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DropShadow;                                               // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFragileDebrisCleaner*                       FragileDebrisCleanerCore;                                 // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFragileDebrisCleaner*                       FragileDebrisCleanerFeet;                                 // 0x1058(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Ambient_Dust;                                           // 0x1060(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_FlyingState_C*                           BP_FlyingState;                                           // 0x1068(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         TP_SpotLight_shadow;                                      // 0x1070(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TP_SpotLight;                                             // 0x1078(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         FP_SpotLight_Light;                                       // 0x1080(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FP_SpotLight;                                             // 0x1088(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        EmergencyLight;                                           // 0x1090(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        FP_PointLight_CloseShine;                                 // 0x1098(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_NoMovementState_C*                       BP_NoMovementState;                                       // 0x10A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ZipLineState_C*                          BP_ZipLineState;                                          // 0x10A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_UsingState_C*                            BP_UsingState;                                            // 0x10B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ShieldRegenAudio;                                         // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URadarPointComponent*                        radarPoint;                                               // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCharacterGearComponent*                     CharacterGear;                                            // 0x10C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ParalyzedState_C*                        BP_ParalyzedState;                                        // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight_SpotCloseShine;                                // 0x10D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_DownedState_C*                           BP_DownedState;                                           // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_FallingState_C*                          BP_FallingState;                                          // 0x10E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_WalkingState_C*                          BP_WalkingState;                                          // 0x10F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LightCone;                                             // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Lamp_rim;                                            // 0x1100(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Lamp;                                                // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            UsableCollision;                                          // 0x1110(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889;// 0x1118(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889;// 0x111C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x111D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Emergency_Timeline;                                       // 0x1120(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61;// 0x1128(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61;// 0x112C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61;// 0x1130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1131(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ShieldRegenTimeline;                                      // 0x1138(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldRegenTime;                                          // 0x1140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1144(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDamageTime;                                           // 0x1150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x1154(0x0004) MISSED OFFSET
	TArray<class UBP_SelfiePoint_C*>                   SelfiePointList;                                          // 0x1158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBP_SelfiePoint_C*                           ActiveSelfiePoint;                                        // 0x1168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               WasHUDVisible;                                            // 0x1170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x1171(0x0007) MISSED OFFSET
	class UReverbEffect*                               PreDownReverb;                                            // 0x1178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScaledEffect                               MixerConfetti;                                            // 0x1180(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}


	bool DamageCausesReaction(class UDamageClass** DamageClass);
	class USceneComponent* GetDownCameraAttachPoint();
	class USceneComponent* GetDownCameraRotationPoint();
	void ChromaEffect(EFSDChromaEffect* effect);
	void CharacterAudioThrottled(class USoundBase** Sound, class UDialogDataAsset** Shout);
	void UpdateHeadLight();
	void ShieldRegenTimeline__FinishedFunc();
	void ShieldRegenTimeline__UpdateFunc();
	void Emergency_Timeline__FinishedFunc();
	void Emergency_Timeline__UpdateFunc();
	void InpActEvt_P_K2Node_InputKeyEvent_1(struct FKey* Key);
	void BP_OnControllerReady();
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float* amount);
	void StopRegenAudio();
	void BP_OnUpdateMeshes();
	void CharacterState_Changed(ECharacterState* NewState);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float* amount);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float* amount);
	void Init_Selfie_Cam();
	void SetDustVisible(bool* Visible);
	void ReceiveOnHeadlightOn();
	void ResetSaveGameIDInEditor();
	void On_Temporary_Buff_Changed(class UTemporaryBuff** buff, class APlayerCharacter** AffectedPlayer);
	void Request_change_in_gravity_scale(float* New_Gravity_Scale);
	void MixerClientSpawnConfettii(struct FVector* Location, struct FRotator* Rotation);
	void MixerServerSpawnConfettii(struct FVector* Location, struct FRotator* Rotation);
	void MixerSpawnConfetti(struct FVector* Location, struct FRotator* Rotation);
	void PrepareForEndScreen();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_HitSig__DelegateSignature(float* Damage, class UDamageClass** DamageClass, class AActor** DamageCauser, bool* anyHealthLost);
	void Activate_Temporary_buff_on_server(class UTemporaryBuff** buff, class APlayerCharacter** Player);
	void ExecuteUbergraph_BP_PlayerCharacter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
