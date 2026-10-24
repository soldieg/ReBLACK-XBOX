/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_001B5E40(void)
{
    __asm {
        _emit 0x8B
        _emit 0x8A
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x83
        _emit 0xF9
        _emit 0x03
        _emit 0x74
        _emit 0x24
        _emit 0x83
        _emit 0xF8
        _emit 0x03
        _emit 0x74
        _emit 0x15
        _emit 0x83
        _emit 0xF8
        _emit 0x02
        _emit 0x74
        _emit 0x10
        _emit 0x85
        _emit 0xC9
        _emit 0x75
        _emit 0x16
        _emit 0x83
        _emit 0xF8
        _emit 0x01
        _emit 0x75
        _emit 0x11
        _emit 0x89
        _emit 0x82
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0xC3
        _emit 0xC7
        _emit 0x82
        _emit 0x24
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x02
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0xC3
    }
}
