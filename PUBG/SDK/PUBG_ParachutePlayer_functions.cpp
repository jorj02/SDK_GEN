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

// Function ParachutePlayer.ParachutePlayer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AParachutePlayer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.UserConstructionScript");

	AParachutePlayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.�Є�|�x�_
// (BlueprintEvent)

void AParachutePlayer_C::�Є�|�x�_()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.�Є�|�x�_");

	AParachutePlayer_C_�Є�|�x�__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AParachutePlayer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.ReceiveEndPlay");

	AParachutePlayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AParachutePlayer_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.ReceiveHit");

	AParachutePlayer_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AParachutePlayer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.ReceiveTick");

	AParachutePlayer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AParachutePlayer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.ReceiveBeginPlay");

	AParachutePlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.ExecuteUbergraph_ParachutePlayer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParachutePlayer_C::ExecuteUbergraph_ParachutePlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.ExecuteUbergraph_ParachutePlayer");

	AParachutePlayer_C_ExecuteUbergraph_ParachutePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ParachutePlayer.ParachutePlayer_C.On Land__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AParachutePlayer_C::On_Land__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ParachutePlayer.ParachutePlayer_C.On Land__DelegateSignature");

	AParachutePlayer_C_On_Land__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
