﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDObjectives

#include "Basic.hpp"

#include "HUDObjectives_classes.hpp"
#include "HUDObjectives_parameters.hpp"


namespace SDK
{

// Function HUDObjectives.HUDObjectives_C.ExecuteUbergraph_HUDObjectives
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::ExecuteUbergraph_HUDObjectives(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "ExecuteUbergraph_HUDObjectives");

	Params::HUDObjectives_C_ExecuteUbergraph_HUDObjectives Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.OnRequestDisplayObjectiveHUD
// (BlueprintCallable, BlueprintEvent)

void UHUDObjectives_C::OnRequestDisplayObjectiveHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnRequestDisplayObjectiveHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDObjectives.HUDObjectives_C.OnSingleCompletedObjectiveReverted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::OnSingleCompletedObjectiveReverted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnSingleCompletedObjectiveReverted");

	Params::HUDObjectives_C_OnSingleCompletedObjectiveReverted Parms{};

	Parms.coordinator = coordinator;
	Parms.objective = objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.OnSingleObjectiveCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           objective                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::OnSingleObjectiveCompleted(class ARBBaseObjectiveCoordinator* coordinator, class AActor* Player, class AActor* objective)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnSingleObjectiveCompleted");

	Params::HUDObjectives_C_OnSingleObjectiveCompleted Parms{};

	Parms.coordinator = coordinator;
	Parms.Player = Player;
	Parms.objective = objective;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.OnProgressChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   progressRatio                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isPositiveProgress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             objectiveText                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    bForceShow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDObjectives_C::OnProgressChanged(class ARBBaseObjectiveCoordinator* coordinator, float progressRatio, bool isPositiveProgress, const class FText& objectiveText, bool bForceShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnProgressChanged");

	Params::HUDObjectives_C_OnProgressChanged Parms{};

	Parms.coordinator = coordinator;
	Parms.progressRatio = progressRatio;
	Parms.isPositiveProgress = isPositiveProgress;
	Parms.objectiveText = std::move(objectiveText);
	Parms.bForceShow = bForceShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.OnCompletionInProgressChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    isProgressionInProgress                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    isCompletedByLocalPlayer                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDObjectives_C::OnCompletionInProgressChanged(class ARBBaseObjectiveCoordinator* coordinator, bool isProgressionInProgress, bool isCompletedByLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnCompletionInProgressChanged");

	Params::HUDObjectives_C_OnCompletionInProgressChanged Parms{};

	Parms.coordinator = coordinator;
	Parms.isProgressionInProgress = isProgressionInProgress;
	Parms.isCompletedByLocalPlayer = isCompletedByLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.StateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EObjectiveCoordinatorState              State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::StateChanged(class ARBBaseObjectiveCoordinator* coordinator, EObjectiveCoordinatorState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "StateChanged");

	Params::HUDObjectives_C_StateChanged Parms{};

	Parms.coordinator = coordinator;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDObjectives_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDObjectives.HUDObjectives_C.OnObjectiveStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::OnObjectiveStarted(class ARBBaseObjectiveCoordinator* coordinator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnObjectiveStarted");

	Params::HUDObjectives_C_OnObjectiveStarted Parms{};

	Parms.coordinator = coordinator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.CanDisplayObjective
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    canDisplay                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDObjectives_C::CanDisplayObjective(class ARBBaseObjectiveCoordinator* coordinator, bool* canDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "CanDisplayObjective");

	Params::HUDObjectives_C_CanDisplayObjective Parms{};

	Parms.coordinator = coordinator;

	UObject::ProcessEvent(Func, &Parms);

	if (canDisplay != nullptr)
		*canDisplay = Parms.canDisplay;
}


// Function HUDObjectives.HUDObjectives_C.OnObjectiveEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UHUDObjectives_C::OnObjectiveEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "OnObjectiveEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDObjectives.HUDObjectives_C.RefreshObjectivesTexts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUDObjectives_C::RefreshObjectivesTexts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "RefreshObjectivesTexts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDObjectives.HUDObjectives_C.ForceShowObjectives
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   duration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBBaseObjectiveCoordinator*      coordinator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDObjectives_C::ForceShowObjectives(float duration, class ARBBaseObjectiveCoordinator* coordinator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "ForceShowObjectives");

	Params::HUDObjectives_C_ForceShowObjectives Parms{};

	Parms.duration = duration;
	Parms.coordinator = coordinator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDObjectives.HUDObjectives_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHUDObjectives_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDObjectives_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}
