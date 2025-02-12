#ifndef Z2WOLFHOWLMGR_H
#define Z2WOLFHOWLMGR_H

#include "Z2AudioLib/Z2SoundObject.h"
#include "dolphin/types.h"

/*
 * Z2WolfHowlData
 * mLineNum: Number of lines/points within the song
 * mSongData: u16 array which corresponds to each line/point
 *
 * The high byte of each u16 line corresponds to bar type (low, middle, high)
 * The low byte of each u16 line corresponds to length of note
 */
struct Z2WolfHowlData {
    u8 mLineNum;
    u16* mSongData;
};

class Z2WolfHowlMgr {
public:
    Z2WolfHowlMgr();

    void resetState();
    void calcVolumeMod(f32);
    void getNowPitch();
    void getNowInputValue();
    void calcPitchMod(f32, f32);
    void startWolfHowlSound(f32, f32, bool, f32);
    void setCorrectData(s8, Z2WolfHowlData*);
    void getCorrectLine(u8);
    void getCorrectLineNum();
    void checkLine();
    void getOnLineNum();
    void startWindStoneSound(s8, Vec*);
    void startGuideMelody(bool);
    void skipCorrectDemo();

private:
    /* 0x00 */ JAISoundHandle* field_0x00;
    /* 0x04 */ JAISoundHandle* field_0x04;
    /* 0x08 */ JAISoundHandle* field_0x08;
    /* 0x0C */ Z2WolfHowlData* mpCurSong;
    /* 0x10 */ Z2WolfHowlData** mpSongList;
    /* 0x14 */ f32 mNowInputValue;
    /* 0x18 */ f32 field_0x18;
    /* 0x1C */ f32 field_0x1c;
    /* 0x20 */ f32 field_0x20;
    /* 0x24 */ f32 field_0x24;
    /* 0x28 */ f32 field_0x28;
    /* 0x2C */ u8 field_0x2c[4];
    /* 0x30 */ f32 field_0x30;
    /* 0x34 */ f32 field_0x34;
    /* 0x38 */ f32 field_0x38;
    /* 0x3C */ f32 field_0x3c;
    /* 0x40 */ f32 field_0x40;
    /* 0x44 */ f32 field_0x44;
    /* 0x48 */ f32 field_0x48;
    /* 0x4C */ f32 field_0x4c;
    /* 0x50 */ f32 field_0x50;
    /* 0x54 */ f32 field_0x54;
    /* 0x58 */ f32 field_0x58;
    /* 0x5C */ f32 field_0x5c;
    /* 0x60 */ f32 field_0x60;
    /* 0x64 */ f32 field_0x64;
    /* 0x68 */ f32 field_0x68;
    /* 0x6C */ f32 field_0x6c;
    /* 0x70 */ f32 field_0x70;
    /* 0x74 */ f32 field_0x74;
    /* 0x78 */ f32 field_0x78;
    /* 0x7C */ f32 field_0x7c;
    /* 0x80 */ f32 field_0x80;
    /* 0x84 */ f32 field_0x84;
    /* 0x88 */ void* mTimer;
    /* 0x8C */ u8 mReleaseTimer;
    /* 0x8D */ u8 field_0x8d;
    /* 0x8E */ u8 mCorrectCurveID;
    /* 0x8F */ u8 field_0x8f;
    /* 0x90 */ s16 field_0x90;
    /* 0x92 */ u8 field_0x92[20];
    /* 0xA6 */ u8 field_0xa6[0x14];
    /* 0xBA */ u8 field_0xba;
    /* 0xBB */ u8 field_0xbb;
    /* 0xBC */ u8 field_0xbc;
};

#endif /* Z2WOLFHOWLMGR_H */
