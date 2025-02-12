﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu_0

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0060 (0x0298 - 0x0238)
class AMainMenu_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ARBMainMenuPlayerController*            MainMenuController;                                // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMusicPlaying;                                    // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       BinkMovie_01;                                      // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkOldMovie_01;                                   // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMovie_02;                                      // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    MenuSequencer_01_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    MenuSequencer_02_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineFranco_01_BP_C*                    CineFranco_01_BP_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineGooseberry_01_BP_C*                CineGooseberry_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineFranco_01_BP_C*                    CineFranco_01_BP2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCoyle_01_BP_C*                     CineCoyle_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu(int32 EntryPoint);
	void ForceFranco();
	void SetEventFeature();
	void ToggleXPCheck();
	void MM_ScratchClose();
	void MM_Scratch();
	void OnMainMenuStageChanged(EMainMenuState mainMenuState);
	void MM_StopCamera_02();
	void MM_StopCamera01();
	void MM_PlayCamera_02();
	void MM_PlayCamera01();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	bool OnWorldPopulateFinishedTimeSliced();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_C">();
	}
	static class AMainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenu_C>();
	}
};
static_assert(alignof(AMainMenu_C) == 0x000008, "Wrong alignment on AMainMenu_C");
static_assert(sizeof(AMainMenu_C) == 0x000298, "Wrong size on AMainMenu_C");
static_assert(offsetof(AMainMenu_C, UberGraphFrame) == 0x000238, "Member 'AMainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MainMenuController) == 0x000240, "Member 'AMainMenu_C::MainMenuController' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, IsMusicPlaying) == 0x000248, "Member 'AMainMenu_C::IsMusicPlaying' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkMovie_01) == 0x000250, "Member 'AMainMenu_C::BinkMovie_01' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkOldMovie_01) == 0x000258, "Member 'AMainMenu_C::BinkOldMovie_01' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkMovie_02) == 0x000260, "Member 'AMainMenu_C::BinkMovie_02' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MenuSequencer_01_2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000268, "Member 'AMainMenu_C::MenuSequencer_01_2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MenuSequencer_02_0_ExecuteUbergraph_MainMenu_RefProperty) == 0x000270, "Member 'AMainMenu_C::MenuSequencer_02_0_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineFranco_01_BP_2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000278, "Member 'AMainMenu_C::CineFranco_01_BP_2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineGooseberry_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty) == 0x000280, "Member 'AMainMenu_C::CineGooseberry_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineFranco_01_BP2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000288, "Member 'AMainMenu_C::CineFranco_01_BP2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineCoyle_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty) == 0x000290, "Member 'AMainMenu_C::CineCoyle_01_BP_3_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");

}

