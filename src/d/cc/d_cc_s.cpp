//
// Generated By: dol2asm
// Translation Unit: d/cc/d_cc_s
//

#include "d/cc/d_cc_s.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct mDoMtx_stack_c {
    /* 8000CF0C */ void ZXYrotS(csXyz const&);

    static u8 now[48];
};

//
// Forward References:
//

extern "C" void Ct__4dCcSFv();
extern "C" void Dt__4dCcSFv();
extern "C" void ChkShieldFrontRange__4dCcSFP8cCcD_ObjP8cCcD_ObjiPC4cXyz();
extern "C" void ChkShield__4dCcSFP8cCcD_ObjP8cCcD_ObjP12dCcD_GObjInfP12dCcD_GObjInfPC4cXyz();
extern "C" void CalcTgPlusDmg__4dCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts();
extern "C" void
ChkAtTgHitAfterCross__4dCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts();
extern "C" void
SetCoGObjInf__4dCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts();
extern "C" void GetRank__4dCcSFUc();
extern "C" bool ChkNoHitGCo__4dCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void SetPosCorrect__4dCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf();
extern "C" void CalcParticleAngle__4dCcSFP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP5csXyz();
extern "C" void
ProcAtTgHitmark__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12dCcD_GObjInfP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10dCcD_GSttsP10dCcD_GSttsP4cXyzb();
extern "C" void
SetAtTgGObjInf__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz();
extern "C" void ChkCamera__4dCcSFR4cXyzR4cXyzfP10fopAc_ac_cP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void chkCameraPoint__4dCcSFRC4cXyzPQ214cCcD_ShapeAttr5ShapeP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void __dt__12cCcD_SphAttrFv();
extern "C" void MoveAfterCheck__4dCcSFv();
extern "C" void DrawAfter__4dCcSFv();
extern "C" void Move__4dCcSFv();
extern "C" void Draw__4dCcSFv();
extern "C" void MassClear__4dCcSFv();
extern "C" void ChkAtTgMtrlHit__4dCcSFUcUc();
extern "C" void ChkNoHitGAtTg__4dCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts();
extern "C" u8 m_mtrl_hit_tbl__4dCcS[64];
extern "C" extern void* __vt__4dCcS[13];

//
// External References:
//

extern "C" void ZXYrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __dt__4dCcSFv();
extern "C" void getHitmarkPosAndAngle__9dJntCol_cCFPC4cXyzPC5csXyzP4cXyzP5csXyzi();
extern "C" void setHitMark__13dPa_control_cFUsP10fopAc_ac_cPC4cXyzPC5csXyzPC4cXyzUl();
extern "C" void SetHitApid__22dCcD_GAtTgCoCommonBaseFUi();
extern "C" void SetEffCounterTimer__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void ChkEffCounter__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void ChkAtNoGuard__12dCcD_GObjInfFv();
extern "C" void Ct__12dCcMassS_MngFv();
extern "C" void Clear__12dCcMassS_MngFv();
extern "C" void Chk__15cCcD_DivideInfoCFRC15cCcD_DivideInfo();
extern "C" void CalcDivideInfoOverArea__15cCcD_DivideAreaFP15cCcD_DivideInfoRC8cM3dGAab();
extern "C" void PlusCcMove__9cCcD_SttsFfff();
extern "C" void PlusDmg__9cCcD_SttsFi();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void CalcAabBox__12cCcD_CpsAttrFv();
extern "C" void CalcAabBox__12cCcD_SphAttrFv();
extern "C" void Ct__4cCcSFv();
extern "C" void Dt__4cCcSFv();
extern "C" void Move__4cCcSFv();
extern "C" void DrawClear__4cCcSFv();
extern "C" void SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj();
extern "C" void cM3d_CalcVecZAngle__FRC3VecP5csXyz();
extern "C" void __ct__8cM3dGCpsFv();
extern "C" void __dt__8cM3dGCpsFv();
extern "C" void Set__8cM3dGCpsFRC4cXyzRC4cXyzf();
extern "C" void Set__8cM3dGSphFRC9cM3dGSphS();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void __dl__FPv();
extern "C" void _savegpr_17();
extern "C" void _savegpr_23();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_17();
extern "C" void _restgpr_23();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8cM3dGAab[3];
extern "C" extern void* __vt__15cCcD_DivideInfo[3];
extern "C" extern void* __vt__8cM3dGSph[3];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__12cCcD_CpsAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 BaseZ__4cXyz[12];

//
// Declarations:
//

/* 80085ED4-80085F08 080814 0034+00 0/0 1/1 0/0 .text            Ct__4dCcSFv */
void dCcS::Ct() {
    cCcS::Ct();
    mMass_Mng.Ct();
}

/* 80085F08-80085F28 080848 0020+00 0/0 1/1 0/0 .text            Dt__4dCcSFv */
void dCcS::Dt() {
    cCcS::Dt();
}

/* ############################################################################################## */
/* 80452778-8045277C 000D78 0004+00 3/3 0/0 0/0 .sdata2          @3705 */
SECTION_SDATA2 static u8 lit_3705[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80085F28-800860F8 080868 01D0+00 1/1 0/0 0/0 .text
 * ChkShieldFrontRange__4dCcSFP8cCcD_ObjP8cCcD_ObjiPC4cXyz      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::ChkShieldFrontRange(cCcD_Obj* param_0, cCcD_Obj* param_1, int param_2,
                                   cXyz const* param_3) {
    nofralloc
#include "asm/d/cc/d_cc_s/ChkShieldFrontRange__4dCcSFP8cCcD_ObjP8cCcD_ObjiPC4cXyz.s"
}
#pragma pop

/* 800860F8-800861B0 080A38 00B8+00 1/1 0/0 0/0 .text
 * ChkShield__4dCcSFP8cCcD_ObjP8cCcD_ObjP12dCcD_GObjInfP12dCcD_GObjInfPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::ChkShield(cCcD_Obj* param_0, cCcD_Obj* param_1, dCcD_GObjInf* param_2,
                         dCcD_GObjInf* param_3, cXyz const* param_4) {
    nofralloc
#include "asm/d/cc/d_cc_s/ChkShield__4dCcSFP8cCcD_ObjP8cCcD_ObjP12dCcD_GObjInfP12dCcD_GObjInfPC4cXyz.s"
}
#pragma pop

/* 800861B0-800861B4 080AF0 0004+00 1/0 0/0 0/0 .text
 * CalcTgPlusDmg__4dCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts */
void dCcS::CalcTgPlusDmg(cCcD_Obj* param_0, cCcD_Obj* param_1, cCcD_Stts* param_2,
                         cCcD_Stts* param_3) {
    /* empty function */
}

/* 800861B4-80086240 080AF4 008C+00 1/0 0/0 0/0 .text
 * ChkAtTgHitAfterCross__4dCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dCcS::ChkAtTgHitAfterCross(bool param_0, bool param_1, cCcD_GObjInf const* param_2,
                                    cCcD_GObjInf const* param_3, cCcD_Stts* param_4,
                                    cCcD_Stts* param_5, cCcD_GStts* param_6, cCcD_GStts* param_7) {
    nofralloc
#include "asm/d/cc/d_cc_s/func_800861B4.s"
}
#pragma pop

/* 80086240-80086360 080B80 0120+00 1/0 0/0 0/0 .text
 * SetCoGObjInf__4dCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::SetCoGObjInf(bool param_0, bool param_1, cCcD_GObjInf* param_2,
                            cCcD_GObjInf* param_3, cCcD_Stts* param_4, cCcD_Stts* param_5,
                            cCcD_GStts* param_6, cCcD_GStts* param_7) {
    nofralloc
#include "asm/d/cc/d_cc_s/SetCoGObjInf__4dCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts.s"
}
#pragma pop

/* 80086360-80086404 080CA0 00A4+00 1/1 0/0 0/0 .text            GetRank__4dCcSFUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::GetRank(u8 param_0) {
    nofralloc
#include "asm/d/cc/d_cc_s/GetRank__4dCcSFUc.s"
}
#pragma pop

/* 80086404-8008640C 080D44 0008+00 1/0 0/0 0/0 .text ChkNoHitGCo__4dCcSFP8cCcD_ObjP8cCcD_Obj */
bool dCcS::ChkNoHitGCo(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    return false;
}

/* ############################################################################################## */
/* 803AC328-803AC3A4 009448 0079+03 1/1 0/0 0/0 .data            rank_tbl */
SECTION_DATA static u8 rank_tbl[121 + 3 /* padding */] = {
    0x00,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x00,
    0x32,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x00,
    0x00,
    0x32,
    0x4B,
    0x5A,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x00,
    0x00,
    0x19,
    0x32,
    0x4B,
    0x5A,
    0x64,
    0x64,
    0x64,
    0x64,
    0x64,
    0x00,
    0x00,
    0x0A,
    0x19,
    0x32,
    0x4B,
    0x5A,
    0x64,
    0x64,
    0x64,
    0x64,
    0x00,
    0x00,
    0x00,
    0x0A,
    0x19,
    0x32,
    0x4B,
    0x5A,
    0x64,
    0x64,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0A,
    0x19,
    0x32,
    0x4B,
    0x5A,
    0x64,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0A,
    0x19,
    0x32,
    0x4B,
    0x64,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x0A,
    0x19,
    0x32,
    0x64,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x32,
    0x64,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 8045277C-80452780 000D7C 0004+00 1/1 0/0 0/0 .sdata2          @3924 */
SECTION_SDATA2 static f32 lit_3924 = 1.0f / 100.0f;

/* 80452780-80452788 000D80 0004+04 2/2 0/0 0/0 .sdata2          @3925 */
SECTION_SDATA2 static f32 lit_3925[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};

/* 80452788-80452790 000D88 0008+00 1/1 0/0 0/0 .sdata2          @3927 */
SECTION_SDATA2 static f64 lit_3927 = 4503599627370496.0 /* cast u32 to float */;

/* 8008640C-80086754 080D4C 0348+00 1/0 0/0 0/0 .text
 * SetPosCorrect__4dCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf       */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::SetPosCorrect(cCcD_Obj* param_0, cXyz* param_1, cCcD_Obj* param_2, cXyz* param_3,
                             f32 param_4) {
    nofralloc
#include "asm/d/cc/d_cc_s/SetPosCorrect__4dCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf.s"
}
#pragma pop

/* 80086754-8008685C 081094 0108+00 1/0 0/0 0/0 .text
 * CalcParticleAngle__4dCcSFP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP5csXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::CalcParticleAngle(dCcD_GObjInf* param_0, cCcD_Stts* param_1, cCcD_Stts* param_2,
                                 csXyz* param_3) {
    nofralloc
#include "asm/d/cc/d_cc_s/CalcParticleAngle__4dCcSFP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP5csXyz.s"
}
#pragma pop

/* 8008685C-80086AC0 08119C 0264+00 1/1 0/0 0/0 .text
 * ProcAtTgHitmark__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12dCcD_GObjInfP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10dCcD_GSttsP10dCcD_GSttsP4cXyzb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::ProcAtTgHitmark(bool param_0, bool param_1, cCcD_Obj* param_2, cCcD_Obj* param_3,
                               dCcD_GObjInf* param_4, dCcD_GObjInf* param_5, cCcD_Stts* param_6,
                               cCcD_Stts* param_7, dCcD_GStts* param_8, dCcD_GStts* param_9,
                               cXyz* param_10, bool param_11) {
    nofralloc
#include "asm/d/cc/d_cc_s/func_8008685C.s"
}
#pragma pop

/* 80086AC0-80086D8C 081400 02CC+00 1/0 0/0 0/0 .text
 * SetAtTgGObjInf__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::SetAtTgGObjInf(bool param_0, bool param_1, cCcD_Obj* param_2, cCcD_Obj* param_3,
                              cCcD_GObjInf* param_4, cCcD_GObjInf* param_5, cCcD_Stts* param_6,
                              cCcD_Stts* param_7, cCcD_GStts* param_8, cCcD_GStts* param_9,
                              cXyz* param_10) {
    nofralloc
#include "asm/d/cc/d_cc_s/func_80086AC0.s"
}
#pragma pop

/* 80086D8C-80086FBC 0816CC 0230+00 0/0 2/2 0/0 .text
 * ChkCamera__4dCcSFR4cXyzR4cXyzfP10fopAc_ac_cP10fopAc_ac_cP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::ChkCamera(cXyz& param_0, cXyz& param_1, f32 param_2, fopAc_ac_c* param_3,
                         fopAc_ac_c* param_4, fopAc_ac_c* param_5) {
    nofralloc
#include "asm/d/cc/d_cc_s/ChkCamera__4dCcSFR4cXyzR4cXyzfP10fopAc_ac_cP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80452790-80452798 000D90 0004+04 1/1 0/0 0/0 .sdata2          @4336 */
SECTION_SDATA2 static f32 lit_4336[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80086FBC-8008721C 0818FC 0260+00 0/0 1/1 0/0 .text
 * chkCameraPoint__4dCcSFRC4cXyzPQ214cCcD_ShapeAttr5ShapeP10fopAc_ac_cP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::chkCameraPoint(cXyz const& param_0, cCcD_ShapeAttr::Shape* param_1,
                              fopAc_ac_c* param_2, fopAc_ac_c* param_3) {
    nofralloc
#include "asm/d/cc/d_cc_s/chkCameraPoint__4dCcSFRC4cXyzPQ214cCcD_ShapeAttr5ShapeP10fopAc_ac_cP10fopAc_ac_c.s"
}
#pragma pop

/* 8008721C-800872A8 081B5C 008C+00 0/0 2/1 0/0 .text            __dt__12cCcD_SphAttrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm cCcD_SphAttr::~cCcD_SphAttr() {
extern "C" asm void __dt__12cCcD_SphAttrFv() {
    nofralloc
#include "asm/d/cc/d_cc_s/__dt__12cCcD_SphAttrFv.s"
}
#pragma pop

/* 800872A8-800872AC 081BE8 0004+00 1/0 0/0 0/0 .text            MoveAfterCheck__4dCcSFv */
void dCcS::MoveAfterCheck() {
    /* empty function */
}

/* 800872AC-800872B0 081BEC 0004+00 1/1 0/0 0/0 .text            DrawAfter__4dCcSFv */
void dCcS::DrawAfter() {
    /* empty function */
}

/* 800872B0-800872D0 081BF0 0020+00 0/0 1/1 0/0 .text            Move__4dCcSFv */
void dCcS::Move() {
    cCcS::Move();
}

/* 800872D0-8008730C 081C10 003C+00 0/0 1/1 0/0 .text            Draw__4dCcSFv */
void dCcS::Draw() {
    DrawAfter();
    DrawClear();
    mMass_Mng.Clear();
}

/* 8008730C-80087330 081C4C 0024+00 0/0 0/0 1/1 .text            MassClear__4dCcSFv */
void dCcS::MassClear() {
    mMass_Mng.Clear();
}

/* ############################################################################################## */
/* 803AC3A4-803AC3E4 0094C4 0040+00 1/1 0/0 0/0 .data            m_mtrl_hit_tbl__4dCcS */
SECTION_DATA u8 dCcS::m_mtrl_hit_tbl[64] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01,
};

/* 80087330-8008734C 081C70 001C+00 1/1 0/0 0/0 .text            ChkAtTgMtrlHit__4dCcSFUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dCcS::ChkAtTgMtrlHit(u8 param_0, u8 param_1) {
    nofralloc
#include "asm/d/cc/d_cc_s/ChkAtTgMtrlHit__4dCcSFUcUc.s"
}
#pragma pop

/* 8008734C-800873B0 081C8C 0064+00 1/0 0/0 0/0 .text
 * ChkNoHitGAtTg__4dCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool dCcS::ChkNoHitGAtTg(cCcD_GObjInf const* param_0, cCcD_GObjInf const* param_1,
                             cCcD_GStts* param_2, cCcD_GStts* param_3) {
    nofralloc
#include "asm/d/cc/d_cc_s/ChkNoHitGAtTg__4dCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts.s"
}
#pragma pop

/* ############################################################################################## */
/* 803AC3E4-803AC418 009504 0034+00 0/0 2/2 0/0 .data            __vt__4dCcS */
SECTION_DATA extern void* __vt__4dCcS[13] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CalcTgPlusDmg__4dCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts,
    (void*)SetPosCorrect__4dCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf,
    (void*)
        SetCoGObjInf__4dCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts,
    (void*)
        SetAtTgGObjInf__4dCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz,
    (void*)ChkNoHitGAtTg__4dCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts,
    (void*)
        ChkAtTgHitAfterCross__4dCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts,
    (void*)ChkNoHitGCo__4dCcSFP8cCcD_ObjP8cCcD_Obj,
    (void*)__dt__4dCcSFv,
    (void*)MoveAfterCheck__4dCcSFv,
    (void*)SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj,
    (void*)CalcParticleAngle__4dCcSFP12dCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP5csXyz,
};
