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

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x33670 - 0x33668)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x33668(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x33669(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0018 (0x0458 - 0x0440)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0440(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
