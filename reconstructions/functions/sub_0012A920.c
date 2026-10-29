/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_0012A920(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xA4
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0x3B
        _emit 0xCA
        _emit 0x75
        _emit 0x13
        _emit 0xC7
        _emit 0x80
        _emit 0xA4
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x66
        _emit 0xC7
        _emit 0x80
        _emit 0x14
        _emit 0x21
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
