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

// Function WeaponStudio.WeaponStudio_C.OnLoad_Test
struct AWeaponStudio_C_OnLoad_Test_Params
{
};

// Function WeaponStudio.WeaponStudio_C.OnAttachmentLoad
struct AWeaponStudio_C_OnAttachmentLoad_Params
{
};

// Function WeaponStudio.WeaponStudio_C.UpdateAttachment
struct AWeaponStudio_C_UpdateAttachment_Params
{
};

// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
struct AWeaponStudio_C_UserConstructionScript_Params
{
};

// Function WeaponStudio.WeaponStudio_C.SetItem
struct AWeaponStudio_C_SetItem_Params
{
	class UItem**                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeaponStudio.WeaponStudio_C.ReceiveBeginPlay
struct AWeaponStudio_C_ReceiveBeginPlay_Params
{
};

// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
struct AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
