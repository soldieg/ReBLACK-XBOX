/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E5D30(void)
{
    __asm {
        _emit 0x66
        _emit 0xFF
        _emit 0x05
        _emit 0x7C
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0xE9
        _emit 0xE4
        _emit 0xE6
        _emit 0xFF
        _emit 0xFF
    }
}
