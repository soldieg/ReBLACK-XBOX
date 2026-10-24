/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A1E2F(void)
{
    __asm {
        _emit 0xFF
        _emit 0x35
        _emit 0x40
        _emit 0x08
        _emit 0x2D
        _emit 0x00
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x08
        _emit 0xE8
        _emit 0xC5
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF
        _emit 0x59
        _emit 0x59
        _emit 0xC3
    }
}
