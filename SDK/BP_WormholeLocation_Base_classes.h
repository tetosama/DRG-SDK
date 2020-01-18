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

// BlueprintGeneratedClass BP_WormholeLocation_Base.BP_WormholeLocation_Base_C
// 0x0010 (0x0340 - 0x0330)
class ABP_WormholeLocation_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WormholeLocation_Base.BP_WormholeLocation_Base_C");
		return ptr;
	}


	void OnPlayerEnterLocation(class APlayerCharacter** Character);
	void OnPlayerLeaveLocation(class APlayerCharacter** Character);
	void ExecuteUbergraph_BP_WormholeLocation_Base(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
