/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F3610(void)
{
    __asm {
        _emit 0x8B
        _emit 0x81
        _emit 0xA8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF8
        _emit 0x37
        _emit 0xC6
        _emit 0x81
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x74
        _emit 0x0C
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0x74
        _emit 0x07
        _emit 0xC6
        _emit 0x81
        _emit 0xB9
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x01
        _emit 0xC3
    }
}
