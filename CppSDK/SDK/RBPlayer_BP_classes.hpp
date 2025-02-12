﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBPlayer_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PlayerVisualDamageStruct_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBPlayer_BP.RBPlayer_BP_C
// 0x02C0 (0x7EB0 - 0x7BF0)
class ARBPlayer_BP_C final : public ARBPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x7BF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x7BF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   AIDisturbanceLight;                                // 0x7C00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      HackVFX;                                           // 0x7C08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBAimAssistComponent*                  Head_Aim_Assist;                                   // 0x7C10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_PlayerDamaged_Electric;                        // 0x7C18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_AcidCamSplash;                                 // 0x7C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               UnderwaterBubbles;                                 // 0x7C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Watch;                                             // 0x7C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_UnderwaterBubble;                              // 0x7C38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_TraproomGas;                                   // 0x7C40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lens_R;                                            // 0x7C48(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lens_L;                                            // 0x7C50(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 NightVision1P;                                     // 0x7C58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ProxyLightDir;                                     // 0x7C60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ShadowPickupStatic;                                // 0x7C68(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 ShadowPickupSkeletal;                              // 0x7C70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_ElectricHit;                                   // 0x7C78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBPlayerSkelMeshComponent*             ESOP;                                              // 0x7C80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ESOP_Battery;                                      // 0x7C88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ESOP_Apparatus;                                    // 0x7C90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HeadCap1P;                                         // 0x7C98(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HairMesh3P;                                        // 0x7CA0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 GloveMesh3P;                                       // 0x7CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    ProxyLight;                                        // 0x7CB0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Straps;                                            // 0x7CB8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 NightVision;                                       // 0x7CC0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 LegsMesh3P;                                        // 0x7CC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 TorsoMesh3P;                                       // 0x7CD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 HeadMesh3P;                                        // 0x7CD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkStimuli_NewTrack_0_01B22AE4419B5A207E1C9DBF2CCE0067; // 0x7CE0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            BlinkStimuli__Direction_01B22AE4419B5A207E1C9DBF2CCE0067; // 0x7CE4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7CE5[0x3];                                     // 0x7CE5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     BlinkStimuli;                                      // 0x7CE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPlayerVisualDamageStruct>      DamagedBones;                                      // 0x7CF0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	TMulticastInlineDelegate<void()>              Deleteme;                                          // 0x7D00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class USceneComponent*>                ShadowMesh_Visual;                                 // 0x7D10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            ShadowMesh_Shadow;                                 // 0x7D20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>         ExtraCustomizationMeshes;                          // 0x7D30(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          CreatedShadowMesh;                                 // 0x7D40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasInitReplicated;                                 // 0x7D41(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          HasReceivedInitialCustomization;                   // 0x7D42(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D43[0x5];                                     // 0x7D43(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              ShadowMeshCompleted;                               // 0x7D48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         CorpseSearchBloodHandStartTime;                    // 0x7D58(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DesiredRightHandBloodIntensity;                    // 0x7D5C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CorpseSearchBloodDuration;                         // 0x7D60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentRightHandBloodIntensity;                    // 0x7D64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandBloodInterpSpeed;                              // 0x7D68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D6C[0x4];                                     // 0x7D6C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class USkeletalMesh>           DefaultNV1PMesh;                                   // 0x7D70(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         NextBloodDripDelay;                                // 0x7D98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastBloodDripTimestamp;                            // 0x7D9C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastDownedStateSmearTimestamp;                     // 0x7DA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DA4[0x4];                                     // 0x7DA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceConstant*>      DynamicBloodSplatterMaterials;                     // 0x7DA8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstanceConstant*>      DynamicBloodSplatterMaterials_Shuffled;            // 0x7DB8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         NextDownedStateSmearDelay;                         // 0x7DC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7DCC[0x4];                                     // 0x7DCC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceConstant*>      DynamicStraightBloodSmearMaterials;                // 0x7DD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TravelledDist;                                     // 0x7DE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DamageVisualPreviousLocation;                      // 0x7DE4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               DamageVisualPreviousRotation;                      // 0x7DF0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7DFC[0x4];                                     // 0x7DFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceConstant*>      DynamicRoundBloodSmearMaterials;                   // 0x7E00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPoseAsset*                             FacePoseAsset;                                     // 0x7E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastLocationDataTimestamp;                         // 0x7E18(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NextLongBloodDripDelay;                            // 0x7E1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastLongBloodDripTimestamp;                        // 0x7E20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E24[0x4];                                     // 0x7E24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class USkeletalMeshComponent*, class USkeletalMeshComponent*> VisualMeshToShadowMesh;                            // 0x7E28(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UStaticMeshComponent*                   ApparatusShadowMesh;                               // 0x7E78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 MainShadowMesh;                                    // 0x7E80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HealthRatio_Local;                                 // 0x7E88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E8C[0x4];                                     // 0x7E8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            CharacterBloodReleventVisualComponents;            // 0x7E90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bAIDisturbanceItemActive;                          // 0x7EA0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

public:
	void ExecuteUbergraph_RBPlayer_BP(int32 EntryPoint);
	void StopBlinkStimuli();
	void StartBlinkStimuli();
	void ActivateAIDisturbanceLight_Server(float duration, float fullLoudnessRange, float MaxHearingDistance);
	void TurnAIDisturbanceLightOff_Delayed(float duration);
	void OnHackStateChanged();
	void Event_OnActiveSkillRestrictionFinished();
	void Event_OnActiveSkillRestrictionStarted();
	void SkinnerMan();
	void Event_OnRemainingRespawnIncreased();
	void Event_OnActiveSkillActorChanged(class AActor* activeSkillActor_0);
	void Event_OnHealthRestored();
	void UnderwaterStateChanged(bool bIsUnderwater);
	void ApplyDefaultNV();
	void SetProxylightEnabled(bool Enabled);
	void Event_OnNVAnimationNotify(bool bWantsNvOn, ENightVisionAnimNotifyType Type);
	void NVAnimationDone();
	void OnNVAnimationDone_Event(bool isNvActive);
	void Broadcast2DSound(class UAkAudioEvent* Event);
	void ShowProxyLight();
	void ReceiveTick(float DeltaSeconds);
	void UpdateShadowPickupEvent(class ARBPickup* oldItem, class ARBPickup* newItem);
	void OnAffectedByPsychosisGas_BP();
	void OnExtraCustomizationMeshesAddedForSlot(const TArray<class USkeletalMeshComponent*>& addedExtraMeshes, EPlayerCustomizationSlot Slot);
	void UpdateCustomization();
	void UpdatePerspective();
	void Event_OnFootstep(const struct FFootstepData& FootstepData);
	void Event_OnLastConsumedBatteryTypeChanged(EItemType batteryType);
	void BP_OnTrapRoomFailed();
	void ReceiveBeginPlay();
	void PlaySoundOnPlayer(class UAkAudioEvent* akEvent);
	void Event_InitReplicated();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void Event_StopSpectatingLocally();
	void Event_StartSpectatingLocally();
	void Event_OnCustomizationChanged();
	void BndEvt__NVComponent_K2Node_ComponentBoundEvent_0_OnNVStateChanged__DelegateSignature(bool bOn);
	void Event_OnTakeDamage(const struct FDamageInfo& Info);
	void Event_OnDie();
	void Event_OnPlayerPerspectiveChanged();
	void OnLoaded_E32B3EA245CB7B65286791842D20B97F(class UObject* Loaded);
	void BlinkStimuli__UpdateFunc();
	void BlinkStimuli__FinishedFunc();
	void UserConstructionScript();
	void SetInitialPlayerSettings();
	void Event_PlayHitReactionEffects(const struct FPlayerHitReactionParams& hitReaction, const struct FVector& attackLoc, float hitRelativeAngle);
	void CustomizeCharacterModel(class URBCustomizationOutfit* OutfitOverride);
	void UpdateESOPBatteryType();
	void Update_Shadow_Mesh(bool ForceClean);
	void CreateShadowmeshCopyOfSkeletalMesh(class USkeletalMeshComponent*& InVisibleMesh, class USceneComponent*& InParent, class UClass* InAnimInstance, class USkeletalMeshComponent** OutShadowMeshComponent);
	void Remove_Shadow_Meshes();
	void CreateSkeletalMeshForShadow(class USkeletalMeshComponent* InVisibleMesh, class USceneComponent* InParent, bool bKeepRelativeTransform, class USkeletalMeshComponent** Out);
	void CreateShadowmeshCopyOfStaticMesh(class UStaticMeshComponent*& InVisualMesh, class USkeletalMeshComponent*& Parent, class UStaticMeshComponent** OutNewComponent);
	void ClearExtraCustomizationMeshes();
	void Should_Hide_Customization_Slot_in_1P(EPlayerCustomizationSlot Slot, bool* ShouldHide);
	void UpdateHeadCapMesh();
	void RefreshHeadCapVisibility();
	void UpdateCharacterBloodDamageMaterials();
	void UpdateBloodDrippingParticle();
	void UpdateShadowPickup(class ARBPickup* Old, class ARBPickup* New);
	class UPoseAsset* GetFacePoseAsset();
	void UpdateBloodHand(float DeltaTime);
	void ApplyBloodOnRightHand();
	void GetRelevantForDamageExtraMeshes(TArray<class USkeletalMeshComponent*>* SkeletalMeshes_);
	void ApplyDamageVFX(EDamageType InfoType, ENPCWeapon NPCWeapon, float DmdAmount, const struct FVector& DmgLocation, const struct FVector& DmgDirection, class AActor* sourceActor, bool bBloodParticles);
	void ApplyBloodDecal(class UMaterialInstanceConstant* MatDecal, float Scale, bool Rotate);
	void GetNextBloodSplatterShuffledMaterial(class UMaterialInstanceConstant** NewParam);
	void UpdateBloodSmearInDownedState();
	void UpdateBloodEffects(float DeltaTime);
	void UpdateESOPVisibility();
	void UpdateShadowActiveSkill();
	void CopyMaterialsToShadowMesh(class UMeshComponent* PlayerMesh, class UMeshComponent* ShadowMesh);
	void CopyPrimitiveDataToShadowMesh(class UMeshComponent* PlayerMesh, class UMeshComponent* ShadowMesh);
	void UpdateUnderwaterFX();
	void DebugShadowMesh();
	void OnRep_DamagedBones();
	void UpdateReleventComponentsForBloodMaterial();
	void OnRep_bAIDisturbanceItemActive();

	class USkeletalMeshComponent* GetMainShadowMesh() const;
	TArray<class UPrimitiveComponent*> GetAllShadowMeshes() const;
	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;
	class USkeletalMeshComponent* GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot) const;
	struct FRBPlayerCustomizationInfo GetPlayerCustomizationInfo() const;
	class UStaticMeshComponent* GetWatchComponent() const;
	class USkeletalMeshComponent* GetMainParentSkeletalMesh() const;
	class USkeletalMeshComponent* GetShadowSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot, bool* outFound) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBPlayer_BP_C">();
	}
	static class ARBPlayer_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBPlayer_BP_C>();
	}
};
static_assert(alignof(ARBPlayer_BP_C) == 0x000010, "Wrong alignment on ARBPlayer_BP_C");
static_assert(sizeof(ARBPlayer_BP_C) == 0x007EB0, "Wrong size on ARBPlayer_BP_C");
static_assert(offsetof(ARBPlayer_BP_C, UberGraphFrame) == 0x007BF0, "Member 'ARBPlayer_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, PointLight) == 0x007BF8, "Member 'ARBPlayer_BP_C::PointLight' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, AIDisturbanceLight) == 0x007C00, "Member 'ARBPlayer_BP_C::AIDisturbanceLight' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HackVFX) == 0x007C08, "Member 'ARBPlayer_BP_C::HackVFX' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Head_Aim_Assist) == 0x007C10, "Member 'ARBPlayer_BP_C::Head_Aim_Assist' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Ngr_PlayerDamaged_Electric) == 0x007C18, "Member 'ARBPlayer_BP_C::Ngr_PlayerDamaged_Electric' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Ngr_AcidCamSplash) == 0x007C20, "Member 'ARBPlayer_BP_C::Ngr_AcidCamSplash' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, UnderwaterBubbles) == 0x007C28, "Member 'ARBPlayer_BP_C::UnderwaterBubbles' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Watch) == 0x007C30, "Member 'ARBPlayer_BP_C::Watch' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Ngr_UnderwaterBubble) == 0x007C38, "Member 'ARBPlayer_BP_C::Ngr_UnderwaterBubble' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Ngr_TraproomGas) == 0x007C40, "Member 'ARBPlayer_BP_C::Ngr_TraproomGas' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Lens_R) == 0x007C48, "Member 'ARBPlayer_BP_C::Lens_R' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Lens_L) == 0x007C50, "Member 'ARBPlayer_BP_C::Lens_L' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, NightVision1P) == 0x007C58, "Member 'ARBPlayer_BP_C::NightVision1P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ProxyLightDir) == 0x007C60, "Member 'ARBPlayer_BP_C::ProxyLightDir' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ShadowPickupStatic) == 0x007C68, "Member 'ARBPlayer_BP_C::ShadowPickupStatic' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ShadowPickupSkeletal) == 0x007C70, "Member 'ARBPlayer_BP_C::ShadowPickupSkeletal' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Ngr_ElectricHit) == 0x007C78, "Member 'ARBPlayer_BP_C::Ngr_ElectricHit' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ESOP) == 0x007C80, "Member 'ARBPlayer_BP_C::ESOP' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ESOP_Battery) == 0x007C88, "Member 'ARBPlayer_BP_C::ESOP_Battery' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ESOP_Apparatus) == 0x007C90, "Member 'ARBPlayer_BP_C::ESOP_Apparatus' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HeadCap1P) == 0x007C98, "Member 'ARBPlayer_BP_C::HeadCap1P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HairMesh3P) == 0x007CA0, "Member 'ARBPlayer_BP_C::HairMesh3P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, GloveMesh3P) == 0x007CA8, "Member 'ARBPlayer_BP_C::GloveMesh3P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ProxyLight) == 0x007CB0, "Member 'ARBPlayer_BP_C::ProxyLight' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Straps) == 0x007CB8, "Member 'ARBPlayer_BP_C::Straps' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, NightVision) == 0x007CC0, "Member 'ARBPlayer_BP_C::NightVision' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, LegsMesh3P) == 0x007CC8, "Member 'ARBPlayer_BP_C::LegsMesh3P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, TorsoMesh3P) == 0x007CD0, "Member 'ARBPlayer_BP_C::TorsoMesh3P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HeadMesh3P) == 0x007CD8, "Member 'ARBPlayer_BP_C::HeadMesh3P' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, BlinkStimuli_NewTrack_0_01B22AE4419B5A207E1C9DBF2CCE0067) == 0x007CE0, "Member 'ARBPlayer_BP_C::BlinkStimuli_NewTrack_0_01B22AE4419B5A207E1C9DBF2CCE0067' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, BlinkStimuli__Direction_01B22AE4419B5A207E1C9DBF2CCE0067) == 0x007CE4, "Member 'ARBPlayer_BP_C::BlinkStimuli__Direction_01B22AE4419B5A207E1C9DBF2CCE0067' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, BlinkStimuli) == 0x007CE8, "Member 'ARBPlayer_BP_C::BlinkStimuli' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DamagedBones) == 0x007CF0, "Member 'ARBPlayer_BP_C::DamagedBones' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, Deleteme) == 0x007D00, "Member 'ARBPlayer_BP_C::Deleteme' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ShadowMesh_Visual) == 0x007D10, "Member 'ARBPlayer_BP_C::ShadowMesh_Visual' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ShadowMesh_Shadow) == 0x007D20, "Member 'ARBPlayer_BP_C::ShadowMesh_Shadow' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ExtraCustomizationMeshes) == 0x007D30, "Member 'ARBPlayer_BP_C::ExtraCustomizationMeshes' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, CreatedShadowMesh) == 0x007D40, "Member 'ARBPlayer_BP_C::CreatedShadowMesh' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HasInitReplicated) == 0x007D41, "Member 'ARBPlayer_BP_C::HasInitReplicated' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HasReceivedInitialCustomization) == 0x007D42, "Member 'ARBPlayer_BP_C::HasReceivedInitialCustomization' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ShadowMeshCompleted) == 0x007D48, "Member 'ARBPlayer_BP_C::ShadowMeshCompleted' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, CorpseSearchBloodHandStartTime) == 0x007D58, "Member 'ARBPlayer_BP_C::CorpseSearchBloodHandStartTime' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DesiredRightHandBloodIntensity) == 0x007D5C, "Member 'ARBPlayer_BP_C::DesiredRightHandBloodIntensity' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, CorpseSearchBloodDuration) == 0x007D60, "Member 'ARBPlayer_BP_C::CorpseSearchBloodDuration' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, CurrentRightHandBloodIntensity) == 0x007D64, "Member 'ARBPlayer_BP_C::CurrentRightHandBloodIntensity' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HandBloodInterpSpeed) == 0x007D68, "Member 'ARBPlayer_BP_C::HandBloodInterpSpeed' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DefaultNV1PMesh) == 0x007D70, "Member 'ARBPlayer_BP_C::DefaultNV1PMesh' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, NextBloodDripDelay) == 0x007D98, "Member 'ARBPlayer_BP_C::NextBloodDripDelay' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, LastBloodDripTimestamp) == 0x007D9C, "Member 'ARBPlayer_BP_C::LastBloodDripTimestamp' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, LastDownedStateSmearTimestamp) == 0x007DA0, "Member 'ARBPlayer_BP_C::LastDownedStateSmearTimestamp' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DynamicBloodSplatterMaterials) == 0x007DA8, "Member 'ARBPlayer_BP_C::DynamicBloodSplatterMaterials' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DynamicBloodSplatterMaterials_Shuffled) == 0x007DB8, "Member 'ARBPlayer_BP_C::DynamicBloodSplatterMaterials_Shuffled' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, NextDownedStateSmearDelay) == 0x007DC8, "Member 'ARBPlayer_BP_C::NextDownedStateSmearDelay' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DynamicStraightBloodSmearMaterials) == 0x007DD0, "Member 'ARBPlayer_BP_C::DynamicStraightBloodSmearMaterials' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, TravelledDist) == 0x007DE0, "Member 'ARBPlayer_BP_C::TravelledDist' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DamageVisualPreviousLocation) == 0x007DE4, "Member 'ARBPlayer_BP_C::DamageVisualPreviousLocation' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DamageVisualPreviousRotation) == 0x007DF0, "Member 'ARBPlayer_BP_C::DamageVisualPreviousRotation' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, DynamicRoundBloodSmearMaterials) == 0x007E00, "Member 'ARBPlayer_BP_C::DynamicRoundBloodSmearMaterials' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, FacePoseAsset) == 0x007E10, "Member 'ARBPlayer_BP_C::FacePoseAsset' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, LastLocationDataTimestamp) == 0x007E18, "Member 'ARBPlayer_BP_C::LastLocationDataTimestamp' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, NextLongBloodDripDelay) == 0x007E1C, "Member 'ARBPlayer_BP_C::NextLongBloodDripDelay' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, LastLongBloodDripTimestamp) == 0x007E20, "Member 'ARBPlayer_BP_C::LastLongBloodDripTimestamp' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, VisualMeshToShadowMesh) == 0x007E28, "Member 'ARBPlayer_BP_C::VisualMeshToShadowMesh' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, ApparatusShadowMesh) == 0x007E78, "Member 'ARBPlayer_BP_C::ApparatusShadowMesh' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, MainShadowMesh) == 0x007E80, "Member 'ARBPlayer_BP_C::MainShadowMesh' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, HealthRatio_Local) == 0x007E88, "Member 'ARBPlayer_BP_C::HealthRatio_Local' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, CharacterBloodReleventVisualComponents) == 0x007E90, "Member 'ARBPlayer_BP_C::CharacterBloodReleventVisualComponents' has a wrong offset!");
static_assert(offsetof(ARBPlayer_BP_C, bAIDisturbanceItemActive) == 0x007EA0, "Member 'ARBPlayer_BP_C::bAIDisturbanceItemActive' has a wrong offset!");

}

