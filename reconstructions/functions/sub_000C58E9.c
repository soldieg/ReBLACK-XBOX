/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C58E9(void)
{
    __asm {
        _emit 0x57
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xDF
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0xF8
        _emit 0x3B
        _emit 0xFB
        _emit 0x74
        _emit 0x1D
        _emit 0x8B
        _emit 0xB6
        _emit 0x48
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x86
        _emit 0x28
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xC3
        _emit 0x74
        _emit 0x0D
        _emit 0x8B
        _emit 0x8E
        _emit 0x2C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x51
        _emit 0x57
        _emit 0xFF
        _emit 0xD0
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x8B
        _emit 0xC7
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC2
        _emit 0x0C
        _emit 0x00
    }
}
