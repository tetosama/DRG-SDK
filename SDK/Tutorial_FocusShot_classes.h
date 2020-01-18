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

// BlueprintGeneratedClass Tutorial_FocusShot.Tutorial_FocusShot_C
// 0x0008 (0x0190 - 0x0188)
class UTutorial_FocusShot_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_FocusShot.Tutorial_FocusShot_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnItemEquipped_Event(class AItem** Item);
	void FullyFocusedEvent_Event();
	void ExecuteUbergraph_Tutorial_FocusShot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
