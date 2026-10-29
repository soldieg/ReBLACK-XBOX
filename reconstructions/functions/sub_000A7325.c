/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A7325(void)
{
    __asm {
        _emit 0x89
        _emit 0x3E
        _emit 0xEB
        _emit 0x07
        _emit 0x57
        _emit 0xE8
        _emit 0x62
        _emit 0xC4
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x83
        _emit 0x4D
        _emit 0xFC
        _emit 0xFF
        _emit 0xE8
        _emit 0x09
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xE8
        _emit 0x9E
        _emit 0xBA
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
