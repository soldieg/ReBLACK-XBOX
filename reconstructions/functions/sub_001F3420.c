/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001F3420(void)
{
    __asm {
        _emit 0x83
        _emit 0xF8
        _emit 0x11
        _emit 0x77
        _emit 0x11
        _emit 0x0F
        _emit 0xB6
        _emit 0x80
        _emit 0x44
        _emit 0x34
        _emit 0x1F
        _emit 0x00
        _emit 0xFF
        _emit 0x24
        _emit 0x85
        _emit 0x3C
        _emit 0x34
        _emit 0x1F
        _emit 0x00
        _emit 0xB0
        _emit 0x01
        _emit 0xC3
        _emit 0x32
        _emit 0xC0
        _emit 0xC3
    }
}
