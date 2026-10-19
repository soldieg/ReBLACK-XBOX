/* Address-pinned x86 tail thunk; semantic C is preserved separately. */
__declspec(naked) unsigned int __cdecl sub_00080FC0(void) { __asm {
 __emit 0x8B;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 __emit 0x83;
 __emit 0xC1;
 __emit 0x0C;
 __emit 0x89;
 __emit 0x4C;
 __emit 0x24;
 __emit 0x04;
 __emit 0xE9;
 __emit 0x80;
 __emit 0x49;
 __emit 0x00;
 __emit 0x00;
} }

