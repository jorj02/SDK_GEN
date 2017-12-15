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

// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.On_Parachute_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UParachuteVehicleWidget_C::On_Parachute_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.On_Parachute_Prepass_1");

	UParachuteVehicleWidget_C_On_Parachute_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Get_AirSpeed_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UParachuteVehicleWidget_C::Get_AirSpeed_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Get_AirSpeed_Text_1");

	UParachuteVehicleWidget_C_Get_AirSpeed_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.OnPrepass_ParachuteWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UParachuteVehicleWidget_C::OnPrepass_ParachuteWidgetVisibility(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.OnPrepass_ParachuteWidgetVisibility");

	UParachuteVehicleWidget_C_OnPrepass_ParachuteWidgetVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UParachuteVehicleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Construct");

	UParachuteVehicleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UParachuteVehicleWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.Tick");

	UParachuteVehicleWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.ExecuteUbergraph_ParachuteVehicleWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UParachuteVehicleWidget_C::ExecuteUbergraph_ParachuteVehicleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachuteVehicleWidget.ParachuteVehicleWidget_C.ExecuteUbergraph_ParachuteVehicleWidget");

	UParachuteVehicleWidget_C_ExecuteUbergraph_ParachuteVehicleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
