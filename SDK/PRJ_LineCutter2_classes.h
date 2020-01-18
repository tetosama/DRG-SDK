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

// BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C
// 0x00A0 (0x05F8 - 0x0558)
class APRJ_LineCutter2_C : public ALineCutterProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0558(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            SphereRight;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereLeft;                                               // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereRight2;                                             // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereLeft2;                                              // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile2;                                     // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile;                                      // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right2;                        // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left2;                         // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageComponent*                            DamageExplosion;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left;                          // 0x05B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right;                         // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ExpandLineTimerHandle;                                    // 0x05C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TimerHandleExecutions;                                    // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VisualMaxSize;                                            // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                FireTimerHandle;                                          // 0x05D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                DestructionByTerrainTimerHandle;                          // 0x05E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TerrainCallTime;                                          // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TerrainIndex;                                             // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ReduceLineTimerHandle;                                    // 0x05F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C");
		return ptr;
	}


	void AdjustLineSize();
	void UserConstructionScript();
	void DisableProjectile();
	void ReceiveBeginPlay();
	void ExpandLine();
	void DoDamage();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void StartLineExpansion();
	void CheckTerrainCall();
	void Set_Line_Size_Event(float* MaxSize, float* MaxSizeVisual);
	void Multiply_Line_Size(float* Multiplier);
	void K2_OnReset();
	void LinelifespanDestroy();
	void Explode();
	void LineReducing();
	void ThereCanBeOnlyOne();
	void Add_Line_Size(float* Size);
	void OnClientInitialized();
	void OnLineDestroyed(struct FHitResult* Result);
	void SetExtraBeamVisibility(bool* IsVisible);
	void ExecuteUbergraph_PRJ_LineCutter2(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
