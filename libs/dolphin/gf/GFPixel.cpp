//
// Generated By: dol2asm
// Translation Unit: GFPixel
//

#include "dolphin/gf/GFPixel.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct _GXLogicOp {};

struct _GXFogType {};

struct _GXCompare {};

struct _GXColor {};

struct _GXBlendMode {};

struct _GXBlendFactor {};

//
// Forward References:
//

extern "C" void GFSetFog__F10_GXFogTypeffff8_GXColor();
extern "C" void
GFSetBlendModeEtc__F12_GXBlendMode14_GXBlendFactor14_GXBlendFactor10_GXLogicOpUcUcUc();
extern "C" void GFSetZMode__FUc10_GXCompareUc();

//
// External References:
//

extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();

//
// Declarations:
//

/* ############################################################################################## */
/* 80455F68-80455F6C 004568 0004+00 1/1 0/0 0/0 .sdata2          @293 */
SECTION_SDATA2 static u8 lit_293[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455F6C-80455F70 00456C 0004+00 1/1 0/0 0/0 .sdata2          @294 */
SECTION_SDATA2 static f32 lit_294 = 0.5f;

/* 80455F70-80455F78 004570 0008+00 1/1 0/0 0/0 .sdata2          @295 */
SECTION_SDATA2 static f64 lit_295 = 1.0;

/* 80455F78-80455F80 004578 0004+04 1/1 0/0 0/0 .sdata2          @296 */
SECTION_SDATA2 static f32 lit_296[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80455F80-80455F88 004580 0008+00 1/1 0/0 0/0 .sdata2          @297 */
SECTION_SDATA2 static f64 lit_297 = 0.5;

/* 80455F88-80455F90 004588 0004+04 1/1 0/0 0/0 .sdata2          @298 */
SECTION_SDATA2 static f32 lit_298[1 + 1 /* padding */] = {
    8388638.0f,
    /* padding */
    0.0f,
};

/* 80455F90-80455F98 004590 0008+00 1/1 0/0 0/0 .sdata2          @301 */
SECTION_SDATA2 static f64 lit_301 = 4503601774854144.0 /* cast s32 to float */;

/* 802CDE9C-802CE004 2C87DC 0168+00 0/0 1/1 0/0 .text GFSetFog__F10_GXFogTypeffff8_GXColor */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GFSetFog(_GXFogType param_0, f32 param_1, f32 param_2, f32 param_3, f32 param_4,
                  _GXColor param_5) {
    nofralloc
#include "asm/dolphin/gf/GFPixel/GFSetFog__F10_GXFogTypeffff8_GXColor.s"
}
#pragma pop

/* 802CE004-802CE0A4 2C8944 00A0+00 0/0 1/1 0/0 .text
 * GFSetBlendModeEtc__F12_GXBlendMode14_GXBlendFactor14_GXBlendFactor10_GXLogicOpUcUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GFSetBlendModeEtc(_GXBlendMode param_0, _GXBlendFactor param_1, _GXBlendFactor param_2,
                           _GXLogicOp param_3, u8 param_4, u8 param_5, u8 param_6) {
    nofralloc
#include "asm/dolphin/gf/GFPixel/GFSetBlendModeEtc__F12_GXBlendMode14_GXBlendFactor14_GXBlendFactor10_GXLogicOpUcUcUc.s"
}
#pragma pop

/* 802CE0A4-802CE0D0 2C89E4 002C+00 0/0 1/1 0/0 .text            GFSetZMode__FUc10_GXCompareUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GFSetZMode(u8 param_0, _GXCompare param_1, u8 param_2) {
    nofralloc
#include "asm/dolphin/gf/GFPixel/GFSetZMode__FUc10_GXCompareUc.s"
}
#pragma pop
