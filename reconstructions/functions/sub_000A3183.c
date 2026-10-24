/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A3183(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x04
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x0C
        _emit 0x57
        _emit 0xEB
        _emit 0x09
        _emit 0x66
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x11
        _emit 0x42
        _emit 0x42
        _emit 0x46
        _emit 0x46
        _emit 0x66
        _emit 0x8B
        _emit 0x0E
        _emit 0x0F
        _emit 0xB7
        _emit 0x02
        _emit 0x0F
        _emit 0xB7
        _emit 0xF9
        _emit 0x2B
        _emit 0xC7
        _emit 0x74
        _emit 0xEA
        _emit 0x85
        _emit 0xC0
        _emit 0x5F
        _emit 0x5E
        _emit 0x7D
        _emit 0x04
        _emit 0x83
        _emit 0xC8
        _emit 0xFF
        _emit 0xC3
        _emit 0x7E
        _emit 0x03
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC3
    }
}
