/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C26F0(void)
{
    __asm {
        _emit 0x85
        _emit 0xC0
        _emit 0x7C
        _emit 0x18
        _emit 0x83
        _emit 0xF8
        _emit 0x1C
        _emit 0x7D
        _emit 0x13
        _emit 0x8A
        _emit 0x54
        _emit 0x08
        _emit 0x25
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0x0B
        _emit 0x8A
        _emit 0x54
        _emit 0x08
        _emit 0x09
        _emit 0x84
        _emit 0xD2
        _emit 0x74
        _emit 0x03
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
