/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001832E0(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0xC1
        _emit 0x0C
        _emit 0x83
        _emit 0x79
        _emit 0xFC
        _emit 0x01
        _emit 0x75
        _emit 0x04
        _emit 0x39
        _emit 0x11
        _emit 0x74
        _emit 0x0C
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x0C
        _emit 0x83
        _emit 0xF8
        _emit 0x20
        _emit 0x7C
        _emit 0xED
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
    }
}
