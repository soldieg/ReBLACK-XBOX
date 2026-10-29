/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001906A0(void)
{
    __asm {
        _emit 0x53
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x10
        _emit 0x85
        _emit 0xFF
        _emit 0x8B
        _emit 0xD9
        _emit 0x74
        _emit 0x13
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0x88
        _emit 0x19
        _emit 0x2D
        _emit 0x00
        _emit 0x81
        _emit 0xC6
        _emit 0xD0
        _emit 0x13
        _emit 0x00
        _emit 0x00
        _emit 0xE8
        _emit 0xD2
        _emit 0x39
        _emit 0xF2
        _emit 0xFF
        _emit 0x5E
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0x50
        _emit 0x8B
        _emit 0xCB
        _emit 0xE8
        _emit 0x04
        _emit 0xA4
        _emit 0xEC
        _emit 0xFF
        _emit 0x5F
        _emit 0x5B
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
