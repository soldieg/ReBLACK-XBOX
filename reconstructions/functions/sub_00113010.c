/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113010(void)
{
    __asm {
        _emit 0x33
        _emit 0xD2
        _emit 0x33
        _emit 0xC0
        _emit 0x89
        _emit 0x14
        _emit 0xC1
        _emit 0x89
        _emit 0x54
        _emit 0xC1
        _emit 0x04
        _emit 0x40
        _emit 0x83
        _emit 0xF8
        _emit 0x6E
        _emit 0x7C
        _emit 0xF3
        _emit 0xC3
    }
}
