﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageWidget

#include "Basic.hpp"

#include "MessageWidget_classes.hpp"
#include "MessageWidget_parameters.hpp"


namespace SDK
{

// Function MessageWidget.MessageWidget_C.ExecuteUbergraph_MessageWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageWidget_C::ExecuteUbergraph_MessageWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "ExecuteUbergraph_MessageWidget");

	Params::MessageWidget_C_ExecuteUbergraph_MessageWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageWidget.MessageWidget_C.OnHideTalkWheel
// (BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::OnHideTalkWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "OnHideTalkWheel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.OnShowTalkWheel
// (BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::OnShowTalkWheel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "OnShowTalkWheel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.Event_Hide
// (Event, Public, BlueprintEvent)

void UMessageWidget_C::Event_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "Event_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.Event_Show
// (Event, Public, BlueprintEvent)

void UMessageWidget_C::Event_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "Event_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMessageWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "PreConstruct");

	Params::MessageWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageWidget.MessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMessageWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.SendTemporaryText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             messageText                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UMessageWidget_C::SendTemporaryText(const class FText& messageText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "SendTemporaryText");

	Params::MessageWidget_C_SendTemporaryText Parms{};

	Parms.messageText = std::move(messageText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageWidget.MessageWidget_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             messageText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     DefaultColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMessageWidget_C::SetMessage(const class FText& messageText, const struct FLinearColor& DefaultColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "SetMessage");

	Params::MessageWidget_C_SetMessage Parms{};

	Parms.messageText = std::move(messageText);
	Parms.DefaultColor = std::move(DefaultColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MessageWidget.MessageWidget_C.OninputChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::OninputChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "OninputChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.HandleItemsIconsDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::HandleItemsIconsDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "HandleItemsIconsDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.HideIcons
// (Public, BlueprintCallable, BlueprintEvent)

void UMessageWidget_C::HideIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "HideIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MessageWidget.MessageWidget_C.ShouldShow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMessageWidget_C::ShouldShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MessageWidget_C", "ShouldShow");

	Params::MessageWidget_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
