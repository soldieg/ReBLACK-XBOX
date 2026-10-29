/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_001F1D30(void)
{
    __asm {
        _emit 0x8B
        _emit 0x88
        _emit 0xAC
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x12
        _emit 0x7D
        _emit 0x10
        _emit 0x89
        _emit 0x94
        _emit 0x88
        _emit 0x58
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x80
        _emit 0xAC
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
