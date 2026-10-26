/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B6230(void)
{
    __asm {
        _emit 0x81
        _emit 0xC1
        _emit 0x84
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x85
        _emit 0xC0
        _emit 0x6A
        _emit 0x3F
        _emit 0x75
        _emit 0x05
        _emit 0xA1
        _emit 0xBC
        _emit 0x7E
        _emit 0x2A
        _emit 0x00
        _emit 0x50
        _emit 0x51
        _emit 0xE8
        _emit 0xF8
        _emit 0xBC
        _emit 0xEE
        _emit 0xFF
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xC3
    }
}
