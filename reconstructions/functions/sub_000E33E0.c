/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E33E0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF8
        _emit 0x41
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
    }
}
