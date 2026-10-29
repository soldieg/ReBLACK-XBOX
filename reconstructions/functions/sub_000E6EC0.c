/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E6EC0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x49
        _emit 0x08
        _emit 0xE8
        _emit 0x48
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x07
        _emit 0x8B
        _emit 0xC8
        _emit 0xE9
        _emit 0xAD
        _emit 0xFB
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
    }
}
