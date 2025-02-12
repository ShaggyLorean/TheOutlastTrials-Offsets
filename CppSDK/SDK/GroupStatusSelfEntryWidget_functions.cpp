﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroupStatusSelfEntryWidget

#include "Basic.hpp"

#include "GroupStatusSelfEntryWidget_classes.hpp"
#include "GroupStatusSelfEntryWidget_parameters.hpp"


namespace SDK
{

// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.ExecuteUbergraph_GroupStatusSelfEntryWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusSelfEntryWidget_C::ExecuteUbergraph_GroupStatusSelfEntryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "ExecuteUbergraph_GroupStatusSelfEntryWidget");

	Params::GroupStatusSelfEntryWidget_C_ExecuteUbergraph_GroupStatusSelfEntryWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh_Audio
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusSelfEntryWidget_C::Event_Refresh_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "Event_Refresh_Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupStatusSelfEntryWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "PreConstruct");

	Params::GroupStatusSelfEntryWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.Event_Refresh
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusSelfEntryWidget_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupCharacterClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGroupStatusSelfEntryWidget_C::SetupCharacterClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "SetupCharacterClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusSelfEntryWidget.GroupStatusSelfEntryWidget_C.SetupStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusSelfEntryWidget_C::SetupStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusSelfEntryWidget_C", "SetupStatus");

	UObject::ProcessEvent(Func, nullptr);
}

}

