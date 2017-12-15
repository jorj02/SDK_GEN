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

// Function MessageBorderWidget.MessageBorderWidget_C.RemoveMessage
struct UMessageBorderWidget_C_RemoveMessage_Params
{
	class UMessageWidget_C*                            DeleteMessage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBorderWidget.MessageBorderWidget_C.AddMessage
struct UMessageBorderWidget_C_AddMessage_Params
{
	class UMessageWidget_C*                            Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MessageBorderWidget.MessageBorderWidget_C.DisplayKilledMessage
struct UMessageBorderWidget_C_DisplayKilledMessage_Params
{
	struct FDeathMessage                               DeathMessage;                                             // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
