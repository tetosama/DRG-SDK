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

// BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
// 0x000F (0x05D8 - 0x05C9)
class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C");
		return ptr;
	}


	class UClass* GetDefaultPawnClassForController(class AController** InController);
	void RecieveAllDwarvesDown();
	void ExecuteUbergraph_BP_NetworkPlayGameMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
