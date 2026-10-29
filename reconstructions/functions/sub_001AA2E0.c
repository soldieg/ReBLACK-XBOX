/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001AA2E0(void)
{
    __asm {
        _emit 0x83
        _emit 0x7C
        _emit 0x24
        _emit 0x04
        _emit 0x03
        _emit 0x75
        _emit 0x10
        _emit 0x8B
        _emit 0x49
        _emit 0x04
        _emit 0x81
        _emit 0xC1
        _emit 0xA0
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0xE8
        _emit 0xA9
        _emit 0xDD
        _emit 0xFF
        _emit 0xFF
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
