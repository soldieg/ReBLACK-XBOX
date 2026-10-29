/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000A6EB0(void)
{
    __asm {
        _emit 0xDD
        _emit 0x5D
        _emit 0xF8
        _emit 0x89
        _emit 0x4D
        _emit 0xE4
        _emit 0x8B
        _emit 0x45
        _emit 0x10
        _emit 0x8B
        _emit 0x4D
        _emit 0x14
        _emit 0x89
        _emit 0x45
        _emit 0xE8
        _emit 0x89
        _emit 0x4D
        _emit 0xEC
        _emit 0x8D
        _emit 0x45
        _emit 0x08
        _emit 0x8D
        _emit 0x4D
        _emit 0xE0
        _emit 0x50
        _emit 0x51
        _emit 0x52
        _emit 0xE8
        _emit 0x8E
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xDD
        _emit 0x45
        _emit 0xF8
        _emit 0x66
        _emit 0x81
        _emit 0x7D
        _emit 0x08
        _emit 0x7F
        _emit 0x02
        _emit 0x74
        _emit 0x03
        _emit 0xD9
        _emit 0x6D
        _emit 0x08
        _emit 0xC9
        _emit 0xC3
    }
}
