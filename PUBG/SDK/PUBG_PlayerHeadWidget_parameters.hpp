#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerHeadWidget.PlayerHeadWidget_C.Get_TextWeaponName_Text_1
struct UPlayerHeadWidget_C_Get_TextWeaponName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGaugeColor
struct UPlayerHeadWidget_C_UpdateHealthGaugeColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.AddAlphaWhenADS
struct UPlayerHeadWidget_C_AddAlphaWhenADS_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_HeadBorder_Prepass_1
struct UPlayerHeadWidget_C_On_HeadBorder_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsEmptyPlayerName
struct UPlayerHeadWidget_C_IsEmptyPlayerName_Params
{
	bool                                               EmptyPlayerName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.OnPrepass_2
struct UPlayerHeadWidget_C_OnPrepass_2_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateTextColor
struct UPlayerHeadWidget_C_UpdateTextColor_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeaponGun
struct UPlayerHeadWidget_C_GetCurrentWeaponGun_Params
{
	class ATslWeapon_Gun*                              WeaponGun;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetCurrentWeapon
struct UPlayerHeadWidget_C_GetCurrentWeapon_Params
{
	class ATslWeapon*                                  CurrentWeapon;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetAmmoWeapon
struct UPlayerHeadWidget_C_GetAmmoWeapon_Params
{
	int                                                Ammo;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponIndex
struct UPlayerHeadWidget_C_GetWeaponIndex_Params
{
	int                                                SlotIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsCurrentWeapon
struct UPlayerHeadWidget_C_IsCurrentWeapon_Params
{
	bool                                               bCurrentWeapon;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetWeaponProcessor
struct UPlayerHeadWidget_C_GetWeaponProcessor_Params
{
	class AWeaponProcessor*                            WeaponProcessor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponColor
struct UPlayerHeadWidget_C_GetTslWeaponColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateIcon
struct UPlayerHeadWidget_C_UpdateIcon_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.On_weaponImage_Prepass_1
struct UPlayerHeadWidget_C_On_weaponImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetTslWeaponVisibility
struct UPlayerHeadWidget_C_GetTslWeaponVisibility_Params
{
	ESlateVisibility                                   Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetBoostGauge
struct UPlayerHeadWidget_C_GetBoostGauge_Params
{
	float                                              BoostGauge;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateBoostGauge
struct UPlayerHeadWidget_C_UpdateBoostGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetBoostGauge
struct UPlayerHeadWidget_C_SetBoostGauge_Params
{
	float                                              BoostGauge;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.InitBoostGauge
struct UPlayerHeadWidget_C_InitBoostGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.IsGroggy
struct UPlayerHeadWidget_C_IsGroggy_Params
{
	bool                                               IsGroggy;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetHealthPercent
struct UPlayerHeadWidget_C_GetHealthPercent_Params
{
	float                                              Health;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.GetGroggyHealthPercent
struct UPlayerHeadWidget_C_GetGroggyHealthPercent_Params
{
	float                                              GroggyHealth;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.UpdateHealthGauge
struct UPlayerHeadWidget_C_UpdateHealthGauge_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Construct
struct UPlayerHeadWidget_C_Construct_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.Tick
struct UPlayerHeadWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetCharacterIconPosition_UC
struct UPlayerHeadWidget_C_SetCharacterIconPosition_UC_Params
{
	struct FVector2D*                                  Pos_UC;                                                   // (Parm, IsPlainOldData)
	bool*                                              IsHidden;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.CustomTick
struct UPlayerHeadWidget_C_CustomTick_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.TimerCheckUpdateList
struct UPlayerHeadWidget_C_TimerCheckUpdateList_Params
{
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetPlayerNameTag
struct UPlayerHeadWidget_C_SetPlayerNameTag_Params
{
	struct FName*                                      PlayerName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetTeamNumber
struct UPlayerHeadWidget_C_SetTeamNumber_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               teamColor;                                                // (Parm, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.SetIndicatorColor
struct UPlayerHeadWidget_C_SetIndicatorColor_Params
{
	struct FLinearColor*                               teamColor;                                                // (Parm, IsPlainOldData)
};

// Function PlayerHeadWidget.PlayerHeadWidget_C.ExecuteUbergraph_PlayerHeadWidget
struct UPlayerHeadWidget_C_ExecuteUbergraph_PlayerHeadWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
