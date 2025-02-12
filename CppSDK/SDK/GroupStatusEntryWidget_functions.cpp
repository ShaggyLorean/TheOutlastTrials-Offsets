﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GroupStatusEntryWidget

#include "Basic.hpp"

#include "GroupStatusEntryWidget_classes.hpp"
#include "GroupStatusEntryWidget_parameters.hpp"


namespace SDK
{

// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ExecuteUbergraph_GroupStatusEntryWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusEntryWidget_C::ExecuteUbergraph_GroupStatusEntryWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "ExecuteUbergraph_GroupStatusEntryWidget");

	Params::GroupStatusEntryWidget_C_ExecuteUbergraph_GroupStatusEntryWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_MaxHealth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   newMaxHealth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusEntryWidget_C::Event_Refresh_MaxHealth(float newMaxHealth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_Refresh_MaxHealth");

	Params::GroupStatusEntryWidget_C_Event_Refresh_MaxHealth Parms{};

	Parms.newMaxHealth = newMaxHealth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_ObjectiveItemsCount
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::Event_Refresh_ObjectiveItemsCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_Refresh_ObjectiveItemsCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Health
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   newHealth                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    skipAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupStatusEntryWidget_C::Event_Refresh_Health(float newHealth, bool skipAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_Refresh_Health");

	Params::GroupStatusEntryWidget_C_Event_Refresh_Health Parms{};

	Parms.newHealth = newHealth;
	Parms.skipAnim = skipAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh_Audio
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::Event_Refresh_Audio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_Refresh_Audio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGroupStatusEntryWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "PreConstruct");

	Params::GroupStatusEntryWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_PlayerStatusUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::Event_PlayerStatusUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_PlayerStatusUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGroupStatusEntryWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_MaxDisplayNameLengthUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::Event_MaxDisplayNameLengthUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_MaxDisplayNameLengthUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.Event_Refresh
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupCharacterClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::SetupCharacterClass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "SetupCharacterClass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::SetupStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "SetupStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.SetupMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::SetupMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "SetupMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateStatusVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        NewVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGroupStatusEntryWidget_C::UpdateStatusVisibility(ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "UpdateStatusVisibility");

	Params::GroupStatusEntryWidget_C_UpdateStatusVisibility Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.UpdateHealthVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::UpdateHealthVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "UpdateHealthVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GroupStatusEntryWidget.GroupStatusEntryWidget_C.ForceHealthRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void UGroupStatusEntryWidget_C::ForceHealthRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GroupStatusEntryWidget_C", "ForceHealthRefresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

