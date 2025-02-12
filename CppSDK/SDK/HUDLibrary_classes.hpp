﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HUDLibrary.HUDLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UHUDLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void FadeIfNecessary(class UUserWidget* Widget, class UWidget* AnimatedWidget, class UWidgetAnimation* Anim, bool FadeIn, class UObject* __WorldContext, bool* PlayAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDLibrary_C">();
	}
	static class UHUDLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDLibrary_C>();
	}
};
static_assert(alignof(UHUDLibrary_C) == 0x000008, "Wrong alignment on UHUDLibrary_C");
static_assert(sizeof(UHUDLibrary_C) == 0x000028, "Wrong size on UHUDLibrary_C");

}

