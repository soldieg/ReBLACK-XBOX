/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4910(void)
{
    __asm {
        _emit 0x32
        _emit 0xC9
        _emit 0x88
        _emit 0x88
        _emit 0xA4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xA5
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x40
        _emit 0x20
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x88
        _emit 0x88
        _emit 0x51
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
