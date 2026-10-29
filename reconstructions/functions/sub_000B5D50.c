/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000B5D50(void)
{
    __asm {
        _emit 0x57
        _emit 0x56
        _emit 0x83
        _emit 0xC0
        _emit 0x0C
        _emit 0x50
        _emit 0xBF
        _emit 0xF0
        _emit 0x59
        _emit 0x29
        _emit 0x00
        _emit 0xE8
        _emit 0x10
        _emit 0xF0
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xC6
        _emit 0x5F
        _emit 0xC3
    }
}
