/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_00113040(void)
{
    __asm {
        _emit 0x50
        _emit 0x83
        _emit 0xC1
        _emit 0x08
        _emit 0xE8
        _emit 0x6E
        _emit 0xC3
        _emit 0xF8
        _emit 0xFF
        _emit 0xC3
    }
}
