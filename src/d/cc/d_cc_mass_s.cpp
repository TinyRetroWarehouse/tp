//
// Generated By: dol2asm
// Translation Unit: d/cc/d_cc_mass_s
//

#include "d/cc/d_cc_mass_s.h"
#include "SSystem/SComponent/c_math.h"
#include "d/cc/d_cc_d.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

/* 800852E0-800852F0 07FC20 0010+00 1/1 0/0 0/0 .text
 * Set__12dCcMassS_ObjFP8cCcD_ObjUcPFP10fopAc_ac_cP4cXyzUl_v    */
void dCcMassS_Obj::Set(cCcD_Obj* obj, u8 priority, dCcMassS_ObjCallback callback) {
    mpObj = obj;
    mPriority = priority;
    mpCallback = callback;
}

/* 800852F0-80085334 07FC30 0044+00 1/1 0/0 0/0 .text            Clear__12dCcMassS_ObjFv */
void dCcMassS_Obj::Clear() {
    mpObj = NULL;
    mPriority = 5;
    mpCallback = NULL;
    mDivideInfo.Set(0, 0, 0);
}

/* 80085334-80085350 07FC74 001C+00 1/1 0/0 0/0 .text            ClearPointer__15dCcMassS_HitInfFv
 */
void dCcMassS_HitInf::ClearPointer() {
    mpArea = NULL;
    mpAtObj = NULL;
    mpCoObj = NULL;
    mCoHitLen = 0.0f;
}

/* 80085350-80085450 07FC90 0100+00 0/0 1/1 0/0 .text            __ct__12dCcMassS_MngFv */
dCcMassS_Mng::dCcMassS_Mng() {
    this->Ct();
}

/* 800855C8-800855E4 07FF08 001C+00 1/1 0/0 0/0 .text            __ct__12dCcMassS_ObjFv */
dCcMassS_Obj::dCcMassS_Obj() {}

/* 800855E4-80085630 07FF24 004C+00 1/1 1/1 0/0 .text            Ct__12dCcMassS_MngFv */
void dCcMassS_Mng::Ct() {
    field_0x202 = 0;
    mResultCam = 0;
    mCamTopPos.set(0, -1000000000.0f, 0);
    mCamBottomPos.set(0, -1000000000.0f, 0);
    this->Clear();
}

/* 80085630-80085690 07FF70 0060+00 0/0 0/0 2/2 .text            SetAttr__12dCcMassS_MngFffUcUc */
void dCcMassS_Mng::SetAttr(f32 param_0, f32 param_1, u8 param_2, u8 param_3) {
    mCylAttr.SetR(param_0);
    mCylAttr.SetH(param_1);
    field_0x200 = param_2;
    field_0x201 = param_3;
}

/* 80085690-800858AC 07FFD0 021C+00 0/0 1/1 1/1 .text            Prepare__12dCcMassS_MngFv */
void dCcMassS_Mng::Prepare() {
    cM3dGAab aab;
    aab.ClearForMinMax();
    for (dCcMassS_Obj* pObj = mMassObjs; pObj < mMassObjs + mMassObjCount; ++pObj) {
        cCcD_ShapeAttr* objShape = pObj->GetObj()->GetShapeAttr();
        objShape->CalcAabBox();
        aab.SetMinMax(objShape->GetWorkAab());
    }
    for (dCcMassS_Obj* pObj = mMassAreas; pObj < mMassAreas + mMassAreaCount; ++pObj) {
        cCcD_ShapeAttr* objShape = pObj->GetObj()->GetShapeAttr();
        objShape->CalcAabBox();
        aab.SetMinMax(objShape->GetWorkAab());
    }
    if (field_0x202 & 1) {
        mCpsAttr.CalcAabBox();
        aab.SetMinMax(mCpsAttr.GetWorkAab());
    }
    mDivideArea.SetArea(aab);
    for (dCcMassS_Obj* pObj = mMassObjs; pObj < mMassObjs + mMassObjCount; ++pObj) {
        cCcD_ShapeAttr* objShape = pObj->GetObj()->GetShapeAttr();
        cCcD_DivideInfo* divideInfo = &pObj->GetDivideInfo();
        mDivideArea.CalcDivideInfo(divideInfo, objShape->GetWorkAab(), 0);
    }
    for (dCcMassS_Obj* pObj = mMassAreas; pObj < mMassAreas + mMassAreaCount; ++pObj) {
        cCcD_ShapeAttr* objShape = pObj->GetObj()->GetShapeAttr();
        cCcD_DivideInfo* divideInfo = &pObj->GetDivideInfo();
        mDivideArea.CalcDivideInfo(divideInfo, objShape->GetWorkAab(), 0);
    }
    if (field_0x202 & 1) {
        mDivideArea.CalcDivideInfo(&mDivideInfo, mCpsAttr.GetWorkAab(), 0);
    }
    mCamTopPos.set(0, -1000000000.0f, 0);
    mCamTopDist = 1000000000.0f;
    mCamBottomPos.set(0, -1000000000.0f, 0);
    mCamBottomDist = 1000000000.0f;
}

/* 800858AC-80085CF0 0801EC 0444+00 0/0 0/0 2/2 .text
 * Chk__12dCcMassS_MngFP4cXyzPP10fopAc_ac_cP15dCcMassS_HitInf   */
u32 dCcMassS_Mng::Chk(cXyz* xyz, fopAc_ac_c** pActor, dCcMassS_HitInf* hitInf) {
    cCcD_DivideInfo divideInfo;
    u32 flagsMaybe = 0;
    *pActor = NULL;
    mCylAttr.SetC(*xyz);
    mCylAttr.CalcAabBox();
    mDivideArea.CalcDivideInfoOverArea(&divideInfo, mCylAttr.GetWorkAab());
    hitInf->ClearPointer();
    if (field_0x200 & 8) {
        for (dCcMassS_Obj* massObj = mMassAreas; massObj < mMassAreas + mMassAreaCount; ++massObj) {
            if (massObj->GetDivideInfo().Chk(divideInfo)) {
                cCcD_Obj* obj = massObj->GetObj();
                cCcD_ShapeAttr* objShape = obj->GetShapeAttr();
                f32 f;
                if (obj->ChkCoSet() && mCylAttr.CrossCo(*objShape, &f)) {
                    flagsMaybe |= 4;
                    *pActor = obj->GetStts()->GetAc();
                    if (hitInf != NULL) {
                        hitInf->SetAreaHitObj(obj);
                    }
                    if (massObj->GetCallback() != NULL) {
                        massObj->GetCallback()(obj->GetStts()->GetAc(), xyz, field_0x201);
                    }
                }
            }
        }
    }
    for (dCcMassS_Obj* massObj = mMassObjs; massObj < mMassObjs + mMassObjCount; ++massObj) {
        if (massObj->GetDivideInfo().Chk(divideInfo)) {
            cCcD_Obj* obj = massObj->GetObj();
            dCcD_GObjInf* gobjInf = (dCcD_GObjInf*)obj->GetGObjInf();
            cCcD_ShapeAttr* objShape = obj->GetShapeAttr();
            cXyz unusedVec;
            if (obj->ChkAtSet() && !gobjInf->ChkAtNoMass() &&
                mCylAttr.CrossAtTg(*objShape, &unusedVec) && (field_0x200 & 1)) {
                flagsMaybe |= 1;
                *pActor = obj->GetStts()->GetAc();
                if (hitInf != NULL) {
                    hitInf->SetAtHitObj(obj);
                }
            }
            f32 f;
            if (obj->ChkCoSet() && mCylAttr.CrossCo(*objShape, &f) && (field_0x200 & 2)) {
                flagsMaybe |= 2;
                *pActor = obj->GetStts()->GetAc();
                if (field_0x200 & 0x10) {
                    Vec vec;
                    PSVECSubtract(&(*pActor)->mCurrent.mPosition, xyz, &vec);
                    vec.y = 0;
                    f32 vecMag = PSVECMag(&vec);
                    if (cM3d_IsZero(vecMag)) {
                        vec.x = 1;
                    } else {
                        PSVECScale(&vec, &vec, f / vecMag);
                    }
                    obj->GetStts()->PlusCcMove(vec.x, vec.y, vec.z);
                }
                if (hitInf != NULL) {
                    hitInf->SetCoHitObj(obj);
                    hitInf->SetCoHitLen(f);
                }
            }
        }
    }
    f32 f;
    if ((field_0x202 & 1) && mDivideInfo.Chk(divideInfo) && mCylAttr.CrossCo(mCpsAttr, &f)) {
        mResultCam |= 1;
        mResultCam |= 1 << (field_0x201 + 1);
        if ((mResultCam & 2) || (mResultCam & 8)) {
            cXyz tmpVec;
            f32 plusH = xyz->y + mCylAttr.GetH();
            tmpVec.x = xyz->x;
            tmpVec.y = plusH;
            tmpVec.z = xyz->z;
            if (mCamTopPos.y < (20.0f + plusH)) {
                f32 newCamTopDist = PSVECSquareDistance(&tmpVec, &mCpsAttr.GetStartP());
                if (mCamTopDist > newCamTopDist) {
                    mCamTopDist = newCamTopDist;
                    mCamTopPos = tmpVec;
                }
            }
            if (mCamBottomPos.y < (20.0f + plusH)) {
                f32 newCamBottomDist = PSVECSquareDistance(&tmpVec, &mCpsAttr.GetEndP());
                if (mCamBottomDist > newCamBottomDist) {
                    mCamBottomDist = newCamBottomDist;
                    mCamBottomPos = tmpVec;
                }
            }
        }
    }
    return flagsMaybe;
}

/* 80085CF0-80085D98 080630 00A8+00 1/1 2/2 0/0 .text            Clear__12dCcMassS_MngFv */
void dCcMassS_Mng::Clear() {
    mMassObjCount = 0;
    mMassAreaCount = 0;
    for (int i = 0; i < (s32)ARRAY_SIZE(mMassObjs); ++i) {
        mMassObjs[i].Clear();
    }
    for (int i = 0; i < (s32)ARRAY_SIZE(mMassAreas); ++i) {
        mMassAreas[i].Clear();
    }
    mCylAttr.SetR(0.0f);
    mCylAttr.SetH(0.0f);
    field_0x200 = 0;
    field_0x201 = 4;
}

/* 80085D98-80085E6C 0806D8 00D4+00 0/0 4/4 7/7 .text            Set__12dCcMassS_MngFP8cCcD_ObjUc */
void dCcMassS_Mng::Set(cCcD_Obj* obj, u8 priority) {
    if (mMassObjCount >= (s32)ARRAY_SIZE(mMassObjs)) {
        for (int i = 0; i < (s32)ARRAY_SIZE(mMassObjs); ++i) {
            int prevPrio = mMassObjs[i].GetPriority();
            if (prevPrio > priority || (prevPrio == priority && cM_rndF(1.0f) < 0.5f)) {
                mMassObjs[i].Set(obj, priority, NULL);
                break;
            }
        }
    } else {
        mMassObjs[mMassObjCount].Set(obj, priority, NULL);
        mMassObjCount++;
    }
}

/* 80085E6C-80085EB0 0807AC 0044+00 0/0 1/1 0/0 .text            SetCam__12dCcMassS_MngFRC8cM3dGCps
 */
void dCcMassS_Mng::SetCam(cM3dGCps const& cps) {
    mCpsAttr.SetCps(cps);
    field_0x202 |= 1;
    mResultCam = 0;
}

/* 80085EB0-80085EB8 0807F0 0008+00 0/0 1/1 0/0 .text            GetResultCam__12dCcMassS_MngCFv */
u8 dCcMassS_Mng::GetResultCam() const {
    return mResultCam;
}

/* 80085EB8-80085ED4 0807F8 001C+00 0/0 1/1 0/0 .text            GetCamTopPos__12dCcMassS_MngFP3Vec
 */
void dCcMassS_Mng::GetCamTopPos(Vec* out) {
    *out = mCamTopPos;
}
