﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Player_Face_Scripted_Notify

#include "Basic.hpp"

#include "Player_Face_Scripted_Notify_classes.hpp"
#include "Player_Face_Scripted_Notify_parameters.hpp"


namespace SDK
{

// Function Player_Face_Scripted_Notify.Player_Face_Scripted_Notify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UPlayer_Face_Scripted_Notify_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Face_Scripted_Notify_C", "GetNotifyName");

	Params::Player_Face_Scripted_Notify_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Player_Face_Scripted_Notify.Player_Face_Scripted_Notify_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           meshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayer_Face_Scripted_Notify_C::Received_Notify(class USkeletalMeshComponent* meshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Face_Scripted_Notify_C", "Received_Notify");

	Params::Player_Face_Scripted_Notify_C_Received_Notify Parms{};

	Parms.meshComp = meshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Player_Face_Scripted_Notify.Player_Face_Scripted_Notify_C.FacialAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           Mesh_Comp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPlayer_Face_Scripted_Notify_C::FacialAnim(class USkeletalMeshComponent* Mesh_Comp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Player_Face_Scripted_Notify_C", "FacialAnim");

	Params::Player_Face_Scripted_Notify_C_FacialAnim Parms{};

	Parms.Mesh_Comp = Mesh_Comp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

