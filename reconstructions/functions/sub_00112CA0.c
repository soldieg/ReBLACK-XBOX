/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00112CA0(void)
{
    __asm {
        _emit 0x8D
        _emit 0x88
        _emit 0x40
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x6A
        _emit 0x20
        _emit 0x51
        _emit 0x05
        _emit 0x60
        _emit 0x38
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xE8
        _emit 0x8C
        _emit 0xF2
        _emit 0xF8
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
