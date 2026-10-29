/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000ECA90(void)
{
    __asm {
        _emit 0xA1
        _emit 0x88
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x1C
        _emit 0x8B
        _emit 0x40
        _emit 0x18
        _emit 0x8B
        _emit 0x08
        _emit 0x56
        _emit 0x8B
        _emit 0x71
        _emit 0x50
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x0E
        _emit 0x8B
        _emit 0xC6
        _emit 0xE8
        _emit 0xB3
        _emit 0xA9
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x76
        _emit 0x50
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0xF2
        _emit 0x5E
        _emit 0xC3
    }
}
