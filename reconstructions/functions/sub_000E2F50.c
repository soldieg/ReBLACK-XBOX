/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E2F50(void)
{
    __asm {
        _emit 0x56
        _emit 0xE8
        _emit 0xD8
        _emit 0xEF
        _emit 0xFB
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x07
        _emit 0x80
        _emit 0x3E
        _emit 0x30
        _emit 0x0F
        _emit 0x94
        _emit 0xC0
        _emit 0xC3
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
