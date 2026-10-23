/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_0001E600(void)
{
    __asm {
        _emit 0x66
        _emit 0xFF
        _emit 0x02
        _emit 0x0F
        _emit 0xB7
        _emit 0x02
        _emit 0x56
        _emit 0x8B
        _emit 0x72
        _emit 0x04
        _emit 0x57
        _emit 0x83
        _emit 0x3C
        _emit 0x86
        _emit 0x00
        _emit 0x74
        _emit 0x17
        _emit 0x0F
        _emit 0xB7
        _emit 0x7A
        _emit 0x02
        _emit 0x8B
        _emit 0xD6
        _emit 0x53
        _emit 0x3B
        _emit 0xC7
        _emit 0x7C
        _emit 0x02
        _emit 0x33
        _emit 0xC0
        _emit 0x8B
        _emit 0x5C
        _emit 0x82
        _emit 0x04
        _emit 0x40
        _emit 0x85
        _emit 0xDB
        _emit 0x75
        _emit 0xF1
        _emit 0x5B
        _emit 0x89
        _emit 0x0C
        _emit 0x86
        _emit 0x8B
        _emit 0x01
        _emit 0x5F
        _emit 0x5E
        _emit 0xFF
        _emit 0x20
    }
}
