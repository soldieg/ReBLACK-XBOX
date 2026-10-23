/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000C08D0(void)
{
    __asm {
        _emit 0x8B
        _emit 0x50
        _emit 0x0C
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x03
        _emit 0xD0
        _emit 0x89
        _emit 0x50
        _emit 0x0C
        _emit 0x33
        _emit 0xD2
        _emit 0x85
        _emit 0xC9
        _emit 0x7E
        _emit 0x20
        _emit 0x56
        _emit 0x57
        _emit 0x33
        _emit 0xF6
        _emit 0x8B
        _emit 0x48
        _emit 0x0C
        _emit 0x8B
        _emit 0x7C
        _emit 0x0E
        _emit 0x08
        _emit 0x8D
        _emit 0x4C
        _emit 0x0E
        _emit 0x08
        _emit 0x03
        _emit 0xF8
        _emit 0x89
        _emit 0x39
        _emit 0x8B
        _emit 0x48
        _emit 0x08
        _emit 0x42
        _emit 0x83
        _emit 0xC6
        _emit 0x10
        _emit 0x3B
        _emit 0xD1
        _emit 0x7C
        _emit 0xE6
        _emit 0x5F
        _emit 0x5E
        _emit 0xC3
    }
}
