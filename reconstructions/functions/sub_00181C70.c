/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181C70(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0x39
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x60
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x7C
        _emit 0xF2
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
