/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C18A0(void)
{
    __asm {
        _emit 0xE8
        _emit 0x8D
        _emit 0x40
        _emit 0xF6
        _emit 0xFF
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x72
        _emit 0x0D
        _emit 0x83
        _emit 0xF8
        _emit 0x06
        _emit 0x76
        _emit 0x05
        _emit 0x83
        _emit 0xF8
        _emit 0x09
        _emit 0x75
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0xC3
        _emit 0xB8
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
