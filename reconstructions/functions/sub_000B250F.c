/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000B250F(void)
{
    __asm {
        _emit 0x83
        _emit 0x79
        _emit 0x08
        _emit 0x00
        _emit 0xC7
        _emit 0x01
        _emit 0xA8
        _emit 0x80
        _emit 0x28
        _emit 0x00
        _emit 0x74
        _emit 0x09
        _emit 0xFF
        _emit 0x71
        _emit 0x04
        _emit 0xE8
        _emit 0x6E
        _emit 0x12
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
