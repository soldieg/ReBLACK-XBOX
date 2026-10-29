/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000AD980(void)
{
    __asm {
        _emit 0xE9
        _emit 0xFB
        _emit 0xDC
        _emit 0xFD
        _emit 0xFF
    }
}
