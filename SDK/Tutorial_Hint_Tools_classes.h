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

// BlueprintGeneratedClass Tutorial_Hint_Tools.Tutorial_Hint_Tools_C
// 0x000C (0x0194 - 0x0188)
class UTutorial_Hint_Tools_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              First_Time_Delay;                                         // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Tools.Tutorial_Hint_Tools_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Tools(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
