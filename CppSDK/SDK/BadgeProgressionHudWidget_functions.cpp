﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BadgeProgressionHudWidget

#include "Basic.hpp"

#include "BadgeProgressionHudWidget_classes.hpp"
#include "BadgeProgressionHudWidget_parameters.hpp"


namespace SDK
{

// Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.ExecuteUbergraph_BadgeProgressionHudWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBadgeProgressionHudWidget_C::ExecuteUbergraph_BadgeProgressionHudWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgeProgressionHudWidget_C", "ExecuteUbergraph_BadgeProgressionHudWidget");

	Params::BadgeProgressionHudWidget_C_ExecuteUbergraph_BadgeProgressionHudWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UBadgeProgressionHudWidget_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgeProgressionHudWidget_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRBBadgeHudProgressDisplayDetailsdetails                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBadgeProgressionHudWidget_C::Show(const struct FRBBadgeHudProgressDisplayDetails& details)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgeProgressionHudWidget_C", "Show");

	Params::BadgeProgressionHudWidget_C_Show Parms{};

	Parms.details = std::move(details);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BadgeProgressionHudWidget.BadgeProgressionHudWidget_C.OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBadgeProgressionHudWidget_C::OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BadgeProgressionHudWidget_C", "OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839");

	Params::BadgeProgressionHudWidget_C_OnLoaded_297F3B8945FF1E7BC838EA8B27A8A839 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}
