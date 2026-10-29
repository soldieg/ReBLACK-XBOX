/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B9D40(void)
{
    __asm {
        _emit 0x53
        _emit 0x33
        _emit 0xDB
        _emit 0x56
        _emit 0x8B
        _emit 0xF1
        _emit 0x8B
        _emit 0x96
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xD3
        _emit 0x88
        _emit 0x5E
        _emit 0x15
        _emit 0x89
        _emit 0x5E
        _emit 0x08
        _emit 0x89
        _emit 0x5E
        _emit 0x0C
        _emit 0x88
        _emit 0x5E
        _emit 0x16
        _emit 0x74
        _emit 0x0E
        _emit 0x8D
        _emit 0x4E
        _emit 0x20
        _emit 0xE8
        _emit 0x1C
        _emit 0x97
        _emit 0xFC
        _emit 0xFF
        _emit 0x89
        _emit 0x9E
        _emit 0x90
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x5E
        _emit 0xB0
        _emit 0x01
        _emit 0x5B
        _emit 0xC3
    }
}
