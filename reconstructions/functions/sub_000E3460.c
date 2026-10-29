/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3460(void)
{
    __asm {
        _emit 0x50
        _emit 0xE8
        _emit 0xC7
        _emit 0xEF
        _emit 0xFB
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC3
    }
}
