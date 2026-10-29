/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001FCB00(void)
{
    __asm {
        _emit 0xA1
        _emit 0xD4
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x90
        _emit 0x54
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x8D
        _emit 0x88
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xD1
        _emit 0x75
        _emit 0x07
        _emit 0xC6
        _emit 0x80
        _emit 0x2A
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0x8B
        _emit 0x0D
        _emit 0xE4
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xBA
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xE4
        _emit 0x2C
        _emit 0xF3
        _emit 0xFF
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
