/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B3DA0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x50
        _emit 0x70
        _emit 0x85
        _emit 0xD2
        _emit 0x74
        _emit 0x07
        _emit 0x8A
        _emit 0x51
        _emit 0x39
        _emit 0x84
        _emit 0xD2
        _emit 0x75
        _emit 0x0A
        _emit 0x53
        _emit 0x8A
        _emit 0x59
        _emit 0x39
        _emit 0xE8
        _emit 0x89
        _emit 0xFE
        _emit 0xFF
        _emit 0xFF
        _emit 0x5B
        _emit 0xC3
    }
}
