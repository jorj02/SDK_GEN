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

// Function CountDownWidget.CountDownWidget_C.GetTslGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslGameState*           GameState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCountDownWidget_C::GetTslGameState(class ATslGameState** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.GetTslGameState");

	UCountDownWidget_C_GetTslGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function CountDownWidget.CountDownWidget_C.On_CountDownBlock_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCountDownWidget_C::On_CountDownBlock_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.On_CountDownBlock_Prepass_1");

	UCountDownWidget_C_On_CountDownBlock_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountDownWidget.CountDownWidget_C.On_CountDownText_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCountDownWidget_C::On_CountDownText_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.On_CountDownText_Prepass_1");

	UCountDownWidget_C_On_CountDownText_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCountDownWidget_C::Get_CountDownText_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Visibility_1");

	UCountDownWidget_C_Get_CountDownText_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCountDownWidget_C::Get_CountDownText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountDownWidget.CountDownWidget_C.Get_CountDownText_Text_1");

	UCountDownWidget_C_Get_CountDownText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
