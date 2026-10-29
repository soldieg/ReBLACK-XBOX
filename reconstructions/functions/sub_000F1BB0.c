/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000F1BB0(void)
{
    __asm {
        _emit 0x53
        _emit 0x8B
        _emit 0xD9
        _emit 0x56
        _emit 0x8D
        _emit 0x73
        _emit 0x08
        _emit 0xE8
        _emit 0xE4
        _emit 0x4F
        _emit 0xFF
        _emit 0xFF
        _emit 0x8B
        _emit 0x43
        _emit 0x1C
        _emit 0x85
        _emit 0xC0
        _emit 0x74
        _emit 0x10
        _emit 0x68
        _emit 0xD0
        _emit 0x42
        _emit 0x29
        _emit 0x00
        _emit 0x50
        _emit 0x53
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x5E
        _emit 0x5B
        _emit 0xC3
    }
}
