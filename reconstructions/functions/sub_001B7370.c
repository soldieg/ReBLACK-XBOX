/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B7370(void)
{
    __asm {
        _emit 0x83
        _emit 0xC9
        _emit 0xFF
        _emit 0x89
        _emit 0x48
        _emit 0x08
        _emit 0x89
        _emit 0x48
        _emit 0x04
        _emit 0x33
        _emit 0xC9
        _emit 0xC7
        _emit 0x00
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x48
        _emit 0x38
        _emit 0x89
        _emit 0x88
        _emit 0xF4
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
