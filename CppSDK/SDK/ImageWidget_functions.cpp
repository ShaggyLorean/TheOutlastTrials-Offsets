﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWidget

#include "Basic.hpp"

#include "ImageWidget_classes.hpp"
#include "ImageWidget_parameters.hpp"


namespace SDK
{

// Function ImageWidget.ImageWidget_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Brush                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   SizeX                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SizeY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImageWidget_C::SetImage(const struct FSlateBrush& Brush, float SizeX, float SizeY)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImageWidget_C", "SetImage");

	Params::ImageWidget_C_SetImage Parms{};

	Parms.Brush = std::move(Brush);
	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);
}

}
