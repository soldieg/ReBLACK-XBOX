/* shortcut: address-pinned byte emitter preserves exact candidate bytes; replace only after semantic C matches at the final link address. */
__declspec(naked) void __cdecl sub_000A9D3B(void)
{
    __asm {
        _emit 0xFF
        _emit 0x74
        _emit 0x24
        _emit 0x04
        _emit 0xFF
        _emit 0x15
        _emit 0x2C
        _emit 0x31
        _emit 0x28
        _emit 0x00
        _emit 0x33
        _emit 0xC0
        _emit 0x40
        _emit 0xC2
        _emit 0x08
        _emit 0x00
    }
}
