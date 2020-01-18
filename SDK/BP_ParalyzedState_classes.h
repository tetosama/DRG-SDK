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

// BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C
// 0x0018 (0x0158 - 0x0140)
class UBP_ParalyzedState_C : public UParalyzedStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    StoredRotation;                                           // 0x0148(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Camera_Arm_Y_Rotation_;                                   // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ParalyzedState.BP_ParalyzedState_C");
		return ptr;
	}


	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ExecuteUbergraph_BP_ParalyzedState(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
