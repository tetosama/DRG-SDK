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

// BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C
// 0x0058 (0x01E0 - 0x0188)
class UTutorial_Hint_LaserPointer_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTutorialHint                               PlaceMarkerHint;                                          // 0x0198(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C");
		return ptr;
	}


	void ReceiveOnHidden();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased();
	void OnLaserPointerEvent(class AActor** Target, ELaserPointerTargetType* TargetType, struct FVector* Location, class AActor** ExtraActor);
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
