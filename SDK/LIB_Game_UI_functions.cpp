
#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EVanitySlot*                   InVanitySlot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UpperCase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutTitle                       (Parm, OutParm)

void ULIB_Game_UI_C::STATIC_GetVanitySlotTitle(EVanitySlot* InVanitySlot, bool* UpperCase, class UObject** __WorldContext, struct FText* OutTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotTitle");

	ULIB_Game_UI_C_GetVanitySlotTitle_Params params;
	params.InVanitySlot = InVanitySlot;
	params.UpperCase = UpperCase;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
}


// Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EVanitySlot*                   VanitySlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              AsTexture_2D                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULIB_Game_UI_C::STATIC_GetVanitySlotIcon(EVanitySlot* VanitySlot, class UObject** __WorldContext, class UTexture2D** AsTexture_2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game_UI.LIB_Game_UI_C.GetVanitySlotIcon");

	ULIB_Game_UI_C_GetVanitySlotIcon_Params params;
	params.VanitySlot = VanitySlot;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTexture_2D != nullptr)
		*AsTexture_2D = params.AsTexture_2D;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
