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

// BlueprintGeneratedClass Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C
// 0x0010 (0x0198 - 0x0188)
class UTutorial_Hint_Dirt_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Dirt.Tutorial_Hint_Dirt_C");
		return ptr;
	}


	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Dirt(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
