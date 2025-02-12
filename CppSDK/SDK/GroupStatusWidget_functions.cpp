﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroupStatusWidget

#include "Basic.hpp"

#include "GroupStatusWidget_classes.hpp"
#include "GroupStatusWidget_parameters.hpp"


namespace SDK
{

// Function GroupStatusWidget.GroupStatusWidget_C.ExecuteUbergraph_GroupStatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusWidget_C::ExecuteUbergraph_GroupStatusWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "ExecuteUbergraph_GroupStatusWidget");

	Params::GroupStatusWidget_C_ExecuteUbergraph_GroupStatusWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusWidget.GroupStatusWidget_C.OnMenuExited
// (BlueprintCallable, BlueprintEvent)

void UGroupStatusWidget_C::OnMenuExited()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "OnMenuExited");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGroupStatusWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Event_Hide
// (Event, Public, BlueprintEvent)

void UGroupStatusWidget_C::Event_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Event_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Event_Show
// (Event, Public, BlueprintEvent)

void UGroupStatusWidget_C::Event_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Event_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.OnPlayerPartyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBPlayerState*                   RBPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusWidget_C::OnPlayerPartyStateUpdated(class ARBPlayerState* RBPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "OnPlayerPartyStateUpdated");

	Params::GroupStatusWidget_C_OnPlayerPartyStateUpdated Parms{};

	Parms.RBPlayerState = RBPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Event_OnWatchedPlayerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        oldPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBPlayer*                        NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusWidget_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Event_OnWatchedPlayerChanged");

	Params::GroupStatusWidget_C_Event_OnWatchedPlayerChanged Parms{};

	Parms.oldPlayer = oldPlayer;
	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGroupStatusWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.Event_Refresh
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusWidget_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusWidget.GroupStatusWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupStatusWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "PreConstruct");

	Params::GroupStatusWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusWidget.GroupStatusWidget_C.ShouldShow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGroupStatusWidget_C::ShouldShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusWidget_C", "ShouldShow");

	Params::GroupStatusWidget_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

