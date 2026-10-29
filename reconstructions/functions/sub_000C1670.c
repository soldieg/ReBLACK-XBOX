/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1670(void)
{
    __asm {
        _emit 0x83
        _emit 0xF8
        _emit 0x09
        _emit 0x7E
        _emit 0x06
        _emit 0xB8
        _emit 0x0D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0x69
        _emit 0xC0
        _emit 0x54
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x84
        _emit 0x08
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
