﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XPProgressBar

#include "Basic.hpp"

#include "XPProgressBar_classes.hpp"
#include "XPProgressBar_parameters.hpp"


namespace SDK
{

// Function XPProgressBar.XPProgressBar_C.ExecuteUbergraph_XPProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXPProgressBar_C::ExecuteUbergraph_XPProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "ExecuteUbergraph_XPProgressBar");

	Params::XPProgressBar_C_ExecuteUbergraph_XPProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XPProgressBar.XPProgressBar_C.RefreshWithAnimation
// (BlueprintCallable, BlueprintEvent)

void UXPProgressBar_C::RefreshWithAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "RefreshWithAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XPProgressBar.XPProgressBar_C.Finished_9C6F7CD84E0F470B1412B4BAA721AA7E
// (BlueprintCallable, BlueprintEvent)

void UXPProgressBar_C::Finished_9C6F7CD84E0F470B1412B4BAA721AA7E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "Finished_9C6F7CD84E0F470B1412B4BAA721AA7E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XPProgressBar.XPProgressBar_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerLevel_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StartXp_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentXp_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXPProgressBar_C::Init(int32 PlayerLevel_0, int32 StartXp_0, int32 CurrentXp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "Init");

	Params::XPProgressBar_C_Init Parms{};

	Parms.PlayerLevel_0 = PlayerLevel_0;
	Parms.StartXp_0 = StartXp_0;
	Parms.CurrentXp_0 = CurrentXp_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XPProgressBar.XPProgressBar_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXPProgressBar_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XPProgressBar.XPProgressBar_C.InitProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProgressBar*                     ProgressBar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Xp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXPProgressBar_C::InitProgressBar(class UProgressBar* ProgressBar, int32 Xp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "InitProgressBar");

	Params::XPProgressBar_C_InitProgressBar Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.Xp = Xp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XPProgressBar.XPProgressBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PlayerLevel_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StartXp_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentXp_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXPProgressBar_C::Update(int32 PlayerLevel_0, int32 StartXp_0, int32 CurrentXp_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XPProgressBar_C", "Update");

	Params::XPProgressBar_C_Update Parms{};

	Parms.PlayerLevel_0 = PlayerLevel_0;
	Parms.StartXp_0 = StartXp_0;
	Parms.CurrentXp_0 = CurrentXp_0;

	UObject::ProcessEvent(Func, &Parms);
}

}
