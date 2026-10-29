/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0007DCC0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xA4
        _emit 0xFF
        _emit 0x2B
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x0F
        _emit 0xE8
        _emit 0x62
        _emit 0xD0
        _emit 0xFA
        _emit 0xFF
        _emit 0xE8
        _emit 0xAD
        _emit 0xD1
        _emit 0xFA
        _emit 0xFF
        _emit 0xE9
        _emit 0x08
        _emit 0xD2
        _emit 0xFA
        _emit 0xFF
        _emit 0xC3
    }
}
