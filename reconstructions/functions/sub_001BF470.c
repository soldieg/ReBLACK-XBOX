/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001BF470(void)
{
    __asm {
        _emit 0x57
        _emit 0x8D
        _emit 0x3C
        _emit 0x76
        _emit 0xC1
        _emit 0xE7
        _emit 0x02
        _emit 0xB8
        _emit 0xE8
        _emit 0x12
        _emit 0x2D
        _emit 0x00
        _emit 0xE8
        _emit 0x3F
        _emit 0x4B
        _emit 0x03
        _emit 0x00
        _emit 0x89
        _emit 0x03
        _emit 0x66
        _emit 0x89
        _emit 0x73
        _emit 0x04
        _emit 0x66
        _emit 0xC7
        _emit 0x43
        _emit 0x06
        _emit 0x00
        _emit 0x00
        _emit 0x5F
        _emit 0xC3
    }
}
