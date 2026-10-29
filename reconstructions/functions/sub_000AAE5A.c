/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AAE5A(void)
{
    __asm {
        _emit 0xE8
        _emit 0xAE
        _emit 0xAB
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x00
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xAC
        _emit 0xAB
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xE8
        _emit 0x6A
        _emit 0x7F
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
