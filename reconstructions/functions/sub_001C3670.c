/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001C3670(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x18
        _emit 0x83
        _emit 0xB8
        _emit 0xC4
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x75
        _emit 0x0D
        _emit 0xC7
        _emit 0x81
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x1C
        _emit 0x00
        _emit 0x56
        _emit 0x8B
        _emit 0xB0
        _emit 0x9C
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xD2
        _emit 0x85
        _emit 0xF6
        _emit 0x0F
        _emit 0x94
        _emit 0xC2
        _emit 0x5E
        _emit 0x89
        _emit 0x91
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC2
        _emit 0x1C
        _emit 0x00
    }
}
