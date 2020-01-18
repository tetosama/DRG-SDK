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

// BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C
// 0x0008 (0x0190 - 0x0188)
class UTutorial_Hint_Deposite_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C");
		return ptr;
	}


	void OnResourceFull(class UCappedResource** Resource);
	void OnResourceChanged(class UCappedResource** Resource, float* amount);
	void OnCallDonkey();
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Deposite(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
