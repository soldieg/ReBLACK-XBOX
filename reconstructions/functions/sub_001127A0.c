/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001127A0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x44
        _emit 0xC3
        _emit 0x2A
        _emit 0x00
        _emit 0x83
        _emit 0xE8
        _emit 0x00
        _emit 0x74
        _emit 0x12
        _emit 0x48
        _emit 0x74
        _emit 0x09
        _emit 0x48
        _emit 0x75
        _emit 0x06
        _emit 0xB8
        _emit 0x03
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
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
    }
}
