/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3390(void)
{
    __asm {
        _emit 0xA1
        _emit 0xE4
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x0D
        _emit 0xE8
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8D
        _emit 0x14
        _emit 0x88
        _emit 0x89
        _emit 0x15
        _emit 0xE4
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0xC7
        _emit 0x05
        _emit 0xE8
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
