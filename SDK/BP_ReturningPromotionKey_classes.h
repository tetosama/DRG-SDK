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

// BlueprintGeneratedClass BP_ReturningPromotionKey.BP_ReturningPromotionKey_C
// 0x006C (0x04AC - 0x0440)
class ABP_ReturningPromotionKey_C : public ADeepPathfinderCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             MovingAudioComponent;                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        KeyMesh;                                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             KeyMover;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  KeyTransform;                                             // 0x0460(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0494(0x0004) MISSED OFFSET
	class APlayerCharacter*                            Target;                                                   // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReturningPromotionKey.BP_ReturningPromotionKey_C");
		return ptr;
	}


	void MoveTowardsCamera(bool* Finished);
	void OnTick_FDAEBDB24C3AD5E8021577B83AA4B3FD(float* DeltaTime, float* NormalizedTime);
	void Completed_FDAEBDB24C3AD5E8021577B83AA4B3FD(float* DeltaTime, float* NormalizedTime);
	void MoveToCharacter(class APlayerCharacter** InTarget);
	void ReceiveBeginPlay();
	void BndEvt__PathfinderMovement_K2Node_ComponentBoundEvent_0_PathFinished__DelegateSignature(bool* success);
	void ExecuteUbergraph_BP_ReturningPromotionKey(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
