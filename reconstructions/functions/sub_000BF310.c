/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF310(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0x1C
        _emit 0x01
        _emit 0x02
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
