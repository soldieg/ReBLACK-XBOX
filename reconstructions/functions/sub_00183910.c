/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00183910(void)
{
    __asm {
        _emit 0xC7
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
