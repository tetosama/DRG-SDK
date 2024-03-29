#pragma once

#include "../SDK.h"

// Name: , Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DiscordRpc.DiscordRpc.UpdatePresence
struct UDiscordRpc_UpdatePresence_Params
{
};

// Function DiscordRpc.DiscordRpc.Shutdown
struct UDiscordRpc_Shutdown_Params
{
};

// Function DiscordRpc.DiscordRpc.RunCallbacks
struct UDiscordRpc_RunCallbacks_Params
{
};

// Function DiscordRpc.DiscordRpc.Respond
struct UDiscordRpc_Respond_Params
{
	struct FString*                                    userId;                                                   // (Parm, ZeroConstructor)
	int*                                               Reply;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function DiscordRpc.DiscordRpc.Initialize
struct UDiscordRpc_Initialize_Params
{
	struct FString*                                    applicationId;                                            // (Parm, ZeroConstructor)
	bool*                                              autoRegister;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    optionalSteamId;                                          // (Parm, ZeroConstructor)
};

// Function DiscordRpc.DiscordRpc.ClearPresence
struct UDiscordRpc_ClearPresence_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
