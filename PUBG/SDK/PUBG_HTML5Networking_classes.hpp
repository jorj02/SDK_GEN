#pragma once

// PlayerUnknown's Battlegrounds (2.6.23) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HTML5Networking.WebSocketConnection
// 0x0010 (0x33658 - 0x33648)
class UWebSocketConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x33648(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}

};


// Class HTML5Networking.WebSocketNetDriver
// 0x0010 (0x0430 - 0x0420)
class UWebSocketNetDriver : public UNetDriver
{
public:
	int                                                WebSocketPort;                                            // 0x0420(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0424(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
