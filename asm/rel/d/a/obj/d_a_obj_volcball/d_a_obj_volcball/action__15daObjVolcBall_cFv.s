lbl_80D22484:
/* 80D22484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D22488  7C 08 02 A6 */	mflr r0
/* 80D2248C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D22490  3C 80 80 D2 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80D23E8C@ha */
/* 80D22494  38 84 3E 8C */	addi r4, r4, cNullVec__6Z2Calc@l /* 0x80D23E8C@l */
/* 80D22498  3C A0 80 D2 */	lis r5, data_80D24100@ha /* 0x80D24100@ha */
/* 80D2249C  38 E5 41 00 */	addi r7, r5, data_80D24100@l /* 0x80D24100@l */
/* 80D224A0  88 07 00 00 */	lbz r0, 0(r7)
/* 80D224A4  7C 00 07 75 */	extsb. r0, r0
/* 80D224A8  40 82 00 A0 */	bne lbl_80D22548
/* 80D224AC  80 A4 00 CC */	lwz r5, 0xcc(r4)
/* 80D224B0  80 04 00 D0 */	lwz r0, 0xd0(r4)
/* 80D224B4  90 A4 01 14 */	stw r5, 0x114(r4)
/* 80D224B8  90 04 01 18 */	stw r0, 0x118(r4)
/* 80D224BC  80 04 00 D4 */	lwz r0, 0xd4(r4)
/* 80D224C0  90 04 01 1C */	stw r0, 0x11c(r4)
/* 80D224C4  38 C4 01 14 */	addi r6, r4, 0x114
/* 80D224C8  80 A4 00 D8 */	lwz r5, 0xd8(r4)
/* 80D224CC  80 04 00 DC */	lwz r0, 0xdc(r4)
/* 80D224D0  90 A6 00 0C */	stw r5, 0xc(r6)
/* 80D224D4  90 06 00 10 */	stw r0, 0x10(r6)
/* 80D224D8  80 04 00 E0 */	lwz r0, 0xe0(r4)
/* 80D224DC  90 06 00 14 */	stw r0, 0x14(r6)
/* 80D224E0  80 A4 00 E4 */	lwz r5, 0xe4(r4)
/* 80D224E4  80 04 00 E8 */	lwz r0, 0xe8(r4)
/* 80D224E8  90 A6 00 18 */	stw r5, 0x18(r6)
/* 80D224EC  90 06 00 1C */	stw r0, 0x1c(r6)
/* 80D224F0  80 04 00 EC */	lwz r0, 0xec(r4)
/* 80D224F4  90 06 00 20 */	stw r0, 0x20(r6)
/* 80D224F8  80 A4 00 F0 */	lwz r5, 0xf0(r4)
/* 80D224FC  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 80D22500  90 A6 00 24 */	stw r5, 0x24(r6)
/* 80D22504  90 06 00 28 */	stw r0, 0x28(r6)
/* 80D22508  80 04 00 F8 */	lwz r0, 0xf8(r4)
/* 80D2250C  90 06 00 2C */	stw r0, 0x2c(r6)
/* 80D22510  80 A4 00 FC */	lwz r5, 0xfc(r4)
/* 80D22514  80 04 01 00 */	lwz r0, 0x100(r4)
/* 80D22518  90 A6 00 30 */	stw r5, 0x30(r6)
/* 80D2251C  90 06 00 34 */	stw r0, 0x34(r6)
/* 80D22520  80 04 01 04 */	lwz r0, 0x104(r4)
/* 80D22524  90 06 00 38 */	stw r0, 0x38(r6)
/* 80D22528  80 A4 01 08 */	lwz r5, 0x108(r4)
/* 80D2252C  80 04 01 0C */	lwz r0, 0x10c(r4)
/* 80D22530  90 A6 00 3C */	stw r5, 0x3c(r6)
/* 80D22534  90 06 00 40 */	stw r0, 0x40(r6)
/* 80D22538  80 04 01 10 */	lwz r0, 0x110(r4)
/* 80D2253C  90 06 00 44 */	stw r0, 0x44(r6)
/* 80D22540  38 00 00 01 */	li r0, 1
/* 80D22544  98 07 00 00 */	stb r0, 0(r7)
lbl_80D22548:
/* 80D22548  88 03 06 01 */	lbz r0, 0x601(r3)
/* 80D2254C  1C 00 00 0C */	mulli r0, r0, 0xc
/* 80D22550  39 84 01 14 */	addi r12, r4, 0x114
/* 80D22554  7D 8C 02 14 */	add r12, r12, r0
/* 80D22558  4B 63 FB 2D */	bl __ptmf_scall
/* 80D2255C  60 00 00 00 */	nop 
/* 80D22560  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D22564  7C 08 03 A6 */	mtlr r0
/* 80D22568  38 21 00 10 */	addi r1, r1, 0x10
/* 80D2256C  4E 80 00 20 */	blr 
