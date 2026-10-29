/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00181910(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xF8
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x02
        _emit 0x74
        _emit 0x0C
        _emit 0x8B
        _emit 0x8C
        _emit 0x88
        _emit 0xF0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x11
        _emit 0xFF
        _emit 0x62
        _emit 0x14
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
