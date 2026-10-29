/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5A50(void)
{
    __asm {
        _emit 0x56
        _emit 0x8D
        _emit 0x71
        _emit 0x08
        _emit 0xE8
        _emit 0xF7
        _emit 0xE7
        _emit 0xFF
        _emit 0xFF
        _emit 0x5E
        _emit 0xC3
    }
}
