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

// BlueprintGeneratedClass BPL_Armor.BPL_Armor_C
// 0x0000 (0x0028 - 0x0028)
class UBPL_Armor_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPL_Armor.BPL_Armor_C");
		return ptr;
	}


	void STATIC_AddBaseArmorStats(class AFSDPlayerState** Player, class UClass** armorClass, class UObject** __WorldContext, TArray<struct FGearStatEntry>* Stats);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
