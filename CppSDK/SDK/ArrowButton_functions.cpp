﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArrowButton

#include "Basic.hpp"

#include "ArrowButton_classes.hpp"
#include "ArrowButton_parameters.hpp"


namespace SDK
{

// Function ArrowButton.ArrowButton_C.ExecuteUbergraph_ArrowButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArrowButton_C::ExecuteUbergraph_ArrowButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "ExecuteUbergraph_ArrowButton");

	Params::ArrowButton_C_ExecuteUbergraph_ArrowButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArrowButton.ArrowButton_C.BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UArrowButton_C::BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArrowButton.ArrowButton_C.BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UArrowButton_C::BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArrowButton.ArrowButton_C.BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UArrowButton_C::BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "BndEvt__ArrowButton_ArrowButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArrowButton.ArrowButton_C.Pulse Start Ended
// (BlueprintCallable, BlueprintEvent)

void UArrowButton_C::Pulse_Start_Ended()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "Pulse Start Ended");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArrowButton.ArrowButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArrowButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "PreConstruct");

	Params::ArrowButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArrowButton.ArrowButton_C.SetPressedPadding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                          NewPressedPadding                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArrowButton_C::SetPressedPadding(const struct FMargin& NewPressedPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "SetPressedPadding");

	Params::ArrowButton_C_SetPressedPadding Parms{};

	Parms.NewPressedPadding = std::move(NewPressedPadding);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArrowButton.ArrowButton_C.Highlight
// (Public, BlueprintCallable, BlueprintEvent)

void UArrowButton_C::Highlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "Highlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArrowButton.ArrowButton_C.Downplay
// (Public, BlueprintCallable, BlueprintEvent)

void UArrowButton_C::Downplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArrowButton_C", "Downplay");

	UObject::ProcessEvent(Func, nullptr);
}

}
