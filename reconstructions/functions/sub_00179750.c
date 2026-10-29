/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00179750(void)
{
    __asm {
        _emit 0x89
        _emit 0x88
        _emit 0x14
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x90
        _emit 0x18
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x80
        _emit 0x1C
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
