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

// Function KickPopupWidget.KickPopupWidget_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKickPopupWidget_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.SetPopup");

	UKickPopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKickPopupWidget_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UKickPopupWidget_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKickPopupWidget_C::BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UKickPopupWidget_C_BndEvt__NoButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UKickPopupWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");

	UKickPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKickPopupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.Construct");

	UKickPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKickPopupWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.Destruct");

	UKickPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void UKickPopupWidget_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.Custom Event_1");

	UKickPopupWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.ExecuteUbergraph_KickPopupWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UKickPopupWidget_C::ExecuteUbergraph_KickPopupWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.ExecuteUbergraph_KickPopupWidget");

	UKickPopupWidget_C_ExecuteUbergraph_KickPopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KickPopupWidget.KickPopupWidget_C.ButttonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)

void UKickPopupWidget_C::ButttonClick__DelegateSignature(EPopupButtonID NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KickPopupWidget.KickPopupWidget_C.ButttonClick__DelegateSignature");

	UKickPopupWidget_C_ButttonClick__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
