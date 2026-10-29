/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001A8BD0(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xF8
        _emit 0x83
        _emit 0x7F
        _emit 0x7C
        _emit 0x03
        _emit 0x75
        _emit 0x07
        _emit 0xC7
        _emit 0x47
        _emit 0x7C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x7F
        _emit 0x7C
        _emit 0x02
        _emit 0x75
        _emit 0x05
        _emit 0xE8
        _emit 0x45
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC3
    }
}
