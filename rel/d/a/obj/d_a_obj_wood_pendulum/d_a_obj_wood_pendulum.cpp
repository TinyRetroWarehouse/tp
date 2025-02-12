//
// Generated By: dol2asm
// Translation Unit: d_a_obj_wood_pendulum
//

#include "rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct cXyz {};

struct mDoMtx_stack_c {
    /* 8000CD64 */ void transS(cXyz const&);

    static u8 now[48];
};

struct fopAc_ac_c {
    /* 80018B64 */ fopAc_ac_c();
};

struct daObjWPndlm_c {
    /* 80D39418 */ void initBaseMtx();
    /* 80D39454 */ void setBaseMtx();
    /* 80D394CC */ void Create();
    /* 80D395C8 */ void CreateHeap();
    /* 80D39638 */ void create();
    /* 80D39978 */ void execute();
    /* 80D39B68 */ void draw();
    /* 80D39BCC */ void _delete();
};

struct dKy_tevstr_c {};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dCcD_Stts {
    /* 80083860 */ void Init(int, int, fopAc_ac_c*);
};

struct dCcD_SrcSph {};

struct dCcD_Sph {
    /* 80084A34 */ void Set(dCcD_SrcSph const&);
    /* 80D39798 */ dCcD_Sph();
    /* 80D3981C */ ~dCcD_Sph();
};

struct dCcD_GStts {
    /* 80083760 */ dCcD_GStts();
};

struct dCcD_GObjInf {
    /* 80083A28 */ dCcD_GObjInf();
    /* 800840E4 */ ~dCcD_GObjInf();
};

struct cM3dGSph {
    /* 8026F648 */ void SetC(cXyz const&);
    /* 80D398E8 */ ~cM3dGSph();
};

struct cM3dGAab {
    /* 80D39930 */ ~cM3dGAab();
};

struct cCcD_Obj {};

struct cCcS {
    /* 80264BA8 */ void Set(cCcD_Obj*);
};

struct J3DModel {};

//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__13daObjWPndlm_cFv();
extern "C" void setBaseMtx__13daObjWPndlm_cFv();
extern "C" void Create__13daObjWPndlm_cFv();
extern "C" void CreateHeap__13daObjWPndlm_cFv();
extern "C" void create__13daObjWPndlm_cFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void execute__13daObjWPndlm_cFv();
extern "C" void draw__13daObjWPndlm_cFv();
extern "C" void _delete__13daObjWPndlm_cFv();
extern "C" static void daObjWPndlm_Draw__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Execute__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Delete__FP13daObjWPndlm_c();
extern "C" static void daObjWPndlm_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_obj_wood_pendulum__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void __dl__FPv();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];

//
// Declarations:
//

/* 80D393F8-80D39418 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void CheckCreateHeap(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D39418-80D39454 000098 003C+00 1/1 0/0 0/0 .text            initBaseMtx__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/initBaseMtx__13daObjWPndlm_cFv.s"
}
#pragma pop

/* 80D39454-80D394CC 0000D4 0078+00 2/2 0/0 0/0 .text            setBaseMtx__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/setBaseMtx__13daObjWPndlm_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D39C88-80D39CC8 000000 0040+00 2/2 0/0 0/0 .rodata          l_sph_src */
SECTION_RODATA static u8 const l_sph_src[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x16, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39C88, &l_sph_src);

/* 80D39CC8-80D39D08 000040 0040+00 0/1 0/0 0/0 .rodata          l_sph_src2 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_sph_src2[64] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C,
    0xD8, 0xFA, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xF0, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39CC8, &l_sph_src2);
#pragma pop

/* 80D39D08-80D39D10 000080 0004+04 0/1 0/0 0/0 .rodata          @3672 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3672[1 + 1 /* padding */] = {
    0x43360B61,
    /* padding */
    0x00000000,
};
COMPILER_STRIP_GATE(0x80D39D08, &lit_3672);
#pragma pop

/* 80D39D10-80D39D18 000088 0008+00 0/1 0/0 0/0 .rodata          @3674 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3674[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39D10, &lit_3674);
#pragma pop

/* 80D394CC-80D395C8 00014C 00FC+00 1/1 0/0 0/0 .text            Create__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/Create__13daObjWPndlm_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D39D38-80D39D38 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D39D38 = "A_Turuki";
#pragma pop

/* 80D39D44-80D39D48 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_wood_pendulum__stringBase0;

/* 80D395C8-80D39638 000248 0070+00 1/1 0/0 0/0 .text            CreateHeap__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/CreateHeap__13daObjWPndlm_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D39D48-80D39D68 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjWPndlm_Method */
SECTION_DATA static void* l_daObjWPndlm_Method[8] = {
    (void*)daObjWPndlm_Create__FP10fopAc_ac_c,
    (void*)daObjWPndlm_Delete__FP13daObjWPndlm_c,
    (void*)daObjWPndlm_Execute__FP13daObjWPndlm_c,
    (void*)NULL,
    (void*)daObjWPndlm_Draw__FP13daObjWPndlm_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D39D68-80D39D98 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_WoodPendulum */
SECTION_DATA extern void* g_profile_Obj_WoodPendulum[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01640000, (void*)&g_fpcLf_Method,
    (void*)0x00000960, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00FD0000, (void*)&l_daObjWPndlm_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80D39D98-80D39DA4 000054 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80D39DA4-80D39DB0 000060 000C+00 4/4 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D39638-80D39798 0002B8 0160+00 1/1 0/0 0/0 .text            create__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/func_80D39638.s"
}
#pragma pop

/* 80D39798-80D3981C 000418 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/__ct__8dCcD_SphFv.s"
}
#pragma pop

/* 80D3981C-80D398E8 00049C 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_SphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dCcD_Sph::~dCcD_Sph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/__dt__8dCcD_SphFv.s"
}
#pragma pop

/* 80D398E8-80D39930 000568 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGSph::~cM3dGSph() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/__dt__8cM3dGSphFv.s"
}
#pragma pop

/* 80D39930-80D39978 0005B0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm cM3dGAab::~cM3dGAab() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80D39D18-80D39D30 000090 0018+00 0/0 0/0 0/0 .rodata          @3826 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3826[24] = {
    0xC2, 0x70, 0x00, 0x00, 0xC4, 0x8C, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
    0x42, 0xA0, 0x00, 0x00, 0xC4, 0x99, 0xC0, 0x00, 0xC2, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D39D18, &lit_3826);
#pragma pop

/* 80D39D30-80D39D34 0000A8 0004+00 0/1 0/0 0/0 .rodata          @3860 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3860[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D39D30, &lit_3860);
#pragma pop

/* 80D39D34-80D39D38 0000AC 0004+00 0/1 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3861 = -1200.0f;
COMPILER_STRIP_GATE(0x80D39D34, &lit_3861);
#pragma pop

/* 80D39978-80D39B68 0005F8 01F0+00 1/1 0/0 0/0 .text            execute__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/execute__13daObjWPndlm_cFv.s"
}
#pragma pop

/* 80D39B68-80D39BCC 0007E8 0064+00 1/1 0/0 0/0 .text            draw__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/draw__13daObjWPndlm_cFv.s"
}
#pragma pop

/* 80D39BCC-80D39C00 00084C 0034+00 1/1 0/0 0/0 .text            _delete__13daObjWPndlm_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjWPndlm_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/_delete__13daObjWPndlm_cFv.s"
}
#pragma pop

/* 80D39C00-80D39C20 000880 0020+00 1/0 0/0 0/0 .text            daObjWPndlm_Draw__FP13daObjWPndlm_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWPndlm_Draw(daObjWPndlm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/daObjWPndlm_Draw__FP13daObjWPndlm_c.s"
}
#pragma pop

/* 80D39C20-80D39C40 0008A0 0020+00 1/0 0/0 0/0 .text daObjWPndlm_Execute__FP13daObjWPndlm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWPndlm_Execute(daObjWPndlm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/daObjWPndlm_Execute__FP13daObjWPndlm_c.s"
}
#pragma pop

/* 80D39C40-80D39C60 0008C0 0020+00 1/0 0/0 0/0 .text daObjWPndlm_Delete__FP13daObjWPndlm_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWPndlm_Delete(daObjWPndlm_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/daObjWPndlm_Delete__FP13daObjWPndlm_c.s"
}
#pragma pop

/* 80D39C60-80D39C80 0008E0 0020+00 1/0 0/0 0/0 .text            daObjWPndlm_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daObjWPndlm_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_wood_pendulum/d_a_obj_wood_pendulum/daObjWPndlm_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80D39D38-80D39D38 0000B0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
