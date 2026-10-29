/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A9D7F(void)
{
    __asm {
        _emit 0x8B
        _emit 0x45
        _emit 0xEC
        _emit 0x8B
        _emit 0x00
        _emit 0x8B
        _emit 0x00
        _emit 0x89
        _emit 0x45
        _emit 0xE4
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
        _emit 0x8B
        _emit 0x65
        _emit 0xE8
        _emit 0x81
        _emit 0x7D
        _emit 0xE4
        _emit 0x17
        _emit 0x00
        _emit 0x00
        _emit 0xC0
        _emit 0x75
        _emit 0x07
        _emit 0x6A
        _emit 0x08
        _emit 0xE8
        _emit 0xCF
        _emit 0xB5
        _emit 0xF7
        _emit 0xFF
        _emit 0x33
        _emit 0xC0
        _emit 0x83
        _emit 0x4D
        _emit 0xFC
        _emit 0xFF
        _emit 0xE8
        _emit 0x34
        _emit 0x90
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
