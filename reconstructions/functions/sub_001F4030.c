/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4030(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xC1
        _emit 0x10
        _emit 0x3B
        _emit 0x51
        _emit 0xFC
        _emit 0x72
        _emit 0x04
        _emit 0x3B
        _emit 0x11
        _emit 0x72
        _emit 0x0C
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x24
        _emit 0x83
        _emit 0xF8
        _emit 0x18
        _emit 0x7C
        _emit 0xEE
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
    }
}
