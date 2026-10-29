/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C96A0(void)
{
    __asm {
        _emit 0xE9
        _emit 0xAB
        _emit 0xED
        _emit 0xFF
        _emit 0xFF
    }
}
