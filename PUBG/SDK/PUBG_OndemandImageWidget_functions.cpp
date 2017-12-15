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

// Function OndemandImageWidget.OnDemandImageWidget_C.UnloadAndHideImage
// (Private, BlueprintCallable, BlueprintEvent)

void UOnDemandImageWidget_C::UnloadAndHideImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.UnloadAndHideImage");

	UOnDemandImageWidget_C_UnloadAndHideImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.LoadAndShowImage
// (Private, BlueprintCallable, BlueprintEvent)

void UOnDemandImageWidget_C::LoadAndShowImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.LoadAndShowImage");

	UOnDemandImageWidget_C_LoadAndShowImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.UpdateVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UOnDemandImageWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.UpdateVisibility");

	UOnDemandImageWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.SetImagePath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture>      TextureAsset                   (Parm)

void UOnDemandImageWidget_C::SetImagePath(TAssetPtr<class UTexture> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.SetImagePath");

	UOnDemandImageWidget_C_SetImagePath_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnDemandImageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.Construct");

	UOnDemandImageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UOnDemandImageWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.Tick");

	UOnDemandImageWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnDemandImageWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.Destruct");

	UOnDemandImageWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OndemandImageWidget.OnDemandImageWidget_C.ExecuteUbergraph_OnDemandImageWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOnDemandImageWidget_C::ExecuteUbergraph_OnDemandImageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OndemandImageWidget.OnDemandImageWidget_C.ExecuteUbergraph_OnDemandImageWidget");

	UOnDemandImageWidget_C_ExecuteUbergraph_OnDemandImageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
