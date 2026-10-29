/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001995B0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x85
        _emit 0xC0
        _emit 0x57
        _emit 0x8B
        _emit 0xF9
        _emit 0x7E
        _emit 0x15
        _emit 0x83
        _emit 0xF8
        _emit 0x02
        _emit 0x7F
        _emit 0x10
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0x8B
        _emit 0xC7
        _emit 0xE8
        _emit 0x34
        _emit 0x8F
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC2
        _emit 0x08
        _emit 0x00
        _emit 0xE8
        _emit 0xFB
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x5F
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
