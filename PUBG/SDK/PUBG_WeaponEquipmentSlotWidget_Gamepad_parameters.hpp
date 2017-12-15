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

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotItem
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotContainer
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSwap
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessSwap
struct UWeaponEquipmentSlotWidget_Gamepad_C_ProcessSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleasedSwap
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnReleasedSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnPressedSwap
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnPressedSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputY
struct UWeaponEquipmentSlotWidget_Gamepad_C_InputY_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputX
struct UWeaponEquipmentSlotWidget_Gamepad_C_InputX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDrop
struct UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDrop_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.DroporUnEquipItem
struct UWeaponEquipmentSlotWidget_Gamepad_C_DroporUnEquipItem_Params
{
	bool                                               bDrop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDeatchOrDropAttachment
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDeatchOrDropAttachment_Params
{
	bool                                               bDetach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleasedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_C_ReleasedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_C_PressedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDetach
struct UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDetach_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleaseDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_C_ReleaseDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_C_PressedDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_BackgroundSlot_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_BackgroundSlot_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindLastFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_FindLastFocusableWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveRight
struct UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveRight_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveLeft
struct UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveLeft_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetGamepadSelfPutAttachmentFocus
struct UWeaponEquipmentSlotWidget_Gamepad_C_SetGamepadSelfPutAttachmentFocus_Params
{
	bool                                               bFocus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputB
struct UWeaponEquipmentSlotWidget_Gamepad_C_InputB_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnChildSlotRefreshFocus
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnChildSlotRefreshFocus_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetFocusingChildWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Up
struct UWeaponEquipmentSlotWidget_Gamepad_C_Up_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Down
struct UWeaponEquipmentSlotWidget_Gamepad_C_Down_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildRightFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetChildRightFocusableWidget_Params
{
	class UUserWidget*                                 RightWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildLeftFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetChildLeftFocusableWidget_Params
{
	class UUserWidget*                                 Left_Widget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildDownFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetChildDownFocusableWidget_Params
{
	class UUserWidget*                                 DownWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildUpFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetChildUpFocusableWidget_Params
{
	class UUserWidget*                                 UpWidget;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocusable
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindFirstFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_C_FindFirstFocusableWidget_Params
{
	class UUserWidget*                                 FocusableWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocus
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetFocus
struct UWeaponEquipmentSlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_FocusColorBG_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_FocusColorBG_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputA
struct UWeaponEquipmentSlotWidget_Gamepad_C_InputA_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetDragDroppingEquipableItem
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetDragDroppingEquipableItem_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindEquipableWeaponPosition
struct UWeaponEquipmentSlotWidget_Gamepad_C_FindEquipableWeaponPosition_Params
{
	struct FEquipPosition                              WeaponPosition;                                           // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateWeaponGunInfo
struct UWeaponEquipmentSlotWidget_Gamepad_C_UpdateWeaponGunInfo_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoName
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoName_Params
{
	struct FText                                       ItemName;                                                 // (Parm, OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoIcon
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoName_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoInfoLayer_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoInfoLayer_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponName_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_KeyName_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_KeyName_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateWeapon
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateWeapon_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetItem_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsAttachmentSlotMouseOver
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsAttachmentSlotMouseOver_Params
{
	bool                                               MouseOver;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDrop
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponSlotEquipId
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponSlotEquipId_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.MainPrepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_MainPrepass_1_Params
{
	class UWidget*                                     BoundWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InitializeWeaponEquipSlot
struct UWeaponEquipmentSlotWidget_Gamepad_C_InitializeWeaponEquipSlot_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.RefreshAttachmentSlot
struct UWeaponEquipmentSlotWidget_Gamepad_C_RefreshAttachmentSlot_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonUp
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragDetected
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonDown
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotVisibility
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponIcon
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponInfoText
struct UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Construct
struct UWeaponEquipmentSlotWidget_Gamepad_C_Construct_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnter
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeave
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseEnter
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseLeave
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateItem
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateDragDropObject
struct UWeaponEquipmentSlotWidget_Gamepad_C_UpdateDragDropObject_Params
{
	class UTslItemDragDropOperation_C**                DragDropObject;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetInventory
struct UWeaponEquipmentSlotWidget_Gamepad_C_SetInventory_Params
{
	class UInventoryWidget_C**                         InventoryWidget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.WidgetInputBPressed
struct UWeaponEquipmentSlotWidget_Gamepad_C_WidgetInputBPressed_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWidgetInputBReleased
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnWidgetInputBReleased_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Tick
struct UWeaponEquipmentSlotWidget_Gamepad_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveUp
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveUp_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveDown
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveDown_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SlotMoveLeft
struct UWeaponEquipmentSlotWidget_Gamepad_C_SlotMoveLeft_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveRight
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveRight_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.CustomEvent_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_CustomEvent_1_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemPressed
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemPressed_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemReleased
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemReleased_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnInputWidgetInputB
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnInputWidgetInputB_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused_Event_1
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused_Event_1_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad
struct UWeaponEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWeaponEquipmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnWeaponEquipmentFocused__DelegateSignature_Params
{
	EEquipSlotID                                       EquipSlotID;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params
{
	EWeaponAttachmentSlotID                            AttachmentSlotID;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotInterface>             SlotInterface;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>    SlotContainerInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeaveWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeaveWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnterWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnterWeaponSlot__DelegateSignature_Params
{
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleased__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_C_OnReleased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
