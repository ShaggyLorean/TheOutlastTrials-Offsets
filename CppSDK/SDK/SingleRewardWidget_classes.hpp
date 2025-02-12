﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SingleRewardWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SingleRewardWidget.SingleRewardWidget_C
// 0x00B8 (0x0318 - 0x0260)
class USingleRewardWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewReward;                                         // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AmountText;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CustomizationBorder;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CustomizationRarityOverlay;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBorderBackgroundimage;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconCanvas;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_163;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 STAMP;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         amount;                                            // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             IconTexture;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRewardUIData                          Reward_UI_Data;                                    // 0x02C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSlateColor                            IconTintColor;                                     // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bInverseColors;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SingleRewardWidget(int32 EntryPoint);
	void LoadThumbnail(TSoftObjectPtr<class UTexture2D> ThumbnailSoftRef);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnLoaded_0010701F4B6D26334013828A2735795D(class UObject* Loaded);
	void Setup();
	void PlayNewRewardAnimation();
	void Init(const struct FRewardUIData& RewardUIData);
	void CanMergeWith(const struct FRewardUIData& RewardUIData, bool* bCanMergeWith);
	void MergeWith(const struct FRewardUIData& RewardUIData);
	void UpdateRarity(EPlayerCustomizationRarity Rarity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SingleRewardWidget_C">();
	}
	static class USingleRewardWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleRewardWidget_C>();
	}
};
static_assert(alignof(USingleRewardWidget_C) == 0x000008, "Wrong alignment on USingleRewardWidget_C");
static_assert(sizeof(USingleRewardWidget_C) == 0x000318, "Wrong size on USingleRewardWidget_C");
static_assert(offsetof(USingleRewardWidget_C, UberGraphFrame) == 0x000260, "Member 'USingleRewardWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, NewReward) == 0x000268, "Member 'USingleRewardWidget_C::NewReward' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, AmountText) == 0x000270, "Member 'USingleRewardWidget_C::AmountText' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, CustomizationBorder) == 0x000278, "Member 'USingleRewardWidget_C::CustomizationBorder' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, CustomizationRarityOverlay) == 0x000280, "Member 'USingleRewardWidget_C::CustomizationRarityOverlay' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, Icon) == 0x000288, "Member 'USingleRewardWidget_C::Icon' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, IconBorderBackgroundimage) == 0x000290, "Member 'USingleRewardWidget_C::IconBorderBackgroundimage' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, IconCanvas) == 0x000298, "Member 'USingleRewardWidget_C::IconCanvas' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, Image) == 0x0002A0, "Member 'USingleRewardWidget_C::Image' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, Image_163) == 0x0002A8, "Member 'USingleRewardWidget_C::Image_163' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, STAMP) == 0x0002B0, "Member 'USingleRewardWidget_C::STAMP' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, amount) == 0x0002B8, "Member 'USingleRewardWidget_C::amount' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, IconTexture) == 0x0002C0, "Member 'USingleRewardWidget_C::IconTexture' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, Reward_UI_Data) == 0x0002C8, "Member 'USingleRewardWidget_C::Reward_UI_Data' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, IconTintColor) == 0x0002E8, "Member 'USingleRewardWidget_C::IconTintColor' has a wrong offset!");
static_assert(offsetof(USingleRewardWidget_C, bInverseColors) == 0x000310, "Member 'USingleRewardWidget_C::bInverseColors' has a wrong offset!");

}

