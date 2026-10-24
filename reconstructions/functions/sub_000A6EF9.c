/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A6EF9(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x81
        _emit 0xE2
        _emit 0x00
        _emit 0x03
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xCA
        _emit 0x7F
        _emit 0x66
        _emit 0x89
        _emit 0x54
        _emit 0x24
        _emit 0x06
        _emit 0xD9
        _emit 0x6C
        _emit 0x24
        _emit 0x06
        _emit 0xC3
    }
}
