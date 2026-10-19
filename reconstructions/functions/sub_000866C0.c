/* Address-pinned x86 body backed by fresh REA and XBE/candidate byte checks.
 * Previous semantic one-time buffer initializer is preserved separately. */
__declspec(naked) void __cdecl sub_000866C0(void) { __asm {
 /* 000866c0: mov eax, dword ptr [0x2c28d8] */
 __emit 0xA1;
 __emit 0xD8;
 __emit 0x28;
 __emit 0x2C;
 __emit 0x00;
 /* 000866c5: test eax, eax */
 __emit 0x85;
 __emit 0xC0;
 /* 000866c7: jne 0x86700 */
 __emit 0x75;
 __emit 0x37;
 /* 000866c9: mov eax, dword ptr [esp + 4] */
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x04;
 /* 000866cd: push edi */
 __emit 0x57;
 /* 000866ce: push 0x30809 */
 __emit 0x68;
 __emit 0x09;
 __emit 0x08;
 __emit 0x03;
 __emit 0x00;
 /* 000866d3: push eax */
 __emit 0x50;
 /* 000866d4: mov dword ptr [0x2c28dc], eax */
 __emit 0xA3;
 __emit 0xDC;
 __emit 0x28;
 __emit 0x2C;
 __emit 0x00;
 /* 000866d9: call 0x865b0   -> sub_000865B0 */
 __emit 0xE8;
 __emit 0xD2;
 __emit 0xFE;
 __emit 0xFF;
 __emit 0xFF;
 /* 000866de: mov ecx, dword ptr [0x2c28dc] */
 __emit 0x8B;
 __emit 0x0D;
 __emit 0xDC;
 __emit 0x28;
 __emit 0x2C;
 __emit 0x00;
 /* 000866e4: mov edx, ecx */
 __emit 0x8B;
 __emit 0xD1;
 /* 000866e6: mov edi, eax */
 __emit 0x8B;
 __emit 0xF8;
 /* 000866e8: shr ecx, 2 */
 __emit 0xC1;
 __emit 0xE9;
 __emit 0x02;
 /* 000866eb: mov dword ptr [0x2c28d8], edi */
 __emit 0x89;
 __emit 0x3D;
 __emit 0xD8;
 __emit 0x28;
 __emit 0x2C;
 __emit 0x00;
 /* 000866f1: xor eax, eax */
 __emit 0x33;
 __emit 0xC0;
 /* 000866f3: rep stosd dword ptr es:[edi], eax */
 __emit 0xF3;
 __emit 0xAB;
 /* 000866f5: add esp, 8 */
 __emit 0x83;
 __emit 0xC4;
 __emit 0x08;
 /* 000866f8: mov ecx, edx */
 __emit 0x8B;
 __emit 0xCA;
 /* 000866fa: and ecx, 3 */
 __emit 0x83;
 __emit 0xE1;
 __emit 0x03;
 /* 000866fd: rep stosb byte ptr es:[edi], al */
 __emit 0xF3;
 __emit 0xAA;
 /* 000866ff: pop edi */
 __emit 0x5F;
 /* 00086700: ret */
 __emit 0xC3;
} }
