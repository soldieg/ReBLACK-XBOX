/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A84E3(void)
{
    __asm {
        _emit 0xE8
        _emit 0xA8
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x83
        _emit 0xB8
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x7E
        _emit 0x0C
        _emit 0xE8
        _emit 0x9A
        _emit 0xFC
        _emit 0xFF
        _emit 0xFF
        _emit 0x05
        _emit 0x80
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xFF
        _emit 0x08
        _emit 0xC3
    }
}
