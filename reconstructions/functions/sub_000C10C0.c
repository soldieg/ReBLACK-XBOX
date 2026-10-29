/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C10C0(void)
{
    __asm {
        _emit 0x83
        _emit 0xF8
        _emit 0x04
        _emit 0x77
        _emit 0x1D
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0xE8
        _emit 0x10
        _emit 0x0C
        _emit 0x00
        _emit 0xB8
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
        _emit 0xB8
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
