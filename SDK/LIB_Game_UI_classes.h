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

// BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Game_UI_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LIB_Game_UI.LIB_Game_UI_C");
		return ptr;
	}


	void STATIC_GetVanitySlotTitle(EVanitySlot* InVanitySlot, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle);
	void STATIC_GetVanitySlotIcon(EVanitySlot* VanitySlot, class UObject** __WorldContext, class UTexture2D** AsTexture_2D);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
