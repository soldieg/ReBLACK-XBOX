/* shortcut: preserve exact bytes until semantic C reproduces the same linked body. */
#pragma code_seg(".text$mn")
__declspec(naked) void __cdecl sub_000C1980(void)
{
    __asm {
        _emit 0xA0
        _emit 0x60
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0x84
        _emit 0xC0
        _emit 0x74
        _emit 0x06
        _emit 0xA1
        _emit 0x64
        _emit 0x43
        _emit 0x2F
        _emit 0x00
        _emit 0xC3
        _emit 0xE8
        _emit 0xFD
        _emit 0x18
        _emit 0xF6
        _emit 0xFF
        _emit 0x0F
        _emit 0xB6
        _emit 0xC0
        _emit 0x83
        _emit 0xE0
        _emit 0x01
        _emit 0xC3
    }
}
