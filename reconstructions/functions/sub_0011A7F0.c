/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0011A7F0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x50
        _emit 0xE8
        _emit 0x34
        _emit 0x77
        _emit 0xF8
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x75
        _emit 0x10
        _emit 0x8B
        _emit 0x0D
        _emit 0x9C
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0xC7
        _emit 0x81
        _emit 0x50
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0x50
        _emit 0xA7
        _emit 0x11
        _emit 0x00
        _emit 0xC3
    }
}
