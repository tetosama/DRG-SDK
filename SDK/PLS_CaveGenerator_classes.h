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

// BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C
// 0x000D (0x0658 - 0x064B)
class APLS_CaveGenerator_C : public APLS_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x064B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C");
		return ptr;
	}


	void CreateCaveGraph();
	void SpawnDropPod();
	void ExecuteUbergraph_PLS_CaveGenerator(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
