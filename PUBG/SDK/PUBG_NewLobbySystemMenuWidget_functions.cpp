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

// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::QuitGame(EPopupButtonID Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.QuitGame");

	UNewLobbySystemMenuWidget_C_QuitGame_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewLobbySystemMenuWidget_C::GetVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetVersionText");

	UNewLobbySystemMenuWidget_C_GetVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.GetMainCoherentWidget");

	UNewLobbySystemMenuWidget_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewLobbySystemMenuWidget_C::LobbyReoload()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.LobbyReoload");

	UNewLobbySystemMenuWidget_C_LobbyReoload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.PreConstruct");

	UNewLobbySystemMenuWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewLobbySystemMenuWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Construct");

	UNewLobbySystemMenuWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.Tick");

	UNewLobbySystemMenuWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonReload_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_155_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_176_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewLobbySystemMenuWidget_C::BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature");

	UNewLobbySystemMenuWidget_C_BndEvt__ButtonResume_K2Node_ComponentBoundEvent_574_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewLobbySystemMenuWidget_C::ExecuteUbergraph_NewLobbySystemMenuWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewLobbySystemMenuWidget.NewLobbySystemMenuWidget_C.ExecuteUbergraph_NewLobbySystemMenuWidget");

	UNewLobbySystemMenuWidget_C_ExecuteUbergraph_NewLobbySystemMenuWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
