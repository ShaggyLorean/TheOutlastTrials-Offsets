﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LinearInventory

#include "Basic.hpp"

#include "LinearInventory_classes.hpp"
#include "LinearInventory_parameters.hpp"


namespace SDK
{

// Function LinearInventory.LinearInventory_C.ExecuteUbergraph_LinearInventory
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::ExecuteUbergraph_LinearInventory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "ExecuteUbergraph_LinearInventory");

	Params::LinearInventory_C_ExecuteUbergraph_LinearInventory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Event_RefreshASRestriction
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    isRestricted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::Event_RefreshASRestriction(bool isRestricted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_RefreshASRestriction");

	Params::LinearInventory_C_Event_RefreshASRestriction Parms{};

	Parms.isRestricted = isRestricted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Event_OnHudModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EHudMode                                newHudMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::Event_OnHudModeChanged(EHudMode newHudMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_OnHudModeChanged");

	Params::LinearInventory_C_Event_OnHudModeChanged Parms{};

	Parms.newHudMode = newHudMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.OnHide
// (BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_Show
// (Event, Public, BlueprintEvent)

void ULinearInventory_C::Event_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_Hide
// (Event, Public, BlueprintEvent)

void ULinearInventory_C::Event_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_OnIsInCooldownChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBActiveSkill*                   ActiveSkill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsInCooldown                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::Event_OnIsInCooldownChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_OnIsInCooldownChanged");

	Params::LinearInventory_C_Event_OnIsInCooldownChanged Parms{};

	Parms.ActiveSkill = ActiveSkill;
	Parms.bIsInCooldown = bIsInCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.StartFadeOutTimer
// (BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::StartFadeOutTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "StartFadeOutTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_RefreshDarknessIndicator
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    newDarknessState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::Event_RefreshDarknessIndicator(bool newDarknessState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_RefreshDarknessIndicator");

	Params::LinearInventory_C_Event_RefreshDarknessIndicator Parms{};

	Parms.newDarknessState = newDarknessState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.OnInventorySizeChanged
// (BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::OnInventorySizeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "OnInventorySizeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.OnSpeakerVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::OnSpeakerVisibilityChanged(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "OnSpeakerVisibilityChanged");

	Params::LinearInventory_C_OnSpeakerVisibilityChanged Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Event_OnWatchedPlayerChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        oldPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBPlayer*                        NewPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::Event_OnWatchedPlayerChanged(class ARBPlayer* oldPlayer, class ARBPlayer* NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_OnWatchedPlayerChanged");

	Params::LinearInventory_C_Event_OnWatchedPlayerChanged Parms{};

	Parms.oldPlayer = oldPlayer;
	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "PreConstruct");

	Params::LinearInventory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Tick");

	Params::LinearInventory_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Event_RefreshPrompts
// (Event, Public, BlueprintEvent)

void ULinearInventory_C::Event_RefreshPrompts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_RefreshPrompts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.OnMenuExit
// (BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::OnMenuExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "OnMenuExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_RefreshActiveSkill
// (BlueprintEvent)

void ULinearInventory_C::Event_RefreshActiveSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_RefreshActiveSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.Event_Refresh
// (Event, Public, BlueprintEvent)
// Parameters:
// EInventoryUpdateEventType               EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULinearInventory_C::Event_Refresh(EInventoryUpdateEventType EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Event_Refresh");

	Params::LinearInventory_C_Event_Refresh Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULinearInventory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.UpdateText
// (BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.UpdateEquippedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::UpdateEquippedItem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateEquippedItem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.RefreshInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::RefreshInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "RefreshInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.UpdateObjectiveItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::UpdateObjectiveItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateObjectiveItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.UpdateRigSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::UpdateRigSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateRigSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.UpdateASCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::UpdateASCooldown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateASCooldown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.RefreshPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::RefreshPrompts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "RefreshPrompts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.GetActiveSkillInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ActiveSkillFound                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUILinearInventoryItem           ActiveSkillInfo                                        (Parm, OutParm)

void ULinearInventory_C::GetActiveSkillInfo(bool* ActiveSkillFound, struct FUILinearInventoryItem* ActiveSkillInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "GetActiveSkillInfo");

	Params::LinearInventory_C_GetActiveSkillInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveSkillFound != nullptr)
		*ActiveSkillFound = Parms.ActiveSkillFound;

	if (ActiveSkillInfo != nullptr)
		*ActiveSkillInfo = std::move(Parms.ActiveSkillInfo);
}


// Function LinearInventory.LinearInventory_C.GetActiveSkillIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ActiveSkillIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ActiveSkillFound                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::GetActiveSkillIndex(int32* ActiveSkillIndex, bool* ActiveSkillFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "GetActiveSkillIndex");

	Params::LinearInventory_C_GetActiveSkillIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveSkillIndex != nullptr)
		*ActiveSkillIndex = Parms.ActiveSkillIndex;

	if (ActiveSkillFound != nullptr)
		*ActiveSkillFound = Parms.ActiveSkillFound;
}


// Function LinearInventory.LinearInventory_C.UpdateDarknessDetection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InDarkness                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::UpdateDarknessDetection(bool InDarkness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "UpdateDarknessDetection");

	Params::LinearInventory_C_UpdateDarknessDetection Parms{};

	Parms.InDarkness = InDarkness;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.OnASCooldownStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBActiveSkill*                   ActiveSkill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsInCooldown                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULinearInventory_C::OnASCooldownStateChanged(class ARBActiveSkill* ActiveSkill, bool bIsInCooldown)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "OnASCooldownStateChanged");

	Params::LinearInventory_C_OnASCooldownStateChanged Parms{};

	Parms.ActiveSkill = ActiveSkill;
	Parms.bIsInCooldown = bIsInCooldown;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_0
// (Public, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::SequenceEvent__ENTRYPOINTLinearInventory_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "SequenceEvent__ENTRYPOINTLinearInventory_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.SequenceEvent__ENTRYPOINTLinearInventory_1
// (Public, BlueprintCallable, BlueprintEvent)

void ULinearInventory_C::SequenceEvent__ENTRYPOINTLinearInventory_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "SequenceEvent__ENTRYPOINTLinearInventory_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LinearInventory.LinearInventory_C.ShouldShow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULinearInventory_C::ShouldShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LinearInventory_C", "ShouldShow");

	Params::LinearInventory_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

