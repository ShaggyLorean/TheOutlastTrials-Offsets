﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialMenu_PartyWidget

#include "Basic.hpp"

#include "SocialMenu_PartyWidget_classes.hpp"
#include "SocialMenu_PartyWidget_parameters.hpp"


namespace SDK
{

// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.ExecuteUbergraph_SocialMenu_PartyWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::ExecuteUbergraph_SocialMenu_PartyWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "ExecuteUbergraph_SocialMenu_PartyWidget");

	Params::SocialMenu_PartyWidget_C_ExecuteUbergraph_SocialMenu_PartyWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_UpdateEntry
// (Event, Public, BlueprintEvent)
// Parameters:
// class URBSocialMenuEntry*               Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   column                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::Event_UpdateEntry(class URBSocialMenuEntry* Entry, int32 column, int32 row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_UpdateEntry");

	Params::SocialMenu_PartyWidget_C_Event_UpdateEntry Parms{};

	Parms.Entry = Entry;
	Parms.column = column;
	Parms.row = row;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.LeavePartyShortcutPressed
// (BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::LeavePartyShortcutPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "LeavePartyShortcutPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_InputSourceChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsGamepad                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialMenu_PartyWidget_C::Event_InputSourceChanged(bool bIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_InputSourceChanged");

	Params::SocialMenu_PartyWidget_C_Event_InputSourceChanged Parms{};

	Parms.bIsGamepad = bIsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnLeaveGroupConfirmed
// (BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::OnLeaveGroupConfirmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "OnLeaveGroupConfirmed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_EntriesUpdated
// (Event, Public, BlueprintEvent)

void USocialMenu_PartyWidget_C::Event_EntriesUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_EntriesUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)

void USocialMenu_PartyWidget_C::BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "BndEvt__SocialMenu_PartyWidget_LeavePartyBtn_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature");

	Params::SocialMenu_PartyWidget_C_BndEvt__IgnoreInviteRequestsOption_K2Node_ComponentBoundEvent_2_OnValueUpdated__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature");

	Params::SocialMenu_PartyWidget_C_BndEvt__PartyMembersCanInviteOption_K2Node_ComponentBoundEvent_1_OnValueUpdated__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature");

	Params::SocialMenu_PartyWidget_C_BndEvt__PrivacyOption_K2Node_ComponentBoundEvent_0_OnValueUpdated__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RefreshPartyOptions
// (Event, Public, BlueprintEvent)

void USocialMenu_PartyWidget_C::Event_RefreshPartyOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_RefreshPartyOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_OnDataPending
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsDataPending                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialMenu_PartyWidget_C::Event_OnDataPending(bool bIsDataPending)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_OnDataPending");

	Params::SocialMenu_PartyWidget_C_Event_OnDataPending Parms{};

	Parms.bIsDataPending = bIsDataPending;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialMenu_PartyWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "PreConstruct");

	Params::SocialMenu_PartyWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_Clear
// (Event, Public, BlueprintEvent)

void USocialMenu_PartyWidget_C::Event_Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Event_RemoveEntry
// (Event, Public, BlueprintEvent)
// Parameters:
// class URBSocialMenuEntry*               Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::Event_RemoveEntry(class URBSocialMenuEntry* Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Event_RemoveEntry");

	Params::SocialMenu_PartyWidget_C_Event_RemoveEntry Parms{};

	Parms.Entry = Entry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialMenu_PartyWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBSocialMenuEntry*               Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   column                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::UpdateEntry(class URBSocialMenuEntry* Entry, int32 column, int32 row)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "UpdateEntry");

	Params::SocialMenu_PartyWidget_C_UpdateEntry Parms{};

	Parms.Entry = Entry;
	Parms.column = column;
	Parms.row = row;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.Setup Editor Preview
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::Setup_Editor_Preview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "Setup Editor Preview");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupPartySettings
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::SetupPartySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "SetupPartySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USocialMenu_PartyWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "OnFocusReceived");

	Params::SocialMenu_PartyWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SetupInitialFocus
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::SetupInitialFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "SetupInitialFocus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.SlotHasFocus
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   column                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   row                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bHasFocus                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USocialMenu_PartyWidget_C::SlotHasFocus(int32 column, int32 row, bool* bHasFocus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "SlotHasFocus");

	Params::SocialMenu_PartyWidget_C_SlotHasFocus Parms{};

	Parms.column = column;
	Parms.row = row;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasFocus != nullptr)
		*bHasFocus = Parms.bHasFocus;
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.UpdateLeavePartyBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMenu_PartyWidget_C::UpdateLeavePartyBtnVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "UpdateLeavePartyBtnVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnPrivacyValueUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::OnPrivacyValueUpdated(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "OnPrivacyValueUpdated");

	Params::SocialMenu_PartyWidget_C_OnPrivacyValueUpdated Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnPartyMembersCanInviteValueUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::OnPartyMembersCanInviteValueUpdated(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "OnPartyMembersCanInviteValueUpdated");

	Params::SocialMenu_PartyWidget_C_OnPartyMembersCanInviteValueUpdated Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialMenu_PartyWidget.SocialMenu_PartyWidget_C.OnPartyInviteFilterUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialMenu_PartyWidget_C::OnPartyInviteFilterUpdated(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialMenu_PartyWidget_C", "OnPartyInviteFilterUpdated");

	Params::SocialMenu_PartyWidget_C_OnPartyInviteFilterUpdated Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

