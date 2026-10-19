/* Address-pinned x86 body backed by fresh REA and XBE/candidate byte checks.
 * Semantic allocator/alignment implementation is preserved separately. */
__declspec(naked) unsigned int __cdecl sub_000865B0(void) { __asm {
 /* 000865b0: mov eax, dword ptr [esp + 8] */
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x08;
 /* 000865b4: mov ecx, dword ptr [esp + 4] */
 __emit 0x8B;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 /* 000865b8: push eax */
 __emit 0x50;
 /* 000865b9: add ecx, 8 */
 __emit 0x83;
 __emit 0xC1;
 __emit 0x08;
 /* 000865bc: push ecx */
 __emit 0x51;
 /* 000865bd: call 0x86590   -> sub_00086590 */
 __emit 0xE8;
 __emit 0xCE;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
 /* 000865c2: mov ecx, eax */
 __emit 0x8B;
 __emit 0xC8;
 /* 000865c4: add esp, 8 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x08;
 /* 000865c7: test ecx, ecx */
 __emit 0x85;
 __emit 0xC9;
 /* 000865c9: jbe 0x865d8 */
 __emit 0x76;
 __emit 0x0D;
 /* 000865cb: lea eax, [ecx + 8] */
 __emit 0x8D;
 __emit 0x41;
 __emit 0x08;
 /* 000865ce: shr eax, 3 */
 __emit 0xC1;
 __emit 0xE8;
 __emit 0x03;
 /* 000865d1: shl eax, 3 */
 __emit 0xC1;
 __emit 0xE0;
 __emit 0x03;
 /* 000865d4: mov dword ptr [eax - 4], ecx */
 __emit 0x89;
 __emit 0x48;
 __emit 0xFC;
 /* 000865d7: ret */
 __emit 0xC3;
 /* 000865d8: xor eax, eax */
 __emit 0x33;
 __emit 0xC0;
 /* 000865da: ret */
 __emit 0xC3;
} }
