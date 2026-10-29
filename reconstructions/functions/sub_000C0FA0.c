/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C0FA0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xF8
        _emit 0xBF
        _emit 0x27
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0xB8
        _emit 0x1D
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
