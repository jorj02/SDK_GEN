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

// Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UnBindOnGotoTimelineDoneToFindCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.UnBindOnGotoTimelineDoneToFindCharacter");

	UReplayTimeline_C_UnBindOnGotoTimelineDoneToFindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 strKillerID                    (Parm, ZeroConstructor)
// struct FString                 strKillerName                  (Parm, ZeroConstructor)
// struct FString                 strVictimID                    (Parm, ZeroConstructor)
// struct FString                 strVictimName                  (Parm, ZeroConstructor)

void UReplayTimeline_C::BindOnGotoTimelineDoneToFindCharacter(const struct FString& strKillerID, const struct FString& strKillerName, const struct FString& strVictimID, const struct FString& strVictimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BindOnGotoTimelineDoneToFindCharacter");

	UReplayTimeline_C_BindOnGotoTimelineDoneToFindCharacter_Params params;
	params.strKillerID = strKillerID;
	params.strKillerName = strKillerName;
	params.strVictimID = strVictimID;
	params.strVictimName = strVictimName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CheckVideoCapture
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CheckVideoCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.CheckVideoCapture");

	UReplayTimeline_C_CheckVideoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnToggleReplayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnToggleReplayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnToggleReplayTimeline");

	UReplayTimeline_C_OnToggleReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMaximize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetTimelineMaximize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.SetTimelineMaximize");

	UReplayTimeline_C_SetTimelineMaximize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetTimelineMinimize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetTimelineMinimize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.SetTimelineMinimize");

	UReplayTimeline_C_SetTimelineMinimize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CreateGetGroggyEventsTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CreateGetGroggyEventsTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.CreateGetGroggyEventsTimer");

	UReplayTimeline_C_CreateGetGroggyEventsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ClearDBNOEventItems
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ClearDBNOEventItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.ClearDBNOEventItems");

	UReplayTimeline_C_ClearDBNOEventItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.HideDBNOEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::HideDBNOEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.HideDBNOEvents");

	UReplayTimeline_C_HideDBNOEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ShowDBNOEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ShowDBNOEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.ShowDBNOEvents");

	UReplayTimeline_C_ShowDBNOEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ClearKillEventItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.ClearKillEventItems");

	UReplayTimeline_C_ClearKillEventItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::CreateGetKillEventsTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.CreateGetKillEventsTimer");

	UReplayTimeline_C_CreateGetKillEventsTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UpdatePlayPauseBtns()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.UpdatePlayPauseBtns");

	UReplayTimeline_C_UpdatePlayPauseBtns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::SetVisibleCtrls(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.SetVisibleCtrls");

	UReplayTimeline_C_SetVisibleCtrls_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnSpeedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnSpeedDown");

	UReplayTimeline_C_OnSpeedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnSpeedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnSpeedUp");

	UReplayTimeline_C_OnSpeedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnPlay");

	UReplayTimeline_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnPause
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnPause");

	UReplayTimeline_C_OnPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnTogglePause
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnTogglePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnTogglePause");

	UReplayTimeline_C_OnTogglePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetEnableUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::SetEnableUI(bool IsEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.SetEnableUI");

	UReplayTimeline_C_SetEnableUI_Params params;
	params.IsEnable = IsEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.HideKillEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::HideKillEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.HideKillEvents");

	UReplayTimeline_C_HideKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::ShowKillEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.ShowKillEvents");

	UReplayTimeline_C_ShowKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::SetCurTimeSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.SetCurTimeSpeed");

	UReplayTimeline_C_SetCurTimeSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InputTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TextTime                       (Parm, OutParm)

void UReplayTimeline_C::FloatToSeconds(float InputTime, struct FText* TextTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.FloatToSeconds");

	UReplayTimeline_C_FloatToSeconds_Params params;
	params.InputTime = InputTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextTime != nullptr)
		*TextTime = params.TextTime;
}


// Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::UpdateTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.UpdateTimeline");

	UReplayTimeline_C_UpdateTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayTimeline_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.Construct");

	UReplayTimeline_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.Tick");

	UReplayTimeline_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__TimelineSlider_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnPause_K2Node_ComponentBoundEvent_234_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnPlay_K2Node_ComponentBoundEvent_257_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnSpeedUp_K2Node_ComponentBoundEvent_317_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnSpeedDown_K2Node_ComponentBoundEvent_338_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetKillEventsDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.GetKillEventsDone");

	UReplayTimeline_C_GetKillEventsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");

	UReplayTimeline_C_BndEvt__CheckBoxKills_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetKillEvents
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetKillEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.GetKillEvents");

	UReplayTimeline_C_GetKillEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplayTimeline_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.Destruct");

	UReplayTimeline_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEvents
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetGroggyEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.GetGroggyEvents");

	UReplayTimeline_C_GetGroggyEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.GetGroggyEventsDone
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::GetGroggyEventsDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.GetGroggyEventsDone");

	UReplayTimeline_C_GetGroggyEventsDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature");

	UReplayTimeline_C_BndEvt__CheckBoxGroggys_K2Node_ComponentBoundEvent_86_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnRec_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UReplayTimeline_C::BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UReplayTimeline_C_BndEvt__BtnStop_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.OnGoToFindTimeToFindCharacter
// (BlueprintCallable, BlueprintEvent)

void UReplayTimeline_C::OnGoToFindTimeToFindCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.OnGoToFindTimeToFindCharacter");

	UReplayTimeline_C_OnGoToFindTimeToFindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplayTimeline_C::ExecuteUbergraph_ReplayTimeline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayTimeline.ReplayTimeline_C.ExecuteUbergraph_ReplayTimeline");

	UReplayTimeline_C_ExecuteUbergraph_ReplayTimeline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
