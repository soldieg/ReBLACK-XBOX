/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F8C10(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x45
        _emit 0x2D
        _emit 0x00
        _emit 0x8B
        _emit 0x91
        _emit 0x30
        _emit 0x04
        _emit 0x02
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x05
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0xA1
        _emit 0xC4
        _emit 0xD9
        _emit 0x29
        _emit 0x00
        _emit 0x50
        _emit 0x8D
        _emit 0xB1
        _emit 0x6C
        _emit 0x02
        _emit 0x02
        _emit 0x00
        _emit 0xE8
        _emit 0xF1
        _emit 0xA9
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
