/* Address-pinned x86 tail-dispatch body backed by fresh REA and byte comparisons.
 * Semantic adapter preserved separately; final target in [0x2C28C4] is runtime-dependent. */
__declspec(naked) void __cdecl sub_00086590(void) { __asm {
 /* 00086590: mov ecx, dword ptr [esp + 4] */
 __emit 0x8B;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 /* 00086594: add ecx, 8 */
 __emit 0x83;
 __emit 0xC1;
 __emit 0x08;
 /* 00086597: mov dword ptr [esp + 4], ecx */
 __emit 0x89;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 /* 0008659b: jmp dword ptr [0x2c28c4] */
 __emit 0xFF;
 __emit 0x25;
 __emit 0xC4;
 __emit 0x28;
 __emit 0x2C;
 __emit 0x00;
} }
