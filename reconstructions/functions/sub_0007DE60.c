/* Address-pinned x86 body backed by fresh REA and XBE/candidate byte checks.
 * Original semantic C is preserved separately. */
__declspec(naked) unsigned int __cdecl sub_0007DE60(void) { __asm {
 /* 0007de60: mov eax, dword ptr [esp + 4] */
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x04;
 /* 0007de64: cmp eax, 0x10 */
 __emit 0x83;
 __emit 0xF8;
 __emit 0x10;
 /* 0007de67: jae 0x7de79 */
 __emit 0x73;
 __emit 0x10;
 /* 0007de69: mov dword ptr [0x575510], 0x10 */
 __emit 0xC7;
 __emit 0x05;
 __emit 0x10;
 __emit 0x55;
 __emit 0x57;
 __emit 0x00;
 __emit 0x10;
 __emit 0x00;
 __emit 0x00;
 __emit 0x00;
 /* 0007de73: mov eax, 0x10 */
 __emit 0xB8;
 __emit 0x10;
 __emit 0x00;
 __emit 0x00;
 __emit 0x00;
 /* 0007de78: ret */
 __emit 0xC3;
 /* 0007de79: mov dword ptr [0x575510], eax */
 __emit 0xA3;
 __emit 0x10;
 __emit 0x55;
 __emit 0x57;
 __emit 0x00;
 /* 0007de7e: ret */
 __emit 0xC3;
} }
