/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BFC10(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x66
        _emit 0x39
        _emit 0x01
        _emit 0x74
        _emit 0x08
        _emit 0x40
        _emit 0x66
        _emit 0x83
        _emit 0x3C
        _emit 0x41
        _emit 0x00
        _emit 0x75
        _emit 0xF8
        _emit 0xC3
    }
}
