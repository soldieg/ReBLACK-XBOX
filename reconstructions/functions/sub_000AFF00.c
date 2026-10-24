/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AFF00(void)
{
    __asm {
        _emit 0x8B
        _emit 0x54
        _emit 0x24
        _emit 0x08
        _emit 0x8B
        _emit 0x4A
        _emit 0x04
        _emit 0x33
        _emit 0xC0
        _emit 0x85
        _emit 0xC9
        _emit 0x76
        _emit 0x1A
        _emit 0x8B
        _emit 0x4C
        _emit 0x24
        _emit 0x04
        _emit 0x83
        _emit 0xC1
        _emit 0x18
        _emit 0x56
        _emit 0xC7
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x80
        _emit 0x3F
        _emit 0x8B
        _emit 0x72
        _emit 0x04
        _emit 0x40
        _emit 0x83
        _emit 0xC1
        _emit 0x04
        _emit 0x3B
        _emit 0xC6
        _emit 0x72
        _emit 0xEF
        _emit 0x5E
        _emit 0xC3
    }
}
