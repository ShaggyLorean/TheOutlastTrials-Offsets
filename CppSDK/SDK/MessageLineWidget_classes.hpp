﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MessageLineWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MessageLineWidget.MessageLineWidget_C
// 0x0020 (0x0288 - 0x0268)
class UMessageLineWidget_C final : public URBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_55;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_MessageLineWidget;                 // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Message;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MessageLineWidget(int32 EntryPoint);
	void SendTemporaryText(const class FText& messageText);
	void SetMessage(const class FText& messageText);
	void SetDefaultColor(const struct FLinearColor& DefaultColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MessageLineWidget_C">();
	}
	static class UMessageLineWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMessageLineWidget_C>();
	}
};
static_assert(alignof(UMessageLineWidget_C) == 0x000008, "Wrong alignment on UMessageLineWidget_C");
static_assert(sizeof(UMessageLineWidget_C) == 0x000288, "Wrong size on UMessageLineWidget_C");
static_assert(offsetof(UMessageLineWidget_C, UberGraphFrame) == 0x000268, "Member 'UMessageLineWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMessageLineWidget_C, Image_55) == 0x000270, "Member 'UMessageLineWidget_C::Image_55' has a wrong offset!");
static_assert(offsetof(UMessageLineWidget_C, InvalidationBox_MessageLineWidget) == 0x000278, "Member 'UMessageLineWidget_C::InvalidationBox_MessageLineWidget' has a wrong offset!");
static_assert(offsetof(UMessageLineWidget_C, Message) == 0x000280, "Member 'UMessageLineWidget_C::Message' has a wrong offset!");

}

