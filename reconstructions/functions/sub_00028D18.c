/* Address-pinned x86 body; original semantic adapter is preserved separately. */
__declspec(naked) void __cdecl sub_00028D18(void) { __asm {
 __emit 0x8B;
 __emit 0x9D;
 __emit 0x78;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0xFF;
 __emit 0x8B;
 __emit 0x75;
 __emit 0xC4;
} }
