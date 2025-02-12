//
// Generated By: dol2asm
// Translation Unit: AmcExi2Stubs
//

#include "amcstubs/AmcExi2Stubs.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void EXI2_Init();
extern "C" void EXI2_EnableInterrupts();
extern "C" bool EXI2_Poll();
extern "C" bool EXI2_ReadN();
extern "C" bool EXI2_WriteN();
extern "C" void EXI2_Reserve();
extern "C" void EXI2_Unreserve();
extern "C" bool AMC_IsStub();

//
// External References:
//

//
// Declarations:
//

/* 80372CFC-80372D00 36D63C 0004+00 0/0 1/1 0/0 .text            EXI2_Init */
void EXI2_Init() {
    /* empty function */
}

/* 80372D00-80372D04 36D640 0004+00 0/0 1/1 0/0 .text            EXI2_EnableInterrupts */
void EXI2_EnableInterrupts() {
    /* empty function */
}

/* 80372D04-80372D0C 36D644 0008+00 0/0 2/2 0/0 .text            EXI2_Poll */
bool EXI2_Poll() {
    return false;
}

/* 80372D0C-80372D14 36D64C 0008+00 0/0 2/2 0/0 .text            EXI2_ReadN */
bool EXI2_ReadN() {
    return false;
}

/* 80372D14-80372D1C 36D654 0008+00 0/0 1/1 0/0 .text            EXI2_WriteN */
bool EXI2_WriteN() {
    return false;
}

/* 80372D1C-80372D20 36D65C 0004+00 0/0 1/1 0/0 .text            EXI2_Reserve */
void EXI2_Reserve() {
    /* empty function */
}

/* 80372D20-80372D24 36D660 0004+00 0/0 1/1 0/0 .text            EXI2_Unreserve */
void EXI2_Unreserve() {
    /* empty function */
}

/* 80372D24-80372D2C 36D664 0008+00 0/0 1/1 0/0 .text            AMC_IsStub */
bool AMC_IsStub() {
    return true;
}
