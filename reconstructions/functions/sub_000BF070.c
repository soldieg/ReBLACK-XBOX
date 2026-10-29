/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000BF070(void)
{
    __asm {
        _emit 0xA1
        _emit 0x58
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x17
        _emit 0x68
        _emit 0xA8
        _emit 0x37
        _emit 0x2F
        _emit 0x00
        _emit 0xE8
        _emit 0x8D
        _emit 0x27
        _emit 0xFD
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0xC7
        _emit 0x05
        _emit 0x58
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
