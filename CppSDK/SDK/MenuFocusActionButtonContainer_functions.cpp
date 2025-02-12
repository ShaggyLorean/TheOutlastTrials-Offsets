﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuFocusActionButtonContainer

#include "Basic.hpp"

#include "MenuFocusActionButtonContainer_classes.hpp"
#include "MenuFocusActionButtonContainer_parameters.hpp"


namespace SDK
{

// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.ExecuteUbergraph_MenuFocusActionButtonContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFocusActionButtonContainer_C::ExecuteUbergraph_MenuFocusActionButtonContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "ExecuteUbergraph_MenuFocusActionButtonContainer");

	Params::MenuFocusActionButtonContainer_C_ExecuteUbergraph_MenuFocusActionButtonContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuInputSourceChanged
// (BlueprintCallable, BlueprintEvent)

void UMenuFocusActionButtonContainer_C::OnMenuInputSourceChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "OnMenuInputSourceChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionCleared
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuFocusActionButtonContainer_C::OnMenuFocusActionCleared(class UWidget* Source)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "OnMenuFocusActionCleared");

	Params::MenuFocusActionButtonContainer_C_OnMenuFocusActionCleared Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.OnMenuFocusActionSet
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Source                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuFocusActionButtonContainer_C::OnMenuFocusActionSet(class UWidget* Source, const class FName& action, const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "OnMenuFocusActionSet");

	Params::MenuFocusActionButtonContainer_C_OnMenuFocusActionSet Parms{};

	Parms.Source = Source;
	Parms.action = action;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuFocusActionButtonContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenuFocusActionButtonContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MenuFocusActionButtonContainer.MenuFocusActionButtonContainer_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMenuFocusActionButtonContainer_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuFocusActionButtonContainer_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

