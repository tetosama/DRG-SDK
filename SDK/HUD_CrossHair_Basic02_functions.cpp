
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

// Function HUD_CrossHair_Basic02.HUD_CrossHair_Basic02_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_Basic02_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_Basic02.HUD_CrossHair_Basic02_C.PreConstruct");

	UHUD_CrossHair_Basic02_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_CrossHair_Basic02.HUD_CrossHair_Basic02_C.ExecuteUbergraph_HUD_CrossHair_Basic02
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHUD_CrossHair_Basic02_C::ExecuteUbergraph_HUD_CrossHair_Basic02(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_Basic02.HUD_CrossHair_Basic02_C.ExecuteUbergraph_HUD_CrossHair_Basic02");

	UHUD_CrossHair_Basic02_C_ExecuteUbergraph_HUD_CrossHair_Basic02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
