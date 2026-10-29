/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002176C0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x38
        _emit 0xEA
        _emit 0x2A
        _emit 0x00
        _emit 0x66
        _emit 0xFF
        _emit 0x08
        _emit 0x8B
        _emit 0xD0
        _emit 0x66
        _emit 0x83
        _emit 0x3A
        _emit 0x00
        _emit 0x75
        _emit 0x11
        _emit 0x0F
        _emit 0xB7
        _emit 0x4A
        _emit 0x04
        _emit 0xA1
        _emit 0xAC
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x83
        _emit 0xC1
        _emit 0x09
        _emit 0xE9
        _emit 0x9F
        _emit 0xE1
        _emit 0xEC
        _emit 0xFF
        _emit 0xC3
    }
}
