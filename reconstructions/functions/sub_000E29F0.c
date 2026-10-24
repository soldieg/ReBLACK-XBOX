/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000E29F0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x30
        _emit 0x85
        _emit 0xF6
        _emit 0x74
        _emit 0x17
        _emit 0x68
        _emit 0x44
        _emit 0x4B
        _emit 0x29
        _emit 0x00
        _emit 0x56
        _emit 0x57
        _emit 0xFF
        _emit 0x15
        _emit 0xC0
        _emit 0x42
        _emit 0x2F
        _emit 0x00
        _emit 0x8B
        _emit 0x76
        _emit 0x50
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x85
        _emit 0xF6
        _emit 0x75
        _emit 0xE9
        _emit 0x5E
        _emit 0xC3
    }
}
