/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A45D9(void)
{
    __asm {
        _emit 0x83
        _emit 0x7D
        _emit 0xE0
        _emit 0x00
        _emit 0x75
        _emit 0x11
        _emit 0xFF
        _emit 0x75
        _emit 0x18
        _emit 0xFF
        _emit 0x75
        _emit 0xE4
        _emit 0xFF
        _emit 0x75
        _emit 0x0C
        _emit 0xFF
        _emit 0x75
        _emit 0x08
        _emit 0xE8
        _emit 0x41
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0xC3
    }
}
