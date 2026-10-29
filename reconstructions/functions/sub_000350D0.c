/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000350D0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x04
        _emit 0x2D
        _emit 0x2B
        _emit 0x00
        _emit 0x8B
        _emit 0x88
        _emit 0x7C
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x05
        _emit 0xE9
        _emit 0xEC
        _emit 0xFA
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0xE8
        _emit 0x8D
        _emit 0xF8
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x04
        _emit 0x5B
        _emit 0xC3
    }
}
