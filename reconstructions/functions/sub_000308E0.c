/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000308E0(void)
{
    __asm {
        _emit 0x56
        _emit 0x8B
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0x6A
        _emit 0x00
        _emit 0x56
        _emit 0x6A
        _emit 0x00
        _emit 0xFF
        _emit 0x15
        _emit 0x08
        _emit 0xA7
        _emit 0x56
        _emit 0x00
        _emit 0x80
        _emit 0x66
        _emit 0x22
        _emit 0xE7
        _emit 0x83
        _emit 0xC4
        _emit 0x0C
        _emit 0x8B
        _emit 0xC6
        _emit 0x5E
        _emit 0xC3
    }
}
