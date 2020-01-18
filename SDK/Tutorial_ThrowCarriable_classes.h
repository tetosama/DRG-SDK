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

// BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C
// 0x0008 (0x0190 - 0x0188)
class UTutorial_ThrowCarriable_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_ThrowCarriable.Tutorial_ThrowCarriable_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnCarriableChangedEvent(class AActor** carriedActor);
	void OnThrowCarriableProgress(float* Progress);
	void ExecuteUbergraph_Tutorial_ThrowCarriable(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
