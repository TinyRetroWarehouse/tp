lbl_803256C4:
/* 803256C4  E0 44 00 00 */	psq_l f2, 0(r4), 0, 0 /* qr0 */
/* 803256C8  E0 24 00 08 */	psq_l f1, 8(r4), 0, 0 /* qr0 */
/* 803256CC  E0 04 00 10 */	psq_l f0, 16(r4), 0, 0 /* qr0 */
/* 803256D0  F0 43 00 00 */	psq_st f2, 0(r3), 0, 0 /* qr0 */
/* 803256D4  F0 23 00 08 */	psq_st f1, 8(r3), 0, 0 /* qr0 */
/* 803256D8  F0 03 00 10 */	psq_st f0, 16(r3), 0, 0 /* qr0 */
/* 803256DC  88 04 00 18 */	lbz r0, 0x18(r4)
/* 803256E0  98 03 00 18 */	stb r0, 0x18(r3)
/* 803256E4  88 04 00 19 */	lbz r0, 0x19(r4)
/* 803256E8  98 03 00 19 */	stb r0, 0x19(r3)
/* 803256EC  88 04 00 1A */	lbz r0, 0x1a(r4)
/* 803256F0  98 03 00 1A */	stb r0, 0x1a(r3)
/* 803256F4  88 04 00 1B */	lbz r0, 0x1b(r4)
/* 803256F8  98 03 00 1B */	stb r0, 0x1b(r3)
/* 803256FC  E0 44 00 1C */	psq_l f2, 28(r4), 0, 0 /* qr0 */
/* 80325700  E0 24 00 24 */	psq_l f1, 36(r4), 0, 0 /* qr0 */
/* 80325704  E0 04 00 2C */	psq_l f0, 44(r4), 0, 0 /* qr0 */
/* 80325708  F0 43 00 1C */	psq_st f2, 28(r3), 0, 0 /* qr0 */
/* 8032570C  F0 23 00 24 */	psq_st f1, 36(r3), 0, 0 /* qr0 */
/* 80325710  F0 03 00 2C */	psq_st f0, 44(r3), 0, 0 /* qr0 */
/* 80325714  4E 80 00 20 */	blr 
