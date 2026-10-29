/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_002193A1(void)
{
    __asm {
        _emit 0x83
        _emit 0x6C
        _emit 0x24
        _emit 0x04
        _emit 0x04
        _emit 0xE9
        _emit 0xB2
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0x6C
        _emit 0x24
        _emit 0x04
        _emit 0x04
        _emit 0xE9
        _emit 0xEF
        _emit 0xF9
        _emit 0xFF
        _emit 0xFF
    }
}
