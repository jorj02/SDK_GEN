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

// Function ParachuteVehicle_Seat.ParachuteVehicle_Seat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParachuteVehicle_Seat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicle_Seat.ParachuteVehicle_Seat_C.UserConstructionScript");

	AParachuteVehicle_Seat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
