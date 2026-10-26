/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000309D0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x35
        _emit 0xF8
        _emit 0xA6
        _emit 0x56
        _emit 0x00
        _emit 0x57
        _emit 0xE8
        _emit 0x53
        _emit 0x2D
        _emit 0x00
        _emit 0x00
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x14
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x10
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x0C
        _emit 0x50
        _emit 0x51
        _emit 0x57
        _emit 0xFF
        _emit 0xD6
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0xF7
        _emit 0xD8
        _emit 0x1B
        _emit 0xC0
        _emit 0x23
        _emit 0xC7
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
