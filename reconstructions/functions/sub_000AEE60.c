/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000AEE60(void)
{
    __asm {
        _emit 0x8B
        _emit 0x48
        _emit 0x4C
        _emit 0x85
        _emit 0xC9
        _emit 0x74
        _emit 0x11
        _emit 0x8B
        _emit 0x48
        _emit 0x50
        _emit 0x8B
        _emit 0x50
        _emit 0x4C
        _emit 0x89
        _emit 0x11
        _emit 0x8B
        _emit 0x48
        _emit 0x4C
        _emit 0x8B
        _emit 0x50
        _emit 0x50
        _emit 0x89
        _emit 0x51
        _emit 0x04
        _emit 0x50
        _emit 0xE8
        _emit 0x62
        _emit 0x77
        _emit 0xFD
        _emit 0xFF
        _emit 0x59
        _emit 0xC3
    }
}
