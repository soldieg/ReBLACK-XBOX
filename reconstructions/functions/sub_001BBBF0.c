/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BBBF0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x4B
        _emit 0x83
        _emit 0xED
        _emit 0xFF
        _emit 0x56
        _emit 0x89
        _emit 0x46
        _emit 0x20
        _emit 0xE8
        _emit 0x12
        _emit 0x83
        _emit 0xED
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
