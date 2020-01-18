
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

// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.PlayDrink
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AITM_BarGlass_Item_GlyphidSlammer_Support_C::PlayDrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.PlayDrink");

	AITM_BarGlass_Item_GlyphidSlammer_Support_C_PlayDrink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AITM_BarGlass_Item_GlyphidSlammer_Support_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.UserConstructionScript");

	AITM_BarGlass_Item_GlyphidSlammer_Support_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
