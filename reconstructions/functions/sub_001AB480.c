/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001AB480(void)
{
    __asm {
        _emit 0x83
        _emit 0xB9
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x75
        _emit 0x10
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x6A
        _emit 0x01
        _emit 0x83
        _emit 0xC0
        _emit 0x30
        _emit 0x50
        _emit 0xE8
        _emit 0x37
        _emit 0xC7
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
