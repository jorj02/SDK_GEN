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

// WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C
// 0x0000 (0x06E8 - 0x06E8)
class UMapGridWidget_C : public UMapGridWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C");
		return ptr;
	}


	struct FSlateBrush Get_Replayzone_Brush_2();
	struct FSlateBrush Get_Replayzone_Brush_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
