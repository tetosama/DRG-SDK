
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

// Function HUD_CrossHair_FlareGun.HUD_CrossHair_FlareGun_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_FlareGun_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_FlareGun.HUD_CrossHair_FlareGun_C.PreConstruct");

	UHUD_CrossHair_FlareGun_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_FlareGun.HUD_CrossHair_FlareGun_C.ExecuteUbergraph_HUD_CrossHair_FlareGun
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_FlareGun_C::ExecuteUbergraph_HUD_CrossHair_FlareGun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_FlareGun.HUD_CrossHair_FlareGun_C.ExecuteUbergraph_HUD_CrossHair_FlareGun");

	UHUD_CrossHair_FlareGun_C_ExecuteUbergraph_HUD_CrossHair_FlareGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
