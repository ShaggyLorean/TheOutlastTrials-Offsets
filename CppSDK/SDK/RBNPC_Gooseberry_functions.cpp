﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_Gooseberry

#include "Basic.hpp"

#include "RBNPC_Gooseberry_classes.hpp"
#include "RBNPC_Gooseberry_parameters.hpp"


namespace SDK
{

// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ExecuteUbergraph_RBNPC_Gooseberry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_Gooseberry_C::ExecuteUbergraph_RBNPC_Gooseberry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "ExecuteUbergraph_RBNPC_Gooseberry");

	Params::RBNPC_Gooseberry_C_ExecuteUbergraph_RBNPC_Gooseberry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARBNPC_Gooseberry_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UpdateTimeToPlayFuttermanIdleBreaker
// (BlueprintCallable, BlueprintEvent)

void ARBNPC_Gooseberry_C::UpdateTimeToPlayFuttermanIdleBreaker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "UpdateTimeToPlayFuttermanIdleBreaker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_Gooseberry_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "ReceiveTick");

	Params::RBNPC_Gooseberry_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBNPC_Gooseberry_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.TryPlayFacialAnim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           lineId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARBNPC_Gooseberry_C::TryPlayFacialAnim(const class FString& lineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "TryPlayFacialAnim");

	Params::RBNPC_Gooseberry_C_TryPlayFacialAnim Parms{};

	Parms.lineId = std::move(lineId);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFacePoseAsset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseAsset*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPoseAsset* ARBNPC_Gooseberry_C::GetFacePoseAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "GetFacePoseAsset");

	Params::RBNPC_Gooseberry_C_GetFacePoseAsset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceAnimBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UenemyFace_AnimBlueprint_C*       EnemyFaceAnimBP                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_Gooseberry_C::GetFaceAnimBP(class UenemyFace_AnimBlueprint_C** EnemyFaceAnimBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "GetFaceAnimBP");

	Params::RBNPC_Gooseberry_C_GetFaceAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyFaceAnimBP != nullptr)
		*EnemyFaceAnimBP = Parms.EnemyFaceAnimBP;
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.SetFuttermanDrillValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DrillValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    DrillManual                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARBNPC_Gooseberry_C::SetFuttermanDrillValue(bool DrillValue, bool DrillManual, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "SetFuttermanDrillValue");

	Params::RBNPC_Gooseberry_C_SetFuttermanDrillValue Parms{};

	Parms.DrillValue = DrillValue;
	Parms.DrillManual = DrillManual;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Gooseberry_C::GetFaceFXSkeletalMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "GetFaceFXSkeletalMeshComponent");

	Params::RBNPC_Gooseberry_C_GetFaceFXSkeletalMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Gooseberry.RBNPC_Gooseberry_C.GetFaceFXSkeletalMeshComponentWithLineId
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           lineId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Gooseberry_C::GetFaceFXSkeletalMeshComponentWithLineId(const class FString& lineId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Gooseberry_C", "GetFaceFXSkeletalMeshComponentWithLineId");

	Params::RBNPC_Gooseberry_C_GetFaceFXSkeletalMeshComponentWithLineId Parms{};

	Parms.lineId = std::move(lineId);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
