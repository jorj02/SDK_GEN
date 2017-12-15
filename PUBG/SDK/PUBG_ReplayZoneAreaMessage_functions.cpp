// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayZoneAreaMessage_C::UpdateReplayZoneAreaMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.UpdateReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_UpdateReplayZoneAreaMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayZoneAreaMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.Construct");

	UReplayZoneAreaMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UReplayZoneAreaMessage_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.CustomTick");

	UReplayZoneAreaMessage_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.TimerCheckReplayZoneArea
// (BlueprintCallable, BlueprintEvent)

void UReplayZoneAreaMessage_C::TimerCheckReplayZoneArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.TimerCheckReplayZoneArea");

	UReplayZoneAreaMessage_C_TimerCheckReplayZoneArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayZoneAreaMessage_C::ExecuteUbergraph_ReplayZoneAreaMessage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayZoneAreaMessage.ReplayZoneAreaMessage_C.ExecuteUbergraph_ReplayZoneAreaMessage");

	UReplayZoneAreaMessage_C_ExecuteUbergraph_ReplayZoneAreaMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
