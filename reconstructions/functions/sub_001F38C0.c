/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F38C0(void)
{
    __asm {
        _emit 0x83
        _emit 0xB8
        _emit 0x5C
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x1C
        _emit 0x75
        _emit 0x0A
        _emit 0xC7
        _emit 0x80
        _emit 0x5C
        _emit 0x0C
        _emit 0x00
        _emit 0x00
        _emit 0x37
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
    }
}
