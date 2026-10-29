/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C2760(void)
{
    __asm {
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x05
        _emit 0x83
        _emit 0xF8
        _emit 0x1C
        _emit 0x7C
        _emit 0x04
        _emit 0x0F
        _emit 0x57
        _emit 0xC0
        _emit 0xC3
        _emit 0xF3
        _emit 0x0F
        _emit 0x10
        _emit 0x44
        _emit 0x81
        _emit 0x44
        _emit 0xC3
    }
}
