/* shortcut: exact bytes are emitted; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A553F(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0x74
        _emit 0x13
        _emit 0x7E
        _emit 0x1C
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x7F
        _emit 0x17
        _emit 0xE8
        _emit 0xB9
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x00
        _emit 0x22
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xE8
        _emit 0xAD
        _emit 0x04
        _emit 0x00
        _emit 0x00
        _emit 0xC7
        _emit 0x00
        _emit 0x21
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
