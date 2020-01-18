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

// BlueprintGeneratedClass BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C
// 0x0058 (0x0498 - 0x0440)
class ABP_ShieldRegenerator_Mover_C : public ADeepPathfinderCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             MovingAudioComponent;                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RocketExhaust;                                            // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LiftOff_Progress_9B203DE44FAEAFAF13D1B3902168B574;        // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LiftOff__Direction_9B203DE44FAEAFAF13D1B3902168B574;      // 0x0464(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LiftOff;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HoverPoint;                                               // 0x0478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartPoint;                                               // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ListoffBlastParticles;                                    // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldRegenerator_Mover.BP_ShieldRegenerator_Mover_C");
		return ptr;
	}


	void FindTakeOffPoint(struct FVector* TakeOffPoint);
	bool MoveToInstigator();
	void LiftOff__FinishedFunc();
	void LiftOff__UpdateFunc();
	void ReceiveBeginPlay();
	void All_LiftOff(struct FVector* InHoverPoint);
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathStateChangedDelegate__DelegateSignature(EDeepMovementState* State);
	void Begin_Lift_Off_Effects();
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_1_PathFinished__DelegateSignature(bool* success);
	void Begin_Move_To_Actor(class AActor** InTargetActor);
	void OnReturned();
	void ExecuteUbergraph_BP_ShieldRegenerator_Mover(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
