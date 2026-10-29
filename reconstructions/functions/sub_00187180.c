/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00187180(void)
{
    __asm {
        _emit 0x83
        _emit 0x78
        _emit 0x40
        _emit 0x01
        _emit 0x75
        _emit 0x08
        _emit 0x83
        _emit 0xC0
        _emit 0x60
        _emit 0xE9
        _emit 0xE2
        _emit 0xE3
        _emit 0xFF
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
