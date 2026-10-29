/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000E3BB0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x7B
        _emit 0xFD
        _emit 0xFF
        _emit 0xFF
        _emit 0x0F
        _emit 0xB6
        _emit 0x0D
        _emit 0xA8
        _emit 0xC9
        _emit 0x2E
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x04
        _emit 0x75
        _emit 0x05
        _emit 0x83
        _emit 0x48
        _emit 0x04
        _emit 0x01
        _emit 0xC3
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x03
        _emit 0x83
        _emit 0x08
        _emit 0x01
        _emit 0xC3
    }
}
