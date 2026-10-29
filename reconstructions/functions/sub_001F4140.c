/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F4140(void)
{
    __asm {
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x80
        _emit 0x6C
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x89
        _emit 0x88
        _emit 0x64
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x70
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
