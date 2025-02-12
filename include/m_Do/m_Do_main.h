#ifndef M_DO_M_DO_MAIN_H
#define M_DO_M_DO_MAIN_H

#include "JSystem/JKernel/JKRExpHeap.h"
#include "dolphin/dvd/dvd.h"
#include "dolphin/types.h"

void version_check();
void* LOAD_COPYDATE(void*);

class HeapCheck {
public:
    // needed for sinit
    /* HeapCheck(JKRExpHeap* heap, const char* name, const char* jName) {
        mName = name;
        mJName = jName;
        setHeap(heap);
        mMaxTotalUsedSize = 0;
        mMaxTotalFreeSize = 0;
        field_0x14 = 0;
        field_0x18 = 0;
        mTargetHeapSize = 0;
        mUsedCount = 0;
        mTotalUsedSize = 0;
    } */

    void CheckHeap1(void);
    s32 getUsedCount(void) const;
    void heapDisplay(void) const;

    u32& getUsedCountRef() { return mUsedCount; }
    u32& getTotalUsedSizeRef() { return mTotalUsedSize; }
    JKRExpHeap* getHeap() { return mHeap; }
    void setHeap(JKRExpHeap* i_heap) { mHeap = i_heap; }
    void setHeapSize(u32 i_size) { mTargetHeapSize = i_size; }
    s32 getMaxTotalUsedSize() { return mMaxTotalUsedSize; }
    s32 getMaxTotalFreeSize() { return mMaxTotalFreeSize; }
    const char* getName() const { return mName; }
    void saveRelBase() {
        mUsedCount = getUsedCount();
        mTotalUsedSize = mHeap->getTotalUsedSize();
    }

    u32 getRelUsedCount() const { return getUsedCount() - mUsedCount; }
    u32 getRelTotalUsedSize() const { return mHeap->getTotalUsedSize() - mTotalUsedSize; }

private:
    /* 0x00 */ const char* mName;
    /* 0x04 */ const char* mJName;
    /* 0x08 */ JKRExpHeap* mHeap;
    /* 0x0C */ s32 mMaxTotalUsedSize;
    /* 0x10 */ s32 mMaxTotalFreeSize;
    /* 0x14 */ s32 field_0x14;
    /* 0x18 */ s32 field_0x18;
    /* 0x1C */ u32 mTargetHeapSize;
    /* 0x20 */ u32 mUsedCount;
    /* 0x24 */ u32 mTotalUsedSize;
};

struct mDoMain {
    static char COPYDATE_STRING[18];
    static u32 memMargin;
    static u8 mHeapBriefType;
    static OSTime sPowerOnTime;
    static OSTime sHungUpTime;
};

extern s8 data_80450580;  // Debug enabled

extern bool sOSReportDisabled;
extern bool data_80450B99;
extern bool data_80450B9A;
extern bool data_80450B9B;
extern bool sOSReportForceEnable;

#endif /* M_DO_M_DO_MAIN_H */
