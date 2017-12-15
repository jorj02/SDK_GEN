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

// Function PlayerHeadWidget.PlayerHeadWidget_C.Get_TextWeaponName_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerHeadWidget_C::Get_TextWeaponName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Get_TextWeaponName_Text_1");

	UPlayerHeadWidget_C_Get_TextWeaponName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGaugeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor");

	UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::AddAlphaWhenADS(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS");

	UPlayerHeadWidget_C_AddAlphaWhenADS_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::On_HeadBorder_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1");

	UPlayerHeadWidget_C_On_HeadBorder_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EmptyPlayerName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::IsEmptyPlayerName(bool* EmptyPlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName");

	UPlayerHeadWidget_C_IsEmptyPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EmptyPlayerName != nullptr)
		*EmptyPlayerName = params.EmptyPlayerName;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::OnPrepass_2(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2");

	UPlayerHeadWidget_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor");

	UPlayerHeadWidget_C_UpdateTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon_Gun*          WeaponGun                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetCurrentWeaponGun(class ATslWeapon_Gun** WeaponGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun");

	UPlayerHeadWidget_C_GetCurrentWeaponGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponGun != nullptr)
		*WeaponGun = params.WeaponGun;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslWeapon*              CurrentWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetCurrentWeapon(class ATslWeapon** CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon");

	UPlayerHeadWidget_C_GetCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = params.CurrentWeapon;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Ammo                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetAmmoWeapon(int* Ammo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon");

	UPlayerHeadWidget_C_GetAmmoWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ammo != nullptr)
		*Ammo = params.Ammo;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SlotIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetWeaponIndex(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex");

	UPlayerHeadWidget_C_GetWeaponIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCurrentWeapon                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::IsCurrentWeapon(bool* bCurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon");

	UPlayerHeadWidget_C_IsCurrentWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCurrentWeapon != nullptr)
		*bCurrentWeapon = params.bCurrentWeapon;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWeaponProcessor*        WeaponProcessor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetWeaponProcessor(class AWeaponProcessor** WeaponProcessor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor");

	UPlayerHeadWidget_C_GetWeaponProcessor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponProcessor != nullptr)
		*WeaponProcessor = params.WeaponProcessor;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UPlayerHeadWidget_C::GetTslWeaponColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor");

	UPlayerHeadWidget_C_GetTslWeaponColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon");

	UPlayerHeadWidget_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::On_weaponImage_Prepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1");

	UPlayerHeadWidget_C_On_weaponImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetTslWeaponVisibility(ESlateVisibility* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility");

	UPlayerHeadWidget_C_GetTslWeaponVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BoostGauge                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetBoostGauge(float* BoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge");

	UPlayerHeadWidget_C_GetBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoostGauge != nullptr)
		*BoostGauge = params.BoostGauge;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateBoostGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge");

	UPlayerHeadWidget_C_UpdateBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BoostGauge                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::SetBoostGauge(float BoostGauge)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge");

	UPlayerHeadWidget_C_SetBoostGauge_Params params;
	params.BoostGauge = BoostGauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::InitBoostGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge");

	UPlayerHeadWidget_C_InitBoostGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsGroggy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::IsGroggy(bool* IsGroggy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy");

	UPlayerHeadWidget_C_IsGroggy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroggy != nullptr)
		*IsGroggy = params.IsGroggy;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetHealthPercent(float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent");

	UPlayerHeadWidget_C_GetHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          GroggyHealth                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::GetGroggyHealthPercent(float* GroggyHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent");

	UPlayerHeadWidget_C_GetGroggyHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GroggyHealth != nullptr)
		*GroggyHealth = params.GroggyHealth;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::UpdateHealthGauge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge");

	UPlayerHeadWidget_C_UpdateHealthGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Construct");

	UPlayerHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.Tick");

	UPlayerHeadWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D*              Pos_UC                         (Parm, IsPlainOldData)
// bool*                          IsHidden                       (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::SetCharacterIconPosition_UC(struct FVector2D* Pos_UC, bool* IsHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC");

	UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params params;
	params.Pos_UC = Pos_UC;
	params.IsHidden = IsHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
// (BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::CustomTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick");

	UPlayerHeadWidget_C_CustomTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
// (BlueprintCallable, BlueprintEvent)

void UPlayerHeadWidget_C::TimerCheckUpdateList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList");

	UPlayerHeadWidget_C_TimerCheckUpdateList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  PlayerName                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::SetPlayerNameTag(struct FName* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag");

	UPlayerHeadWidget_C_SetPlayerNameTag_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           TeamNumber                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           teamColor                      (Parm, IsPlainOldData)

void UPlayerHeadWidget_C::SetTeamNumber(int* TeamNumber, struct FLinearColor* teamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber");

	UPlayerHeadWidget_C_SetTeamNumber_Params params;
	params.TeamNumber = TeamNumber;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLinearColor*           teamColor                      (Parm, IsPlainOldData)

void UPlayerHeadWidget_C::SetIndicatorColor(struct FLinearColor* teamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor");

	UPlayerHeadWidget_C_SetIndicatorColor_Params params;
	params.teamColor = teamColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHeadWidget_C::ExecuteUbergraph_PlayerHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget");

	UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
