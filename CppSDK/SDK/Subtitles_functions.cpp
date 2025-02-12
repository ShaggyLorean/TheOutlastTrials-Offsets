﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Subtitles

#include "Basic.hpp"

#include "Subtitles_classes.hpp"
#include "Subtitles_parameters.hpp"


namespace SDK
{

// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::ExecuteUbergraph_Subtitles(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "ExecuteUbergraph_Subtitles");

	Params::Subtitles_C_ExecuteUbergraph_Subtitles Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Subtitles.Subtitles_C.OnSubtitleConfigChanged
// (BlueprintCallable, BlueprintEvent)

void USubtitles_C::OnSubtitleConfigChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "OnSubtitleConfigChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Subtitles.Subtitles_C.OnCurrentSubtitleUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CurrentSubtitle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USubtitles_C::OnCurrentSubtitleUpdated(const class FString& CurrentSubtitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "OnCurrentSubtitleUpdated");

	Params::Subtitles_C_OnCurrentSubtitleUpdated Parms{};

	Parms.CurrentSubtitle = std::move(CurrentSubtitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Subtitles.Subtitles_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubtitles_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Subtitles.Subtitles_C.SetSubtitleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           subTitleText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USubtitles_C::SetSubtitleText(const class FString& subTitleText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "SetSubtitleText");

	Params::Subtitles_C_SetSubtitleText Parms{};

	Parms.subTitleText = std::move(subTitleText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Subtitles.Subtitles_C.UpdateTextSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUIFontSize                             Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::UpdateTextSize(EUIFontSize Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "UpdateTextSize");

	Params::Subtitles_C_UpdateTextSize Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Subtitles.Subtitles_C.GetMaxCharactersPerLine
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxCharactersPerLine                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubtitles_C::GetMaxCharactersPerLine(int32* MaxCharactersPerLine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "GetMaxCharactersPerLine");

	Params::Subtitles_C_GetMaxCharactersPerLine Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxCharactersPerLine != nullptr)
		*MaxCharactersPerLine = Parms.MaxCharactersPerLine;
}


// Function Subtitles.Subtitles_C.IsCJKLanguage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USubtitles_C::IsCJKLanguage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "IsCJKLanguage");

	Params::Subtitles_C_IsCJKLanguage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Subtitles.Subtitles_C.AddStringToMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           string                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void USubtitles_C::AddStringToMessage(class FText& Message, const class FString& string)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Subtitles_C", "AddStringToMessage");

	Params::Subtitles_C_AddStringToMessage Parms{};

	Parms.Message = std::move(Message);
	Parms.string = std::move(string);

	UObject::ProcessEvent(Func, &Parms);

	Message = std::move(Parms.Message);
}

}

