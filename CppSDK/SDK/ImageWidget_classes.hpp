﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImageWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImageWidget.ImageWidget_C
// 0x0010 (0x0270 - 0x0260)
class UImageWidget_C final : public UUserWidget
{
public:
	class UInvalidationBox*                       InvalidationBox_ImageWidget;                       // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MainImage;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetImage(const struct FSlateBrush& Brush, float SizeX, float SizeY);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImageWidget_C">();
	}
	static class UImageWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImageWidget_C>();
	}
};
static_assert(alignof(UImageWidget_C) == 0x000008, "Wrong alignment on UImageWidget_C");
static_assert(sizeof(UImageWidget_C) == 0x000270, "Wrong size on UImageWidget_C");
static_assert(offsetof(UImageWidget_C, InvalidationBox_ImageWidget) == 0x000260, "Member 'UImageWidget_C::InvalidationBox_ImageWidget' has a wrong offset!");
static_assert(offsetof(UImageWidget_C, MainImage) == 0x000268, "Member 'UImageWidget_C::MainImage' has a wrong offset!");

}

