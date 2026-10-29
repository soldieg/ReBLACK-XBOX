/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C21C0(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0x48
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x40
        _emit 0x30
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x88
        _emit 0x40
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x44
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
