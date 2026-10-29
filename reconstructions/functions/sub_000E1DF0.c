/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E1DF0(void)
{
    __asm {
        _emit 0xF6
        _emit 0xC1
        _emit 0x03
        _emit 0x74
        _emit 0x06
        _emit 0x83
        _emit 0xE1
        _emit 0xFC
        _emit 0x83
        _emit 0xC1
        _emit 0x04
        _emit 0x0F
        _emit 0xB6
        _emit 0x40
        _emit 0x13
        _emit 0x83
        _emit 0xE0
        _emit 0x0F
        _emit 0x3B
        _emit 0xC8
        _emit 0x72
        _emit 0x02
        _emit 0x8B
        _emit 0xC1
        _emit 0xC3
    }
}
