/* Address-pinned x86 tail thunk; semantic C is preserved separately. */
__declspec(naked) unsigned int __cdecl sub_000866B0(void) { __asm {
 __emit 0x8B;
 __emit 0x44;
 __emit 0x24;
 __emit 0x04;
 __emit 0x8B;
 __emit 0x48;
 __emit 0xFC;
 __emit 0x89;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 __emit 0xE9;
 __emit 0x20;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
} }
