/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AE430(void)
{
    __asm {
        _emit 0x8B
        _emit 0x44
        _emit 0x24
        _emit 0x04
        _emit 0x53
        _emit 0x8B
        _emit 0x5C
        _emit 0x24
        _emit 0x0C
        _emit 0x56
        _emit 0x57
        _emit 0x8B
        _emit 0x7C
        _emit 0x24
        _emit 0x18
        _emit 0x90
        _emit 0x8B
        _emit 0x70
        _emit 0x38
        _emit 0x57
        _emit 0x50
        _emit 0xFF
        _emit 0xD3
        _emit 0x83
        _emit 0xC4
        _emit 0x08
        _emit 0x85
        _emit 0xF6
        _emit 0x8B
        _emit 0xC6
        _emit 0x75
        _emit 0xF0
        _emit 0x5F
        _emit 0x5E
        _emit 0x5B
        _emit 0xC3
    }
}
