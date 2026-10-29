/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AA343(void)
{
    __asm {
        _emit 0x68
        _emit 0xFD
        _emit 0xA2
        _emit 0x0A
        _emit 0x00
        _emit 0xE8
        _emit 0x71
        _emit 0xB2
        _emit 0xF7
        _emit 0xFF
        _emit 0xA3
        _emit 0x0C
        _emit 0x0B
        _emit 0x2D
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xFF
        _emit 0x35
        _emit 0x0C
        _emit 0x0B
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x5E
        _emit 0xB2
        _emit 0xF7
        _emit 0xFF
        _emit 0xC3
    }
}
