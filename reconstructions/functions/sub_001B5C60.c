/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B5C60(void)
{
    __asm {
        _emit 0xE8
        _emit 0xDB
        _emit 0xE2
        _emit 0xED
        _emit 0xFF
        _emit 0x56
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xE8
        _emit 0xA2
        _emit 0xE2
        _emit 0xED
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
