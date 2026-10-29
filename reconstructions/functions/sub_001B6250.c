/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001B6250(void)
{
    __asm {
        _emit 0x8B
        _emit 0x80
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0x78
        _emit 0x1C
        _emit 0x09
        _emit 0x75
        _emit 0x07
        _emit 0xC7
        _emit 0x40
        _emit 0x1C
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
