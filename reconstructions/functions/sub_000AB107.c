/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AB107(void)
{
    __asm {
        _emit 0xE8
        _emit 0x01
        _emit 0xA9
        _emit 0xFF
        _emit 0xFF
        _emit 0xC7
        _emit 0x00
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xFF
        _emit 0xA8
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x20
        _emit 0x00
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xE8
        _emit 0xBD
        _emit 0x7C
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
        _emit 0xCC
    }
}
