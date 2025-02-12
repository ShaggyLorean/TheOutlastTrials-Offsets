﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shared_Face_Expression_Struct

#include "Basic.hpp"

#include "Face_AllList_Enum_structs.hpp"


namespace SDK
{

// UserDefinedStruct Shared_Face_Expression_Struct.Shared_Face_Expression_Struct
// 0x0500 (0x0500 - 0x0000)
struct FShared_Face_Expression_Struct final
{
public:
	TMap<EFace_AllList_Enum, class UAnimSequence*> Default_58_599E99054D8D9DA09BBFC2A0DD36563F;       // 0x0000(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Attack_85_35EE47684EBF85E2148C9DB516DA9866;        // 0x0050(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Grab_86_2669DB0945500A1E6CEB12B77A39A6A8;          // 0x00A0(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Taunt_87_589C377D4B723CA6094FC9B1CC7F8F62;         // 0x00F0(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Murder_88_E6AC79C0434BE0ACF6B9678F7F760B2C;        // 0x0140(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> SAS_95_B39538754AE25FFB93741A862795BEFB;           // 0x0190(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Struggle_97_894535094C4EA959BBD6508C1BA05259;      // 0x01E0(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Downed_99_FE11E2464F798996C3A98EB8CCDFE70B;        // 0x0230(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> HitReact_Light_82_5BBE161447B806ED871D7F89816272C5; // 0x0280(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> HitReact_Medium_83_BE454C4E46AE8A5AC15355B7E14E816B; // 0x02D0(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> HitReact_Heavy_84_30C56BFD4882C69171652E99784BD99E; // 0x0320(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> RigReact_BlindPaint_89_920635304E5E429FECDDD1A7BFACD79C; // 0x0370(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> RigReact_Stun_90_48A49A9D4636F3DE918D72A3BD961BAE; // 0x03C0(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> ArmWrestle_Struggle_101_5893566F4EB2BF8256A505A923680D94; // 0x0410(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Startle_106_D14B67394290D1D6B39D6C85B4ABF7A8;      // 0x0460(0x0050)(Edit, BlueprintVisible)
	TMap<EFace_AllList_Enum, class UAnimSequence*> Puking_111_091A395B4317EE5074CC16AADEAC0384;       // 0x04B0(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FShared_Face_Expression_Struct) == 0x000008, "Wrong alignment on FShared_Face_Expression_Struct");
static_assert(sizeof(FShared_Face_Expression_Struct) == 0x000500, "Wrong size on FShared_Face_Expression_Struct");
static_assert(offsetof(FShared_Face_Expression_Struct, Default_58_599E99054D8D9DA09BBFC2A0DD36563F) == 0x000000, "Member 'FShared_Face_Expression_Struct::Default_58_599E99054D8D9DA09BBFC2A0DD36563F' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Attack_85_35EE47684EBF85E2148C9DB516DA9866) == 0x000050, "Member 'FShared_Face_Expression_Struct::Attack_85_35EE47684EBF85E2148C9DB516DA9866' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Grab_86_2669DB0945500A1E6CEB12B77A39A6A8) == 0x0000A0, "Member 'FShared_Face_Expression_Struct::Grab_86_2669DB0945500A1E6CEB12B77A39A6A8' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Taunt_87_589C377D4B723CA6094FC9B1CC7F8F62) == 0x0000F0, "Member 'FShared_Face_Expression_Struct::Taunt_87_589C377D4B723CA6094FC9B1CC7F8F62' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Murder_88_E6AC79C0434BE0ACF6B9678F7F760B2C) == 0x000140, "Member 'FShared_Face_Expression_Struct::Murder_88_E6AC79C0434BE0ACF6B9678F7F760B2C' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, SAS_95_B39538754AE25FFB93741A862795BEFB) == 0x000190, "Member 'FShared_Face_Expression_Struct::SAS_95_B39538754AE25FFB93741A862795BEFB' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Struggle_97_894535094C4EA959BBD6508C1BA05259) == 0x0001E0, "Member 'FShared_Face_Expression_Struct::Struggle_97_894535094C4EA959BBD6508C1BA05259' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Downed_99_FE11E2464F798996C3A98EB8CCDFE70B) == 0x000230, "Member 'FShared_Face_Expression_Struct::Downed_99_FE11E2464F798996C3A98EB8CCDFE70B' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, HitReact_Light_82_5BBE161447B806ED871D7F89816272C5) == 0x000280, "Member 'FShared_Face_Expression_Struct::HitReact_Light_82_5BBE161447B806ED871D7F89816272C5' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, HitReact_Medium_83_BE454C4E46AE8A5AC15355B7E14E816B) == 0x0002D0, "Member 'FShared_Face_Expression_Struct::HitReact_Medium_83_BE454C4E46AE8A5AC15355B7E14E816B' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, HitReact_Heavy_84_30C56BFD4882C69171652E99784BD99E) == 0x000320, "Member 'FShared_Face_Expression_Struct::HitReact_Heavy_84_30C56BFD4882C69171652E99784BD99E' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, RigReact_BlindPaint_89_920635304E5E429FECDDD1A7BFACD79C) == 0x000370, "Member 'FShared_Face_Expression_Struct::RigReact_BlindPaint_89_920635304E5E429FECDDD1A7BFACD79C' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, RigReact_Stun_90_48A49A9D4636F3DE918D72A3BD961BAE) == 0x0003C0, "Member 'FShared_Face_Expression_Struct::RigReact_Stun_90_48A49A9D4636F3DE918D72A3BD961BAE' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, ArmWrestle_Struggle_101_5893566F4EB2BF8256A505A923680D94) == 0x000410, "Member 'FShared_Face_Expression_Struct::ArmWrestle_Struggle_101_5893566F4EB2BF8256A505A923680D94' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Startle_106_D14B67394290D1D6B39D6C85B4ABF7A8) == 0x000460, "Member 'FShared_Face_Expression_Struct::Startle_106_D14B67394290D1D6B39D6C85B4ABF7A8' has a wrong offset!");
static_assert(offsetof(FShared_Face_Expression_Struct, Puking_111_091A395B4317EE5074CC16AADEAC0384) == 0x0004B0, "Member 'FShared_Face_Expression_Struct::Puking_111_091A395B4317EE5074CC16AADEAC0384' has a wrong offset!");

}

