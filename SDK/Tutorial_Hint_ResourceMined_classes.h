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

// BlueprintGeneratedClass Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C
// 0x0020 (0x01A8 - 0x0188)
class UTutorial_Hint_ResourceMined_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UResourceData*                               ResourceType;                                             // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCappedResource*                             Resource;                                                 // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumAmount;                                            // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeActive;                                        // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C");
		return ptr;
	}


	void OnIncreased_Event(class UCappedResource** Resource, float* amount);
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_ResourceMined(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
