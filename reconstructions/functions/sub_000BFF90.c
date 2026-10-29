/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BFF90(void)
{
    __asm {
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0xE9
        _emit 0xD4
        _emit 0xED
        _emit 0xFD
        _emit 0xFF
    }
}
