
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

// Function IJukebox.IJukebox_C.StopJukebox
// (Public, BlueprintCallable, BlueprintEvent)

void UIJukebox_C::StopJukebox()
{
	static auto fn = UObject::FindObject<UFunction>("Function IJukebox.IJukebox_C.StopJukebox");

	UIJukebox_C_StopJukebox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
