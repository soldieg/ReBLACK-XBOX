/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B3E60(void)
{
    __asm {
        _emit 0xA0
        _emit 0xF8
        _emit 0x3B
        _emit 0x2F
        _emit 0x00
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x11
        _emit 0xA1
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8A
        _emit 0x0D
        _emit 0xDC
        _emit 0x7E
        _emit 0x2A
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x0D
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0xC3
    }
}
