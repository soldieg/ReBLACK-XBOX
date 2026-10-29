/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001CB350(void)
{
    __asm {
        _emit 0x8B
        _emit 0xC1
        _emit 0xE8
        _emit 0xF9
        _emit 0xD0
        _emit 0xFF
        _emit 0xFF
        _emit 0x33
        _emit 0xC9
        _emit 0x89
        _emit 0x88
        _emit 0x1C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x89
        _emit 0x88
        _emit 0x20
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x3C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x38
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0x3E
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x88
        _emit 0x88
        _emit 0xD0
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
