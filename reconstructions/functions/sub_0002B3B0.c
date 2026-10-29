/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0002B3B0(void)
{
    __asm {
        _emit 0x83
        _emit 0xC0
        _emit 0xFE
        _emit 0x83
        _emit 0xF8
        _emit 0x1C
        _emit 0x77
        _emit 0x2C
        _emit 0x0F
        _emit 0xB6
        _emit 0x80
        _emit 0x00
        _emit 0xB4
        _emit 0x02
        _emit 0x00
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0xE8
        _emit 0xB3
        _emit 0x02
        _emit 0x00
    }
}
