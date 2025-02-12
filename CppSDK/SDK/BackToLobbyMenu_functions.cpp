﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BackToLobbyMenu

#include "Basic.hpp"

#include "BackToLobbyMenu_classes.hpp"
#include "BackToLobbyMenu_parameters.hpp"


namespace SDK
{

// Function BackToLobbyMenu.BackToLobbyMenu_C.ExecuteUbergraph_BackToLobbyMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBackToLobbyMenu_C::ExecuteUbergraph_BackToLobbyMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "ExecuteUbergraph_BackToLobbyMenu");

	Params::BackToLobbyMenu_C_ExecuteUbergraph_BackToLobbyMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.Event_InputSourceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBackToLobbyMenu_C::Event_InputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "Event_InputSourceChanged");

	Params::BackToLobbyMenu_C_Event_InputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__BackToLobbyMenu_GamepadFocusHandler_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBackToLobbyMenu_C::BndEvt__BackToLobbyMenu_GamepadFocusHandler_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "BndEvt__BackToLobbyMenu_GamepadFocusHandler_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBackToLobbyMenu_C::BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::BackToLobbyMenu_C_BndEvt__BackToLobbyMenu_BackBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveAlone
// (BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::LeaveAlone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "LeaveAlone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.LeaveWithParty
// (BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::LeaveWithParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "LeaveWithParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBackToLobbyMenu_C::BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::BackToLobbyMenu_C_BndEvt__RBMenuButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPop
// (Event, Public, BlueprintEvent)

void UBackToLobbyMenu_C::Event_OnPop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "Event_OnPop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.Event_OnPush
// (Event, Public, BlueprintEvent)

void UBackToLobbyMenu_C::Event_OnPush()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "Event_OnPush");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.Event_Refresh
// (Event, Public, BlueprintEvent)

void UBackToLobbyMenu_C::Event_Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "Event_Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBackToLobbyMenu_C::BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	Params::BackToLobbyMenu_C_BndEvt__ReturnAloneBtn_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.AreButtonsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBackToLobbyMenu_C::AreButtonsEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "AreButtonsEnabled");

	Params::BackToLobbyMenu_C_AreButtonsEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.IsLeaveWithPartyEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBackToLobbyMenu_C::IsLeaveWithPartyEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "IsLeaveWithPartyEnabled");

	Params::BackToLobbyMenu_C_IsLeaveWithPartyEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.GetWarningText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (Parm, OutParm)

void UBackToLobbyMenu_C::GetWarningText(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "GetWarningText");

	Params::BackToLobbyMenu_C_GetWarningText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateControlVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::UpdateControlVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "UpdateControlVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateShowWithPartyVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::UpdateShowWithPartyVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "UpdateShowWithPartyVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateLoadingWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::UpdateLoadingWidgetVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "UpdateLoadingWidgetVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BackToLobbyMenu.BackToLobbyMenu_C.UpdateWarningText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBackToLobbyMenu_C::UpdateWarningText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BackToLobbyMenu_C", "UpdateWarningText");

	UObject::ProcessEvent(Func, nullptr);
}

}

