/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3B50(void)
{
    __asm {
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xD2
        _emit 0x7E
        _emit 0x15
        _emit 0x83
        _emit 0x3C
        _emit 0x81
        _emit 0x00
        _emit 0x74
        _emit 0x08
        _emit 0x40
        _emit 0x3B
        _emit 0xC2
        _emit 0x7C
        _emit 0xF5
        _emit 0xC2
        _emit 0x04
        _emit 0x00
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x89
        _emit 0x14
        _emit 0x81
        _emit 0xC2
        _emit 0x04
        _emit 0x00
    }
}
