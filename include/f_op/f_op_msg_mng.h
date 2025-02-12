#ifndef F_F_OP_MSG_MNG_H_
#define F_F_OP_MSG_MNG_H_

#include "d/msg/d_msg_class.h"
#include "dolphin/types.h"
#include "f_op/f_op_actor.h"

struct fopMsg_prm_class {
    /* 0x00 */ fopAc_ac_c* field_0x0;
    /* 0x04 */ cXyz field_0x4;
    /* 0x10 */ u32 field_0x10;
    /* 0x14 */ u32 field_0x14;
    /* 0x18 */ int field_0x18;
};  // Size: 0x1C

struct fopMsg_prm_timer {
    /* 0x00 */ int field_0x0;
    /* 0x04 */ cXyz field_0x4;
    /* 0x10 */ int field_0x10;
    /* 0x14 */ int field_0x14;
    /* 0x18 */ u32 field_0x18;
    /* 0x1C */ int field_0x1c;
    /* 0x20 */ u32 field_0x20;
    /* 0x24 */ u8 field_0x24;
    /* 0x25 */ u8 field_0x25;
    /* 0x28 */ f32 field_0x28;
    /* 0x2C */ f32 field_0x2c;
    /* 0x30 */ f32 field_0x30;
    /* 0x34 */ f32 field_0x34;
};  // Size: 0x38

typedef int (*fopMsgCreateFunc)(void*);

JKRExpHeap* fopMsgM_createExpHeap(u32, JKRHeap*);
u32 fopMsgM_Create(s16, fopMsgCreateFunc, void*);
void fopMsgM_setMessageID(unsigned int);
void fopMsgM_destroyExpHeap(JKRExpHeap*);
s32 fopMsgM_setStageLayer(void*);
void fopMsgM_messageSetDemo(u32 param_0);
msg_class* fopMsgM_SearchByID(unsigned int param_0);
char* fopMsgM_messageGet(char* msg, u32 string_id);

#endif